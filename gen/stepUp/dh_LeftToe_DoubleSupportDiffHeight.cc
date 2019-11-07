/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:36 GMT-05:00
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
  double t8879;
  double t8923;
  double t8854;
  double t8924;
  double t8675;
  double t8882;
  double t8925;
  double t8926;
  double t8933;
  double t8934;
  double t8935;
  double t8936;
  double t8829;
  double t8831;
  double t8932;
  double t8942;
  double t8943;
  double t8944;
  double t8945;
  double t8946;
  double t8947;
  double t8951;
  double t8954;
  double t8964;
  double t8975;
  double t8986;
  double t8987;
  double t8988;
  double t8985;
  double t8989;
  double t9000;
  double t9001;
  double t9002;
  double t9003;
  t8879 = Cos(var1[5]);
  t8923 = Sin(var1[2]);
  t8854 = Cos(var1[2]);
  t8924 = Sin(var1[5]);
  t8675 = Cos(var1[6]);
  t8882 = t8854*t8879;
  t8925 = -1.*t8923*t8924;
  t8926 = t8882 + t8925;
  t8933 = -1.*t8879*t8923;
  t8934 = -1.*t8854*t8924;
  t8935 = t8933 + t8934;
  t8936 = Sin(var1[6]);
  t8829 = -1.*t8675;
  t8831 = 1. + t8829;
  t8932 = 0.4*t8831*t8926;
  t8942 = -0.4*t8935*t8936;
  t8943 = t8675*t8926;
  t8944 = t8935*t8936;
  t8945 = t8943 + t8944;
  t8946 = 0.8*t8945;
  t8947 = t8932 + t8942 + t8946;
  t8951 = t8879*t8923;
  t8954 = t8854*t8924;
  t8964 = t8951 + t8954;
  t8975 = t8675*t8935;
  t8986 = -1.*t8854*t8879;
  t8987 = t8923*t8924;
  t8988 = t8986 + t8987;
  t8985 = 0.4*t8831*t8935;
  t8989 = -0.4*t8988*t8936;
  t9000 = t8988*t8936;
  t9001 = t8975 + t9000;
  t9002 = 0.8*t9001;
  t9003 = t8985 + t8989 + t9002;
  p_output1[0]=var2[0] + t8947*var2[2] + t8947*var2[5] + (-0.4*t8675*t8926 + 0.4*t8936*t8964 + 0.8*(t8943 - 1.*t8936*t8964))*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t9003*var2[2] + t9003*var2[5] + (-0.4*t8675*t8935 + 0.4*t8926*t8936 + 0.8*(-1.*t8926*t8936 + t8975))*var2[6];
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

#include "dh_LeftToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void dh_LeftToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
