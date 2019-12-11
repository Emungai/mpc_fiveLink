/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:41 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t594;
  double t595;
  double t597;
  double t602;
  double t603;
  double t604;
  double t596;
  double t598;
  double t600;
  double t601;
  double t606;
  double t607;
  double t608;
  double t610;
  double t611;
  double t612;
  double t614;
  double t616;
  t594 = -1.*var3[1];
  t595 = var3[0] + t594;
  t597 = t594 + var1[0];
  t602 = 1/t595;
  t603 = -1.*t602*t597;
  t604 = 1. + t603;
  t596 = Power(t595,-5);
  t598 = Power(t597,5);
  t600 = Power(t595,-4);
  t601 = Power(t597,4);
  t606 = Power(t595,-3);
  t607 = Power(t597,3);
  t608 = Power(t604,2);
  t610 = Power(t595,-2);
  t611 = Power(t597,2);
  t612 = Power(t604,3);
  t614 = Power(t604,4);
  t616 = Power(t604,5);
  p_output1[0]=t616*var2[0] + 5.*t597*t602*t614*var2[4] + 10.*t610*t611*t612*var2[8] + 10.*t606*t607*t608*var2[12] + 5.*t600*t601*t604*var2[16] + t596*t598*var2[20];
  p_output1[1]=t616*var2[1] + 5.*t597*t602*t614*var2[5] + 10.*t610*t611*t612*var2[9] + 10.*t606*t607*t608*var2[13] + 5.*t600*t601*t604*var2[17] + t596*t598*var2[21];
  p_output1[2]=t616*var2[2] + 5.*t597*t602*t614*var2[6] + 10.*t610*t611*t612*var2[10] + 10.*t606*t607*t608*var2[14] + 5.*t600*t601*t604*var2[18] + t596*t598*var2[22];
  p_output1[3]=t616*var2[3] + 5.*t597*t602*t614*var2[7] + 10.*t610*t611*t612*var2[11] + 10.*t606*t607*t608*var2[15] + 5.*t600*t601*t604*var2[19] + t596*t598*var2[23];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "yd_time_RightStance.hh"

namespace SymFunction
{

void yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
