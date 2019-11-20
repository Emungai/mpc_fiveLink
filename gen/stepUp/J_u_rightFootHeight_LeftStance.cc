/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:10:49 GMT-05:00
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
  double t9993;
  double t8907;
  double t9270;
  double t10382;
  double t2885;
  double t9865;
  double t10533;
  double t10539;
  double t10587;
  double t10591;
  double t10625;
  double t11950;
  double t4975;
  double t8370;
  double t10556;
  double t11968;
  double t11971;
  double t12007;
  double t12008;
  double t12009;
  double t12023;
  double t12025;
  double t12026;
  double t12027;
  t9993 = Cos(var1[2]);
  t8907 = Cos(var1[3]);
  t9270 = Sin(var1[2]);
  t10382 = Sin(var1[3]);
  t2885 = Cos(var1[4]);
  t9865 = -1.*t8907*t9270;
  t10533 = -1.*t9993*t10382;
  t10539 = t9865 + t10533;
  t10587 = -1.*t9993*t8907;
  t10591 = t9270*t10382;
  t10625 = t10587 + t10591;
  t11950 = Sin(var1[4]);
  t4975 = -1.*t2885;
  t8370 = 1. + t4975;
  t10556 = 0.4*t8370*t10539;
  t11968 = -0.4*t10625*t11950;
  t11971 = t2885*t10539;
  t12007 = t10625*t11950;
  t12008 = t11971 + t12007;
  t12009 = 0.8*t12008;
  t12023 = t10556 + t11968 + t12009;
  t12025 = t9993*t8907;
  t12026 = -1.*t9270*t10382;
  t12027 = t12025 + t12026;
  p_output1[0]=1.;
  p_output1[1]=t12023;
  p_output1[2]=t12023;
  p_output1[3]=0.4*t11950*t12027 + 0.8*(t11971 - 1.*t11950*t12027) - 0.4*t10539*t2885;
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

#include "J_u_rightFootHeight_LeftStance.hh"

namespace LeftStance
{

void J_u_rightFootHeight_LeftStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
