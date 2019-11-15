/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:41:54 GMT-05:00
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
  double t8876;
  double t8870;
  double t8871;
  double t8877;
  double t8869;
  double t8875;
  double t8878;
  double t8879;
  double t8881;
  double t8882;
  double t8883;
  double t8885;
  double t8887;
  double t8905;
  double t8906;
  double t8907;
  double t8902;
  double t8903;
  double t8904;
  double t8908;
  double t8909;
  double t8910;
  double t8911;
  double t8912;
  double t8880;
  double t8886;
  double t8888;
  double t8889;
  double t8899;
  double t8900;
  double t8901;
  double t8913;
  double t8914;
  double t8915;
  double t8918;
  double t8919;
  double t8920;
  double t8928;
  double t8929;
  double t8930;
  double t8931;
  double t8932;
  double t8933;
  double t8934;
  double t8943;
  double t8949;
  double t8950;
  double t8951;
  double t8952;
  double t8953;
  double t8954;
  double t8941;
  double t8942;
  double t8944;
  double t8945;
  double t8946;
  double t8947;
  double t8948;
  double t8955;
  double t8956;
  double t8957;
  t8876 = Cos(var1[2]);
  t8870 = Cos(var1[5]);
  t8871 = Sin(var1[2]);
  t8877 = Sin(var1[5]);
  t8869 = Cos(var1[6]);
  t8875 = -1.*t8870*t8871;
  t8878 = -1.*t8876*t8877;
  t8879 = t8875 + t8878;
  t8881 = t8876*t8870;
  t8882 = -1.*t8871*t8877;
  t8883 = t8881 + t8882;
  t8885 = Sin(var1[6]);
  t8887 = t8869*t8879;
  t8905 = -1.*t8876*t8870;
  t8906 = t8871*t8877;
  t8907 = t8905 + t8906;
  t8902 = -1.*t8869;
  t8903 = 1. + t8902;
  t8904 = 0.4*t8903*t8879;
  t8908 = -0.4*t8907*t8885;
  t8909 = t8907*t8885;
  t8910 = t8887 + t8909;
  t8911 = 0.8*t8910;
  t8912 = t8904 + t8908 + t8911;
  t8880 = -0.4*t8869*t8879;
  t8886 = 0.4*t8883*t8885;
  t8888 = -1.*t8883*t8885;
  t8889 = t8887 + t8888;
  t8899 = 0.8*t8889;
  t8900 = t8880 + t8886 + t8899;
  t8901 = var2[6]*t8900;
  t8913 = var2[2]*t8912;
  t8914 = var2[5]*t8912;
  t8915 = t8901 + t8913 + t8914;
  t8918 = t8870*t8871;
  t8919 = t8876*t8877;
  t8920 = t8918 + t8919;
  t8928 = 0.4*t8903*t8883;
  t8929 = -0.4*t8879*t8885;
  t8930 = t8869*t8883;
  t8931 = t8879*t8885;
  t8932 = t8930 + t8931;
  t8933 = 0.8*t8932;
  t8934 = t8928 + t8929 + t8933;
  t8943 = t8869*t8907;
  t8949 = 0.4*t8903*t8907;
  t8950 = -0.4*t8920*t8885;
  t8951 = t8920*t8885;
  t8952 = t8943 + t8951;
  t8953 = 0.8*t8952;
  t8954 = t8949 + t8950 + t8953;
  t8941 = -0.4*t8869*t8907;
  t8942 = 0.4*t8879*t8885;
  t8944 = -1.*t8879*t8885;
  t8945 = t8943 + t8944;
  t8946 = 0.8*t8945;
  t8947 = t8941 + t8942 + t8946;
  t8948 = var2[6]*t8947;
  t8955 = var2[2]*t8954;
  t8956 = var2[5]*t8954;
  t8957 = t8948 + t8955 + t8956;
  p_output1[0]=t8915;
  p_output1[1]=t8915;
  p_output1[2]=t8900*var2[2] + t8900*var2[5] + (t8886 + 0.4*t8869*t8920 + 0.8*(t8888 - 1.*t8869*t8920))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t8934;
  p_output1[5]=t8934;
  p_output1[6]=-0.4*t8869*t8883 + 0.4*t8885*t8920 + 0.8*(-1.*t8885*t8920 + t8930);
  p_output1[7]=t8957;
  p_output1[8]=t8957;
  p_output1[9]=t8947*var2[2] + t8947*var2[5] + (0.4*t8869*t8883 + t8942 + 0.8*(-1.*t8869*t8883 + t8944))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=t8912;
  p_output1[12]=t8912;
  p_output1[13]=t8900;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_LeftToe_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_dh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
