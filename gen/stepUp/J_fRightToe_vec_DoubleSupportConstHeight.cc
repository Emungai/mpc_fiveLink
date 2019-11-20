/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:00:36 GMT-05:00
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
  double t8871;
  double t8876;
  double t4727;
  double t8877;
  double t4153;
  double t8875;
  double t8878;
  double t8879;
  double t8881;
  double t8882;
  double t8883;
  double t8884;
  double t4243;
  double t4559;
  double t8892;
  double t8893;
  double t8894;
  double t8880;
  double t8885;
  double t8886;
  double t8887;
  double t8888;
  double t8889;
  double t8890;
  double t8891;
  double t8895;
  double t8896;
  double t8897;
  double t8898;
  double t8899;
  double t8900;
  double t8901;
  double t8902;
  double t8903;
  double t8912;
  double t8913;
  double t8914;
  double t8904;
  double t8905;
  double t8906;
  double t8907;
  double t8908;
  double t8909;
  double t8910;
  double t8911;
  double t8915;
  double t8916;
  double t8917;
  double t8918;
  double t8919;
  double t8920;
  double t8921;
  double t8922;
  double t8923;
  double t8924;
  double t8925;
  double t8926;
  double t8927;
  double t8928;
  t8871 = Cos(var1[3]);
  t8876 = Sin(var1[2]);
  t4727 = Cos(var1[2]);
  t8877 = Sin(var1[3]);
  t4153 = Cos(var1[4]);
  t8875 = -1.*t4727*t8871;
  t8878 = t8876*t8877;
  t8879 = t8875 + t8878;
  t8881 = t8871*t8876;
  t8882 = t4727*t8877;
  t8883 = t8881 + t8882;
  t8884 = Sin(var1[4]);
  t4243 = -1.*t4153;
  t4559 = 1. + t4243;
  t8892 = -1.*t8871*t8876;
  t8893 = -1.*t4727*t8877;
  t8894 = t8892 + t8893;
  t8880 = 0.4*t4559*t8879;
  t8885 = -0.4*t8883*t8884;
  t8886 = t4153*t8879;
  t8887 = t8883*t8884;
  t8888 = t8886 + t8887;
  t8889 = 0.8*t8888;
  t8890 = t8880 + t8885 + t8889;
  t8891 = var2[2]*t8890;
  t8895 = 0.4*t4559*t8894;
  t8896 = -0.4*t8879*t8884;
  t8897 = t4153*t8894;
  t8898 = t8879*t8884;
  t8899 = t8897 + t8898;
  t8900 = 0.8*t8899;
  t8901 = t8895 + t8896 + t8900;
  t8902 = var2[0]*t8901;
  t8903 = t8891 + t8902;
  t8912 = t4727*t8871;
  t8913 = -1.*t8876*t8877;
  t8914 = t8912 + t8913;
  t8904 = -0.4*t4153*t8879;
  t8905 = 0.4*t8894*t8884;
  t8906 = -1.*t8894*t8884;
  t8907 = t8886 + t8906;
  t8908 = 0.8*t8907;
  t8909 = t8904 + t8905 + t8908;
  t8910 = var2[2]*t8909;
  t8911 = -0.4*t4153*t8894;
  t8915 = 0.4*t8914*t8884;
  t8916 = -1.*t8914*t8884;
  t8917 = t8897 + t8916;
  t8918 = 0.8*t8917;
  t8919 = t8911 + t8915 + t8918;
  t8920 = var2[0]*t8919;
  t8921 = t8910 + t8920;
  t8922 = 0.4*t4559*t8914;
  t8923 = -0.4*t8894*t8884;
  t8924 = t4153*t8914;
  t8925 = t8894*t8884;
  t8926 = t8924 + t8925;
  t8927 = 0.8*t8926;
  t8928 = t8922 + t8923 + t8927;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t8903;
  p_output1[3]=t8903;
  p_output1[4]=t8921;
  p_output1[5]=t8928;
  p_output1[6]=t8901;
  p_output1[7]=t8903;
  p_output1[8]=t8903;
  p_output1[9]=t8921;
  p_output1[10]=t8928;
  p_output1[11]=t8901;
  p_output1[12]=t8921;
  p_output1[13]=t8921;
  p_output1[14]=(0.4*t4153*t8883 + t8915 + 0.8*(-1.*t4153*t8883 + t8916))*var2[0] + (t8905 + 0.4*t4153*t8914 + 0.8*(t8906 - 1.*t4153*t8914))*var2[2];
  p_output1[15]=0.4*t8883*t8884 - 0.4*t4153*t8914 + 0.8*(-1.*t8883*t8884 + t8924);
  p_output1[16]=t8919;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_fRightToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
