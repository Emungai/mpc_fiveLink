/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:28 GMT-05:00
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
  double t305;
  double t309;
  double t310;
  double t311;
  double t321;
  double t322;
  double t325;
  double t328;
  double t333;
  double t335;
  double t336;
  double t338;
  double t360;
  double t361;
  double t362;
  double t363;
  double t365;
  double t368;
  double t388;
  double t395;
  double t407;
  double t408;
  double t327;
  double t329;
  double t330;
  double t332;
  double t340;
  double t342;
  double t343;
  double t344;
  double t354;
  double t355;
  double t358;
  double t454;
  double t458;
  double t461;
  double t366;
  double t369;
  double t370;
  double t376;
  double t412;
  double t418;
  double t419;
  double t432;
  double t433;
  double t437;
  double t443;
  double t478;
  double t479;
  double t480;
  t305 = Sin(var1[2]);
  t309 = Cos(var1[3]);
  t310 = -1.*t309*t305;
  t311 = Cos(var1[2]);
  t321 = Sin(var1[3]);
  t322 = -1.*t311*t321;
  t325 = t310 + t322;
  t328 = Cos(var1[4]);
  t333 = -1.*t311*t309;
  t335 = t305*t321;
  t336 = t333 + t335;
  t338 = Sin(var1[4]);
  t360 = Cos(var1[5]);
  t361 = -1.*t360*t305;
  t362 = Sin(var1[5]);
  t363 = -1.*t311*t362;
  t365 = t361 + t363;
  t368 = Cos(var1[6]);
  t388 = -1.*t311*t360;
  t395 = t305*t362;
  t407 = t388 + t395;
  t408 = Sin(var1[6]);
  t327 = -7.33788*t325;
  t329 = -1.*t328;
  t330 = 1. + t329;
  t332 = 0.4*t330*t325;
  t340 = -0.4*t336*t338;
  t342 = t328*t325;
  t343 = t336*t338;
  t344 = t342 + t343;
  t354 = 0.64*t344;
  t355 = t332 + t340 + t354;
  t358 = -31.392000000000003*t355;
  t454 = t311*t309;
  t458 = -1.*t305*t321;
  t461 = t454 + t458;
  t366 = -7.33788*t365;
  t369 = -1.*t368;
  t370 = 1. + t369;
  t376 = 0.4*t370*t365;
  t412 = -0.4*t407*t408;
  t418 = t368*t365;
  t419 = t407*t408;
  t432 = t418 + t419;
  t433 = 0.64*t432;
  t437 = t376 + t412 + t433;
  t443 = -31.392000000000003*t437;
  t478 = t311*t360;
  t479 = -1.*t305*t362;
  t480 = t478 + t479;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t305 + t327 + t358 + t366 + t443;
  p_output1[3]=t327 + t358;
  p_output1[4]=-31.392000000000003*(-0.4*t325*t328 + 0.4*t338*t461 + 0.64*(t342 - 1.*t338*t461));
  p_output1[5]=t366 + t443;
  p_output1[6]=-31.392000000000003*(-0.4*t365*t368 + 0.4*t408*t480 + 0.64*(t418 - 1.*t408*t480));
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

#include "Ge_vec_five_link_walker.hh"

namespace SymFunction
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
