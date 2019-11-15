/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:41:03 GMT-05:00
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
  double t153;
  double t170;
  double t171;
  double t173;
  double t174;
  double t230;
  double t240;
  double t260;
  double t302;
  double t329;
  double t333;
  double t337;
  double t410;
  double t411;
  double t420;
  double t421;
  double t424;
  double t426;
  double t430;
  double t431;
  double t432;
  double t433;
  double t251;
  double t264;
  double t270;
  double t291;
  double t338;
  double t340;
  double t341;
  double t343;
  double t352;
  double t354;
  double t355;
  double t460;
  double t461;
  double t463;
  double t425;
  double t427;
  double t428;
  double t429;
  double t437;
  double t441;
  double t443;
  double t444;
  double t448;
  double t449;
  double t450;
  double t486;
  double t487;
  double t488;
  double t453;
  double t455;
  double t464;
  double t477;
  double t478;
  double t479;
  double t480;
  double t481;
  double t496;
  double t498;
  double t499;
  double t482;
  double t483;
  double t489;
  double t491;
  double t492;
  double t493;
  double t494;
  double t495;
  double t510;
  double t514;
  double t518;
  t153 = Cos(var1[2]);
  t170 = Cos(var1[3]);
  t171 = -1.*t153*t170;
  t173 = Sin(var1[2]);
  t174 = Sin(var1[3]);
  t230 = t173*t174;
  t240 = t171 + t230;
  t260 = Cos(var1[4]);
  t302 = t170*t173;
  t329 = t153*t174;
  t333 = t302 + t329;
  t337 = Sin(var1[4]);
  t410 = Cos(var1[5]);
  t411 = -1.*t153*t410;
  t420 = Sin(var1[5]);
  t421 = t173*t420;
  t424 = t411 + t421;
  t426 = Cos(var1[6]);
  t430 = t410*t173;
  t431 = t153*t420;
  t432 = t430 + t431;
  t433 = Sin(var1[6]);
  t251 = -7.33788*t240;
  t264 = -1.*t260;
  t270 = 1. + t264;
  t291 = 0.4*t270*t240;
  t338 = -0.4*t333*t337;
  t340 = t260*t240;
  t341 = t333*t337;
  t343 = t340 + t341;
  t352 = 0.64*t343;
  t354 = t291 + t338 + t352;
  t355 = -31.392000000000003*t354;
  t460 = -1.*t170*t173;
  t461 = -1.*t153*t174;
  t463 = t460 + t461;
  t425 = -7.33788*t424;
  t427 = -1.*t426;
  t428 = 1. + t427;
  t429 = 0.4*t428*t424;
  t437 = -0.4*t432*t433;
  t441 = t426*t424;
  t443 = t432*t433;
  t444 = t441 + t443;
  t448 = 0.64*t444;
  t449 = t429 + t437 + t448;
  t450 = -31.392000000000003*t449;
  t486 = -1.*t410*t173;
  t487 = -1.*t153*t420;
  t488 = t486 + t487;
  t453 = t251 + t355;
  t455 = -0.4*t260*t240;
  t464 = 0.4*t463*t337;
  t477 = -1.*t463*t337;
  t478 = t340 + t477;
  t479 = 0.64*t478;
  t480 = t455 + t464 + t479;
  t481 = -31.392000000000003*t480;
  t496 = t153*t170;
  t498 = -1.*t173*t174;
  t499 = t496 + t498;
  t482 = t425 + t450;
  t483 = -0.4*t426*t424;
  t489 = 0.4*t488*t433;
  t491 = -1.*t488*t433;
  t492 = t441 + t491;
  t493 = 0.64*t492;
  t494 = t483 + t489 + t493;
  t495 = -31.392000000000003*t494;
  t510 = t153*t410;
  t514 = -1.*t173*t420;
  t518 = t510 + t514;
  p_output1[0]=28.252799999999997*t153 + t251 + t355 + t425 + t450;
  p_output1[1]=t453;
  p_output1[2]=t481;
  p_output1[3]=t482;
  p_output1[4]=t495;
  p_output1[5]=t453;
  p_output1[6]=t453;
  p_output1[7]=t481;
  p_output1[8]=t481;
  p_output1[9]=t481;
  p_output1[10]=-31.392000000000003*(t464 + 0.4*t260*t499 + 0.64*(t477 - 1.*t260*t499));
  p_output1[11]=t482;
  p_output1[12]=t482;
  p_output1[13]=t495;
  p_output1[14]=t495;
  p_output1[15]=t495;
  p_output1[16]=-31.392000000000003*(t489 + 0.4*t426*t518 + 0.64*(t491 - 1.*t426*t518));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
