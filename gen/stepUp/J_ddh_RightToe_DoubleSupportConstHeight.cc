/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:36 GMT-05:00
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
  double t4416;
  double t4572;
  double t4339;
  double t4719;
  double t2649;
  double t4485;
  double t9178;
  double t9199;
  double t9222;
  double t9223;
  double t9224;
  double t9225;
  double t9247;
  double t9255;
  double t9256;
  double t9257;
  double t9258;
  double t9259;
  double t9260;
  double t2650;
  double t2651;
  double t9264;
  double t9278;
  double t9279;
  double t9263;
  double t9280;
  double t9281;
  double t9282;
  double t9283;
  double t9284;
  double t9292;
  double t9299;
  double t9314;
  double t9315;
  double t9316;
  double t9317;
  double t9318;
  double t9325;
  double t9326;
  double t9327;
  double t9324;
  double t9328;
  double t9329;
  double t9330;
  double t9331;
  double t9332;
  double t9323;
  double t9333;
  double t9334;
  double t9335;
  double t9221;
  double t9236;
  double t9237;
  double t9238;
  double t9239;
  double t9246;
  double t9261;
  double t9262;
  double t9285;
  double t9286;
  double t9288;
  double t9290;
  double t9291;
  double t9293;
  double t9300;
  double t9301;
  double t9302;
  double t9313;
  double t9319;
  double t9320;
  double t9321;
  double t9322;
  double t9336;
  double t9337;
  double t9338;
  double t9348;
  double t9349;
  double t9350;
  double t9351;
  double t9352;
  double t9366;
  double t9367;
  double t9368;
  double t9369;
  double t9339;
  double t9340;
  double t9341;
  double t9342;
  double t9343;
  double t9374;
  double t9380;
  double t9382;
  double t9387;
  double t9388;
  double t9389;
  double t9390;
  double t9391;
  double t9396;
  double t9397;
  double t9398;
  double t9399;
  double t9400;
  double t9401;
  double t9402;
  double t9403;
  double t9404;
  double t9405;
  double t9376;
  double t9377;
  double t9378;
  double t9379;
  double t9381;
  double t9383;
  double t9384;
  double t9385;
  double t9386;
  double t9392;
  double t9393;
  double t9394;
  double t9395;
  double t9406;
  double t9407;
  double t9408;
  double t9423;
  double t9424;
  double t9425;
  double t9426;
  t4416 = Cos(var1[3]);
  t4572 = Sin(var1[2]);
  t4339 = Cos(var1[2]);
  t4719 = Sin(var1[3]);
  t2649 = Cos(var1[4]);
  t4485 = t4339*t4416;
  t9178 = -1.*t4572*t4719;
  t9199 = t4485 + t9178;
  t9222 = -1.*t4416*t4572;
  t9223 = -1.*t4339*t4719;
  t9224 = t9222 + t9223;
  t9225 = Sin(var1[4]);
  t9247 = -0.4*t2649*t9224;
  t9255 = 0.4*t9199*t9225;
  t9256 = t2649*t9224;
  t9257 = -1.*t9199*t9225;
  t9258 = t9256 + t9257;
  t9259 = 0.8*t9258;
  t9260 = t9247 + t9255 + t9259;
  t2650 = -1.*t2649;
  t2651 = 1. + t2650;
  t9264 = -1.*t4339*t4416;
  t9278 = t4572*t4719;
  t9279 = t9264 + t9278;
  t9263 = 0.4*t2651*t9224;
  t9280 = -0.4*t9279*t9225;
  t9281 = t9279*t9225;
  t9282 = t9256 + t9281;
  t9283 = 0.8*t9282;
  t9284 = t9263 + t9280 + t9283;
  t9292 = 0.4*t9224*t9225;
  t9299 = -1.*t9224*t9225;
  t9314 = -0.4*t2649*t9279;
  t9315 = t2649*t9279;
  t9316 = t9315 + t9299;
  t9317 = 0.8*t9316;
  t9318 = t9314 + t9292 + t9317;
  t9325 = t4416*t4572;
  t9326 = t4339*t4719;
  t9327 = t9325 + t9326;
  t9324 = 0.4*t2651*t9279;
  t9328 = -0.4*t9327*t9225;
  t9329 = t9327*t9225;
  t9330 = t9315 + t9329;
  t9331 = 0.8*t9330;
  t9332 = t9324 + t9328 + t9331;
  t9323 = var2[4]*t9318;
  t9333 = var2[2]*t9332;
  t9334 = var2[3]*t9332;
  t9335 = t9323 + t9333 + t9334;
  t9221 = 0.4*t2651*t9199;
  t9236 = -0.4*t9224*t9225;
  t9237 = t2649*t9199;
  t9238 = t9224*t9225;
  t9239 = t9237 + t9238;
  t9246 = 0.8*t9239;
  t9261 = var3[4]*t9260;
  t9262 = var2[4]*t9260;
  t9285 = var3[2]*t9284;
  t9286 = var3[3]*t9284;
  t9288 = var2[2]*t9284;
  t9290 = var2[3]*t9284;
  t9291 = 0.4*t2649*t9199;
  t9293 = -1.*t2649*t9199;
  t9300 = t9293 + t9299;
  t9301 = 0.8*t9300;
  t9302 = t9291 + t9292 + t9301;
  t9313 = var2[4]*t9302;
  t9319 = var2[2]*t9318;
  t9320 = var2[3]*t9318;
  t9321 = t9313 + t9319 + t9320;
  t9322 = var2[4]*t9321;
  t9336 = var2[2]*t9335;
  t9337 = var2[3]*t9335;
  t9338 = t9221 + t9236 + t9246 + t9261 + t9262 + t9285 + t9286 + t9288 + t9290 + t9322 + t9336 + t9337;
  t9348 = 0.4*t2649*t9327;
  t9349 = -1.*t2649*t9327;
  t9350 = t9349 + t9257;
  t9351 = 0.8*t9350;
  t9352 = t9348 + t9255 + t9351;
  t9366 = 2.*var2[4]*t9260;
  t9367 = 2.*var2[2]*t9284;
  t9368 = 2.*var2[3]*t9284;
  t9369 = t9221 + t9236 + t9246 + t9366 + t9367 + t9368;
  t9339 = -0.4*t2649*t9199;
  t9340 = 0.4*t9327*t9225;
  t9341 = -1.*t9327*t9225;
  t9342 = t9237 + t9341;
  t9343 = 0.8*t9342;
  t9374 = t9221 + t9236 + t9246;
  t9380 = 0.4*t9279*t9225;
  t9382 = -1.*t9279*t9225;
  t9387 = -0.4*t2649*t9327;
  t9388 = t2649*t9327;
  t9389 = t9388 + t9382;
  t9390 = 0.8*t9389;
  t9391 = t9387 + t9380 + t9390;
  t9396 = 0.4*t2651*t9327;
  t9397 = -0.4*t9199*t9225;
  t9398 = t9199*t9225;
  t9399 = t9388 + t9398;
  t9400 = 0.8*t9399;
  t9401 = t9396 + t9397 + t9400;
  t9402 = var2[2]*t9401;
  t9403 = var2[3]*t9401;
  t9404 = var2[4]*t9391;
  t9405 = t9402 + t9403 + t9404;
  t9376 = var3[4]*t9318;
  t9377 = var3[2]*t9332;
  t9378 = var3[3]*t9332;
  t9379 = 0.4*t2649*t9224;
  t9381 = -1.*t2649*t9224;
  t9383 = t9381 + t9382;
  t9384 = 0.8*t9383;
  t9385 = t9379 + t9380 + t9384;
  t9386 = var2[4]*t9385;
  t9392 = var2[2]*t9391;
  t9393 = var2[3]*t9391;
  t9394 = t9386 + t9392 + t9393;
  t9395 = var2[4]*t9394;
  t9406 = var2[2]*t9405;
  t9407 = var2[3]*t9405;
  t9408 = t9263 + t9280 + t9283 + t9376 + t9323 + t9377 + t9378 + t9333 + t9334 + t9395 + t9406 + t9407;
  t9423 = 2.*var2[4]*t9318;
  t9424 = 2.*var2[2]*t9332;
  t9425 = 2.*var2[3]*t9332;
  t9426 = t9263 + t9280 + t9283 + t9423 + t9424 + t9425;
  p_output1[0]=1.;
  p_output1[1]=t9338;
  p_output1[2]=t9338;
  p_output1[3]=t9339 + t9340 + t9343 + t9260*var2[2] + t9321*var2[2] + t9260*var2[3] + t9321*var2[3] + t9352*var2[4] + var2[4]*(t9302*var2[2] + t9302*var2[3] + (t9291 + t9328 + 0.8*(t9293 + t9329))*var2[4]) + t9260*var3[2] + t9260*var3[3] + t9352*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t9369;
  p_output1[6]=t9369;
  p_output1[7]=t9339 + t9340 + t9343 + 2.*t9260*var2[2] + 2.*t9260*var2[3] + 2.*t9352*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t9374;
  p_output1[10]=t9374;
  p_output1[11]=t9339 + t9340 + t9343;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t9408;
  p_output1[16]=t9408;
  p_output1[17]=t9247 + t9255 + t9259 + t9313 + t9319 + t9320 + t9394*var2[2] + t9394*var2[3] + var2[4]*(t9385*var2[2] + t9385*var2[3] + (t9379 + t9397 + 0.8*(t9381 + t9398))*var2[4]) + t9318*var3[2] + t9318*var3[3] + t9302*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t9426;
  p_output1[20]=t9426;
  p_output1[21]=t9247 + t9255 + t9259 + 2.*t9318*var2[2] + 2.*t9318*var2[3] + 2.*t9302*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t9284;
  p_output1[24]=t9284;
  p_output1[25]=t9260;
  p_output1[26]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_ddh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
