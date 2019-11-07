/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:25:13 GMT-05:00
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
  double t6496;
  double t6519;
  double t6489;
  double t6524;
  double t4936;
  double t6508;
  double t6525;
  double t6530;
  double t6533;
  double t6534;
  double t6535;
  double t6536;
  double t6478;
  double t6481;
  double t6532;
  double t6537;
  double t6538;
  double t6539;
  double t6540;
  double t6541;
  double t6542;
  double t6544;
  double t6545;
  double t6546;
  t6496 = Cos(var1[3]);
  t6519 = Sin(var1[2]);
  t6489 = Cos(var1[2]);
  t6524 = Sin(var1[3]);
  t4936 = Cos(var1[4]);
  t6508 = t6489*t6496;
  t6525 = -1.*t6519*t6524;
  t6530 = t6508 + t6525;
  t6533 = -1.*t6496*t6519;
  t6534 = -1.*t6489*t6524;
  t6535 = t6533 + t6534;
  t6536 = Sin(var1[4]);
  t6478 = -1.*t4936;
  t6481 = 1. + t6478;
  t6532 = 0.4*t6481*t6530;
  t6537 = -0.4*t6535*t6536;
  t6538 = t4936*t6530;
  t6539 = t6535*t6536;
  t6540 = t6538 + t6539;
  t6541 = 0.8*t6540;
  t6542 = t6532 + t6537 + t6541;
  t6544 = t6496*t6519;
  t6545 = t6489*t6524;
  t6546 = t6544 + t6545;
  p_output1[0]=1.;
  p_output1[1]=t6542;
  p_output1[2]=t6542;
  p_output1[3]=-0.4*t4936*t6530 + 0.4*t6536*t6546 + 0.8*(t6538 - 1.*t6536*t6546);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_rightFootLength_LeftStanceLift.hh"

namespace LeftStanceLift
{

void J_u_rightFootLength_LeftStanceLift_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
