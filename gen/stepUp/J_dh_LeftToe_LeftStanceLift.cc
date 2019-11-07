/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:24:20 GMT-05:00
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
  double t3972;
  double t2867;
  double t3962;
  double t3978;
  double t2866;
  double t3963;
  double t3979;
  double t3980;
  double t3982;
  double t3983;
  double t3984;
  double t3986;
  double t3997;
  double t4015;
  double t4016;
  double t4017;
  double t4012;
  double t4013;
  double t4014;
  double t4018;
  double t4019;
  double t4020;
  double t4021;
  double t4022;
  double t3981;
  double t3988;
  double t3998;
  double t3999;
  double t4000;
  double t4001;
  double t4011;
  double t4023;
  double t4024;
  double t4025;
  double t4028;
  double t4029;
  double t4030;
  double t4039;
  double t4040;
  double t4041;
  double t4042;
  double t4043;
  double t4044;
  double t4045;
  double t4058;
  double t4064;
  double t4065;
  double t4066;
  double t4067;
  double t4068;
  double t4069;
  double t4056;
  double t4057;
  double t4059;
  double t4060;
  double t4061;
  double t4062;
  double t4063;
  double t4070;
  double t4071;
  double t4072;
  t3972 = Cos(var1[2]);
  t2867 = Cos(var1[5]);
  t3962 = Sin(var1[2]);
  t3978 = Sin(var1[5]);
  t2866 = Cos(var1[6]);
  t3963 = -1.*t2867*t3962;
  t3979 = -1.*t3972*t3978;
  t3980 = t3963 + t3979;
  t3982 = t3972*t2867;
  t3983 = -1.*t3962*t3978;
  t3984 = t3982 + t3983;
  t3986 = Sin(var1[6]);
  t3997 = t2866*t3980;
  t4015 = -1.*t3972*t2867;
  t4016 = t3962*t3978;
  t4017 = t4015 + t4016;
  t4012 = -1.*t2866;
  t4013 = 1. + t4012;
  t4014 = 0.4*t4013*t3980;
  t4018 = -0.4*t4017*t3986;
  t4019 = t4017*t3986;
  t4020 = t3997 + t4019;
  t4021 = 0.8*t4020;
  t4022 = t4014 + t4018 + t4021;
  t3981 = -0.4*t2866*t3980;
  t3988 = 0.4*t3984*t3986;
  t3998 = -1.*t3984*t3986;
  t3999 = t3997 + t3998;
  t4000 = 0.8*t3999;
  t4001 = t3981 + t3988 + t4000;
  t4011 = var2[6]*t4001;
  t4023 = var2[2]*t4022;
  t4024 = var2[5]*t4022;
  t4025 = t4011 + t4023 + t4024;
  t4028 = t2867*t3962;
  t4029 = t3972*t3978;
  t4030 = t4028 + t4029;
  t4039 = 0.4*t4013*t3984;
  t4040 = -0.4*t3980*t3986;
  t4041 = t2866*t3984;
  t4042 = t3980*t3986;
  t4043 = t4041 + t4042;
  t4044 = 0.8*t4043;
  t4045 = t4039 + t4040 + t4044;
  t4058 = t2866*t4017;
  t4064 = 0.4*t4013*t4017;
  t4065 = -0.4*t4030*t3986;
  t4066 = t4030*t3986;
  t4067 = t4058 + t4066;
  t4068 = 0.8*t4067;
  t4069 = t4064 + t4065 + t4068;
  t4056 = -0.4*t2866*t4017;
  t4057 = 0.4*t3980*t3986;
  t4059 = -1.*t3980*t3986;
  t4060 = t4058 + t4059;
  t4061 = 0.8*t4060;
  t4062 = t4056 + t4057 + t4061;
  t4063 = var2[6]*t4062;
  t4070 = var2[2]*t4069;
  t4071 = var2[5]*t4069;
  t4072 = t4063 + t4070 + t4071;
  p_output1[0]=t4025;
  p_output1[1]=t4025;
  p_output1[2]=t4001*var2[2] + t4001*var2[5] + (t3988 + 0.4*t2866*t4030 + 0.8*(t3998 - 1.*t2866*t4030))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t4045;
  p_output1[5]=t4045;
  p_output1[6]=-0.4*t2866*t3984 + 0.4*t3986*t4030 + 0.8*(-1.*t3986*t4030 + t4041);
  p_output1[7]=t4072;
  p_output1[8]=t4072;
  p_output1[9]=t4062*var2[2] + t4062*var2[5] + (0.4*t2866*t3984 + t4057 + 0.8*(-1.*t2866*t3984 + t4059))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=t4022;
  p_output1[12]=t4022;
  p_output1[13]=t4001;
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

#include "J_dh_LeftToe_LeftStanceLift.hh"

namespace LeftStanceLift
{

void J_dh_LeftToe_LeftStanceLift_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
