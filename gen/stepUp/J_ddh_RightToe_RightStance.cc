/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:34 GMT-05:00
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
  double t11179;
  double t11202;
  double t9628;
  double t11203;
  double t8536;
  double t11201;
  double t11204;
  double t11205;
  double t11217;
  double t11218;
  double t11219;
  double t11226;
  double t11239;
  double t11240;
  double t11241;
  double t11242;
  double t11243;
  double t11244;
  double t11258;
  double t8558;
  double t9400;
  double t11262;
  double t11263;
  double t11264;
  double t11261;
  double t11265;
  double t11266;
  double t11268;
  double t11270;
  double t11271;
  double t11282;
  double t11294;
  double t11299;
  double t11300;
  double t11301;
  double t11302;
  double t11303;
  double t11310;
  double t11311;
  double t11312;
  double t11309;
  double t11313;
  double t11314;
  double t11315;
  double t11316;
  double t11317;
  double t11308;
  double t11318;
  double t11319;
  double t11320;
  double t11216;
  double t11227;
  double t11235;
  double t11236;
  double t11237;
  double t11238;
  double t11259;
  double t11260;
  double t11272;
  double t11273;
  double t11279;
  double t11280;
  double t11281;
  double t11293;
  double t11295;
  double t11296;
  double t11297;
  double t11298;
  double t11304;
  double t11305;
  double t11306;
  double t11307;
  double t11321;
  double t11322;
  double t11323;
  double t11333;
  double t11334;
  double t11335;
  double t11336;
  double t11337;
  double t11351;
  double t11352;
  double t11353;
  double t11354;
  double t11324;
  double t11325;
  double t11326;
  double t11327;
  double t11328;
  double t11359;
  double t11365;
  double t11367;
  double t11372;
  double t11373;
  double t11374;
  double t11375;
  double t11376;
  double t11381;
  double t11382;
  double t11383;
  double t11384;
  double t11385;
  double t11386;
  double t11387;
  double t11388;
  double t11389;
  double t11390;
  double t11361;
  double t11362;
  double t11363;
  double t11364;
  double t11366;
  double t11368;
  double t11369;
  double t11370;
  double t11371;
  double t11377;
  double t11378;
  double t11379;
  double t11380;
  double t11391;
  double t11392;
  double t11393;
  double t11408;
  double t11409;
  double t11410;
  double t11411;
  t11179 = Cos(var1[3]);
  t11202 = Sin(var1[2]);
  t9628 = Cos(var1[2]);
  t11203 = Sin(var1[3]);
  t8536 = Cos(var1[4]);
  t11201 = t9628*t11179;
  t11204 = -1.*t11202*t11203;
  t11205 = t11201 + t11204;
  t11217 = -1.*t11179*t11202;
  t11218 = -1.*t9628*t11203;
  t11219 = t11217 + t11218;
  t11226 = Sin(var1[4]);
  t11239 = -0.4*t8536*t11219;
  t11240 = 0.4*t11205*t11226;
  t11241 = t8536*t11219;
  t11242 = -1.*t11205*t11226;
  t11243 = t11241 + t11242;
  t11244 = 0.8*t11243;
  t11258 = t11239 + t11240 + t11244;
  t8558 = -1.*t8536;
  t9400 = 1. + t8558;
  t11262 = -1.*t9628*t11179;
  t11263 = t11202*t11203;
  t11264 = t11262 + t11263;
  t11261 = 0.4*t9400*t11219;
  t11265 = -0.4*t11264*t11226;
  t11266 = t11264*t11226;
  t11268 = t11241 + t11266;
  t11270 = 0.8*t11268;
  t11271 = t11261 + t11265 + t11270;
  t11282 = 0.4*t11219*t11226;
  t11294 = -1.*t11219*t11226;
  t11299 = -0.4*t8536*t11264;
  t11300 = t8536*t11264;
  t11301 = t11300 + t11294;
  t11302 = 0.8*t11301;
  t11303 = t11299 + t11282 + t11302;
  t11310 = t11179*t11202;
  t11311 = t9628*t11203;
  t11312 = t11310 + t11311;
  t11309 = 0.4*t9400*t11264;
  t11313 = -0.4*t11312*t11226;
  t11314 = t11312*t11226;
  t11315 = t11300 + t11314;
  t11316 = 0.8*t11315;
  t11317 = t11309 + t11313 + t11316;
  t11308 = var2[4]*t11303;
  t11318 = var2[2]*t11317;
  t11319 = var2[3]*t11317;
  t11320 = t11308 + t11318 + t11319;
  t11216 = 0.4*t9400*t11205;
  t11227 = -0.4*t11219*t11226;
  t11235 = t8536*t11205;
  t11236 = t11219*t11226;
  t11237 = t11235 + t11236;
  t11238 = 0.8*t11237;
  t11259 = var3[4]*t11258;
  t11260 = var2[4]*t11258;
  t11272 = var3[2]*t11271;
  t11273 = var3[3]*t11271;
  t11279 = var2[2]*t11271;
  t11280 = var2[3]*t11271;
  t11281 = 0.4*t8536*t11205;
  t11293 = -1.*t8536*t11205;
  t11295 = t11293 + t11294;
  t11296 = 0.8*t11295;
  t11297 = t11281 + t11282 + t11296;
  t11298 = var2[4]*t11297;
  t11304 = var2[2]*t11303;
  t11305 = var2[3]*t11303;
  t11306 = t11298 + t11304 + t11305;
  t11307 = var2[4]*t11306;
  t11321 = var2[2]*t11320;
  t11322 = var2[3]*t11320;
  t11323 = t11216 + t11227 + t11238 + t11259 + t11260 + t11272 + t11273 + t11279 + t11280 + t11307 + t11321 + t11322;
  t11333 = 0.4*t8536*t11312;
  t11334 = -1.*t8536*t11312;
  t11335 = t11334 + t11242;
  t11336 = 0.8*t11335;
  t11337 = t11333 + t11240 + t11336;
  t11351 = 2.*var2[4]*t11258;
  t11352 = 2.*var2[2]*t11271;
  t11353 = 2.*var2[3]*t11271;
  t11354 = t11216 + t11227 + t11238 + t11351 + t11352 + t11353;
  t11324 = -0.4*t8536*t11205;
  t11325 = 0.4*t11312*t11226;
  t11326 = -1.*t11312*t11226;
  t11327 = t11235 + t11326;
  t11328 = 0.8*t11327;
  t11359 = t11216 + t11227 + t11238;
  t11365 = 0.4*t11264*t11226;
  t11367 = -1.*t11264*t11226;
  t11372 = -0.4*t8536*t11312;
  t11373 = t8536*t11312;
  t11374 = t11373 + t11367;
  t11375 = 0.8*t11374;
  t11376 = t11372 + t11365 + t11375;
  t11381 = 0.4*t9400*t11312;
  t11382 = -0.4*t11205*t11226;
  t11383 = t11205*t11226;
  t11384 = t11373 + t11383;
  t11385 = 0.8*t11384;
  t11386 = t11381 + t11382 + t11385;
  t11387 = var2[2]*t11386;
  t11388 = var2[3]*t11386;
  t11389 = var2[4]*t11376;
  t11390 = t11387 + t11388 + t11389;
  t11361 = var3[4]*t11303;
  t11362 = var3[2]*t11317;
  t11363 = var3[3]*t11317;
  t11364 = 0.4*t8536*t11219;
  t11366 = -1.*t8536*t11219;
  t11368 = t11366 + t11367;
  t11369 = 0.8*t11368;
  t11370 = t11364 + t11365 + t11369;
  t11371 = var2[4]*t11370;
  t11377 = var2[2]*t11376;
  t11378 = var2[3]*t11376;
  t11379 = t11371 + t11377 + t11378;
  t11380 = var2[4]*t11379;
  t11391 = var2[2]*t11390;
  t11392 = var2[3]*t11390;
  t11393 = t11261 + t11265 + t11270 + t11361 + t11308 + t11362 + t11363 + t11318 + t11319 + t11380 + t11391 + t11392;
  t11408 = 2.*var2[4]*t11303;
  t11409 = 2.*var2[2]*t11317;
  t11410 = 2.*var2[3]*t11317;
  t11411 = t11261 + t11265 + t11270 + t11408 + t11409 + t11410;
  p_output1[0]=1.;
  p_output1[1]=t11323;
  p_output1[2]=t11323;
  p_output1[3]=t11324 + t11325 + t11328 + t11258*var2[2] + t11306*var2[2] + t11258*var2[3] + t11306*var2[3] + t11337*var2[4] + var2[4]*(t11297*var2[2] + t11297*var2[3] + (t11281 + t11313 + 0.8*(t11293 + t11314))*var2[4]) + t11258*var3[2] + t11258*var3[3] + t11337*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t11354;
  p_output1[6]=t11354;
  p_output1[7]=t11324 + t11325 + t11328 + 2.*t11258*var2[2] + 2.*t11258*var2[3] + 2.*t11337*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t11359;
  p_output1[10]=t11359;
  p_output1[11]=t11324 + t11325 + t11328;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t11393;
  p_output1[16]=t11393;
  p_output1[17]=t11239 + t11240 + t11244 + t11298 + t11304 + t11305 + t11379*var2[2] + t11379*var2[3] + var2[4]*(t11370*var2[2] + t11370*var2[3] + (t11364 + t11382 + 0.8*(t11366 + t11383))*var2[4]) + t11303*var3[2] + t11303*var3[3] + t11297*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t11411;
  p_output1[20]=t11411;
  p_output1[21]=t11239 + t11240 + t11244 + 2.*t11303*var2[2] + 2.*t11303*var2[3] + 2.*t11297*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t11271;
  p_output1[24]=t11271;
  p_output1[25]=t11258;
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

#include "J_ddh_RightToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
