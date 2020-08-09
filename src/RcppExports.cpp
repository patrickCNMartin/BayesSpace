// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// iterate
List iterate(arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q, arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha, double beta);
RcppExport SEXP _BayesSpace_iterate(SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP, SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type df_j(df_jSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate(Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// iterate_vvv
List iterate_vvv(arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q, arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha, double beta);
RcppExport SEXP _BayesSpace_iterate_vvv(SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP, SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type df_j(df_jSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_vvv(Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// iterate_t
List iterate_t(arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q, arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha, double beta);
RcppExport SEXP _BayesSpace_iterate_t(SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP, SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type df_j(df_jSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_t(Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// iterate_t_vvv
List iterate_t_vvv(arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q, arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha, double beta);
RcppExport SEXP _BayesSpace_iterate_t_vvv(SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP, SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type df_j(df_jSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_t_vvv(Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// cluster_mcmc
List cluster_mcmc(arma::mat Y, List df_j, int nrep, double gamma, int q, arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha, double beta);
RcppExport SEXP _BayesSpace_cluster_mcmc(SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type df_j(df_jSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(cluster_mcmc(Y, df_j, nrep, gamma, q, init, mu0, lambda0, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// iterate_t_orig
List iterate_t_orig(arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q, arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha, double beta);
RcppExport SEXP _BayesSpace_iterate_t_orig(SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP, SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type df_j(df_jSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_t_orig(Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// iterate_t_refactor
List iterate_t_refactor(arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q, arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha, double beta);
RcppExport SEXP _BayesSpace_iterate_t_refactor(SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP, SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type df_j(df_jSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_t_refactor(Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// iterate_deconv
List iterate_deconv(arma::mat Y, List df_j, bool tdist, int nrep, int n, int n0, int d, double gamma, int q, arma::vec init, int subspots, bool verbose, double jitter_scale, double c, NumericVector mu0, arma::mat lambda0, double alpha, double beta);
RcppExport SEXP _BayesSpace_iterate_deconv(SEXP YSEXP, SEXP df_jSEXP, SEXP tdistSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP n0SEXP, SEXP dSEXP, SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP subspotsSEXP, SEXP verboseSEXP, SEXP jitter_scaleSEXP, SEXP cSEXP, SEXP mu0SEXP, SEXP lambda0SEXP, SEXP alphaSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type df_j(df_jSEXP);
    Rcpp::traits::input_parameter< bool >::type tdist(tdistSEXP);
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type n0(n0SEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type init(initSEXP);
    Rcpp::traits::input_parameter< int >::type subspots(subspotsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type jitter_scale(jitter_scaleSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_deconv(Y, df_j, tdist, nrep, n, n0, d, gamma, q, init, subspots, verbose, jitter_scale, c, mu0, lambda0, alpha, beta));
    return rcpp_result_gen;
END_RCPP
}
// start_profiler
SEXP start_profiler(SEXP str);
RcppExport SEXP _BayesSpace_start_profiler(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(start_profiler(str));
    return rcpp_result_gen;
END_RCPP
}
// stop_profiler
SEXP stop_profiler();
RcppExport SEXP _BayesSpace_stop_profiler() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(stop_profiler());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BayesSpace_iterate", (DL_FUNC) &_BayesSpace_iterate, 12},
    {"_BayesSpace_iterate_vvv", (DL_FUNC) &_BayesSpace_iterate_vvv, 12},
    {"_BayesSpace_iterate_t", (DL_FUNC) &_BayesSpace_iterate_t, 12},
    {"_BayesSpace_iterate_t_vvv", (DL_FUNC) &_BayesSpace_iterate_t_vvv, 12},
    {"_BayesSpace_cluster_mcmc", (DL_FUNC) &_BayesSpace_cluster_mcmc, 10},
    {"_BayesSpace_iterate_t_orig", (DL_FUNC) &_BayesSpace_iterate_t_orig, 12},
    {"_BayesSpace_iterate_t_refactor", (DL_FUNC) &_BayesSpace_iterate_t_refactor, 12},
    {"_BayesSpace_iterate_deconv", (DL_FUNC) &_BayesSpace_iterate_deconv, 18},
    {"_BayesSpace_start_profiler", (DL_FUNC) &_BayesSpace_start_profiler, 1},
    {"_BayesSpace_stop_profiler", (DL_FUNC) &_BayesSpace_stop_profiler, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_BayesSpace(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
