/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:24:12 GMT-05:00
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
  double t2785;
  double t2788;
  double t2784;
  double t2789;
  double t204;
  double t2786;
  double t2826;
  double t2996;
  double t3826;
  double t3830;
  double t3834;
  double t3835;
  double t2777;
  double t2783;
  double t3818;
  double t3837;
  double t3838;
  double t3839;
  double t3840;
  double t3841;
  double t3843;
  double t3866;
  double t3870;
  double t3880;
  double t3893;
  double t3901;
  double t3902;
  double t3892;
  double t3903;
  double t3904;
  double t3905;
  double t3924;
  double t3925;
  double t3926;
  t2785 = Cos(var1[5]);
  t2788 = Sin(var1[2]);
  t2784 = Cos(var1[2]);
  t2789 = Sin(var1[5]);
  t204 = Cos(var1[6]);
  t2786 = t2784*t2785;
  t2826 = -1.*t2788*t2789;
  t2996 = t2786 + t2826;
  t3826 = -1.*t2785*t2788;
  t3830 = -1.*t2784*t2789;
  t3834 = t3826 + t3830;
  t3835 = Sin(var1[6]);
  t2777 = -1.*t204;
  t2783 = 1. + t2777;
  t3818 = 0.4*t2783*t2996;
  t3837 = -0.4*t3834*t3835;
  t3838 = t204*t2996;
  t3839 = t3834*t3835;
  t3840 = t3838 + t3839;
  t3841 = 0.8*t3840;
  t3843 = t3818 + t3837 + t3841;
  t3866 = t2785*t2788;
  t3870 = t2784*t2789;
  t3880 = t3866 + t3870;
  t3893 = -1.*t2784*t2785;
  t3901 = t2788*t2789;
  t3902 = t3893 + t3901;
  t3892 = 0.4*t2783*t3834;
  t3903 = -0.4*t3902*t3835;
  t3904 = t204*t3834;
  t3905 = t3902*t3835;
  t3924 = t3904 + t3905;
  t3925 = 0.8*t3924;
  t3926 = t3892 + t3903 + t3925;
  p_output1[0]=1.;
  p_output1[1]=t3843;
  p_output1[2]=t3843;
  p_output1[3]=-0.4*t204*t2996 + 0.4*t3835*t3880 + 0.8*(t3838 - 1.*t3835*t3880);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t3926;
  p_output1[8]=t3926;
  p_output1[9]=-0.4*t204*t3834 + 0.4*t2996*t3835 + 0.8*(-1.*t2996*t3835 + t3904);
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_LeftToe_LeftStanceLift.hh"

namespace LeftStanceLift
{

void J_h_LeftToe_LeftStanceLift_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
