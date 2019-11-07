/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:02 GMT-05:00
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
  double t5950;
  double t7569;
  double t354;
  double t3300;
  double t351;
  double t3250;
  double t6045;
  double t6058;
  double t7245;
  double t7298;
  double t7364;
  double t9231;
  double t9241;
  double t9534;
  double t2926;
  double t5848;
  double t5852;
  double t5885;
  double t7838;
  double t8024;
  double t8165;
  double t11975;
  double t11976;
  double t11985;
  double t11549;
  double t11911;
  double t11933;
  double t11971;
  double t11974;
  double t11988;
  double t12124;
  double t12125;
  double t12126;
  double t8249;
  double t8940;
  double t9185;
  double t12134;
  double t12138;
  double t12139;
  double t12140;
  double t12141;
  double t12142;
  double t12073;
  double t12173;
  double t12175;
  double t12176;
  double t12177;
  double t12085;
  double t12178;
  double t12158;
  double t12159;
  double t12160;
  double t9224;
  double t11909;
  double t12191;
  double t12154;
  double t12155;
  double t12156;
  double t12192;
  double t12193;
  double t12194;
  double t12211;
  double t12216;
  double t12220;
  double t12203;
  double t12204;
  double t12205;
  double t12207;
  double t12208;
  double t12209;
  double t12210;
  double t12221;
  double t12245;
  double t12249;
  double t12226;
  double t12251;
  double t12252;
  double t12228;
  t5950 = Cos(var1[4]);
  t7569 = Sin(var1[4]);
  t354 = Sin(var1[2]);
  t3300 = Sin(var1[3]);
  t351 = Cos(var1[3]);
  t3250 = Cos(var1[2]);
  t6045 = -1.*t5950;
  t6058 = 1. + t6045;
  t7245 = 0.4*t6058;
  t7298 = 0.64*t5950;
  t7364 = t7245 + t7298;
  t9231 = t351*t5950;
  t9241 = -1.*t3300*t7569;
  t9534 = t9231 + t9241;
  t2926 = -1.*t351*t354;
  t5848 = -1.*t3250*t3300;
  t5852 = t2926 + t5848;
  t5885 = 0.748*t5852;
  t7838 = t7364*t7569;
  t8024 = -0.24*t5950*t7569;
  t8165 = t7838 + t8024;
  t11975 = -1.*t5950*t3300;
  t11976 = -1.*t351*t7569;
  t11985 = t11975 + t11976;
  t11549 = t3250*t9534;
  t11911 = t7364*t5950;
  t11933 = Power(t7569,2);
  t11971 = 0.24*t11933;
  t11974 = t11911 + t11971;
  t11988 = t3250*t11985;
  t12124 = t354*t11985;
  t12125 = t12124 + t11549;
  t12126 = 3.2*t8165*t12125;
  t8249 = t5950*t3300;
  t8940 = t351*t7569;
  t9185 = t8249 + t8940;
  t12134 = -1.*t351*t5950;
  t12138 = t3300*t7569;
  t12139 = t12134 + t12138;
  t12140 = t354*t12139;
  t12141 = t11988 + t12140;
  t12142 = 3.2*t11974*t12141;
  t12073 = -1.*t354*t9534;
  t12173 = -1.*t3250*t351;
  t12175 = t354*t3300;
  t12176 = t12173 + t12175;
  t12177 = 0.748*t12176;
  t12085 = t11988 + t12073;
  t12178 = -1.*t354*t11985;
  t12158 = Power(t5950,2);
  t12159 = -0.24*t12158;
  t12160 = t11911 + t12159;
  t9224 = -1.*t354*t9185;
  t11909 = t9224 + t11549;
  t12191 = 3.2*t8165*t12085;
  t12154 = -1.*t7364*t7569;
  t12155 = 0.24*t5950*t7569;
  t12156 = t12154 + t12155;
  t12192 = t3250*t12139;
  t12193 = t12178 + t12192;
  t12194 = 3.2*t11974*t12193;
  t12211 = t351*t7364;
  t12216 = -0.24*t3300*t7569;
  t12220 = t12211 + t12216;
  t12203 = -1.*t7364*t3300;
  t12204 = -0.24*t351*t7569;
  t12205 = t12203 + t12204;
  t12207 = t7364*t3300;
  t12208 = 0.24*t351*t7569;
  t12209 = t12207 + t12208;
  t12210 = t12209*t9534;
  t12221 = t11985*t12220;
  t12245 = -0.24*t5950*t3300;
  t12249 = t12245 + t12204;
  t12226 = -1.*t11985*t12209;
  t12251 = 0.24*t351*t5950;
  t12252 = t12251 + t12216;
  t12228 = -1.*t12220*t12139;
  p_output1[0]=var2[3]*(-0.5*(3.2*t11974*t12085 + t5885 + 3.2*t11909*t8165)*var2[2] - 0.5*(t12126 + t12142 + t5885)*var2[3] - 0.5*(t12126 + t12142 + 3.2*t12125*t12156 + 3.2*t12160*(t3250*t9185 + t354*t9534))*var2[4]);
  p_output1[1]=var2[3]*(-0.5*(t12177 + 3.2*t8165*(t12073 - 1.*t3250*t9185) + 3.2*t11974*(t12178 - 1.*t3250*t9534))*var2[2] - 0.5*(t12177 + t12191 + t12194)*var2[3] - 0.5*(3.2*t12085*t12156 + 3.2*t11909*t12160 + t12191 + t12194)*var2[4]);
  p_output1[2]=var2[3]*(-0.5*(3.2*t11974*(t12210 + t12221 + t12220*t9185 + t12205*t9534) + 3.2*t8165*(-1.*t11985*t12205 + t12226 + t12228 - 1.*t12220*t9534))*var2[3] - 0.5*(3.2*t12160*(-1.*t11985*t12220 - 1.*t12209*t9534) + 3.2*t12156*(t12209*t9185 + t12220*t9534) + 3.2*t11974*(t12210 + t12221 + t12252*t9185 + t12249*t9534) + 3.2*t8165*(t12226 + t12228 - 1.*t11985*t12249 - 1.*t12252*t9534))*var2[4]);
  p_output1[3]=-0.5*(6.4*t11974*t12156 + 6.4*t12160*t8165)*var2[3]*var2[4];
  p_output1[4]=-0.384*t12156*var2[3]*var2[4];
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

#include "Ce1_vec4_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
