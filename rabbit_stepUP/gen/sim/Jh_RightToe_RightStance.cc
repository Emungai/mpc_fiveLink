/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:31 GMT-05:00
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
  double t473;
  double t475;
  double t472;
  double t476;
  double t307;
  double t474;
  double t477;
  double t478;
  double t492;
  double t496;
  double t501;
  double t503;
  double t444;
  double t470;
  double t511;
  double t512;
  double t513;
  double t481;
  double t504;
  double t505;
  double t506;
  double t507;
  double t508;
  double t509;
  double t510;
  double t514;
  double t515;
  double t528;
  double t529;
  double t530;
  double t531;
  double t535;
  double t536;
  double t537;
  t473 = Cos(var1[3]);
  t475 = Sin(var1[2]);
  t472 = Cos(var1[2]);
  t476 = Sin(var1[3]);
  t307 = Cos(var1[4]);
  t474 = t472*t473;
  t477 = -1.*t475*t476;
  t478 = t474 + t477;
  t492 = -1.*t473*t475;
  t496 = -1.*t472*t476;
  t501 = t492 + t496;
  t503 = Sin(var1[4]);
  t444 = -1.*t307;
  t470 = 1. + t444;
  t511 = -1.*t472*t473;
  t512 = t475*t476;
  t513 = t511 + t512;
  t481 = 0.4*t470*t478;
  t504 = -0.4*t501*t503;
  t505 = t307*t478;
  t506 = t501*t503;
  t507 = t505 + t506;
  t508 = 0.8*t507;
  t509 = t481 + t504 + t508;
  t510 = 0.4*t470*t501;
  t514 = -0.4*t513*t503;
  t515 = t307*t501;
  t528 = t513*t503;
  t529 = t515 + t528;
  t530 = 0.8*t529;
  t531 = t510 + t514 + t530;
  t535 = t473*t475;
  t536 = t472*t476;
  t537 = t535 + t536;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t509;
  p_output1[7]=0;
  p_output1[8]=t531;
  p_output1[9]=t509;
  p_output1[10]=0;
  p_output1[11]=t531;
  p_output1[12]=-0.4*t307*t478 + 0.4*t503*t537 + 0.8*(t505 - 1.*t503*t537);
  p_output1[13]=0;
  p_output1[14]=-0.4*t307*t501 + 0.4*t478*t503 + 0.8*(-1.*t478*t503 + t515);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightToe_RightStance.hh"

namespace SymFunction
{

void Jh_RightToe_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
