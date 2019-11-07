/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:26:12 GMT-05:00
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
  double t10323;
  double t10336;
  double t10285;
  double t10337;
  double t7757;
  double t10324;
  double t10341;
  double t10344;
  double t10348;
  double t10361;
  double t10362;
  double t10365;
  double t8200;
  double t10282;
  double t10402;
  double t10405;
  double t10406;
  double t10347;
  double t10366;
  double t10371;
  double t10372;
  double t10385;
  double t10390;
  double t10393;
  double t10394;
  double t10401;
  double t10568;
  double t10621;
  double t10641;
  double t10675;
  double t10721;
  double t10779;
  double t10959;
  double t10996;
  double t11400;
  double t11572;
  double t11628;
  t10323 = Cos(var1[5]);
  t10336 = Sin(var1[2]);
  t10285 = Cos(var1[2]);
  t10337 = Sin(var1[5]);
  t7757 = Cos(var1[6]);
  t10324 = t10285*t10323;
  t10341 = -1.*t10336*t10337;
  t10344 = t10324 + t10341;
  t10348 = -1.*t10323*t10336;
  t10361 = -1.*t10285*t10337;
  t10362 = t10348 + t10361;
  t10365 = Sin(var1[6]);
  t8200 = -1.*t7757;
  t10282 = 1. + t8200;
  t10402 = -1.*t10285*t10323;
  t10405 = t10336*t10337;
  t10406 = t10402 + t10405;
  t10347 = 0.4*t10282*t10344;
  t10366 = -0.4*t10362*t10365;
  t10371 = t7757*t10344;
  t10372 = t10362*t10365;
  t10385 = t10371 + t10372;
  t10390 = 0.8*t10385;
  t10393 = t10347 + t10366 + t10390;
  t10394 = var2[0]*t10393;
  t10401 = 0.4*t10282*t10362;
  t10568 = -0.4*t10406*t10365;
  t10621 = t7757*t10362;
  t10641 = t10406*t10365;
  t10675 = t10621 + t10641;
  t10721 = 0.8*t10675;
  t10779 = t10401 + t10568 + t10721;
  t10959 = var2[2]*t10779;
  t10996 = t10394 + t10959;
  t11400 = t10323*t10336;
  t11572 = t10285*t10337;
  t11628 = t11400 + t11572;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t10996;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t10996;
  p_output1[6]=(0.4*t10365*t11628 + 0.8*(t10371 - 1.*t10365*t11628) - 0.4*t10344*t7757)*var2[0] + (0.4*t10344*t10365 + 0.8*(-1.*t10344*t10365 + t10621) - 0.4*t10362*t7757)*var2[2];
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

#include "fLeftToe_vec_LeftStanceLand.hh"

namespace LeftStanceLand
{

void fLeftToe_vec_LeftStanceLand_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
