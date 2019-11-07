/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:24 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t5857;
  double t5847;
  double t5855;
  double t5858;
  double t5839;
  double t5856;
  double t5867;
  double t5869;
  double t5871;
  double t5872;
  double t5873;
  double t5899;
  double t5844;
  double t5846;
  double t5911;
  double t5913;
  double t5915;
  double t5908;
  double t5917;
  double t5919;
  double t5920;
  double t5921;
  double t5931;
  double t5933;
  double t5939;
  double t5940;
  double t5952;
  double t5953;
  double t5954;
  double t5955;
  double t5959;
  double t5965;
  double t5968;
  double t5979;
  double t5982;
  double t5987;
  double t5988;
  double t6115;
  double t6120;
  double t6129;
  double t6081;
  double t6130;
  double t6131;
  double t6132;
  double t6134;
  double t6152;
  double t6076;
  double t6153;
  double t6157;
  double t6172;
  double t7030;
  double t7047;
  double t7073;
  double t7092;
  double t7108;
  double t7120;
  double t7125;
  double t7204;
  double t7207;
  double t7208;
  double t7215;
  double t7216;
  double t7255;
  double t7197;
  double t7256;
  double t7269;
  double t7329;
  t5857 = Cos(var1[2]);
  t5847 = Cos(var1[3]);
  t5855 = Sin(var1[2]);
  t5858 = Sin(var1[3]);
  t5839 = Cos(var1[4]);
  t5856 = t5847*t5855;
  t5867 = t5857*t5858;
  t5869 = t5856 + t5867;
  t5871 = t5857*t5847;
  t5872 = -1.*t5855*t5858;
  t5873 = t5871 + t5872;
  t5899 = Sin(var1[4]);
  t5844 = -1.*t5839;
  t5846 = 1. + t5844;
  t5911 = -1.*t5847*t5855;
  t5913 = -1.*t5857*t5858;
  t5915 = t5911 + t5913;
  t5908 = 0.4*t5846*t5873;
  t5917 = -0.4*t5915*t5899;
  t5919 = t5839*t5873;
  t5920 = t5915*t5899;
  t5921 = t5919 + t5920;
  t5931 = 0.8*t5921;
  t5933 = t5908 + t5917 + t5931;
  t5939 = -0.4*t5839*t5873;
  t5940 = 0.4*t5869*t5899;
  t5952 = -1.*t5869*t5899;
  t5953 = t5919 + t5952;
  t5954 = 0.8*t5953;
  t5955 = t5939 + t5940 + t5954;
  t5959 = -0.4*t5839*t5915;
  t5965 = 0.4*t5873*t5899;
  t5968 = t5839*t5915;
  t5979 = -1.*t5873*t5899;
  t5982 = t5968 + t5979;
  t5987 = 0.8*t5982;
  t5988 = t5959 + t5965 + t5987;
  t6115 = -1.*t5857*t5847;
  t6120 = t5855*t5858;
  t6129 = t6115 + t6120;
  t6081 = 0.4*t5846*t5915;
  t6130 = -0.4*t6129*t5899;
  t6131 = t6129*t5899;
  t6132 = t5968 + t6131;
  t6134 = 0.8*t6132;
  t6152 = t6081 + t6130 + t6134;
  t6076 = var2[4]*t5988;
  t6153 = var2[2]*t6152;
  t6157 = var2[3]*t6152;
  t6172 = t6076 + t6153 + t6157;
  t7030 = 0.4*t5915*t5899;
  t7047 = -1.*t5915*t5899;
  t7073 = -0.4*t5839*t6129;
  t7092 = t5839*t6129;
  t7108 = t7092 + t7047;
  t7120 = 0.8*t7108;
  t7125 = t7073 + t7030 + t7120;
  t7204 = 0.4*t5846*t6129;
  t7207 = -0.4*t5869*t5899;
  t7208 = t5869*t5899;
  t7215 = t7092 + t7208;
  t7216 = 0.8*t7215;
  t7255 = t7204 + t7207 + t7216;
  t7197 = var2[4]*t7125;
  t7256 = var2[2]*t7255;
  t7269 = var2[3]*t7255;
  t7329 = t7197 + t7256 + t7269;
  p_output1[0]=0.4*t5846*t5869 - 0.4*t5873*t5899 + 0.8*(t5839*t5869 + t5873*t5899) + var1[0] + var2[0] + t5933*var2[2] + t6172*var2[2] + t5933*var2[3] + t6172*var2[3] + t5955*var2[4] + var2[4]*(t5988*var2[2] + t5988*var2[3] + (0.4*t5839*t5869 + t5965 + 0.8*(-1.*t5839*t5869 + t5979))*var2[4]) + var3[0] + t5933*var3[2] + t5933*var3[3] + t5955*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t5908 + t5917 + t5931 + t6076 + t6153 + t6157 + var1[1] + var2[1] + t7329*var2[2] + t7329*var2[3] + var2[4]*(t7125*var2[2] + t7125*var2[3] + (0.4*t5839*t5873 + t7030 + 0.8*(-1.*t5839*t5873 + t7047))*var2[4]) + var3[1] + t6152*var3[2] + t6152*var3[3] + t5988*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void ddh_RightToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
