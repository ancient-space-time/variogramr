// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mean_dist_pair
double mean_dist_pair(NumericVector y_i, NumericVector y_j);
RcppExport SEXP variogramr_mean_dist_pair(SEXP y_iSEXP, SEXP y_jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y_i(y_iSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y_j(y_jSEXP);
    rcpp_result_gen = Rcpp::wrap(mean_dist_pair(y_i, y_j));
    return rcpp_result_gen;
END_RCPP
}
// mean_dist
NumericMatrix mean_dist(NumericMatrix y);
RcppExport SEXP variogramr_mean_dist(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(mean_dist(y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"variogramr_mean_dist_pair", (DL_FUNC) &variogramr_mean_dist_pair, 2},
    {"variogramr_mean_dist", (DL_FUNC) &variogramr_mean_dist, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_variogramr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
