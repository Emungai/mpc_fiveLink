/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:42 GMT-05:00
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
  double t17909;
  double t17903;
  double t17904;
  double t17910;
  double t735;
  double t17908;
  double t17911;
  double t17912;
  double t17914;
  double t17922;
  double t17923;
  double t17924;
  double t14203;
  double t14359;
  double t17948;
  double t17949;
  double t17950;
  double t17947;
  double t17951;
  double t17952;
  double t17953;
  double t17954;
  double t17955;
  double t17956;
  double t17961;
  double t17962;
  double t17963;
  double t17964;
  double t17965;
  double t17966;
  double t17969;
  double t17970;
  double t17971;
  double t17972;
  double t17973;
  double t17974;
  double t17975;
  double t17988;
  double t17989;
  double t17990;
  double t17987;
  double t17991;
  double t17992;
  double t17993;
  double t17994;
  double t17995;
  double t17986;
  double t17996;
  double t17997;
  double t17998;
  double t18008;
  double t18010;
  double t18015;
  double t18016;
  double t18017;
  double t18018;
  double t18019;
  double t18025;
  double t18026;
  double t18027;
  double t18028;
  double t18029;
  double t18030;
  double t18024;
  double t18031;
  double t18032;
  double t18033;
  t17909 = Cos(var1[2]);
  t17903 = Cos(var1[3]);
  t17904 = Sin(var1[2]);
  t17910 = Sin(var1[3]);
  t735 = Cos(var1[4]);
  t17908 = t17903*t17904;
  t17911 = t17909*t17910;
  t17912 = t17908 + t17911;
  t17914 = t17909*t17903;
  t17922 = -1.*t17904*t17910;
  t17923 = t17914 + t17922;
  t17924 = Sin(var1[4]);
  t14203 = -1.*t735;
  t14359 = 1. + t14203;
  t17948 = -1.*t17903*t17904;
  t17949 = -1.*t17909*t17910;
  t17950 = t17948 + t17949;
  t17947 = 0.4*t14359*t17923;
  t17951 = -0.4*t17950*t17924;
  t17952 = t735*t17923;
  t17953 = t17950*t17924;
  t17954 = t17952 + t17953;
  t17955 = 0.8*t17954;
  t17956 = t17947 + t17951 + t17955;
  t17961 = -0.4*t735*t17923;
  t17962 = 0.4*t17912*t17924;
  t17963 = -1.*t17912*t17924;
  t17964 = t17952 + t17963;
  t17965 = 0.8*t17964;
  t17966 = t17961 + t17962 + t17965;
  t17969 = -0.4*t735*t17950;
  t17970 = 0.4*t17923*t17924;
  t17971 = t735*t17950;
  t17972 = -1.*t17923*t17924;
  t17973 = t17971 + t17972;
  t17974 = 0.8*t17973;
  t17975 = t17969 + t17970 + t17974;
  t17988 = -1.*t17909*t17903;
  t17989 = t17904*t17910;
  t17990 = t17988 + t17989;
  t17987 = 0.4*t14359*t17950;
  t17991 = -0.4*t17990*t17924;
  t17992 = t17990*t17924;
  t17993 = t17971 + t17992;
  t17994 = 0.8*t17993;
  t17995 = t17987 + t17991 + t17994;
  t17986 = var2[4]*t17975;
  t17996 = var2[2]*t17995;
  t17997 = var2[3]*t17995;
  t17998 = t17986 + t17996 + t17997;
  t18008 = 0.4*t17950*t17924;
  t18010 = -1.*t17950*t17924;
  t18015 = -0.4*t735*t17990;
  t18016 = t735*t17990;
  t18017 = t18016 + t18010;
  t18018 = 0.8*t18017;
  t18019 = t18015 + t18008 + t18018;
  t18025 = 0.4*t14359*t17990;
  t18026 = -0.4*t17912*t17924;
  t18027 = t17912*t17924;
  t18028 = t18016 + t18027;
  t18029 = 0.8*t18028;
  t18030 = t18025 + t18026 + t18029;
  t18024 = var2[4]*t18019;
  t18031 = var2[2]*t18030;
  t18032 = var2[3]*t18030;
  t18033 = t18024 + t18031 + t18032;
  p_output1[0]=0.4*t14359*t17912 - 0.4*t17923*t17924 + 0.8*(t17923*t17924 + t17912*t735) + var1[0] + var2[0] + t17956*var2[2] + t17998*var2[2] + t17956*var2[3] + t17998*var2[3] + t17966*var2[4] + var2[4]*(t17975*var2[2] + t17975*var2[3] + (t17970 + 0.4*t17912*t735 + 0.8*(t17972 - 1.*t17912*t735))*var2[4]) + var3[0] + t17956*var3[2] + t17956*var3[3] + t17966*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t17947 + t17951 + t17955 + t17986 + t17996 + t17997 + var1[1] + var2[1] + t18033*var2[2] + t18033*var2[3] + var2[4]*(t18019*var2[2] + t18019*var2[3] + (t18008 + 0.4*t17923*t735 + 0.8*(t18010 - 1.*t17923*t735))*var2[4]) + var3[1] + t17995*var3[2] + t17995*var3[3] + t17975*var3[4] - 1.*var4[2];
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

#include "ddh_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void ddh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
