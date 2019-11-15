/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:44 GMT-05:00
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
  double t11447;
  double t11441;
  double t11442;
  double t11448;
  double t5383;
  double t11443;
  double t11449;
  double t11450;
  double t11452;
  double t11453;
  double t11454;
  double t11455;
  double t11458;
  double t11476;
  double t11477;
  double t11478;
  double t11473;
  double t11474;
  double t11475;
  double t11479;
  double t11480;
  double t11481;
  double t11482;
  double t11483;
  double t11451;
  double t11457;
  double t11459;
  double t11460;
  double t11461;
  double t11471;
  double t11472;
  double t11484;
  double t11485;
  double t11486;
  double t11489;
  double t11490;
  double t11491;
  double t11499;
  double t11500;
  double t11501;
  double t11502;
  double t11503;
  double t11504;
  double t11505;
  double t11514;
  double t11520;
  double t11521;
  double t11522;
  double t11523;
  double t11524;
  double t11525;
  double t11512;
  double t11513;
  double t11515;
  double t11516;
  double t11517;
  double t11518;
  double t11519;
  double t11526;
  double t11527;
  double t11528;
  t11447 = Cos(var1[2]);
  t11441 = Cos(var1[5]);
  t11442 = Sin(var1[2]);
  t11448 = Sin(var1[5]);
  t5383 = Cos(var1[6]);
  t11443 = -1.*t11441*t11442;
  t11449 = -1.*t11447*t11448;
  t11450 = t11443 + t11449;
  t11452 = t11447*t11441;
  t11453 = -1.*t11442*t11448;
  t11454 = t11452 + t11453;
  t11455 = Sin(var1[6]);
  t11458 = t5383*t11450;
  t11476 = -1.*t11447*t11441;
  t11477 = t11442*t11448;
  t11478 = t11476 + t11477;
  t11473 = -1.*t5383;
  t11474 = 1. + t11473;
  t11475 = 0.4*t11474*t11450;
  t11479 = -0.4*t11478*t11455;
  t11480 = t11478*t11455;
  t11481 = t11458 + t11480;
  t11482 = 0.8*t11481;
  t11483 = t11475 + t11479 + t11482;
  t11451 = -0.4*t5383*t11450;
  t11457 = 0.4*t11454*t11455;
  t11459 = -1.*t11454*t11455;
  t11460 = t11458 + t11459;
  t11461 = 0.8*t11460;
  t11471 = t11451 + t11457 + t11461;
  t11472 = var2[6]*t11471;
  t11484 = var2[2]*t11483;
  t11485 = var2[5]*t11483;
  t11486 = t11472 + t11484 + t11485;
  t11489 = t11441*t11442;
  t11490 = t11447*t11448;
  t11491 = t11489 + t11490;
  t11499 = 0.4*t11474*t11454;
  t11500 = -0.4*t11450*t11455;
  t11501 = t5383*t11454;
  t11502 = t11450*t11455;
  t11503 = t11501 + t11502;
  t11504 = 0.8*t11503;
  t11505 = t11499 + t11500 + t11504;
  t11514 = t5383*t11478;
  t11520 = 0.4*t11474*t11478;
  t11521 = -0.4*t11491*t11455;
  t11522 = t11491*t11455;
  t11523 = t11514 + t11522;
  t11524 = 0.8*t11523;
  t11525 = t11520 + t11521 + t11524;
  t11512 = -0.4*t5383*t11478;
  t11513 = 0.4*t11450*t11455;
  t11515 = -1.*t11450*t11455;
  t11516 = t11514 + t11515;
  t11517 = 0.8*t11516;
  t11518 = t11512 + t11513 + t11517;
  t11519 = var2[6]*t11518;
  t11526 = var2[2]*t11525;
  t11527 = var2[5]*t11525;
  t11528 = t11519 + t11526 + t11527;
  p_output1[0]=t11486;
  p_output1[1]=t11486;
  p_output1[2]=t11471*var2[2] + t11471*var2[5] + (t11457 + 0.4*t11491*t5383 + 0.8*(t11459 - 1.*t11491*t5383))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t11505;
  p_output1[5]=t11505;
  p_output1[6]=0.4*t11455*t11491 + 0.8*(-1.*t11455*t11491 + t11501) - 0.4*t11454*t5383;
  p_output1[7]=t11528;
  p_output1[8]=t11528;
  p_output1[9]=t11518*var2[2] + t11518*var2[5] + (t11513 + 0.4*t11454*t5383 + 0.8*(t11515 - 1.*t11454*t5383))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=t11483;
  p_output1[12]=t11483;
  p_output1[13]=t11471;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_LeftToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_dh_LeftToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
