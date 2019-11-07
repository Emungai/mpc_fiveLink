/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:37 GMT-05:00
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
  double t17860;
  double t14352;
  double t17858;
  double t17864;
  double t13773;
  double t17859;
  double t17865;
  double t17866;
  double t17868;
  double t17869;
  double t17870;
  double t17871;
  double t17874;
  double t17892;
  double t17893;
  double t17894;
  double t17889;
  double t17890;
  double t17891;
  double t17895;
  double t17896;
  double t17897;
  double t17898;
  double t17899;
  double t17867;
  double t17872;
  double t17875;
  double t17876;
  double t17877;
  double t17878;
  double t17888;
  double t17900;
  double t17901;
  double t17902;
  double t17905;
  double t17906;
  double t17907;
  double t17915;
  double t17916;
  double t17917;
  double t17918;
  double t17919;
  double t17920;
  double t17921;
  double t17930;
  double t17936;
  double t17937;
  double t17938;
  double t17939;
  double t17940;
  double t17941;
  double t17928;
  double t17929;
  double t17931;
  double t17932;
  double t17933;
  double t17934;
  double t17935;
  double t17942;
  double t17943;
  double t17944;
  t17860 = Cos(var1[2]);
  t14352 = Cos(var1[3]);
  t17858 = Sin(var1[2]);
  t17864 = Sin(var1[3]);
  t13773 = Cos(var1[4]);
  t17859 = -1.*t14352*t17858;
  t17865 = -1.*t17860*t17864;
  t17866 = t17859 + t17865;
  t17868 = t17860*t14352;
  t17869 = -1.*t17858*t17864;
  t17870 = t17868 + t17869;
  t17871 = Sin(var1[4]);
  t17874 = t13773*t17866;
  t17892 = -1.*t17860*t14352;
  t17893 = t17858*t17864;
  t17894 = t17892 + t17893;
  t17889 = -1.*t13773;
  t17890 = 1. + t17889;
  t17891 = 0.4*t17890*t17866;
  t17895 = -0.4*t17894*t17871;
  t17896 = t17894*t17871;
  t17897 = t17874 + t17896;
  t17898 = 0.8*t17897;
  t17899 = t17891 + t17895 + t17898;
  t17867 = -0.4*t13773*t17866;
  t17872 = 0.4*t17870*t17871;
  t17875 = -1.*t17870*t17871;
  t17876 = t17874 + t17875;
  t17877 = 0.8*t17876;
  t17878 = t17867 + t17872 + t17877;
  t17888 = var2[4]*t17878;
  t17900 = var2[2]*t17899;
  t17901 = var2[3]*t17899;
  t17902 = t17888 + t17900 + t17901;
  t17905 = t14352*t17858;
  t17906 = t17860*t17864;
  t17907 = t17905 + t17906;
  t17915 = 0.4*t17890*t17870;
  t17916 = -0.4*t17866*t17871;
  t17917 = t13773*t17870;
  t17918 = t17866*t17871;
  t17919 = t17917 + t17918;
  t17920 = 0.8*t17919;
  t17921 = t17915 + t17916 + t17920;
  t17930 = t13773*t17894;
  t17936 = 0.4*t17890*t17894;
  t17937 = -0.4*t17907*t17871;
  t17938 = t17907*t17871;
  t17939 = t17930 + t17938;
  t17940 = 0.8*t17939;
  t17941 = t17936 + t17937 + t17940;
  t17928 = -0.4*t13773*t17894;
  t17929 = 0.4*t17866*t17871;
  t17931 = -1.*t17866*t17871;
  t17932 = t17930 + t17931;
  t17933 = 0.8*t17932;
  t17934 = t17928 + t17929 + t17933;
  t17935 = var2[4]*t17934;
  t17942 = var2[2]*t17941;
  t17943 = var2[3]*t17941;
  t17944 = t17935 + t17942 + t17943;
  p_output1[0]=t17902;
  p_output1[1]=t17902;
  p_output1[2]=t17878*var2[2] + t17878*var2[3] + (t17872 + 0.4*t13773*t17907 + 0.8*(t17875 - 1.*t13773*t17907))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t17921;
  p_output1[5]=t17921;
  p_output1[6]=-0.4*t13773*t17870 + 0.4*t17871*t17907 + 0.8*(-1.*t17871*t17907 + t17917);
  p_output1[7]=t17944;
  p_output1[8]=t17944;
  p_output1[9]=t17934*var2[2] + t17934*var2[3] + (0.4*t13773*t17870 + t17929 + 0.8*(-1.*t13773*t17870 + t17931))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t17899;
  p_output1[12]=t17899;
  p_output1[13]=t17878;
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

#include "J_dh_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_dh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
