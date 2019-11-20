/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:19:59 GMT-05:00
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
  double t2244;
  double t2298;
  double t2112;
  double t2206;
  double t1918;
  double t2198;
  double t2284;
  double t2288;
  double t2289;
  double t2296;
  double t2297;
  double t2328;
  double t2329;
  double t2338;
  double t2357;
  double t2359;
  double t2363;
  double t2364;
  double t2365;
  double t2369;
  double t2376;
  double t2299;
  double t2307;
  double t2310;
  double t2322;
  double t2325;
  double t2326;
  double t2378;
  double t2383;
  double t2384;
  double t2392;
  double t2393;
  double t2377;
  double t2379;
  double t2394;
  double t2131;
  double t2211;
  double t2218;
  double t2237;
  double t2343;
  double t2409;
  double t2410;
  double t2411;
  double t2469;
  double t2470;
  double t2471;
  double t2448;
  double t2449;
  double t2451;
  double t2456;
  double t2457;
  double t2461;
  double t2493;
  double t2497;
  double t2498;
  double t2500;
  double t2501;
  double t2502;
  double t2327;
  double t2355;
  double t2408;
  double t2412;
  double t2413;
  double t2414;
  double t2417;
  double t2418;
  double t2419;
  double t2420;
  double t2421;
  double t2430;
  double t2468;
  double t2472;
  double t2526;
  double t2527;
  double t2484;
  double t2529;
  double t2530;
  double t2486;
  t2244 = Cos(var1[4]);
  t2298 = Sin(var1[4]);
  t2112 = Sin(var1[2]);
  t2206 = Sin(var1[3]);
  t1918 = Cos(var1[3]);
  t2198 = Cos(var1[2]);
  t2284 = -1.*t2244;
  t2288 = 1. + t2284;
  t2289 = 0.4*t2288;
  t2296 = 0.64*t2244;
  t2297 = t2289 + t2296;
  t2328 = t1918*t2244;
  t2329 = -1.*t2206*t2298;
  t2338 = t2328 + t2329;
  t2357 = t2297*t2244;
  t2359 = Power(t2298,2);
  t2363 = 0.24*t2359;
  t2364 = t2357 + t2363;
  t2365 = -1.*t2244*t2206;
  t2369 = -1.*t1918*t2298;
  t2376 = t2365 + t2369;
  t2299 = t2297*t2298;
  t2307 = -0.24*t2244*t2298;
  t2310 = t2299 + t2307;
  t2322 = t2244*t2206;
  t2325 = t1918*t2298;
  t2326 = t2322 + t2325;
  t2378 = -1.*t2112*t2338;
  t2383 = -1.*t2198*t1918;
  t2384 = t2112*t2206;
  t2392 = t2383 + t2384;
  t2393 = -0.748*t2392;
  t2377 = t2198*t2376;
  t2379 = t2377 + t2378;
  t2394 = -1.*t2112*t2376;
  t2131 = -1.*t1918*t2112;
  t2211 = -1.*t2198*t2206;
  t2218 = t2131 + t2211;
  t2237 = -0.748*t2218;
  t2343 = t2198*t2338;
  t2409 = -1.*t1918*t2244;
  t2410 = t2206*t2298;
  t2411 = t2409 + t2410;
  t2469 = t1918*t2297;
  t2470 = -0.24*t2206*t2298;
  t2471 = t2469 + t2470;
  t2448 = -1.*t2297*t2206;
  t2449 = -0.24*t1918*t2298;
  t2451 = t2448 + t2449;
  t2456 = t2297*t2206;
  t2457 = 0.24*t1918*t2298;
  t2461 = t2456 + t2457;
  t2493 = -1.*t2297*t2298;
  t2497 = 0.24*t2244*t2298;
  t2498 = t2493 + t2497;
  t2500 = Power(t2244,2);
  t2501 = -0.24*t2500;
  t2502 = t2357 + t2501;
  t2327 = -1.*t2112*t2326;
  t2355 = t2327 + t2343;
  t2408 = -3.2*t2310*t2379;
  t2412 = t2198*t2411;
  t2413 = t2394 + t2412;
  t2414 = -3.2*t2364*t2413;
  t2417 = t2112*t2376;
  t2418 = t2417 + t2343;
  t2419 = -3.2*t2310*t2418;
  t2420 = t2112*t2411;
  t2421 = t2377 + t2420;
  t2430 = -3.2*t2364*t2421;
  t2468 = t2461*t2338;
  t2472 = t2376*t2471;
  t2526 = -0.24*t2244*t2206;
  t2527 = t2526 + t2449;
  t2484 = -1.*t2376*t2461;
  t2529 = 0.24*t1918*t2244;
  t2530 = t2529 + t2470;
  t2486 = -1.*t2471*t2411;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t2237 - 3.2*t2310*t2355 - 3.2*t2364*t2379)*var2[0] - 0.5*(-3.2*t2310*(-1.*t2198*t2326 + t2378) + t2393 - 3.2*t2364*(-1.*t2198*t2338 + t2394))*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t2237 + t2419 + t2430)*var2[0] - 0.5*(t2393 + t2408 + t2414)*var2[1] - 0.5*(-3.2*t2364*(t2338*t2451 + t2468 + t2326*t2471 + t2472) - 3.2*t2310*(-1.*t2376*t2451 - 1.*t2338*t2471 + t2484 + t2486))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(-0.5*(t2419 + t2430 - 3.2*t2418*t2498 - 3.2*(t2198*t2326 + t2112*t2338)*t2502)*var2[0] - 0.5*(t2408 + t2414 - 3.2*t2379*t2498 - 3.2*t2355*t2502)*var2[1] - 0.5*(-3.2*(t2326*t2461 + t2338*t2471)*t2498 - 3.2*(-1.*t2338*t2461 - 1.*t2376*t2471)*t2502 - 3.2*t2364*(t2468 + t2472 + t2338*t2527 + t2326*t2530) - 3.2*t2310*(t2484 + t2486 - 1.*t2376*t2527 - 1.*t2338*t2530))*var2[2] - 0.5*(-6.4*t2364*t2498 - 6.4*t2310*t2502)*var2[3] + 0.384*t2498*var2[4]);
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

#include "Ce3_vec4_five_link_walker.hh"

namespace LeftStance
{

void Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
