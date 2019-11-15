/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:11 GMT-05:00
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
  double t9513;
  double t9587;
  double t9503;
  double t9610;
  double t3642;
  double t9586;
  double t9627;
  double t9638;
  double t9647;
  double t9648;
  double t9651;
  double t9652;
  double t3646;
  double t9105;
  double t10892;
  double t10893;
  double t10898;
  double t9639;
  double t9657;
  double t10875;
  double t10878;
  double t10879;
  double t10884;
  double t10885;
  double t10888;
  double t10889;
  double t10899;
  double t10902;
  double t10903;
  double t10906;
  double t10907;
  double t10908;
  double t10909;
  double t10910;
  double t10912;
  double t10913;
  double t10914;
  t9513 = Cos(var1[3]);
  t9587 = Sin(var1[2]);
  t9503 = Cos(var1[2]);
  t9610 = Sin(var1[3]);
  t3642 = Cos(var1[4]);
  t9586 = t9503*t9513;
  t9627 = -1.*t9587*t9610;
  t9638 = t9586 + t9627;
  t9647 = -1.*t9513*t9587;
  t9648 = -1.*t9503*t9610;
  t9651 = t9647 + t9648;
  t9652 = Sin(var1[4]);
  t3646 = -1.*t3642;
  t9105 = 1. + t3646;
  t10892 = -1.*t9503*t9513;
  t10893 = t9587*t9610;
  t10898 = t10892 + t10893;
  t9639 = 0.4*t9105*t9638;
  t9657 = -0.4*t9651*t9652;
  t10875 = t3642*t9638;
  t10878 = t9651*t9652;
  t10879 = t10875 + t10878;
  t10884 = 0.8*t10879;
  t10885 = t9639 + t9657 + t10884;
  t10888 = var2[0]*t10885;
  t10889 = 0.4*t9105*t9651;
  t10899 = -0.4*t10898*t9652;
  t10902 = t3642*t9651;
  t10903 = t10898*t9652;
  t10906 = t10902 + t10903;
  t10907 = 0.8*t10906;
  t10908 = t10889 + t10899 + t10907;
  t10909 = var2[2]*t10908;
  t10910 = t10888 + t10909;
  t10912 = t9513*t9587;
  t10913 = t9503*t9610;
  t10914 = t10912 + t10913;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t10910;
  p_output1[3]=t10910;
  p_output1[4]=(-0.4*t3642*t9638 + 0.4*t10914*t9652 + 0.8*(t10875 - 1.*t10914*t9652))*var2[0] + (-0.4*t3642*t9651 + 0.4*t9638*t9652 + 0.8*(t10902 - 1.*t9638*t9652))*var2[2];
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

#include "fRightToe_vec_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
