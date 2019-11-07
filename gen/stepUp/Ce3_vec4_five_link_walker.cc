/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:29 GMT-05:00
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
  double t2982;
  double t6824;
  double t188;
  double t2517;
  double t5;
  double t2458;
  double t5977;
  double t5982;
  double t5994;
  double t6002;
  double t6038;
  double t9350;
  double t9511;
  double t9529;
  double t10939;
  double t11169;
  double t11278;
  double t11308;
  double t11311;
  double t11401;
  double t13005;
  double t7622;
  double t8011;
  double t8020;
  double t8022;
  double t8084;
  double t8882;
  double t13217;
  double t13306;
  double t13308;
  double t13309;
  double t13317;
  double t13194;
  double t13284;
  double t13320;
  double t293;
  double t2834;
  double t2943;
  double t2960;
  double t9533;
  double t13394;
  double t13398;
  double t13399;
  double t13444;
  double t13445;
  double t13446;
  double t13433;
  double t13434;
  double t13435;
  double t13437;
  double t13438;
  double t13439;
  double t13469;
  double t13474;
  double t13486;
  double t13488;
  double t13490;
  double t13494;
  double t9349;
  double t10205;
  double t13392;
  double t13400;
  double t13408;
  double t13415;
  double t13418;
  double t13419;
  double t13420;
  double t13421;
  double t13422;
  double t13423;
  double t13440;
  double t13447;
  double t13537;
  double t13538;
  double t13452;
  double t13540;
  double t13541;
  double t13454;
  t2982 = Cos(var1[4]);
  t6824 = Sin(var1[4]);
  t188 = Sin(var1[2]);
  t2517 = Sin(var1[3]);
  t5 = Cos(var1[3]);
  t2458 = Cos(var1[2]);
  t5977 = -1.*t2982;
  t5982 = 1. + t5977;
  t5994 = 0.4*t5982;
  t6002 = 0.64*t2982;
  t6038 = t5994 + t6002;
  t9350 = t5*t2982;
  t9511 = -1.*t2517*t6824;
  t9529 = t9350 + t9511;
  t10939 = t6038*t2982;
  t11169 = Power(t6824,2);
  t11278 = 0.24*t11169;
  t11308 = t10939 + t11278;
  t11311 = -1.*t2982*t2517;
  t11401 = -1.*t5*t6824;
  t13005 = t11311 + t11401;
  t7622 = t6038*t6824;
  t8011 = -0.24*t2982*t6824;
  t8020 = t7622 + t8011;
  t8022 = t2982*t2517;
  t8084 = t5*t6824;
  t8882 = t8022 + t8084;
  t13217 = -1.*t188*t9529;
  t13306 = -1.*t2458*t5;
  t13308 = t188*t2517;
  t13309 = t13306 + t13308;
  t13317 = -0.748*t13309;
  t13194 = t2458*t13005;
  t13284 = t13194 + t13217;
  t13320 = -1.*t188*t13005;
  t293 = -1.*t5*t188;
  t2834 = -1.*t2458*t2517;
  t2943 = t293 + t2834;
  t2960 = -0.748*t2943;
  t9533 = t2458*t9529;
  t13394 = -1.*t5*t2982;
  t13398 = t2517*t6824;
  t13399 = t13394 + t13398;
  t13444 = t5*t6038;
  t13445 = -0.24*t2517*t6824;
  t13446 = t13444 + t13445;
  t13433 = -1.*t6038*t2517;
  t13434 = -0.24*t5*t6824;
  t13435 = t13433 + t13434;
  t13437 = t6038*t2517;
  t13438 = 0.24*t5*t6824;
  t13439 = t13437 + t13438;
  t13469 = -1.*t6038*t6824;
  t13474 = 0.24*t2982*t6824;
  t13486 = t13469 + t13474;
  t13488 = Power(t2982,2);
  t13490 = -0.24*t13488;
  t13494 = t10939 + t13490;
  t9349 = -1.*t188*t8882;
  t10205 = t9349 + t9533;
  t13392 = -3.2*t8020*t13284;
  t13400 = t2458*t13399;
  t13408 = t13320 + t13400;
  t13415 = -3.2*t11308*t13408;
  t13418 = t188*t13005;
  t13419 = t13418 + t9533;
  t13420 = -3.2*t8020*t13419;
  t13421 = t188*t13399;
  t13422 = t13194 + t13421;
  t13423 = -3.2*t11308*t13422;
  t13440 = t13439*t9529;
  t13447 = t13005*t13446;
  t13537 = -0.24*t2982*t2517;
  t13538 = t13537 + t13434;
  t13452 = -1.*t13005*t13439;
  t13540 = 0.24*t5*t2982;
  t13541 = t13540 + t13445;
  t13454 = -1.*t13446*t13399;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(-3.2*t11308*t13284 + t2960 - 3.2*t10205*t8020)*var2[0] - 0.5*(t13317 - 3.2*t8020*(t13217 - 1.*t2458*t8882) - 3.2*t11308*(t13320 - 1.*t2458*t9529))*var2[1])*var2[3];
  p_output1[3]=(-0.5*(t13420 + t13423 + t2960)*var2[0] - 0.5*(t13317 + t13392 + t13415)*var2[1] - 0.5*(-3.2*t11308*(t13440 + t13447 + t13446*t8882 + t13435*t9529) - 3.2*t8020*(-1.*t13005*t13435 + t13452 + t13454 - 1.*t13446*t9529))*var2[2])*var2[3];
  p_output1[4]=var2[3]*(-0.5*(t13420 + t13423 - 3.2*t13419*t13486 - 3.2*t13494*(t2458*t8882 + t188*t9529))*var2[0] - 0.5*(t13392 + t13415 - 3.2*t13284*t13486 - 3.2*t10205*t13494)*var2[1] - 0.5*(-3.2*t13494*(-1.*t13005*t13446 - 1.*t13439*t9529) - 3.2*t13486*(t13439*t8882 + t13446*t9529) - 3.2*t11308*(t13440 + t13447 + t13541*t8882 + t13538*t9529) - 3.2*t8020*(t13452 + t13454 - 1.*t13005*t13538 - 1.*t13541*t9529))*var2[2] - 0.5*(-6.4*t11308*t13486 - 6.4*t13494*t8020)*var2[3] + 0.384*t13486*var2[4]);
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

namespace DoubleSupportConstHeight
{

void Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
