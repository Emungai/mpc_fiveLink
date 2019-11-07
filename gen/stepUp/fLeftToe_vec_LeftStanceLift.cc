/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:24:05 GMT-05:00
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
  double t3385;
  double t3422;
  double t3367;
  double t3423;
  double t3275;
  double t3388;
  double t3436;
  double t3437;
  double t3441;
  double t3467;
  double t3473;
  double t3477;
  double t3276;
  double t3366;
  double t3607;
  double t3614;
  double t3616;
  double t3440;
  double t3478;
  double t3537;
  double t3538;
  double t3561;
  double t3565;
  double t3586;
  double t3600;
  double t3606;
  double t3621;
  double t3622;
  double t3623;
  double t3625;
  double t3627;
  double t3628;
  double t3650;
  double t3651;
  double t3656;
  double t3657;
  double t3658;
  t3385 = Cos(var1[5]);
  t3422 = Sin(var1[2]);
  t3367 = Cos(var1[2]);
  t3423 = Sin(var1[5]);
  t3275 = Cos(var1[6]);
  t3388 = t3367*t3385;
  t3436 = -1.*t3422*t3423;
  t3437 = t3388 + t3436;
  t3441 = -1.*t3385*t3422;
  t3467 = -1.*t3367*t3423;
  t3473 = t3441 + t3467;
  t3477 = Sin(var1[6]);
  t3276 = -1.*t3275;
  t3366 = 1. + t3276;
  t3607 = -1.*t3367*t3385;
  t3614 = t3422*t3423;
  t3616 = t3607 + t3614;
  t3440 = 0.4*t3366*t3437;
  t3478 = -0.4*t3473*t3477;
  t3537 = t3275*t3437;
  t3538 = t3473*t3477;
  t3561 = t3537 + t3538;
  t3565 = 0.8*t3561;
  t3586 = t3440 + t3478 + t3565;
  t3600 = var2[0]*t3586;
  t3606 = 0.4*t3366*t3473;
  t3621 = -0.4*t3616*t3477;
  t3622 = t3275*t3473;
  t3623 = t3616*t3477;
  t3625 = t3622 + t3623;
  t3627 = 0.8*t3625;
  t3628 = t3606 + t3621 + t3627;
  t3650 = var2[2]*t3628;
  t3651 = t3600 + t3650;
  t3656 = t3385*t3422;
  t3657 = t3367*t3423;
  t3658 = t3656 + t3657;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t3651;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t3651;
  p_output1[6]=(-0.4*t3275*t3437 + 0.4*t3477*t3658 + 0.8*(t3537 - 1.*t3477*t3658))*var2[0] + (-0.4*t3275*t3473 + 0.4*t3437*t3477 + 0.8*(-1.*t3437*t3477 + t3622))*var2[2];
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

#include "fLeftToe_vec_LeftStanceLift.hh"

namespace LeftStanceLift
{

void fLeftToe_vec_LeftStanceLift_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
