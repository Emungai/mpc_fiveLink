/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:55:13 GMT-05:00
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
  double t5716;
  double t5564;
  double t5651;
  double t5722;
  double t2975;
  double t5654;
  double t5746;
  double t5764;
  double t5766;
  double t5769;
  double t5781;
  double t5794;
  double t3070;
  double t5257;
  double t5765;
  double t5800;
  double t5801;
  double t5802;
  double t5807;
  double t5808;
  double t5869;
  double t8513;
  double t9171;
  double t9203;
  t5716 = Cos(var1[2]);
  t5564 = Cos(var1[5]);
  t5651 = Sin(var1[2]);
  t5722 = Sin(var1[5]);
  t2975 = Cos(var1[6]);
  t5654 = -1.*t5564*t5651;
  t5746 = -1.*t5716*t5722;
  t5764 = t5654 + t5746;
  t5766 = -1.*t5716*t5564;
  t5769 = t5651*t5722;
  t5781 = t5766 + t5769;
  t5794 = Sin(var1[6]);
  t3070 = -1.*t2975;
  t5257 = 1. + t3070;
  t5765 = 0.4*t5257*t5764;
  t5800 = -0.4*t5781*t5794;
  t5801 = t2975*t5764;
  t5802 = t5781*t5794;
  t5807 = t5801 + t5802;
  t5808 = 0.8*t5807;
  t5869 = t5765 + t5800 + t5808;
  t8513 = t5716*t5564;
  t9171 = -1.*t5651*t5722;
  t9203 = t8513 + t9171;
  p_output1[0]=1.;
  p_output1[1]=t5869;
  p_output1[2]=t5869;
  p_output1[3]=-0.4*t2975*t5764 + 0.4*t5794*t9203 + 0.8*(t5801 - 1.*t5794*t9203);
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

#include "J_swing_foot_height.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_swing_foot_height_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
