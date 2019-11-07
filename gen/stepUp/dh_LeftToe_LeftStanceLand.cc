/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:26:23 GMT-05:00
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
  double t16421;
  double t16425;
  double t16407;
  double t16426;
  double t13623;
  double t16423;
  double t16428;
  double t16434;
  double t16459;
  double t16460;
  double t16471;
  double t16472;
  double t13624;
  double t15939;
  double t16452;
  double t16474;
  double t16477;
  double t16480;
  double t16481;
  double t16482;
  double t16487;
  double t16500;
  double t16502;
  double t16511;
  double t16584;
  double t16606;
  double t16607;
  double t16611;
  double t16602;
  double t16616;
  double t16619;
  double t16620;
  double t16650;
  double t16667;
  t16421 = Cos(var1[5]);
  t16425 = Sin(var1[2]);
  t16407 = Cos(var1[2]);
  t16426 = Sin(var1[5]);
  t13623 = Cos(var1[6]);
  t16423 = t16407*t16421;
  t16428 = -1.*t16425*t16426;
  t16434 = t16423 + t16428;
  t16459 = -1.*t16421*t16425;
  t16460 = -1.*t16407*t16426;
  t16471 = t16459 + t16460;
  t16472 = Sin(var1[6]);
  t13624 = -1.*t13623;
  t15939 = 1. + t13624;
  t16452 = 0.4*t15939*t16434;
  t16474 = -0.4*t16471*t16472;
  t16477 = t13623*t16434;
  t16480 = t16471*t16472;
  t16481 = t16477 + t16480;
  t16482 = 0.8*t16481;
  t16487 = t16452 + t16474 + t16482;
  t16500 = t16421*t16425;
  t16502 = t16407*t16426;
  t16511 = t16500 + t16502;
  t16584 = t13623*t16471;
  t16606 = -1.*t16407*t16421;
  t16607 = t16425*t16426;
  t16611 = t16606 + t16607;
  t16602 = 0.4*t15939*t16471;
  t16616 = -0.4*t16611*t16472;
  t16619 = t16611*t16472;
  t16620 = t16584 + t16619;
  t16650 = 0.8*t16620;
  t16667 = t16602 + t16616 + t16650;
  p_output1[0]=var2[0] + t16487*var2[2] + t16487*var2[5] + (-0.4*t13623*t16434 + 0.4*t16472*t16511 + 0.8*(t16477 - 1.*t16472*t16511))*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t16667*var2[2] + t16667*var2[5] + (-0.4*t13623*t16471 + 0.4*t16434*t16472 + 0.8*(-1.*t16434*t16472 + t16584))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_LeftToe_LeftStanceLand.hh"

namespace LeftStanceLand
{

void dh_LeftToe_LeftStanceLand_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
