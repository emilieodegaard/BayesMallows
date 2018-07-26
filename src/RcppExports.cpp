// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_summation_distances
arma::vec get_summation_distances(int n, arma::vec cardinalities, std::string metric);
RcppExport SEXP _BayesMallows_get_summation_distances(SEXP nSEXP, SEXP cardinalitiesSEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cardinalities(cardinalitiesSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(get_summation_distances(n, cardinalities, metric));
    return rcpp_result_gen;
END_RCPP
}
// get_rank_distance
double get_rank_distance(arma::vec r1, arma::vec r2, std::string metric);
RcppExport SEXP _BayesMallows_get_rank_distance(SEXP r1SEXP, SEXP r2SEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rank_distance(r1, r2, metric));
    return rcpp_result_gen;
END_RCPP
}
// compute_importance_sampling_estimate
arma::vec compute_importance_sampling_estimate(arma::vec alpha_vector, int n, std::string metric, int nmc);
RcppExport SEXP _BayesMallows_compute_importance_sampling_estimate(SEXP alpha_vectorSEXP, SEXP nSEXP, SEXP metricSEXP, SEXP nmcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vector(alpha_vectorSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< int >::type nmc(nmcSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_importance_sampling_estimate(alpha_vector, n, metric, nmc));
    return rcpp_result_gen;
END_RCPP
}
// get_partition_function
double get_partition_function(int n, double alpha, Rcpp::Nullable<arma::vec> cardinalities, Rcpp::Nullable<arma::vec> is_fit, std::string metric);
RcppExport SEXP _BayesMallows_get_partition_function(SEXP nSEXP, SEXP alphaSEXP, SEXP cardinalitiesSEXP, SEXP is_fitSEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type cardinalities(cardinalitiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type is_fit(is_fitSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(get_partition_function(n, alpha, cardinalities, is_fit, metric));
    return rcpp_result_gen;
END_RCPP
}
// run_mcmc
Rcpp::List run_mcmc(arma::mat R, int nmc, Rcpp::Nullable<arma::vec> cardinalities, Rcpp::Nullable<arma::vec> is_fit, std::string metric, int L, double sd_alpha, double alpha_init, int alpha_jump, double lambda);
RcppExport SEXP _BayesMallows_run_mcmc(SEXP RSEXP, SEXP nmcSEXP, SEXP cardinalitiesSEXP, SEXP is_fitSEXP, SEXP metricSEXP, SEXP LSEXP, SEXP sd_alphaSEXP, SEXP alpha_initSEXP, SEXP alpha_jumpSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type R(RSEXP);
    Rcpp::traits::input_parameter< int >::type nmc(nmcSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type cardinalities(cardinalitiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type is_fit(is_fitSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type sd_alpha(sd_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_init(alpha_initSEXP);
    Rcpp::traits::input_parameter< int >::type alpha_jump(alpha_jumpSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(run_mcmc(R, nmc, cardinalities, is_fit, metric, L, sd_alpha, alpha_init, alpha_jump, lambda));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BayesMallows_get_summation_distances", (DL_FUNC) &_BayesMallows_get_summation_distances, 3},
    {"_BayesMallows_get_rank_distance", (DL_FUNC) &_BayesMallows_get_rank_distance, 3},
    {"_BayesMallows_compute_importance_sampling_estimate", (DL_FUNC) &_BayesMallows_compute_importance_sampling_estimate, 4},
    {"_BayesMallows_get_partition_function", (DL_FUNC) &_BayesMallows_get_partition_function, 5},
    {"_BayesMallows_run_mcmc", (DL_FUNC) &_BayesMallows_run_mcmc, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_BayesMallows(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
