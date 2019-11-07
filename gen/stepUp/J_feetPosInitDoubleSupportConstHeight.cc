/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:22:57 GMT-05:00
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
  double t14004;
  double t14012;
  double t13990;
  double t14013;
  double t13718;
  double t14009;
  double t14014;
  double t14029;
  double t14095;
  double t14109;
  double t14113;
  double t14122;
  double t13724;
  double t13899;
  double t14030;
  double t14127;
  double t14130;
  double t14142;
  double t14144;
  double t14154;
  double t14155;
  double t14191;
  double t14193;
  double t14196;
  t14004 = Cos(var1[5]);
  t14012 = Sin(var1[2]);
  t13990 = Cos(var1[2]);
  t14013 = Sin(var1[5]);
  t13718 = Cos(var1[6]);
  t14009 = t13990*t14004;
  t14014 = -1.*t14012*t14013;
  t14029 = t14009 + t14014;
  t14095 = -1.*t14004*t14012;
  t14109 = -1.*t13990*t14013;
  t14113 = t14095 + t14109;
  t14122 = Sin(var1[6]);
  t13724 = -1.*t13718;
  t13899 = 1. + t13724;
  t14030 = 0.4*t13899*t14029;
  t14127 = -0.4*t14113*t14122;
  t14130 = t13718*t14029;
  t14142 = t14113*t14122;
  t14144 = t14130 + t14142;
  t14154 = 0.8*t14144;
  t14155 = t14030 + t14127 + t14154;
  t14191 = t14004*t14012;
  t14193 = t13990*t14013;
  t14196 = t14191 + t14193;
  p_output1[0]=1.;
  p_output1[1]=t14155;
  p_output1[2]=t14155;
  p_output1[3]=-0.4*t13718*t14029 + 0.4*t14122*t14196 + 0.8*(t14130 - 1.*t14122*t14196);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_feetPosInitDoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_feetPosInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
