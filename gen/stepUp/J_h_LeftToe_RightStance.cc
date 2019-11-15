/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:39 GMT-05:00
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
  double t11348;
  double t11350;
  double t11347;
  double t11355;
  double t172;
  double t11349;
  double t11356;
  double t11357;
  double t11396;
  double t11397;
  double t11398;
  double t11399;
  double t11341;
  double t11346;
  double t11358;
  double t11400;
  double t11401;
  double t11402;
  double t11403;
  double t11404;
  double t11405;
  double t11407;
  double t11412;
  double t11413;
  double t11420;
  double t11421;
  double t11422;
  double t11419;
  double t11423;
  double t11424;
  double t11425;
  double t11426;
  double t11427;
  double t11428;
  t11348 = Cos(var1[5]);
  t11350 = Sin(var1[2]);
  t11347 = Cos(var1[2]);
  t11355 = Sin(var1[5]);
  t172 = Cos(var1[6]);
  t11349 = t11347*t11348;
  t11356 = -1.*t11350*t11355;
  t11357 = t11349 + t11356;
  t11396 = -1.*t11348*t11350;
  t11397 = -1.*t11347*t11355;
  t11398 = t11396 + t11397;
  t11399 = Sin(var1[6]);
  t11341 = -1.*t172;
  t11346 = 1. + t11341;
  t11358 = 0.4*t11346*t11357;
  t11400 = -0.4*t11398*t11399;
  t11401 = t172*t11357;
  t11402 = t11398*t11399;
  t11403 = t11401 + t11402;
  t11404 = 0.8*t11403;
  t11405 = t11358 + t11400 + t11404;
  t11407 = t11348*t11350;
  t11412 = t11347*t11355;
  t11413 = t11407 + t11412;
  t11420 = -1.*t11347*t11348;
  t11421 = t11350*t11355;
  t11422 = t11420 + t11421;
  t11419 = 0.4*t11346*t11398;
  t11423 = -0.4*t11422*t11399;
  t11424 = t172*t11398;
  t11425 = t11422*t11399;
  t11426 = t11424 + t11425;
  t11427 = 0.8*t11426;
  t11428 = t11419 + t11423 + t11427;
  p_output1[0]=1.;
  p_output1[1]=t11405;
  p_output1[2]=t11405;
  p_output1[3]=0.4*t11399*t11413 + 0.8*(t11401 - 1.*t11399*t11413) - 0.4*t11357*t172;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t11428;
  p_output1[8]=t11428;
  p_output1[9]=0.4*t11357*t11399 + 0.8*(-1.*t11357*t11399 + t11424) - 0.4*t11398*t172;
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

#include "J_h_LeftToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_h_LeftToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
