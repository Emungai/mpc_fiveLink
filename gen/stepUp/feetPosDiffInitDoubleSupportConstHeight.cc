/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:42:58 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t2297;
  double t2206;
  double t2237;
  double t2298;
  double t167;
  double t2244;
  double t2329;
  double t2364;
  double t2378;
  double t2393;
  double t2394;
  double t2484;
  double t2967;
  double t3026;
  double t2933;
  double t2974;
  double t3037;
  double t3069;
  double t3102;
  double t3104;
  double t3148;
  double t3185;
  t2297 = Cos(var1[2]);
  t2206 = Cos(var1[3]);
  t2237 = Sin(var1[2]);
  t2298 = Sin(var1[3]);
  t167 = Cos(var1[4]);
  t2244 = t2206*t2237;
  t2329 = t2297*t2298;
  t2364 = t2244 + t2329;
  t2378 = t2297*t2206;
  t2393 = -1.*t2237*t2298;
  t2394 = t2378 + t2393;
  t2484 = Sin(var1[4]);
  t2967 = Cos(var1[5]);
  t3026 = Sin(var1[5]);
  t2933 = Cos(var1[6]);
  t2974 = t2967*t2237;
  t3037 = t2297*t3026;
  t3069 = t2974 + t3037;
  t3102 = t2297*t2967;
  t3104 = -1.*t2237*t3026;
  t3148 = t3102 + t3104;
  t3185 = Sin(var1[6]);
  p_output1[0]=0.4*(1. - 1.*t167)*t2364 - 0.4*t2394*t2484 + 0.8*(t167*t2364 + t2394*t2484) - 0.4*(1. - 1.*t2933)*t3069 + 0.4*t3148*t3185 - 0.8*(t2933*t3069 + t3148*t3185);
  p_output1[1]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "feetPosDiffInitDoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void feetPosDiffInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
