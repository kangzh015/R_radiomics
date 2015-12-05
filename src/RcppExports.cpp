// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// glcm0
NumericMatrix glcm0(NumericMatrix x, double n_grey, int d);
RcppExport SEXP radiomics_glcm0(SEXP xSEXP, SEXP n_greySEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type n_grey(n_greySEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    __result = Rcpp::wrap(glcm0(x, n_grey, d));
    return __result;
END_RCPP
}
// glcm90
NumericMatrix glcm90(NumericMatrix x, double n_grey, int d);
RcppExport SEXP radiomics_glcm90(SEXP xSEXP, SEXP n_greySEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type n_grey(n_greySEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    __result = Rcpp::wrap(glcm90(x, n_grey, d));
    return __result;
END_RCPP
}
// glcm45
NumericMatrix glcm45(NumericMatrix x, double n_grey, int d);
RcppExport SEXP radiomics_glcm45(SEXP xSEXP, SEXP n_greySEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type n_grey(n_greySEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    __result = Rcpp::wrap(glcm45(x, n_grey, d));
    return __result;
END_RCPP
}
// glcm135
NumericMatrix glcm135(NumericMatrix x, double n_grey, int d);
RcppExport SEXP radiomics_glcm135(SEXP xSEXP, SEXP n_greySEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type n_grey(n_greySEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    __result = Rcpp::wrap(glcm135(x, n_grey, d));
    return __result;
END_RCPP
}
