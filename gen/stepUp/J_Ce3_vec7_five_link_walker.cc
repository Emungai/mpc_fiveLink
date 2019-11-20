/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:21:25 GMT-05:00
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
  double t277;
  double t227;
  double t231;
  double t282;
  double t3685;
  double t244;
  double t289;
  double t290;
  double t221;
  double t4038;
  double t4040;
  double t4051;
  double t527;
  double t4449;
  double t4581;
  double t7979;
  double t7985;
  double t7986;
  double t8013;
  double t8014;
  double t8015;
  double t8021;
  double t8024;
  double t8027;
  double t8141;
  double t4244;
  double t4253;
  double t8142;
  double t8143;
  double t8144;
  double t8165;
  double t8174;
  double t8179;
  double t8191;
  double t8193;
  double t8194;
  double t8195;
  double t8196;
  double t8197;
  double t8198;
  double t8250;
  double t8263;
  double t8264;
  double t8265;
  double t8180;
  double t8185;
  double t8186;
  double t8187;
  double t8189;
  double t8190;
  double t8255;
  double t8256;
  double t8257;
  double t8258;
  double t8277;
  double t8278;
  double t8268;
  double t8271;
  double t8307;
  double t8308;
  double t8309;
  double t8310;
  double t8314;
  double t8303;
  double t8304;
  double t8276;
  double t8279;
  double t8281;
  double t8282;
  double t8283;
  double t8284;
  double t8287;
  double t8290;
  double t8294;
  double t8295;
  double t8296;
  double t8297;
  double t8298;
  double t8302;
  double t8305;
  double t8306;
  double t8340;
  double t8341;
  double t8342;
  double t8336;
  double t8337;
  double t8338;
  double t8322;
  double t8323;
  t277 = Cos(var1[5]);
  t227 = Cos(var1[6]);
  t231 = Sin(var1[5]);
  t282 = Sin(var1[6]);
  t3685 = Cos(var1[2]);
  t244 = -1.*t227*t231;
  t289 = -1.*t277*t282;
  t290 = t244 + t289;
  t221 = Sin(var1[2]);
  t4038 = t277*t227;
  t4040 = -1.*t231*t282;
  t4051 = t4038 + t4040;
  t527 = -1.*t221*t290;
  t4449 = -1.*t3685*t290;
  t4581 = -1.*t277*t227;
  t7979 = t231*t282;
  t7985 = t4581 + t7979;
  t7986 = t3685*t7985;
  t8013 = t527 + t7986;
  t8014 = 0.384*var2[0]*t8013;
  t8015 = -1.*t221*t7985;
  t8021 = t4449 + t8015;
  t8024 = 0.384*var2[1]*t8021;
  t8027 = t8014 + t8024;
  t8141 = var2[6]*t8027;
  t4244 = -1.*t3685*t4051;
  t4253 = t527 + t4244;
  t8142 = t3685*t290;
  t8143 = -1.*t221*t4051;
  t8144 = t8142 + t8143;
  t8165 = t227*t231;
  t8174 = t277*t282;
  t8179 = t8165 + t8174;
  t8191 = -1.*t227;
  t8193 = 1. + t8191;
  t8194 = 0.4*t8193;
  t8195 = 0.64*t227;
  t8196 = t8194 + t8195;
  t8197 = -1.*t8196*t231;
  t8198 = -0.24*t277*t282;
  t8250 = t8197 + t8198;
  t8263 = t277*t8196;
  t8264 = -0.24*t231*t282;
  t8265 = t8263 + t8264;
  t8180 = t221*t8179;
  t8185 = t8180 + t7986;
  t8186 = 0.384*var2[0]*t8185;
  t8187 = t3685*t8179;
  t8189 = t8187 + t8015;
  t8190 = 0.384*var2[1]*t8189;
  t8255 = t8196*t231;
  t8256 = 0.24*t277*t282;
  t8257 = t8255 + t8256;
  t8258 = t290*t8257;
  t8277 = -0.24*t227*t231;
  t8278 = t8277 + t8198;
  t8268 = 0.24*t231*t282;
  t8271 = t8265*t7985;
  t8307 = t8250*t4051;
  t8308 = t8257*t4051;
  t8309 = t290*t8265;
  t8310 = t8179*t8265;
  t8314 = t8307 + t8308 + t8309 + t8310;
  t8303 = t221*t7985;
  t8304 = t8142 + t8303;
  t8276 = t290*t8250;
  t8279 = t290*t8278;
  t8281 = t8278*t8179;
  t8282 = t4051*t8265;
  t8283 = 0.24*t277*t227;
  t8284 = t8283 + t8264;
  t8287 = t4051*t8284;
  t8290 = -0.24*t277*t227;
  t8294 = t8290 + t8268;
  t8295 = t4051*t8294;
  t8296 = t8276 + t8279 + t8258 + t8281 + t8282 + t8287 + t8295 + t8271;
  t8297 = 0.384*var2[2]*t8296;
  t8298 = t8186 + t8190 + t8297;
  t8302 = var2[6]*t8298;
  t8305 = 0.384*var2[6]*t8304;
  t8306 = 0.384*var2[6]*t8013;
  t8340 = -1.*t8196*t282;
  t8341 = 0.24*t227*t282;
  t8342 = t8340 + t8341;
  t8336 = t8278*t4051;
  t8337 = t8179*t8284;
  t8338 = t8336 + t8308 + t8309 + t8337;
  t8322 = 0.384*var2[1]*t8013;
  t8323 = 0.384*var2[0]*t8304;
  p_output1[0]=(0.384*t4253*var2[0] + 0.384*(t221*t4051 + t4449)*var2[1])*var2[6];
  p_output1[1]=t8141;
  p_output1[2]=t8141;
  p_output1[3]=0.384*t8144*var2[6];
  p_output1[4]=0.384*t4253*var2[6];
  p_output1[5]=0.384*t8144*var2[0] + 0.384*t4253*var2[1];
  p_output1[6]=t8141;
  p_output1[7]=(t8186 + t8190 + 0.384*(2.*t290*t8250 + t8179*t8250 + t8258 + 2.*t4051*t8265 + t4051*(-1.*t277*t8196 + t8268) + t8271)*var2[2])*var2[6];
  p_output1[8]=t8302;
  p_output1[9]=t8305;
  p_output1[10]=t8306;
  p_output1[11]=0.384*t8314*var2[6];
  p_output1[12]=t8322 + t8323 + 0.384*t8314*var2[2];
  p_output1[13]=t8141;
  p_output1[14]=t8302;
  p_output1[15]=(t8186 + t8190 + 0.384*(t8258 + t8271 + 2.*t290*t8278 + t8281 + 2.*t4051*t8284 + t8295)*var2[2] + 0.384*(0.24*Power(t227,2) - 1.*t227*t8196)*var2[5])*var2[6];
  p_output1[16]=t8305;
  p_output1[17]=t8306;
  p_output1[18]=0.384*t8338*var2[6];
  p_output1[19]=0.384*t8342*var2[6];
  p_output1[20]=t8322 + t8323 + 0.384*t8338*var2[2] + 0.384*t8342*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec7_five_link_walker.hh"

namespace LeftStance
{

void J_Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
