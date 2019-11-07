/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:32 GMT-05:00
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
  double t8435;
  double t8441;
  double t8434;
  double t8442;
  double t234;
  double t8436;
  double t8449;
  double t8453;
  double t8480;
  double t8481;
  double t8538;
  double t8615;
  double t8234;
  double t8433;
  double t8457;
  double t8628;
  double t8629;
  double t8630;
  double t8632;
  double t8633;
  double t8634;
  double t8822;
  double t8823;
  double t8828;
  double t8891;
  double t8892;
  double t8901;
  double t8890;
  double t8910;
  double t8911;
  double t8912;
  double t8920;
  double t8921;
  double t8922;
  t8435 = Cos(var1[5]);
  t8441 = Sin(var1[2]);
  t8434 = Cos(var1[2]);
  t8442 = Sin(var1[5]);
  t234 = Cos(var1[6]);
  t8436 = t8434*t8435;
  t8449 = -1.*t8441*t8442;
  t8453 = t8436 + t8449;
  t8480 = -1.*t8435*t8441;
  t8481 = -1.*t8434*t8442;
  t8538 = t8480 + t8481;
  t8615 = Sin(var1[6]);
  t8234 = -1.*t234;
  t8433 = 1. + t8234;
  t8457 = 0.4*t8433*t8453;
  t8628 = -0.4*t8538*t8615;
  t8629 = t234*t8453;
  t8630 = t8538*t8615;
  t8632 = t8629 + t8630;
  t8633 = 0.8*t8632;
  t8634 = t8457 + t8628 + t8633;
  t8822 = t8435*t8441;
  t8823 = t8434*t8442;
  t8828 = t8822 + t8823;
  t8891 = -1.*t8434*t8435;
  t8892 = t8441*t8442;
  t8901 = t8891 + t8892;
  t8890 = 0.4*t8433*t8538;
  t8910 = -0.4*t8901*t8615;
  t8911 = t234*t8538;
  t8912 = t8901*t8615;
  t8920 = t8911 + t8912;
  t8921 = 0.8*t8920;
  t8922 = t8890 + t8910 + t8921;
  p_output1[0]=1.;
  p_output1[1]=t8634;
  p_output1[2]=t8634;
  p_output1[3]=-0.4*t234*t8453 + 0.4*t8615*t8828 + 0.8*(t8629 - 1.*t8615*t8828);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t8922;
  p_output1[8]=t8922;
  p_output1[9]=-0.4*t234*t8538 + 0.4*t8453*t8615 + 0.8*(-1.*t8453*t8615 + t8911);
  p_output1[10]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_LeftToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_h_LeftToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
