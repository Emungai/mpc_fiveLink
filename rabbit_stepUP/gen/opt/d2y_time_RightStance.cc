/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:32 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t1154;
  double t1157;
  double t1731;
  double t1759;
  double t2022;
  double t2050;
  double t2082;
  double t2159;
  double t2163;
  double t2165;
  double t2166;
  double t2305;
  double t2312;
  double t2313;
  double t2317;
  double t2320;
  double t2330;
  double t2332;
  double t8967;
  double t8969;
  double t9000;
  double t9013;
  double t9018;
  double t9041;
  t1154 = -1.*var6[1];
  t1157 = var6[0] + t1154;
  t1731 = Power(t1157,-5);
  t1759 = -1. + var7[0];
  t2022 = -1. + var8[0];
  t2050 = 1/t2022;
  t2082 = -1.*var1[0];
  t2159 = t2082 + var1[1];
  t2163 = t1759*t2050*t2159;
  t2165 = t1154 + var1[0] + t2163;
  t2166 = Power(t2165,3);
  t2305 = Power(t1157,-4);
  t2312 = Power(t2165,2);
  t2313 = 1/t1157;
  t2317 = -1.*t2313*t2165;
  t2320 = 1. + t2317;
  t2330 = Power(t1157,-3);
  t2332 = Power(t2320,2);
  t8967 = Power(t1157,-2);
  t8969 = Power(t2320,3);
  t9000 = Power(t2165,4);
  t9013 = Power(t2320,4);
  t9018 = Power(t2165,5);
  t9041 = Power(t2320,5);
  p_output1[0]=var4[3] - 20.*t8967*t8969*var5[0] - 60.*t2165*t2330*t2332*var5[4] + 40.*t8967*t8969*var5[4] - 60.*t2305*t2312*t2320*var5[8] + 120.*t2165*t2330*t2332*var5[8] - 20.*t8967*t8969*var5[8] - 20.*t1731*t2166*var5[12] + 120.*t2305*t2312*t2320*var5[12] - 60.*t2165*t2330*t2332*var5[12] + 40.*t1731*t2166*var5[16] - 60.*t2305*t2312*t2320*var5[16] - 20.*t1731*t2166*var5[20] + (var2[3] - 1.*t9041*var5[0] - 5.*t2165*t2313*t9013*var5[4] - 10.*t2312*t8967*t8969*var5[8] - 10.*t2166*t2330*t2332*var5[12] - 5.*t2305*t2320*t9000*var5[16] - 1.*t1731*t9018*var5[20])*var9[0] + (var3[3] + 5.*t2313*t9013*var5[0] + 20.*t2165*t8967*t8969*var5[4] - 5.*t2313*t9013*var5[4] + 30.*t2312*t2330*t2332*var5[8] - 20.*t2165*t8967*t8969*var5[8] + 20.*t2166*t2305*t2320*var5[12] - 30.*t2312*t2330*t2332*var5[12] - 20.*t2166*t2305*t2320*var5[16] + 5.*t1731*t9000*var5[16] - 5.*t1731*t9000*var5[20])*var9[1];
  p_output1[1]=var4[4] - 20.*t8967*t8969*var5[1] - 60.*t2165*t2330*t2332*var5[5] + 40.*t8967*t8969*var5[5] - 60.*t2305*t2312*t2320*var5[9] + 120.*t2165*t2330*t2332*var5[9] - 20.*t8967*t8969*var5[9] - 20.*t1731*t2166*var5[13] + 120.*t2305*t2312*t2320*var5[13] - 60.*t2165*t2330*t2332*var5[13] + 40.*t1731*t2166*var5[17] - 60.*t2305*t2312*t2320*var5[17] - 20.*t1731*t2166*var5[21] + (var2[4] - 1.*t9041*var5[1] - 5.*t2165*t2313*t9013*var5[5] - 10.*t2312*t8967*t8969*var5[9] - 10.*t2166*t2330*t2332*var5[13] - 5.*t2305*t2320*t9000*var5[17] - 1.*t1731*t9018*var5[21])*var9[0] + (var3[4] + 5.*t2313*t9013*var5[1] + 20.*t2165*t8967*t8969*var5[5] - 5.*t2313*t9013*var5[5] + 30.*t2312*t2330*t2332*var5[9] - 20.*t2165*t8967*t8969*var5[9] + 20.*t2166*t2305*t2320*var5[13] - 30.*t2312*t2330*t2332*var5[13] - 20.*t2166*t2305*t2320*var5[17] + 5.*t1731*t9000*var5[17] - 5.*t1731*t9000*var5[21])*var9[1];
  p_output1[2]=var4[5] - 20.*t8967*t8969*var5[2] - 60.*t2165*t2330*t2332*var5[6] + 40.*t8967*t8969*var5[6] - 60.*t2305*t2312*t2320*var5[10] + 120.*t2165*t2330*t2332*var5[10] - 20.*t8967*t8969*var5[10] - 20.*t1731*t2166*var5[14] + 120.*t2305*t2312*t2320*var5[14] - 60.*t2165*t2330*t2332*var5[14] + 40.*t1731*t2166*var5[18] - 60.*t2305*t2312*t2320*var5[18] - 20.*t1731*t2166*var5[22] + (var2[5] - 1.*t9041*var5[2] - 5.*t2165*t2313*t9013*var5[6] - 10.*t2312*t8967*t8969*var5[10] - 10.*t2166*t2330*t2332*var5[14] - 5.*t2305*t2320*t9000*var5[18] - 1.*t1731*t9018*var5[22])*var9[0] + (var3[5] + 5.*t2313*t9013*var5[2] + 20.*t2165*t8967*t8969*var5[6] - 5.*t2313*t9013*var5[6] + 30.*t2312*t2330*t2332*var5[10] - 20.*t2165*t8967*t8969*var5[10] + 20.*t2166*t2305*t2320*var5[14] - 30.*t2312*t2330*t2332*var5[14] - 20.*t2166*t2305*t2320*var5[18] + 5.*t1731*t9000*var5[18] - 5.*t1731*t9000*var5[22])*var9[1];
  p_output1[3]=var4[6] - 20.*t8967*t8969*var5[3] - 60.*t2165*t2330*t2332*var5[7] + 40.*t8967*t8969*var5[7] - 60.*t2305*t2312*t2320*var5[11] + 120.*t2165*t2330*t2332*var5[11] - 20.*t8967*t8969*var5[11] - 20.*t1731*t2166*var5[15] + 120.*t2305*t2312*t2320*var5[15] - 60.*t2165*t2330*t2332*var5[15] + 40.*t1731*t2166*var5[19] - 60.*t2305*t2312*t2320*var5[19] - 20.*t1731*t2166*var5[23] + (var2[6] - 1.*t9041*var5[3] - 5.*t2165*t2313*t9013*var5[7] - 10.*t2312*t8967*t8969*var5[11] - 10.*t2166*t2330*t2332*var5[15] - 5.*t2305*t2320*t9000*var5[19] - 1.*t1731*t9018*var5[23])*var9[0] + (var3[6] + 5.*t2313*t9013*var5[3] + 20.*t2165*t8967*t8969*var5[7] - 5.*t2313*t9013*var5[7] + 30.*t2312*t2330*t2332*var5[11] - 20.*t2165*t8967*t8969*var5[11] + 20.*t2166*t2305*t2320*var5[15] - 30.*t2312*t2330*t2332*var5[15] - 20.*t2166*t2305*t2320*var5[19] + 5.*t1731*t9000*var5[19] - 5.*t1731*t9000*var5[23])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_time_RightStance.hh"

namespace RightStance
{

void d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
