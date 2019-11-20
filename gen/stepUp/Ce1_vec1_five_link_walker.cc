/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:19:30 GMT-05:00
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
  double t103;
  double t89;
  double t94;
  double t119;
  double t131;
  double t85;
  double t133;
  double t134;
  double t138;
  double t98;
  double t120;
  double t127;
  double t130;
  double t146;
  double t147;
  double t216;
  double t219;
  double t220;
  double t150;
  double t152;
  double t153;
  double t161;
  double t162;
  double t167;
  double t170;
  double t171;
  double t173;
  double t174;
  double t178;
  double t183;
  double t184;
  double t187;
  double t202;
  double t210;
  double t215;
  double t221;
  double t222;
  double t223;
  double t224;
  double t227;
  double t251;
  double t264;
  double t275;
  double t276;
  double t277;
  double t291;
  double t293;
  double t292;
  double t294;
  double t295;
  double t297;
  double t298;
  double t299;
  double t300;
  double t316;
  double t321;
  double t324;
  double t296;
  double t301;
  double t331;
  double t332;
  double t333;
  double t302;
  double t260;
  double t270;
  double t271;
  double t282;
  double t283;
  double t288;
  double t289;
  double t290;
  double t337;
  double t338;
  double t339;
  double t340;
  double t341;
  double t342;
  double t343;
  double t240;
  double t244;
  double t230;
  double t231;
  double t352;
  double t353;
  double t354;
  double t355;
  double t356;
  double t357;
  double t358;
  double t361;
  double t362;
  double t363;
  double t364;
  double t365;
  double t368;
  double t369;
  double t370;
  double t371;
  double t329;
  double t330;
  double t303;
  double t312;
  double t393;
  double t384;
  double t385;
  double t386;
  double t387;
  double t388;
  double t389;
  double t390;
  double t391;
  double t392;
  double t406;
  double t407;
  double t408;
  double t409;
  double t410;
  double t411;
  double t424;
  double t425;
  double t426;
  double t427;
  double t428;
  double t429;
  double t430;
  double t431;
  double t433;
  double t434;
  double t435;
  double t439;
  double t440;
  double t441;
  double t432;
  double t436;
  double t437;
  double t438;
  double t443;
  double t444;
  double t448;
  double t449;
  double t450;
  double t451;
  double t460;
  double t461;
  double t453;
  double t463;
  double t464;
  double t455;
  double t418;
  double t419;
  double t420;
  double t421;
  double t422;
  double t423;
  double t483;
  double t484;
  double t485;
  double t486;
  double t487;
  double t488;
  double t489;
  double t490;
  double t492;
  double t493;
  double t494;
  double t477;
  double t478;
  double t479;
  double t480;
  double t481;
  double t482;
  double t491;
  double t495;
  double t496;
  double t498;
  double t499;
  double t500;
  double t505;
  double t506;
  double t507;
  double t504;
  double t509;
  double t510;
  double t514;
  double t523;
  double t524;
  double t516;
  double t526;
  double t527;
  double t518;
  double t539;
  double t540;
  double t541;
  double t542;
  double t544;
  double t545;
  double t546;
  double t547;
  double t551;
  double t552;
  double t572;
  double t573;
  double t574;
  double t575;
  double t577;
  double t578;
  double t579;
  double t580;
  double t584;
  double t585;
  t103 = Cos(var1[3]);
  t89 = Cos(var1[4]);
  t94 = Sin(var1[3]);
  t119 = Sin(var1[4]);
  t131 = Cos(var1[2]);
  t85 = Sin(var1[2]);
  t133 = t103*t89;
  t134 = -1.*t94*t119;
  t138 = t133 + t134;
  t98 = -1.*t89*t94;
  t120 = -1.*t103*t119;
  t127 = t98 + t120;
  t130 = t85*t127;
  t146 = t131*t138;
  t147 = t130 + t146;
  t216 = t131*t103;
  t219 = -1.*t85*t94;
  t220 = t216 + t219;
  t150 = t89*t94;
  t152 = t103*t119;
  t153 = t150 + t152;
  t161 = t131*t153;
  t162 = t85*t138;
  t167 = t161 + t162;
  t170 = 6.4*t147*t167;
  t171 = t131*t127;
  t173 = -1.*t103*t89;
  t174 = t94*t119;
  t178 = t173 + t174;
  t183 = t85*t178;
  t184 = t171 + t183;
  t187 = 6.4*t147*t184;
  t202 = -1.*t103*t85;
  t210 = -1.*t131*t94;
  t215 = t202 + t210;
  t221 = 13.6*t215*t220;
  t222 = t103*t85;
  t223 = t131*t94;
  t224 = t222 + t223;
  t227 = 13.6*t224*t220;
  t251 = Cos(var1[5]);
  t264 = Sin(var1[5]);
  t275 = t131*t251;
  t276 = -1.*t85*t264;
  t277 = t275 + t276;
  t291 = Cos(var1[6]);
  t293 = Sin(var1[6]);
  t292 = -1.*t291*t264;
  t294 = -1.*t251*t293;
  t295 = t292 + t294;
  t297 = t251*t291;
  t298 = -1.*t264*t293;
  t299 = t297 + t298;
  t300 = t131*t299;
  t316 = t291*t264;
  t321 = t251*t293;
  t324 = t316 + t321;
  t296 = t85*t295;
  t301 = t296 + t300;
  t331 = t131*t324;
  t332 = t85*t299;
  t333 = t331 + t332;
  t302 = t131*t295;
  t260 = -1.*t251*t85;
  t270 = -1.*t131*t264;
  t271 = t260 + t270;
  t282 = 13.6*t271*t277;
  t283 = t251*t85;
  t288 = t131*t264;
  t289 = t283 + t288;
  t290 = 13.6*t289*t277;
  t337 = 6.4*t301*t333;
  t338 = -1.*t251*t291;
  t339 = t264*t293;
  t340 = t338 + t339;
  t341 = t85*t340;
  t342 = t302 + t341;
  t343 = 6.4*t301*t342;
  t240 = -1.*t85*t153;
  t244 = t240 + t146;
  t230 = -1.*t85*t138;
  t231 = t171 + t230;
  t352 = 3.2*t147*t244;
  t353 = 3.2*t231*t167;
  t354 = -1.*t85*t127;
  t355 = t131*t178;
  t356 = t354 + t355;
  t357 = 3.2*t147*t356;
  t358 = 3.2*t231*t184;
  t361 = Power(t215,2);
  t362 = 6.8*t361;
  t363 = 6.8*t215*t224;
  t364 = Power(t220,2);
  t365 = 6.8*t364;
  t368 = -1.*t131*t103;
  t369 = t85*t94;
  t370 = t368 + t369;
  t371 = 6.8*t220*t370;
  t329 = -1.*t85*t324;
  t330 = t329 + t300;
  t303 = -1.*t85*t299;
  t312 = t302 + t303;
  t393 = -1.*t85*t295;
  t384 = Power(t271,2);
  t385 = 6.8*t384;
  t386 = 6.8*t271*t289;
  t387 = Power(t277,2);
  t388 = 6.8*t387;
  t389 = -1.*t131*t251;
  t390 = t85*t264;
  t391 = t389 + t390;
  t392 = 6.8*t277*t391;
  t406 = 3.2*t301*t330;
  t407 = 3.2*t312*t333;
  t408 = t131*t340;
  t409 = t393 + t408;
  t410 = 3.2*t301*t409;
  t411 = 3.2*t312*t342;
  t424 = -1.*t89;
  t425 = 1. + t424;
  t426 = 0.4*t425;
  t427 = 0.64*t89;
  t428 = t426 + t427;
  t429 = t428*t94;
  t430 = 0.24*t103*t119;
  t431 = t429 + t430;
  t433 = t103*t428;
  t434 = -0.24*t94*t119;
  t435 = t433 + t434;
  t439 = -1.*t428*t94;
  t440 = -0.24*t103*t119;
  t441 = t439 + t440;
  t432 = -1.*t431*t138;
  t436 = -1.*t127*t435;
  t437 = t432 + t436;
  t438 = 3.2*t147*t437;
  t443 = t431*t138;
  t444 = t127*t435;
  t448 = t431*t153;
  t449 = t138*t435;
  t450 = t448 + t449;
  t451 = 3.2*t450*t184;
  t460 = -0.24*t89*t94;
  t461 = t460 + t440;
  t453 = -1.*t127*t431;
  t463 = 0.24*t103*t89;
  t464 = t463 + t434;
  t455 = -1.*t435*t178;
  t418 = Power(t103,2);
  t419 = 0.11*t418;
  t420 = Power(t94,2);
  t421 = 0.11*t420;
  t422 = t419 + t421;
  t423 = 6.8*t215*t422;
  t483 = -1.*t291;
  t484 = 1. + t483;
  t485 = 0.4*t484;
  t486 = 0.64*t291;
  t487 = t485 + t486;
  t488 = t487*t264;
  t489 = 0.24*t251*t293;
  t490 = t488 + t489;
  t492 = t251*t487;
  t493 = -0.24*t264*t293;
  t494 = t492 + t493;
  t477 = Power(t251,2);
  t478 = 0.11*t477;
  t479 = Power(t264,2);
  t480 = 0.11*t479;
  t481 = t478 + t480;
  t482 = 6.8*t271*t481;
  t491 = -1.*t490*t299;
  t495 = -1.*t295*t494;
  t496 = t491 + t495;
  t498 = t490*t324;
  t499 = t299*t494;
  t500 = t498 + t499;
  t505 = -1.*t487*t264;
  t506 = -0.24*t251*t293;
  t507 = t505 + t506;
  t504 = 3.2*t301*t496;
  t509 = t490*t299;
  t510 = t295*t494;
  t514 = 3.2*t500*t342;
  t523 = -0.24*t291*t264;
  t524 = t523 + t506;
  t516 = -1.*t295*t490;
  t526 = 0.24*t251*t291;
  t527 = t526 + t493;
  t518 = -1.*t494*t340;
  t539 = 0.748*t215;
  t540 = t428*t119;
  t541 = -0.24*t89*t119;
  t542 = t540 + t541;
  t544 = t428*t89;
  t545 = Power(t119,2);
  t546 = 0.24*t545;
  t547 = t544 + t546;
  t551 = 3.2*t542*t147;
  t552 = 3.2*t547*t184;
  t572 = 0.748*t271;
  t573 = t487*t293;
  t574 = -0.24*t291*t293;
  t575 = t573 + t574;
  t577 = t487*t291;
  t578 = Power(t293,2);
  t579 = 0.24*t578;
  t580 = t577 + t579;
  t584 = 3.2*t575*t301;
  t585 = 3.2*t580*t342;
  p_output1[0]=var2[0]*(-0.5*(t221 + t227 + 6.4*t147*t231 + 6.4*t167*t244 + t282 + t290 + 6.4*t301*t312 + 6.4*t330*t333)*var2[2] - 0.5*(t170 + t187 + t221 + t227)*var2[3] - 0.5*(t170 + t187)*var2[4] - 0.5*(t282 + t290 + t337 + t343)*var2[5] - 0.5*(t337 + t343)*var2[6]);
  p_output1[1]=var2[0]*(-0.5*(3.2*t167*(-1.*t131*t153 + t230) + 3.2*Power(t231,2) + 3.2*Power(t244,2) + 3.2*Power(t312,2) + 3.2*Power(t330,2) + 3.2*(t303 - 1.*t131*t324)*t333 + 3.2*t147*(-1.*t131*t138 + t354) + t362 + t363 + t365 + t371 + t385 + t386 + t388 + t392 + 3.2*t301*(-1.*t131*t299 + t393))*var2[2] - 0.5*(t352 + t353 + t357 + t358 + t362 + t363 + t365 + t371)*var2[3] - 0.5*(t352 + t353 + t357 + t358)*var2[4] - 0.5*(t385 + t386 + t388 + t392 + t406 + t407 + t410 + t411)*var2[5] - 0.5*(t406 + t407 + t410 + t411)*var2[6]);
  p_output1[2]=var2[0]*(-0.5*(t423 + 3.2*t244*t437 + 3.2*t231*t450 + t482 + 3.2*t330*t496 + 3.2*t312*t500 - 2.88*t85)*var2[2] - 0.5*(t423 + t438 + 3.2*t147*(t153*t435 + t138*t441 + t443 + t444) + t451 + 3.2*t167*(-1.*t138*t435 - 1.*t127*t441 + t453 + t455))*var2[3] - 0.5*(t438 + t451 + 3.2*t167*(t453 + t455 - 1.*t127*t461 - 1.*t138*t464) + 3.2*t147*(t443 + t444 + t138*t461 + t153*t464))*var2[4] - 0.5*(t482 + t504 + 3.2*t301*(t324*t494 + t299*t507 + t509 + t510) + t514 + 3.2*t333*(-1.*t299*t494 - 1.*t295*t507 + t516 + t518))*var2[5] - 0.5*(t504 + t514 + 3.2*t333*(t516 + t518 - 1.*t295*t524 - 1.*t299*t527) + 3.2*t301*(t509 + t510 + t299*t524 + t324*t527))*var2[6]);
  p_output1[3]=var2[0]*(-0.5*(t539 + 3.2*t244*t542 + 3.2*t231*t547)*var2[2] - 0.5*(t539 + t551 + t552)*var2[3] - 0.5*(t551 + t552 + 3.2*t147*(-1.*t119*t428 + 0.24*t119*t89) + 3.2*t167*(t544 - 0.24*Power(t89,2)))*var2[4]);
  p_output1[4]=var2[0]*(-0.384*t231*var2[2] - 0.384*t184*var2[3] - 0.384*t184*var2[4]);
  p_output1[5]=var2[0]*(-0.5*(t572 + 3.2*t330*t575 + 3.2*t312*t580)*var2[2] - 0.5*(t572 + t584 + t585)*var2[5] - 0.5*(3.2*t301*(0.24*t291*t293 - 1.*t293*t487) + 3.2*t333*(-0.24*Power(t291,2) + t577) + t584 + t585)*var2[6]);
  p_output1[6]=var2[0]*(-0.384*t312*var2[2] - 0.384*t342*var2[5] - 0.384*t342*var2[6]);
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

#include "Ce1_vec1_five_link_walker.hh"

namespace LeftStance
{

void Ce1_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
