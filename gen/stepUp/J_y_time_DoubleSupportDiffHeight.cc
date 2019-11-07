/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:29:01 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t896;
  double t707;
  double t824;
  double t845;
  double t887;
  double t891;
  double t898;
  double t899;
  double t900;
  double t911;
  double t912;
  double t913;
  double t914;
  double t918;
  double t919;
  double t920;
  double t935;
  double t936;
  double t942;
  double t948;
  double t950;
  double t969;
  double t970;
  double t981;
  double t1022;
  double t1024;
  double t1062;
  double t1063;
  double t1010;
  double t1011;
  double t1012;
  double t1014;
  double t1015;
  double t1016;
  double t1023;
  t896 = -1.*var4[1];
  t707 = -1. + var5[0];
  t824 = -1. + var6[0];
  t845 = 1/t824;
  t887 = -1.*t707*t845;
  t891 = 1. + t887;
  t898 = var4[0] + t896;
  t899 = Power(t898,-5);
  t900 = -1.*var1[0];
  t911 = t900 + var1[1];
  t912 = t707*t845*t911;
  t913 = t896 + var1[0] + t912;
  t914 = Power(t913,4);
  t918 = Power(t898,-4);
  t919 = Power(t913,3);
  t920 = 1/t898;
  t935 = -1.*t920*t913;
  t936 = 1. + t935;
  t942 = Power(t898,-3);
  t948 = Power(t913,2);
  t950 = Power(t936,2);
  t969 = Power(t898,-2);
  t970 = Power(t936,3);
  t981 = Power(t936,4);
  t1022 = Power(t913,5);
  t1024 = Power(t898,-6);
  t1062 = -1.*t969*t913;
  t1063 = t920 + t1062;
  t1010 = Power(t936,5);
  t1011 = -1.*t1010;
  t1012 = -5.*t920*t913*t981;
  t1014 = -10.*t969*t948*t970;
  t1015 = -10.*t942*t919*t950;
  t1016 = -5.*t918*t914*t936;
  t1023 = -1.*t899*t1022;
  p_output1[0]=5.*t891*t920*t981*var3[0] + 20.*t891*t913*t969*t970*var3[4] - 5.*t891*t920*t981*var3[4] + 30.*t891*t942*t948*t950*var3[8] - 20.*t891*t913*t969*t970*var3[8] + 20.*t891*t918*t919*t936*var3[12] - 30.*t891*t942*t948*t950*var3[12] + 5.*t891*t899*t914*var3[16] - 20.*t891*t918*t919*t936*var3[16] - 5.*t891*t899*t914*var3[20];
  p_output1[1]=5.*t707*t845*t920*t981*var3[0] + 20.*t707*t845*t913*t969*t970*var3[4] - 5.*t707*t845*t920*t981*var3[4] + 30.*t707*t845*t942*t948*t950*var3[8] - 20.*t707*t845*t913*t969*t970*var3[8] + 20.*t707*t845*t918*t919*t936*var3[12] - 30.*t707*t845*t942*t948*t950*var3[12] + 5.*t707*t845*t899*t914*var3[16] - 20.*t707*t845*t918*t919*t936*var3[16] - 5.*t707*t845*t899*t914*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t1011;
  p_output1[4]=t1012;
  p_output1[5]=t1014;
  p_output1[6]=t1015;
  p_output1[7]=t1016;
  p_output1[8]=t1023;
  p_output1[9]=-5.*t913*t969*t981*var3[0] - 20.*t942*t948*t970*var3[4] + 5.*t913*t969*t981*var3[4] - 30.*t918*t919*t950*var3[8] + 20.*t942*t948*t970*var3[8] - 20.*t899*t914*t936*var3[12] + 30.*t918*t919*t950*var3[12] - 5.*t1022*t1024*var3[16] + 20.*t899*t914*t936*var3[16] + 5.*t1022*t1024*var3[20];
  p_output1[10]=-5.*t1063*t981*var3[0] - 20.*t1063*t913*t920*t970*var3[4] + 5.*t920*t981*var3[4] - 5.*t913*t969*t981*var3[4] - 30.*t1063*t948*t950*t969*var3[8] - 20.*t942*t948*t970*var3[8] + 20.*t913*t969*t970*var3[8] - 20.*t1063*t919*t936*t942*var3[12] - 30.*t918*t919*t950*var3[12] + 30.*t942*t948*t950*var3[12] - 5.*t1063*t914*t918*var3[16] - 20.*t899*t914*t936*var3[16] + 20.*t918*t919*t936*var3[16] - 5.*t1022*t1024*var3[20] + 5.*t899*t914*var3[20];
  p_output1[11]=5.*t891*t920*t981*var3[1] + 20.*t891*t913*t969*t970*var3[5] - 5.*t891*t920*t981*var3[5] + 30.*t891*t942*t948*t950*var3[9] - 20.*t891*t913*t969*t970*var3[9] + 20.*t891*t918*t919*t936*var3[13] - 30.*t891*t942*t948*t950*var3[13] + 5.*t891*t899*t914*var3[17] - 20.*t891*t918*t919*t936*var3[17] - 5.*t891*t899*t914*var3[21];
  p_output1[12]=5.*t707*t845*t920*t981*var3[1] + 20.*t707*t845*t913*t969*t970*var3[5] - 5.*t707*t845*t920*t981*var3[5] + 30.*t707*t845*t942*t948*t950*var3[9] - 20.*t707*t845*t913*t969*t970*var3[9] + 20.*t707*t845*t918*t919*t936*var3[13] - 30.*t707*t845*t942*t948*t950*var3[13] + 5.*t707*t845*t899*t914*var3[17] - 20.*t707*t845*t918*t919*t936*var3[17] - 5.*t707*t845*t899*t914*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t1011;
  p_output1[15]=t1012;
  p_output1[16]=t1014;
  p_output1[17]=t1015;
  p_output1[18]=t1016;
  p_output1[19]=t1023;
  p_output1[20]=-5.*t913*t969*t981*var3[1] - 20.*t942*t948*t970*var3[5] + 5.*t913*t969*t981*var3[5] - 30.*t918*t919*t950*var3[9] + 20.*t942*t948*t970*var3[9] - 20.*t899*t914*t936*var3[13] + 30.*t918*t919*t950*var3[13] - 5.*t1022*t1024*var3[17] + 20.*t899*t914*t936*var3[17] + 5.*t1022*t1024*var3[21];
  p_output1[21]=-5.*t1063*t981*var3[1] - 20.*t1063*t913*t920*t970*var3[5] + 5.*t920*t981*var3[5] - 5.*t913*t969*t981*var3[5] - 30.*t1063*t948*t950*t969*var3[9] - 20.*t942*t948*t970*var3[9] + 20.*t913*t969*t970*var3[9] - 20.*t1063*t919*t936*t942*var3[13] - 30.*t918*t919*t950*var3[13] + 30.*t942*t948*t950*var3[13] - 5.*t1063*t914*t918*var3[17] - 20.*t899*t914*t936*var3[17] + 20.*t918*t919*t936*var3[17] - 5.*t1022*t1024*var3[21] + 5.*t899*t914*var3[21];
  p_output1[22]=5.*t891*t920*t981*var3[2] + 20.*t891*t913*t969*t970*var3[6] - 5.*t891*t920*t981*var3[6] + 30.*t891*t942*t948*t950*var3[10] - 20.*t891*t913*t969*t970*var3[10] + 20.*t891*t918*t919*t936*var3[14] - 30.*t891*t942*t948*t950*var3[14] + 5.*t891*t899*t914*var3[18] - 20.*t891*t918*t919*t936*var3[18] - 5.*t891*t899*t914*var3[22];
  p_output1[23]=5.*t707*t845*t920*t981*var3[2] + 20.*t707*t845*t913*t969*t970*var3[6] - 5.*t707*t845*t920*t981*var3[6] + 30.*t707*t845*t942*t948*t950*var3[10] - 20.*t707*t845*t913*t969*t970*var3[10] + 20.*t707*t845*t918*t919*t936*var3[14] - 30.*t707*t845*t942*t948*t950*var3[14] + 5.*t707*t845*t899*t914*var3[18] - 20.*t707*t845*t918*t919*t936*var3[18] - 5.*t707*t845*t899*t914*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t1011;
  p_output1[26]=t1012;
  p_output1[27]=t1014;
  p_output1[28]=t1015;
  p_output1[29]=t1016;
  p_output1[30]=t1023;
  p_output1[31]=-5.*t913*t969*t981*var3[2] - 20.*t942*t948*t970*var3[6] + 5.*t913*t969*t981*var3[6] - 30.*t918*t919*t950*var3[10] + 20.*t942*t948*t970*var3[10] - 20.*t899*t914*t936*var3[14] + 30.*t918*t919*t950*var3[14] - 5.*t1022*t1024*var3[18] + 20.*t899*t914*t936*var3[18] + 5.*t1022*t1024*var3[22];
  p_output1[32]=-5.*t1063*t981*var3[2] - 20.*t1063*t913*t920*t970*var3[6] + 5.*t920*t981*var3[6] - 5.*t913*t969*t981*var3[6] - 30.*t1063*t948*t950*t969*var3[10] - 20.*t942*t948*t970*var3[10] + 20.*t913*t969*t970*var3[10] - 20.*t1063*t919*t936*t942*var3[14] - 30.*t918*t919*t950*var3[14] + 30.*t942*t948*t950*var3[14] - 5.*t1063*t914*t918*var3[18] - 20.*t899*t914*t936*var3[18] + 20.*t918*t919*t936*var3[18] - 5.*t1022*t1024*var3[22] + 5.*t899*t914*var3[22];
  p_output1[33]=5.*t891*t920*t981*var3[3] + 20.*t891*t913*t969*t970*var3[7] - 5.*t891*t920*t981*var3[7] + 30.*t891*t942*t948*t950*var3[11] - 20.*t891*t913*t969*t970*var3[11] + 20.*t891*t918*t919*t936*var3[15] - 30.*t891*t942*t948*t950*var3[15] + 5.*t891*t899*t914*var3[19] - 20.*t891*t918*t919*t936*var3[19] - 5.*t891*t899*t914*var3[23];
  p_output1[34]=5.*t707*t845*t920*t981*var3[3] + 20.*t707*t845*t913*t969*t970*var3[7] - 5.*t707*t845*t920*t981*var3[7] + 30.*t707*t845*t942*t948*t950*var3[11] - 20.*t707*t845*t913*t969*t970*var3[11] + 20.*t707*t845*t918*t919*t936*var3[15] - 30.*t707*t845*t942*t948*t950*var3[15] + 5.*t707*t845*t899*t914*var3[19] - 20.*t707*t845*t918*t919*t936*var3[19] - 5.*t707*t845*t899*t914*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t1011;
  p_output1[37]=t1012;
  p_output1[38]=t1014;
  p_output1[39]=t1015;
  p_output1[40]=t1016;
  p_output1[41]=t1023;
  p_output1[42]=-5.*t913*t969*t981*var3[3] - 20.*t942*t948*t970*var3[7] + 5.*t913*t969*t981*var3[7] - 30.*t918*t919*t950*var3[11] + 20.*t942*t948*t970*var3[11] - 20.*t899*t914*t936*var3[15] + 30.*t918*t919*t950*var3[15] - 5.*t1022*t1024*var3[19] + 20.*t899*t914*t936*var3[19] + 5.*t1022*t1024*var3[23];
  p_output1[43]=-5.*t1063*t981*var3[3] - 20.*t1063*t913*t920*t970*var3[7] + 5.*t920*t981*var3[7] - 5.*t913*t969*t981*var3[7] - 30.*t1063*t948*t950*t969*var3[11] - 20.*t942*t948*t970*var3[11] + 20.*t913*t969*t970*var3[11] - 20.*t1063*t919*t936*t942*var3[15] - 30.*t918*t919*t950*var3[15] + 30.*t942*t948*t950*var3[15] - 5.*t1063*t914*t918*var3[19] - 20.*t899*t914*t936*var3[19] + 20.*t918*t919*t936*var3[19] - 5.*t1022*t1024*var3[23] + 5.*t899*t914*var3[23];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_y_time_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
