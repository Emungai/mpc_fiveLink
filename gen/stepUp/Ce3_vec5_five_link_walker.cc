/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:31 GMT-05:00
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
  double t273;
  double t242;
  double t243;
  double t276;
  double t379;
  double t272;
  double t294;
  double t357;
  double t200;
  double t380;
  double t388;
  double t389;
  double t419;
  double t420;
  double t421;
  double t422;
  double t423;
  double t442;
  double t443;
  double t444;
  double t378;
  double t395;
  double t460;
  double t461;
  double t486;
  double t425;
  double t438;
  double t439;
  double t440;
  double t441;
  double t445;
  double t448;
  double t449;
  double t456;
  double t489;
  double t490;
  double t491;
  double t496;
  double t498;
  double t500;
  t273 = Cos(var1[3]);
  t242 = Cos(var1[4]);
  t243 = Sin(var1[3]);
  t276 = Sin(var1[4]);
  t379 = Cos(var1[2]);
  t272 = -1.*t242*t243;
  t294 = -1.*t273*t276;
  t357 = t272 + t294;
  t200 = Sin(var1[2]);
  t380 = t273*t242;
  t388 = -1.*t243*t276;
  t389 = t380 + t388;
  t419 = -1.*t242;
  t420 = 1. + t419;
  t421 = 0.4*t420;
  t422 = 0.64*t242;
  t423 = t421 + t422;
  t442 = t273*t423;
  t443 = -0.24*t243*t276;
  t444 = t442 + t443;
  t378 = -1.*t200*t357;
  t395 = t379*t357;
  t460 = -1.*t273*t242;
  t461 = t243*t276;
  t486 = t460 + t461;
  t425 = -0.24*t273*t276;
  t438 = t423*t243;
  t439 = 0.24*t273*t276;
  t440 = t438 + t439;
  t441 = t440*t389;
  t445 = t357*t444;
  t448 = t242*t243;
  t449 = t273*t276;
  t456 = t448 + t449;
  t489 = t379*t486;
  t490 = t378 + t489;
  t491 = 0.384*var2[1]*t490;
  t496 = t200*t486;
  t498 = t395 + t496;
  t500 = 0.384*var2[0]*t498;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t200*t389 + t395)*var2[0] + 0.384*(t378 - 1.*t379*t389)*var2[1])*var2[4];
  p_output1[3]=(t491 + t500 + 0.384*(t389*(-1.*t243*t423 + t425) + t441 + t445 + t444*t456)*var2[2])*var2[4];
  p_output1[4]=(t491 + t500 + 0.384*(t389*(-0.24*t242*t243 + t425) + t441 + t445 + (0.24*t242*t273 + t443)*t456)*var2[2] + 0.384*(0.24*t242*t276 - 1.*t276*t423)*var2[3])*var2[4];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec5_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
