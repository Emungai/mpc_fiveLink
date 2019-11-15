/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:32 GMT-05:00
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
  double t11168;
  double t11165;
  double t11166;
  double t11169;
  double t11159;
  double t11167;
  double t11170;
  double t11178;
  double t11180;
  double t11181;
  double t11182;
  double t11183;
  double t11160;
  double t11164;
  double t11207;
  double t11208;
  double t11209;
  double t11206;
  double t11210;
  double t11211;
  double t11212;
  double t11213;
  double t11214;
  double t11215;
  double t11220;
  double t11221;
  double t11222;
  double t11223;
  double t11224;
  double t11225;
  double t11228;
  double t11229;
  double t11230;
  double t11231;
  double t11232;
  double t11233;
  double t11234;
  double t11247;
  double t11248;
  double t11249;
  double t11246;
  double t11250;
  double t11251;
  double t11252;
  double t11253;
  double t11254;
  double t11245;
  double t11255;
  double t11256;
  double t11257;
  double t11267;
  double t11269;
  double t11274;
  double t11275;
  double t11276;
  double t11277;
  double t11278;
  double t11284;
  double t11285;
  double t11286;
  double t11287;
  double t11288;
  double t11289;
  double t11283;
  double t11290;
  double t11291;
  double t11292;
  t11168 = Cos(var1[2]);
  t11165 = Cos(var1[3]);
  t11166 = Sin(var1[2]);
  t11169 = Sin(var1[3]);
  t11159 = Cos(var1[4]);
  t11167 = t11165*t11166;
  t11170 = t11168*t11169;
  t11178 = t11167 + t11170;
  t11180 = t11168*t11165;
  t11181 = -1.*t11166*t11169;
  t11182 = t11180 + t11181;
  t11183 = Sin(var1[4]);
  t11160 = -1.*t11159;
  t11164 = 1. + t11160;
  t11207 = -1.*t11165*t11166;
  t11208 = -1.*t11168*t11169;
  t11209 = t11207 + t11208;
  t11206 = 0.4*t11164*t11182;
  t11210 = -0.4*t11209*t11183;
  t11211 = t11159*t11182;
  t11212 = t11209*t11183;
  t11213 = t11211 + t11212;
  t11214 = 0.8*t11213;
  t11215 = t11206 + t11210 + t11214;
  t11220 = -0.4*t11159*t11182;
  t11221 = 0.4*t11178*t11183;
  t11222 = -1.*t11178*t11183;
  t11223 = t11211 + t11222;
  t11224 = 0.8*t11223;
  t11225 = t11220 + t11221 + t11224;
  t11228 = -0.4*t11159*t11209;
  t11229 = 0.4*t11182*t11183;
  t11230 = t11159*t11209;
  t11231 = -1.*t11182*t11183;
  t11232 = t11230 + t11231;
  t11233 = 0.8*t11232;
  t11234 = t11228 + t11229 + t11233;
  t11247 = -1.*t11168*t11165;
  t11248 = t11166*t11169;
  t11249 = t11247 + t11248;
  t11246 = 0.4*t11164*t11209;
  t11250 = -0.4*t11249*t11183;
  t11251 = t11249*t11183;
  t11252 = t11230 + t11251;
  t11253 = 0.8*t11252;
  t11254 = t11246 + t11250 + t11253;
  t11245 = var2[4]*t11234;
  t11255 = var2[2]*t11254;
  t11256 = var2[3]*t11254;
  t11257 = t11245 + t11255 + t11256;
  t11267 = 0.4*t11209*t11183;
  t11269 = -1.*t11209*t11183;
  t11274 = -0.4*t11159*t11249;
  t11275 = t11159*t11249;
  t11276 = t11275 + t11269;
  t11277 = 0.8*t11276;
  t11278 = t11274 + t11267 + t11277;
  t11284 = 0.4*t11164*t11249;
  t11285 = -0.4*t11178*t11183;
  t11286 = t11178*t11183;
  t11287 = t11275 + t11286;
  t11288 = 0.8*t11287;
  t11289 = t11284 + t11285 + t11288;
  t11283 = var2[4]*t11278;
  t11290 = var2[2]*t11289;
  t11291 = var2[3]*t11289;
  t11292 = t11283 + t11290 + t11291;
  p_output1[0]=0.4*t11164*t11178 - 0.4*t11182*t11183 + 0.8*(t11159*t11178 + t11182*t11183) + var1[0] + var2[0] + t11215*var2[2] + t11257*var2[2] + t11215*var2[3] + t11257*var2[3] + t11225*var2[4] + var2[4]*(t11234*var2[2] + t11234*var2[3] + (0.4*t11159*t11178 + t11229 + 0.8*(-1.*t11159*t11178 + t11231))*var2[4]) + var3[0] + t11215*var3[2] + t11215*var3[3] + t11225*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t11206 + t11210 + t11214 + t11245 + t11255 + t11256 + var1[1] + var2[1] + t11292*var2[2] + t11292*var2[3] + var2[4]*(t11278*var2[2] + t11278*var2[3] + (0.4*t11159*t11182 + t11267 + 0.8*(-1.*t11159*t11182 + t11269))*var2[4]) + var3[1] + t11254*var3[2] + t11254*var3[3] + t11234*var3[4] - 1.*var4[2];
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

#include "ddh_RightToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
