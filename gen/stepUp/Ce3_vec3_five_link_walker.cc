/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:38:51 GMT-05:00
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
  double t1884;
  double t1943;
  double t2003;
  double t1963;
  double t2092;
  double t2109;
  double t2113;
  double t2117;
  double t2129;
  double t2132;
  double t2133;
  double t2137;
  double t2138;
  double t2139;
  double t2180;
  double t2181;
  double t2182;
  double t2140;
  double t2156;
  double t2160;
  double t2093;
  double t2110;
  double t2111;
  double t2183;
  double t2184;
  double t2193;
  double t2220;
  double t2223;
  double t2232;
  double t2234;
  double t2238;
  double t2239;
  double t2240;
  double t2247;
  double t2248;
  double t2249;
  double t2250;
  double t2251;
  double t2256;
  double t2257;
  double t2266;
  double t2252;
  double t2253;
  double t2254;
  double t2233;
  double t2235;
  double t2236;
  double t2267;
  double t2270;
  double t2271;
  double t2035;
  double t2036;
  double t2055;
  double t2067;
  double t2087;
  double t2176;
  double t2194;
  double t2197;
  double t2130;
  double t2214;
  double t2215;
  double t2216;
  double t2226;
  double t2227;
  double t2228;
  double t2229;
  double t2230;
  double t2255;
  double t2278;
  double t2279;
  double t2241;
  double t2291;
  double t2293;
  double t2295;
  double t2330;
  double t2331;
  double t2332;
  double t2333;
  double t2334;
  double t2335;
  double t2336;
  double t2337;
  double t1947;
  double t2020;
  double t2032;
  double t2091;
  double t2308;
  double t2309;
  double t2205;
  double t2350;
  double t2351;
  double t2352;
  double t2304;
  double t2305;
  double t2306;
  double t2347;
  double t2348;
  double t2349;
  double t2353;
  double t2354;
  double t2300;
  double t2301;
  double t2302;
  double t2303;
  double t2366;
  double t2367;
  double t2339;
  double t2340;
  double t2341;
  double t2342;
  double t2385;
  double t2386;
  double t2387;
  double t2388;
  double t2389;
  double t2390;
  double t2391;
  double t2344;
  double t2345;
  double t2346;
  double t2358;
  double t2360;
  double t2361;
  double t2362;
  double t2402;
  double t2403;
  double t2404;
  double t2368;
  double t2370;
  double t2371;
  double t2372;
  double t2373;
  double t2374;
  double t2375;
  double t2422;
  double t2423;
  double t2424;
  double t2425;
  double t2426;
  double t2427;
  double t2428;
  double t2429;
  double t2222;
  double t2224;
  double t2225;
  double t2231;
  double t2323;
  double t2324;
  double t2287;
  double t2442;
  double t2443;
  double t2444;
  double t2317;
  double t2320;
  double t2321;
  double t2439;
  double t2440;
  double t2441;
  double t2445;
  double t2446;
  double t2311;
  double t2312;
  double t2313;
  double t2314;
  double t2458;
  double t2459;
  double t2431;
  double t2432;
  double t2433;
  double t2434;
  double t2477;
  double t2478;
  double t2479;
  double t2480;
  double t2481;
  double t2482;
  double t2483;
  double t2436;
  double t2437;
  double t2438;
  double t2450;
  double t2452;
  double t2453;
  double t2454;
  double t2494;
  double t2495;
  double t2496;
  double t2460;
  double t2462;
  double t2463;
  double t2464;
  double t2465;
  double t2466;
  double t2467;
  t1884 = Cos(var1[2]);
  t1943 = Cos(var1[3]);
  t2003 = Sin(var1[3]);
  t1963 = Sin(var1[2]);
  t2092 = Cos(var1[4]);
  t2109 = Sin(var1[4]);
  t2113 = t1943*t2092;
  t2117 = -1.*t2003*t2109;
  t2129 = t2113 + t2117;
  t2132 = -1.*t2092;
  t2133 = 1. + t2132;
  t2137 = 0.4*t2133;
  t2138 = 0.64*t2092;
  t2139 = t2137 + t2138;
  t2180 = -1.*t2092*t2003;
  t2181 = -1.*t1943*t2109;
  t2182 = t2180 + t2181;
  t2140 = t2139*t2003;
  t2156 = 0.24*t1943*t2109;
  t2160 = t2140 + t2156;
  t2093 = t2092*t2003;
  t2110 = t1943*t2109;
  t2111 = t2093 + t2110;
  t2183 = t1943*t2139;
  t2184 = -0.24*t2003*t2109;
  t2193 = t2183 + t2184;
  t2220 = Cos(var1[5]);
  t2223 = Sin(var1[5]);
  t2232 = Cos(var1[6]);
  t2234 = Sin(var1[6]);
  t2238 = t2220*t2232;
  t2239 = -1.*t2223*t2234;
  t2240 = t2238 + t2239;
  t2247 = -1.*t2232;
  t2248 = 1. + t2247;
  t2249 = 0.4*t2248;
  t2250 = 0.64*t2232;
  t2251 = t2249 + t2250;
  t2256 = -1.*t2232*t2223;
  t2257 = -1.*t2220*t2234;
  t2266 = t2256 + t2257;
  t2252 = t2251*t2223;
  t2253 = 0.24*t2220*t2234;
  t2254 = t2252 + t2253;
  t2233 = t2232*t2223;
  t2235 = t2220*t2234;
  t2236 = t2233 + t2235;
  t2267 = t2220*t2251;
  t2270 = -0.24*t2223*t2234;
  t2271 = t2267 + t2270;
  t2035 = Power(t1943,2);
  t2036 = 0.11*t2035;
  t2055 = Power(t2003,2);
  t2067 = 0.11*t2055;
  t2087 = t2036 + t2067;
  t2176 = -1.*t2160*t2129;
  t2194 = -1.*t2182*t2193;
  t2197 = t2176 + t2194;
  t2130 = -1.*t1963*t2129;
  t2214 = t2160*t2111;
  t2215 = t2129*t2193;
  t2216 = t2214 + t2215;
  t2226 = Power(t2220,2);
  t2227 = 0.11*t2226;
  t2228 = Power(t2223,2);
  t2229 = 0.11*t2228;
  t2230 = t2227 + t2229;
  t2255 = -1.*t2254*t2240;
  t2278 = -1.*t2266*t2271;
  t2279 = t2255 + t2278;
  t2241 = -1.*t1963*t2240;
  t2291 = t2254*t2236;
  t2293 = t2240*t2271;
  t2295 = t2291 + t2293;
  t2330 = -1.*t2139*t2003;
  t2331 = -0.24*t1943*t2109;
  t2332 = t2330 + t2331;
  t2333 = t2332*t2129;
  t2334 = t2160*t2129;
  t2335 = t2182*t2193;
  t2336 = t2111*t2193;
  t2337 = t2333 + t2334 + t2335 + t2336;
  t1947 = -1.*t1884*t1943;
  t2020 = t1963*t2003;
  t2032 = t1947 + t2020;
  t2091 = -6.8*t2032*t2087;
  t2308 = t1884*t2182;
  t2309 = t2308 + t2130;
  t2205 = -1.*t1963*t2182;
  t2350 = -1.*t1943*t2092;
  t2351 = t2003*t2109;
  t2352 = t2350 + t2351;
  t2304 = -1.*t1963*t2111;
  t2305 = t1884*t2129;
  t2306 = t2304 + t2305;
  t2347 = -1.*t2182*t2332;
  t2348 = -1.*t2182*t2160;
  t2349 = -1.*t2129*t2193;
  t2353 = -1.*t2193*t2352;
  t2354 = t2347 + t2348 + t2349 + t2353;
  t2300 = -1.*t1943*t1963;
  t2301 = -1.*t1884*t2003;
  t2302 = t2300 + t2301;
  t2303 = -6.8*t2302*t2087;
  t2366 = t1963*t2182;
  t2367 = t2366 + t2305;
  t2339 = t2139*t2092;
  t2340 = Power(t2109,2);
  t2341 = 0.24*t2340;
  t2342 = t2339 + t2341;
  t2385 = -0.24*t2092*t2003;
  t2386 = t2385 + t2331;
  t2387 = t2386*t2129;
  t2388 = 0.24*t1943*t2092;
  t2389 = t2388 + t2184;
  t2390 = t2111*t2389;
  t2391 = t2387 + t2334 + t2335 + t2390;
  t2344 = t2139*t2109;
  t2345 = -0.24*t2092*t2109;
  t2346 = t2344 + t2345;
  t2358 = -3.2*t2309*t2197;
  t2360 = t1884*t2352;
  t2361 = t2205 + t2360;
  t2362 = -3.2*t2216*t2361;
  t2402 = -1.*t2182*t2386;
  t2403 = -1.*t2129*t2389;
  t2404 = t2402 + t2348 + t2403 + t2353;
  t2368 = -3.2*t2367*t2197;
  t2370 = t1963*t2352;
  t2371 = t2308 + t2370;
  t2372 = -3.2*t2216*t2371;
  t2373 = t1884*t2111;
  t2374 = t1963*t2129;
  t2375 = t2373 + t2374;
  t2422 = -1.*t2251*t2223;
  t2423 = -0.24*t2220*t2234;
  t2424 = t2422 + t2423;
  t2425 = t2424*t2240;
  t2426 = t2254*t2240;
  t2427 = t2266*t2271;
  t2428 = t2236*t2271;
  t2429 = t2425 + t2426 + t2427 + t2428;
  t2222 = -1.*t1884*t2220;
  t2224 = t1963*t2223;
  t2225 = t2222 + t2224;
  t2231 = -6.8*t2225*t2230;
  t2323 = t1884*t2266;
  t2324 = t2323 + t2241;
  t2287 = -1.*t1963*t2266;
  t2442 = -1.*t2220*t2232;
  t2443 = t2223*t2234;
  t2444 = t2442 + t2443;
  t2317 = -1.*t1963*t2236;
  t2320 = t1884*t2240;
  t2321 = t2317 + t2320;
  t2439 = -1.*t2266*t2424;
  t2440 = -1.*t2266*t2254;
  t2441 = -1.*t2240*t2271;
  t2445 = -1.*t2271*t2444;
  t2446 = t2439 + t2440 + t2441 + t2445;
  t2311 = -1.*t2220*t1963;
  t2312 = -1.*t1884*t2223;
  t2313 = t2311 + t2312;
  t2314 = -6.8*t2313*t2230;
  t2458 = t1963*t2266;
  t2459 = t2458 + t2320;
  t2431 = t2251*t2232;
  t2432 = Power(t2234,2);
  t2433 = 0.24*t2432;
  t2434 = t2431 + t2433;
  t2477 = -0.24*t2232*t2223;
  t2478 = t2477 + t2423;
  t2479 = t2478*t2240;
  t2480 = 0.24*t2220*t2232;
  t2481 = t2480 + t2270;
  t2482 = t2236*t2481;
  t2483 = t2479 + t2426 + t2427 + t2482;
  t2436 = t2251*t2234;
  t2437 = -0.24*t2232*t2234;
  t2438 = t2436 + t2437;
  t2450 = -3.2*t2324*t2279;
  t2452 = t1884*t2444;
  t2453 = t2287 + t2452;
  t2454 = -3.2*t2295*t2453;
  t2494 = -1.*t2266*t2478;
  t2495 = -1.*t2240*t2481;
  t2496 = t2494 + t2440 + t2495 + t2445;
  t2460 = -3.2*t2459*t2279;
  t2462 = t1963*t2444;
  t2463 = t2323 + t2462;
  t2464 = -3.2*t2295*t2463;
  t2465 = t1884*t2236;
  t2466 = t1963*t2240;
  t2467 = t2465 + t2466;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(2.88*t1963 + t2303 - 3.2*t2197*t2306 - 3.2*t2216*t2309 + t2314 - 3.2*t2279*t2321 - 3.2*t2295*t2324)*var2[0] - 0.5*(2.88*t1884 + t2091 - 3.2*(-1.*t1884*t2111 + t2130)*t2197 - 3.2*(-1.*t1884*t2129 + t2205)*t2216 + t2231 - 3.2*(-1.*t1884*t2236 + t2241)*t2279 - 3.2*(-1.*t1884*t2240 + t2287)*t2295)*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(t2303 - 3.2*t2337*t2367 + t2368 + t2372 - 3.2*t2354*t2375)*var2[0] - 0.5*(t2091 - 3.2*t2309*t2337 - 3.2*t2306*t2354 + t2358 + t2362)*var2[1] - 0.5*(-6.4*t2216*t2337 - 6.4*t2197*t2354)*var2[2] - 0.5*(-3.2*t2337*t2342 - 3.2*t2346*t2354)*var2[3] + 0.384*t2337*var2[4]);
  p_output1[4]=var2[2]*(-0.5*(t2368 + t2372 - 3.2*t2367*t2391 - 3.2*t2375*t2404)*var2[0] - 0.5*(t2358 + t2362 - 3.2*t2309*t2391 - 3.2*t2306*t2404)*var2[1] - 0.5*(-6.4*t2216*t2391 - 6.4*t2197*t2404)*var2[2] - 0.5*(-3.2*(0.24*t2092*t2109 - 1.*t2109*t2139)*t2216 - 3.2*t2197*(-0.24*Power(t2092,2) + t2339) - 3.2*t2342*t2391 - 3.2*t2346*t2404)*var2[3] + 0.384*t2391*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(t2314 - 3.2*t2429*t2459 + t2460 + t2464 - 3.2*t2446*t2467)*var2[0] - 0.5*(t2231 - 3.2*t2324*t2429 - 3.2*t2321*t2446 + t2450 + t2454)*var2[1] - 0.5*(-6.4*t2295*t2429 - 6.4*t2279*t2446)*var2[2] - 0.5*(-3.2*t2429*t2434 - 3.2*t2438*t2446)*var2[5] + 0.384*t2429*var2[6]);
  p_output1[6]=var2[2]*(-0.5*(t2460 + t2464 - 3.2*t2459*t2483 - 3.2*t2467*t2496)*var2[0] - 0.5*(t2450 + t2454 - 3.2*t2324*t2483 - 3.2*t2321*t2496)*var2[1] - 0.5*(-6.4*t2295*t2483 - 6.4*t2279*t2496)*var2[2] - 0.5*(-3.2*(0.24*t2232*t2234 - 1.*t2234*t2251)*t2295 - 3.2*t2279*(-0.24*Power(t2232,2) + t2431) - 3.2*t2434*t2483 - 3.2*t2438*t2496)*var2[5] + 0.384*t2483*var2[6]);
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

#include "Ce3_vec3_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
