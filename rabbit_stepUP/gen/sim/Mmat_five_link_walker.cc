/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:26 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t301;
  double t298;
  double t304;
  double t306;
  double t316;
  double t318;
  double t322;
  double t323;
  double t324;
  double t337;
  double t339;
  double t349;
  double t351;
  double t355;
  double t356;
  double t357;
  double t311;
  double t312;
  double t313;
  double t305;
  double t307;
  double t308;
  double t317;
  double t319;
  double t320;
  double t321;
  double t325;
  double t326;
  double t329;
  double t330;
  double t331;
  double t332;
  double t333;
  double t334;
  double t344;
  double t345;
  double t346;
  double t338;
  double t340;
  double t341;
  double t350;
  double t352;
  double t353;
  double t354;
  double t358;
  double t359;
  double t362;
  double t363;
  double t364;
  double t365;
  double t366;
  double t367;
  double t403;
  double t404;
  double t405;
  double t406;
  double t407;
  double t408;
  double t409;
  double t410;
  double t412;
  double t413;
  double t414;
  double t428;
  double t429;
  double t430;
  double t431;
  double t432;
  double t433;
  double t434;
  double t435;
  double t437;
  double t438;
  double t439;
  double t371;
  double t372;
  double t373;
  double t374;
  double t375;
  double t376;
  double t377;
  double t378;
  double t379;
  double t380;
  double t381;
  double t382;
  double t383;
  double t384;
  double t385;
  double t386;
  double t387;
  double t388;
  double t389;
  double t390;
  double t391;
  double t392;
  double t393;
  double t394;
  double t395;
  double t299;
  double t300;
  double t302;
  double t303;
  double t314;
  double t315;
  double t347;
  double t348;
  double t397;
  double t398;
  double t399;
  double t400;
  double t401;
  double t411;
  double t415;
  double t416;
  double t418;
  double t419;
  double t420;
  double t422;
  double t423;
  double t424;
  double t425;
  double t426;
  double t436;
  double t440;
  double t441;
  double t443;
  double t444;
  double t445;
  double t454;
  double t455;
  double t456;
  double t449;
  double t450;
  double t451;
  double t452;
  double t466;
  double t467;
  double t468;
  double t461;
  double t462;
  double t463;
  double t464;
  double t396;
  double t402;
  double t417;
  double t421;
  double t427;
  double t442;
  double t446;
  double t447;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t491;
  double t492;
  double t448;
  double t453;
  double t457;
  double t458;
  double t493;
  double t494;
  double t495;
  double t496;
  double t516;
  double t517;
  double t518;
  double t519;
  double t459;
  double t497;
  double t520;
  double t521;
  double t533;
  double t534;
  double t460;
  double t465;
  double t469;
  double t470;
  double t498;
  double t499;
  double t500;
  double t501;
  double t522;
  double t523;
  double t524;
  double t525;
  double t471;
  double t502;
  double t526;
  double t527;
  double t540;
  double t541;
  t301 = Sin(var1[2]);
  t298 = Cos(var1[2]);
  t304 = Cos(var1[3]);
  t306 = Sin(var1[3]);
  t316 = Cos(var1[4]);
  t318 = Sin(var1[4]);
  t322 = t304*t316;
  t323 = -1.*t306*t318;
  t324 = t322 + t323;
  t337 = Cos(var1[5]);
  t339 = Sin(var1[5]);
  t349 = Cos(var1[6]);
  t351 = Sin(var1[6]);
  t355 = t337*t349;
  t356 = -1.*t339*t351;
  t357 = t355 + t356;
  t311 = t298*t304;
  t312 = -1.*t301*t306;
  t313 = t311 + t312;
  t305 = t304*t301;
  t307 = t298*t306;
  t308 = t305 + t307;
  t317 = -1.*t316*t306;
  t319 = -1.*t304*t318;
  t320 = t317 + t319;
  t321 = t301*t320;
  t325 = t298*t324;
  t326 = t321 + t325;
  t329 = t316*t306;
  t330 = t304*t318;
  t331 = t329 + t330;
  t332 = t298*t331;
  t333 = t301*t324;
  t334 = t332 + t333;
  t344 = t298*t337;
  t345 = -1.*t301*t339;
  t346 = t344 + t345;
  t338 = t337*t301;
  t340 = t298*t339;
  t341 = t338 + t340;
  t350 = -1.*t349*t339;
  t352 = -1.*t337*t351;
  t353 = t350 + t352;
  t354 = t301*t353;
  t358 = t298*t357;
  t359 = t354 + t358;
  t362 = t349*t339;
  t363 = t337*t351;
  t364 = t362 + t363;
  t365 = t298*t364;
  t366 = t301*t357;
  t367 = t365 + t366;
  t403 = -1.*t316;
  t404 = 1. + t403;
  t405 = 0.4*t404;
  t406 = 0.64*t316;
  t407 = t405 + t406;
  t408 = t407*t306;
  t409 = 0.24*t304*t318;
  t410 = t408 + t409;
  t412 = t304*t407;
  t413 = -0.24*t306*t318;
  t414 = t412 + t413;
  t428 = -1.*t349;
  t429 = 1. + t428;
  t430 = 0.4*t429;
  t431 = 0.64*t349;
  t432 = t430 + t431;
  t433 = t432*t339;
  t434 = 0.24*t337*t351;
  t435 = t433 + t434;
  t437 = t337*t432;
  t438 = -0.24*t339*t351;
  t439 = t437 + t438;
  t371 = -1.*t304*t301;
  t372 = -1.*t298*t306;
  t373 = t371 + t372;
  t374 = 6.8*t373*t313;
  t375 = 6.8*t308*t313;
  t376 = t298*t320;
  t377 = -1.*t301*t324;
  t378 = t376 + t377;
  t379 = 3.2*t326*t378;
  t380 = -1.*t301*t331;
  t381 = t380 + t325;
  t382 = 3.2*t381*t334;
  t383 = -1.*t337*t301;
  t384 = -1.*t298*t339;
  t385 = t383 + t384;
  t386 = 6.8*t385*t346;
  t387 = 6.8*t341*t346;
  t388 = t298*t353;
  t389 = -1.*t301*t357;
  t390 = t388 + t389;
  t391 = 3.2*t359*t390;
  t392 = -1.*t301*t364;
  t393 = t392 + t358;
  t394 = 3.2*t393*t367;
  t395 = t374 + t375 + t379 + t382 + t386 + t387 + t391 + t394;
  t299 = Power(t298,2);
  t300 = 12.*t299;
  t302 = Power(t301,2);
  t303 = 12.*t302;
  t314 = Power(t313,2);
  t315 = 6.8*t314;
  t347 = Power(t346,2);
  t348 = 6.8*t347;
  t397 = Power(t304,2);
  t398 = 0.11*t397;
  t399 = Power(t306,2);
  t400 = 0.11*t399;
  t401 = t398 + t400;
  t411 = -1.*t410*t324;
  t415 = -1.*t320*t414;
  t416 = t411 + t415;
  t418 = t410*t331;
  t419 = t324*t414;
  t420 = t418 + t419;
  t422 = Power(t337,2);
  t423 = 0.11*t422;
  t424 = Power(t339,2);
  t425 = 0.11*t424;
  t426 = t423 + t425;
  t436 = -1.*t435*t357;
  t440 = -1.*t353*t439;
  t441 = t436 + t440;
  t443 = t435*t364;
  t444 = t357*t439;
  t445 = t443 + t444;
  t454 = t407*t318;
  t455 = -0.24*t316*t318;
  t456 = t454 + t455;
  t449 = t407*t316;
  t450 = Power(t318,2);
  t451 = 0.24*t450;
  t452 = t449 + t451;
  t466 = t432*t351;
  t467 = -0.24*t349*t351;
  t468 = t466 + t467;
  t461 = t432*t349;
  t462 = Power(t351,2);
  t463 = 0.24*t462;
  t464 = t461 + t463;
  t396 = 2.88*t298;
  t402 = 6.8*t313*t401;
  t417 = 3.2*t334*t416;
  t421 = 3.2*t326*t420;
  t427 = 6.8*t346*t426;
  t442 = 3.2*t367*t441;
  t446 = 3.2*t359*t445;
  t447 = t396 + t402 + t417 + t421 + t427 + t442 + t446;
  t485 = -2.88*t301;
  t486 = 6.8*t373*t401;
  t487 = 3.2*t381*t416;
  t488 = 3.2*t378*t420;
  t489 = 6.8*t385*t426;
  t490 = 3.2*t393*t441;
  t491 = 3.2*t390*t445;
  t492 = t485 + t486 + t487 + t488 + t489 + t490 + t491;
  t448 = 0.748*t313;
  t453 = 3.2*t452*t326;
  t457 = 3.2*t456*t334;
  t458 = t448 + t453 + t457;
  t493 = 0.748*t373;
  t494 = 3.2*t456*t381;
  t495 = 3.2*t452*t378;
  t496 = t493 + t494 + t495;
  t516 = 0.748*t401;
  t517 = 3.2*t456*t416;
  t518 = 3.2*t452*t420;
  t519 = 0.67 + t516 + t517 + t518;
  t459 = 0.768*t326;
  t497 = 0.768*t378;
  t520 = 0.768*t420;
  t521 = 0.2 + t520;
  t533 = 0.768*t452;
  t534 = 0.2 + t533;
  t460 = 0.748*t346;
  t465 = 3.2*t464*t359;
  t469 = 3.2*t468*t367;
  t470 = t460 + t465 + t469;
  t498 = 0.748*t385;
  t499 = 3.2*t468*t393;
  t500 = 3.2*t464*t390;
  t501 = t498 + t499 + t500;
  t522 = 0.748*t426;
  t523 = 3.2*t468*t441;
  t524 = 3.2*t464*t445;
  t525 = 0.67 + t522 + t523 + t524;
  t471 = 0.768*t359;
  t502 = 0.768*t390;
  t526 = 0.768*t445;
  t527 = 0.2 + t526;
  t540 = 0.768*t464;
  t541 = 0.2 + t540;
  p_output1[0]=t300 + t303 + 6.8*Power(t308,2) + t315 + 3.2*Power(t326,2) + 3.2*Power(t334,2) + 6.8*Power(t341,2) + t348 + 3.2*Power(t359,2) + 3.2*Power(t367,2);
  p_output1[1]=t395;
  p_output1[2]=t447;
  p_output1[3]=t458;
  p_output1[4]=t459;
  p_output1[5]=t470;
  p_output1[6]=t471;
  p_output1[7]=t395;
  p_output1[8]=t300 + t303 + t315 + t348 + 6.8*Power(t373,2) + 3.2*Power(t378,2) + 3.2*Power(t381,2) + 6.8*Power(t385,2) + 3.2*Power(t390,2) + 3.2*Power(t393,2);
  p_output1[9]=t492;
  p_output1[10]=t496;
  p_output1[11]=t497;
  p_output1[12]=t501;
  p_output1[13]=t502;
  p_output1[14]=t447;
  p_output1[15]=t492;
  p_output1[16]=3.3612 + 6.8*Power(t401,2) + 3.2*Power(t416,2) + 3.2*Power(t420,2) + 6.8*Power(t426,2) + 3.2*Power(t441,2) + 3.2*Power(t445,2);
  p_output1[17]=t519;
  p_output1[18]=t521;
  p_output1[19]=t525;
  p_output1[20]=t527;
  p_output1[21]=t458;
  p_output1[22]=t496;
  p_output1[23]=t519;
  p_output1[24]=1.58228 + 3.2*Power(t452,2) + 3.2*Power(t456,2);
  p_output1[25]=t534;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=t459;
  p_output1[29]=t497;
  p_output1[30]=t521;
  p_output1[31]=t534;
  p_output1[32]=1.2143199999999998;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=t470;
  p_output1[36]=t501;
  p_output1[37]=t525;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=1.58228 + 3.2*Power(t464,2) + 3.2*Power(t468,2);
  p_output1[41]=t541;
  p_output1[42]=t471;
  p_output1[43]=t502;
  p_output1[44]=t527;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=t541;
  p_output1[48]=1.2143199999999998;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Mmat_five_link_walker.hh"

namespace SymFunction
{

void Mmat_five_link_walker_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
