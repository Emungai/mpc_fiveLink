/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:42 GMT-05:00
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
  double t9357;
  double t9359;
  double t9347;
  double t9360;
  double t3537;
  double t9358;
  double t9361;
  double t9362;
  double t9364;
  double t9365;
  double t9373;
  double t9375;
  double t3956;
  double t3973;
  double t9363;
  double t9409;
  double t9410;
  double t9411;
  double t9412;
  double t9413;
  double t9414;
  double t9416;
  double t9417;
  double t9418;
  double t9429;
  double t9430;
  double t9431;
  double t9428;
  double t9432;
  double t9433;
  double t9434;
  double t9435;
  double t9436;
  double t9437;
  t9357 = Cos(var1[5]);
  t9359 = Sin(var1[2]);
  t9347 = Cos(var1[2]);
  t9360 = Sin(var1[5]);
  t3537 = Cos(var1[6]);
  t9358 = t9347*t9357;
  t9361 = -1.*t9359*t9360;
  t9362 = t9358 + t9361;
  t9364 = -1.*t9357*t9359;
  t9365 = -1.*t9347*t9360;
  t9373 = t9364 + t9365;
  t9375 = Sin(var1[6]);
  t3956 = -1.*t3537;
  t3973 = 1. + t3956;
  t9363 = 0.4*t3973*t9362;
  t9409 = -0.4*t9373*t9375;
  t9410 = t3537*t9362;
  t9411 = t9373*t9375;
  t9412 = t9410 + t9411;
  t9413 = 0.8*t9412;
  t9414 = t9363 + t9409 + t9413;
  t9416 = t9357*t9359;
  t9417 = t9347*t9360;
  t9418 = t9416 + t9417;
  t9429 = -1.*t9347*t9357;
  t9430 = t9359*t9360;
  t9431 = t9429 + t9430;
  t9428 = 0.4*t3973*t9373;
  t9432 = -0.4*t9431*t9375;
  t9433 = t3537*t9373;
  t9434 = t9431*t9375;
  t9435 = t9433 + t9434;
  t9436 = 0.8*t9435;
  t9437 = t9428 + t9432 + t9436;
  p_output1[0]=1.;
  p_output1[1]=t9414;
  p_output1[2]=t9414;
  p_output1[3]=-0.4*t3537*t9362 + 0.4*t9375*t9418 + 0.8*(t9410 - 1.*t9375*t9418);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t9437;
  p_output1[8]=t9437;
  p_output1[9]=-0.4*t3537*t9373 + 0.4*t9362*t9375 + 0.8*(-1.*t9362*t9375 + t9433);
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_h_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
