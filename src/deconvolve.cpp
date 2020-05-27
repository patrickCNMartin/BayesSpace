// [[Rcpp::plugins("cpp11")]]
// [[Rcpp::depends(RcppArmadillo, RcppDist)]]
#include <RcppDist.h>
#include <RcppArmadillo.h>
using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
List iterate_deconv(arma::mat Y, List df_j, int nrep, int n, int n0, int d, double gamma, int q, arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha, double beta){
  
  //Initalize matrices storing iterations
  mat Y0 = Y.rows(0, n0-1);
  mat df_sim_z(nrep, n, fill::zeros);
  mat df_sim_mu(nrep, q*d, fill::zeros);
  List df_sim_lambda(nrep);
  List df_sim_Y(nrep);
  NumericVector Ychange(nrep, NA_REAL);
  
  //Initialize parameters
  rowvec initmu = rep(mu0, q);
  df_sim_mu.row(0) = initmu;
  df_sim_lambda[0] = lambda0;
  df_sim_z.row(0) = init.t();
  
  //Iterate
  colvec mu0vec = as<colvec>(mu0);
  mat mu_i(q,d);
  mat mu_i_long(n,d);
  uvec j0_vector = {0,1,2,3,4,5,6};
  mat Y_j_prev(7,d);
  mat Y_j_new(7,d);
  mat error(7,d);
  vec zero_vec = zeros<vec>(d);
  vec one_vec = ones<vec>(d);
  mat error_var = diagmat(one_vec)/d/d*5; 
  for (int i = 1; i < nrep; i++){
    
    //Update mu
    mat lambda_prev = df_sim_lambda[i-1];
    NumericVector Ysums;
    for (int k = 1; k <= q; k++){
      uvec index_1k = find(df_sim_z.row(i-1) == k);
      int n_i = index_1k.n_elem;
      mat Yrows = Y.rows(index_1k);
      Ysums = sum(Yrows, 0);
      vec mean_i = inv(lambda0 + n_i * lambda_prev) * (lambda0 * mu0vec + lambda_prev * as<colvec>(Ysums));
      mat var_i = inv(lambda0 + n_i * lambda_prev);
      mu_i.row(k-1) = rmvnorm(1, mean_i, var_i);
    }
    df_sim_mu.row(i) = vectorise(mu_i, 1);
    
    //Update lambda
    for (int j = 0; j < n; j++){
      mu_i_long.row(j) = mu_i.row(df_sim_z(i-1, j)-1);
    }
    mat sumofsq = (Y-mu_i_long).t() * (Y-mu_i_long);
    vec beta_d(d);
    beta_d.fill(beta);
    mat Vinv = diagmat(beta_d);
    mat lambda_i = rwish(n + alpha, inv(Vinv + sumofsq));
    df_sim_lambda[i] = lambda_i;
    mat sigma_i = inv(lambda_i);
    
    //Update Y
    int updateCounter = 0;
    for (int j0 = 0; j0 < n0; j0++){
      Y_j_prev = Y.rows(j0_vector*n0+j0);
      error = rmvnorm(7, zero_vec, error_var); 
      rowvec error_mean = sum(error, 0);
      for (int r = 0; r < 7; r++){
        error.row(r) = error.row(r) - error_mean;
      }
      Y_j_new = Y_j_prev + error;
      mat mu_i_j = mu_i_long.rows(j0_vector*n0+j0);
      vec p_prev = {0.0};
      vec p_new = {0.0};
      for (int r = 0; r<7; r++){
        p_prev += dmvnorm(Y_j_prev.row(r), vectorise(mu_i_j.row(r)), sigma_i, true) - 0.1*(accu(pow(Y_j_prev.row(r)-Y0.row(j0),2)));
        p_new += dmvnorm(Y_j_prev.row(r), vectorise(mu_i_j.row(r)), sigma_i, true)  - 0.1*(accu(pow(Y_j_new.row(r) -Y0.row(j0),2)));
      }
      double probY_j = as_scalar(exp(p_new - p_prev));
      if (probY_j > 1){
        probY_j = 1;
      }
      IntegerVector Ysample = {0, 1};
      NumericVector probsY = {1-probY_j, probY_j};
      int yesUpdate = sample(Ysample, 1, true, probsY)[0];
      if (yesUpdate == 1){
        Y.rows(j0_vector*n0 + j0) = Y_j_new;
        updateCounter++;
      }
    }
    Ychange[i] = updateCounter * 1.0 / n0;
    
    //Update z
    df_sim_z.row(i) = df_sim_z.row(i-1);
    IntegerVector qvec = seq_len(q);
    for (int j = 0; j < n; j++){
      int z_j_prev = df_sim_z(i,j);
      IntegerVector qlessk = qvec[qvec != z_j_prev];
      int z_j_new = sample(qlessk, 1)[0];
      uvec j_vector = df_j[j];
      uvec i_vector(1); i_vector.fill(i);
      double h_z_prev;
      double h_z_new;
      if (j_vector.size() != 0){
        h_z_prev = gamma/j_vector.size() * 2*accu((df_sim_z(i_vector, j_vector) == z_j_prev)) + dmvnorm(Y.row(j), vectorise(mu_i.row(z_j_prev-1)), sigma_i, true)[0];
        h_z_new  = gamma/j_vector.size() * 2*accu((df_sim_z(i_vector, j_vector) == z_j_new )) + dmvnorm(Y.row(j), vectorise(mu_i.row(z_j_new -1)), sigma_i, true)[0];
      } else {
        h_z_prev = dmvnorm(Y.row(j), vectorise(mu_i.row(z_j_prev-1)), sigma_i, true)[0];
        h_z_new  = dmvnorm(Y.row(j), vectorise(mu_i.row(z_j_new -1)), sigma_i, true)[0];
      }
      double prob_j = exp(h_z_new-h_z_prev);
      if (prob_j > 1){
        prob_j = 1;
      }
      IntegerVector zsample = {z_j_prev, z_j_new};
      NumericVector probs = {1-prob_j, prob_j};
      df_sim_z(i,j) = sample(zsample, 1, true, probs)[0];
    }
    
  }
  List out = List::create(_["z"] = df_sim_z, _["mu"] = df_sim_mu, _["lambda"] = df_sim_lambda, _["Ychange"] = Ychange);
  return(out);
}