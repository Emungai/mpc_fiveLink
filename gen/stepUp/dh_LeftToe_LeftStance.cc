/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:53 GMT-05:00
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
  double t8900;
  double t11520;
  double t8896;
  double t11521;
  double t3102;
  double t11509;
  double t11526;
  double t11527;
  double t11569;
  double t11570;
  double t11573;
  double t11574;
  double t8621;
  double t8622;
  double t11528;
  double t11575;
  double t11576;
  double t11577;
  double t11578;
  double t11579;
  double t11588;
  double t11607;
  double t11608;
  double t11609;
  double t11638;
  double t11651;
  double t11652;
  double t11660;
  double t11650;
  double t11661;
  double t11665;
  double t11666;
  double t11669;
  double t11670;
  t8900 = Cos(var1[5]);
  t11520 = Sin(var1[2]);
  t8896 = Cos(var1[2]);
  t11521 = Sin(var1[5]);
  t3102 = Cos(var1[6]);
  t11509 = t8896*t8900;
  t11526 = -1.*t11520*t11521;
  t11527 = t11509 + t11526;
  t11569 = -1.*t8900*t11520;
  t11570 = -1.*t8896*t11521;
  t11573 = t11569 + t11570;
  t11574 = Sin(var1[6]);
  t8621 = -1.*t3102;
  t8622 = 1. + t8621;
  t11528 = 0.4*t8622*t11527;
  t11575 = -0.4*t11573*t11574;
  t11576 = t3102*t11527;
  t11577 = t11573*t11574;
  t11578 = t11576 + t11577;
  t11579 = 0.8*t11578;
  t11588 = t11528 + t11575 + t11579;
  t11607 = t8900*t11520;
  t11608 = t8896*t11521;
  t11609 = t11607 + t11608;
  t11638 = t3102*t11573;
  t11651 = -1.*t8896*t8900;
  t11652 = t11520*t11521;
  t11660 = t11651 + t11652;
  t11650 = 0.4*t8622*t11573;
  t11661 = -0.4*t11660*t11574;
  t11665 = t11660*t11574;
  t11666 = t11638 + t11665;
  t11669 = 0.8*t11666;
  t11670 = t11650 + t11661 + t11669;
  p_output1[0]=var2[0] + t11588*var2[2] + t11588*var2[5] + (0.4*t11574*t11609 + 0.8*(t11576 - 1.*t11574*t11609) - 0.4*t11527*t3102)*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t11670*var2[2] + t11670*var2[5] + (0.4*t11527*t11574 + 0.8*(-1.*t11527*t11574 + t11638) - 0.4*t11573*t3102)*var2[6];
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

#include "dh_LeftToe_LeftStance.hh"

namespace LeftStance
{

void dh_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
