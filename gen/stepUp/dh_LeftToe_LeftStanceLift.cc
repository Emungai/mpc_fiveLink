/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:24:17 GMT-05:00
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
  double t3887;
  double t3927;
  double t3886;
  double t3928;
  double t3865;
  double t3891;
  double t3935;
  double t3941;
  double t3943;
  double t3944;
  double t3945;
  double t3946;
  double t3881;
  double t3883;
  double t3942;
  double t3947;
  double t3957;
  double t3958;
  double t3959;
  double t3960;
  double t3961;
  double t3974;
  double t3975;
  double t3976;
  double t3996;
  double t4003;
  double t4004;
  double t4005;
  double t4002;
  double t4006;
  double t4007;
  double t4008;
  double t4009;
  double t4010;
  t3887 = Cos(var1[5]);
  t3927 = Sin(var1[2]);
  t3886 = Cos(var1[2]);
  t3928 = Sin(var1[5]);
  t3865 = Cos(var1[6]);
  t3891 = t3886*t3887;
  t3935 = -1.*t3927*t3928;
  t3941 = t3891 + t3935;
  t3943 = -1.*t3887*t3927;
  t3944 = -1.*t3886*t3928;
  t3945 = t3943 + t3944;
  t3946 = Sin(var1[6]);
  t3881 = -1.*t3865;
  t3883 = 1. + t3881;
  t3942 = 0.4*t3883*t3941;
  t3947 = -0.4*t3945*t3946;
  t3957 = t3865*t3941;
  t3958 = t3945*t3946;
  t3959 = t3957 + t3958;
  t3960 = 0.8*t3959;
  t3961 = t3942 + t3947 + t3960;
  t3974 = t3887*t3927;
  t3975 = t3886*t3928;
  t3976 = t3974 + t3975;
  t3996 = t3865*t3945;
  t4003 = -1.*t3886*t3887;
  t4004 = t3927*t3928;
  t4005 = t4003 + t4004;
  t4002 = 0.4*t3883*t3945;
  t4006 = -0.4*t4005*t3946;
  t4007 = t4005*t3946;
  t4008 = t3996 + t4007;
  t4009 = 0.8*t4008;
  t4010 = t4002 + t4006 + t4009;
  p_output1[0]=var2[0] + t3961*var2[2] + t3961*var2[5] + (-0.4*t3865*t3941 + 0.4*t3946*t3976 + 0.8*(t3957 - 1.*t3946*t3976))*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t4010*var2[2] + t4010*var2[5] + (-0.4*t3865*t3945 + 0.4*t3941*t3946 + 0.8*(-1.*t3941*t3946 + t3996))*var2[6];
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

#include "dh_LeftToe_LeftStanceLift.hh"

namespace LeftStanceLift
{

void dh_LeftToe_LeftStanceLift_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
