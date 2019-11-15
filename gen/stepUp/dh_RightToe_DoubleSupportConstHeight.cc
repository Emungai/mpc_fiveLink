/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:06 GMT-05:00
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
  double t9335;
  double t9337;
  double t9331;
  double t9338;
  double t2987;
  double t9336;
  double t9339;
  double t9350;
  double t9352;
  double t9394;
  double t9395;
  double t9396;
  double t3411;
  double t5758;
  double t9351;
  double t9397;
  double t9398;
  double t9399;
  double t9400;
  double t9401;
  double t9402;
  double t9406;
  double t9407;
  double t9408;
  double t9418;
  double t9425;
  double t9426;
  double t9427;
  double t9424;
  double t9428;
  double t9429;
  double t9430;
  double t9431;
  double t9432;
  t9335 = Cos(var1[3]);
  t9337 = Sin(var1[2]);
  t9331 = Cos(var1[2]);
  t9338 = Sin(var1[3]);
  t2987 = Cos(var1[4]);
  t9336 = t9331*t9335;
  t9339 = -1.*t9337*t9338;
  t9350 = t9336 + t9339;
  t9352 = -1.*t9335*t9337;
  t9394 = -1.*t9331*t9338;
  t9395 = t9352 + t9394;
  t9396 = Sin(var1[4]);
  t3411 = -1.*t2987;
  t5758 = 1. + t3411;
  t9351 = 0.4*t5758*t9350;
  t9397 = -0.4*t9395*t9396;
  t9398 = t2987*t9350;
  t9399 = t9395*t9396;
  t9400 = t9398 + t9399;
  t9401 = 0.8*t9400;
  t9402 = t9351 + t9397 + t9401;
  t9406 = t9335*t9337;
  t9407 = t9331*t9338;
  t9408 = t9406 + t9407;
  t9418 = t2987*t9395;
  t9425 = -1.*t9331*t9335;
  t9426 = t9337*t9338;
  t9427 = t9425 + t9426;
  t9424 = 0.4*t5758*t9395;
  t9428 = -0.4*t9427*t9396;
  t9429 = t9427*t9396;
  t9430 = t9418 + t9429;
  t9431 = 0.8*t9430;
  t9432 = t9424 + t9428 + t9431;
  p_output1[0]=var2[0] + t9402*var2[2] + t9402*var2[3] + (-0.4*t2987*t9350 + 0.4*t9396*t9408 + 0.8*(t9398 - 1.*t9396*t9408))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t9432*var2[2] + t9432*var2[3] + (-0.4*t2987*t9395 + 0.4*t9350*t9396 + 0.8*(-1.*t9350*t9396 + t9418))*var2[4];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_RightToe_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void dh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
