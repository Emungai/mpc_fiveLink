/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:05 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t2728;
  double t5296;
  double t2696;
  double t5297;
  double t2536;
  double t5284;
  double t5298;
  double t5342;
  double t5353;
  double t5365;
  double t5370;
  double t5371;
  double t2647;
  double t2694;
  double t5421;
  double t5422;
  double t5432;
  double t5343;
  double t5390;
  double t5391;
  double t5392;
  double t5402;
  double t5404;
  double t5405;
  double t5406;
  double t5420;
  double t5444;
  double t5449;
  double t5450;
  double t5469;
  double t5470;
  double t5471;
  double t5481;
  double t5483;
  double t5485;
  double t5499;
  double t5500;
  t2728 = Cos(var1[5]);
  t5296 = Sin(var1[2]);
  t2696 = Cos(var1[2]);
  t5297 = Sin(var1[5]);
  t2536 = Cos(var1[6]);
  t5284 = t2696*t2728;
  t5298 = -1.*t5296*t5297;
  t5342 = t5284 + t5298;
  t5353 = -1.*t2728*t5296;
  t5365 = -1.*t2696*t5297;
  t5370 = t5353 + t5365;
  t5371 = Sin(var1[6]);
  t2647 = -1.*t2536;
  t2694 = 1. + t2647;
  t5421 = -1.*t2696*t2728;
  t5422 = t5296*t5297;
  t5432 = t5421 + t5422;
  t5343 = 0.4*t2694*t5342;
  t5390 = -0.4*t5370*t5371;
  t5391 = t2536*t5342;
  t5392 = t5370*t5371;
  t5402 = t5391 + t5392;
  t5404 = 0.8*t5402;
  t5405 = t5343 + t5390 + t5404;
  t5406 = var2[0]*t5405;
  t5420 = 0.4*t2694*t5370;
  t5444 = -0.4*t5432*t5371;
  t5449 = t2536*t5370;
  t5450 = t5432*t5371;
  t5469 = t5449 + t5450;
  t5470 = 0.8*t5469;
  t5471 = t5420 + t5444 + t5470;
  t5481 = var2[2]*t5471;
  t5483 = t5406 + t5481;
  t5485 = t2728*t5296;
  t5499 = t2696*t5297;
  t5500 = t5485 + t5499;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t5483;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t5483;
  p_output1[6]=(-0.4*t2536*t5342 + 0.4*t5371*t5500 + 0.8*(t5391 - 1.*t5371*t5500))*var2[0] + (-0.4*t2536*t5370 + 0.4*t5342*t5371 + 0.8*(-1.*t5342*t5371 + t5449))*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fLeftToe_vec_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void fLeftToe_vec_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
