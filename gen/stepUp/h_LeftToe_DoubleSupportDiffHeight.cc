/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:31 GMT-05:00
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
  double t6838;
  double t4959;
  double t4962;
  double t6840;
  double t2927;
  double t4963;
  double t8216;
  double t8232;
  double t8237;
  double t8370;
  double t8386;
  double t8432;
  double t4946;
  double t4949;
  double t8462;
  double t8477;
  double t8479;
  t6838 = Cos(var1[2]);
  t4959 = Cos(var1[5]);
  t4962 = Sin(var1[2]);
  t6840 = Sin(var1[5]);
  t2927 = Cos(var1[6]);
  t4963 = t4959*t4962;
  t8216 = t6838*t6840;
  t8232 = t4963 + t8216;
  t8237 = t6838*t4959;
  t8370 = -1.*t4962*t6840;
  t8386 = t8237 + t8370;
  t8432 = Sin(var1[6]);
  t4946 = -1.*t2927;
  t4949 = 1. + t4946;
  t8462 = -1.*t4959*t4962;
  t8477 = -1.*t6838*t6840;
  t8479 = t8462 + t8477;
  p_output1[0]=0.4*t4949*t8232 - 0.4*t8386*t8432 + 0.8*(t2927*t8232 + t8386*t8432) + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*var2[1];
  p_output1[2]=0.4*t4949*t8386 - 0.4*t8432*t8479 + 0.8*(t2927*t8386 + t8432*t8479) + var1[1] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_LeftToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void h_LeftToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
