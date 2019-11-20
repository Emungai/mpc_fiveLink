/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:40 GMT-05:00
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
  double t4703;
  double t4534;
  double t4571;
  double t9344;
  double t4275;
  double t4697;
  double t9345;
  double t9346;
  double t9353;
  double t9354;
  double t9355;
  double t9356;
  double t4276;
  double t4412;
  double t9370;
  double t9371;
  double t9372;
  t4703 = Cos(var1[2]);
  t4534 = Cos(var1[5]);
  t4571 = Sin(var1[2]);
  t9344 = Sin(var1[5]);
  t4275 = Cos(var1[6]);
  t4697 = t4534*t4571;
  t9345 = t4703*t9344;
  t9346 = t4697 + t9345;
  t9353 = t4703*t4534;
  t9354 = -1.*t4571*t9344;
  t9355 = t9353 + t9354;
  t9356 = Sin(var1[6]);
  t4276 = -1.*t4275;
  t4412 = 1. + t4276;
  t9370 = -1.*t4534*t4571;
  t9371 = -1.*t4703*t9344;
  t9372 = t9370 + t9371;
  p_output1[0]=0.4*t4412*t9346 - 0.4*t9355*t9356 + 0.8*(t4275*t9346 + t9355*t9356) + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*var2[1];
  p_output1[2]=0.4*t4412*t9355 - 0.4*t9356*t9372 + 0.8*(t4275*t9355 + t9356*t9372) + var1[1] - 1.*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "h_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void h_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
