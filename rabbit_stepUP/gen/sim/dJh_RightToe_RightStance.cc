/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 22:12:59 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
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

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t865;
  double t862;
  double t863;
  double t866;
  double t858;
  double t864;
  double t867;
  double t868;
  double t870;
  double t871;
  double t872;
  double t873;
  double t875;
  double t884;
  double t885;
  double t886;
  double t881;
  double t882;
  double t883;
  double t887;
  double t888;
  double t889;
  double t890;
  double t891;
  double t897;
  double t904;
  double t905;
  double t906;
  double t903;
  double t907;
  double t908;
  double t909;
  double t910;
  double t911;
  double t869;
  double t874;
  double t876;
  double t877;
  double t878;
  double t879;
  double t880;
  double t892;
  double t893;
  double t894;
  double t895;
  double t896;
  double t898;
  double t899;
  double t900;
  double t901;
  double t902;
  double t912;
  double t913;
  double t914;
  t865 = Cos(var1[2]);
  t862 = Cos(var1[3]);
  t863 = Sin(var1[2]);
  t866 = Sin(var1[3]);
  t858 = Cos(var1[4]);
  t864 = -1.*t862*t863;
  t867 = -1.*t865*t866;
  t868 = t864 + t867;
  t870 = t865*t862;
  t871 = -1.*t863*t866;
  t872 = t870 + t871;
  t873 = Sin(var1[4]);
  t875 = t858*t868;
  t884 = -1.*t865*t862;
  t885 = t863*t866;
  t886 = t884 + t885;
  t881 = -1.*t858;
  t882 = 1. + t881;
  t883 = 0.4*t882*t868;
  t887 = -0.4*t886*t873;
  t888 = t886*t873;
  t889 = t875 + t888;
  t890 = 0.8*t889;
  t891 = t883 + t887 + t890;
  t897 = t858*t886;
  t904 = t862*t863;
  t905 = t865*t866;
  t906 = t904 + t905;
  t903 = 0.4*t882*t886;
  t907 = -0.4*t906*t873;
  t908 = t906*t873;
  t909 = t897 + t908;
  t910 = 0.8*t909;
  t911 = t903 + t907 + t910;
  t869 = -0.4*t858*t868;
  t874 = 0.4*t872*t873;
  t876 = -1.*t872*t873;
  t877 = t875 + t876;
  t878 = 0.8*t877;
  t879 = t869 + t874 + t878;
  t880 = var2[4]*t879;
  t892 = var2[2]*t891;
  t893 = var2[3]*t891;
  t894 = t880 + t892 + t893;
  t895 = -0.4*t858*t886;
  t896 = 0.4*t868*t873;
  t898 = -1.*t868*t873;
  t899 = t897 + t898;
  t900 = 0.8*t899;
  t901 = t895 + t896 + t900;
  t902 = var2[4]*t901;
  t912 = var2[2]*t911;
  t913 = var2[3]*t911;
  t914 = t902 + t912 + t913;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t894;
  p_output1[7]=0;
  p_output1[8]=t914;
  p_output1[9]=t894;
  p_output1[10]=0;
  p_output1[11]=t914;
  p_output1[12]=t879*var2[2] + t879*var2[3] + (t874 + 0.4*t858*t906 + 0.8*(t876 - 1.*t858*t906))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t901*var2[2] + t901*var2[3] + (0.4*t858*t872 + t896 + 0.8*(-1.*t858*t872 + t898))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightToe_RightStance.hh"

namespace SymFunction
{

void dJh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
