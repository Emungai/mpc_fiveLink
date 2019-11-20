/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:47 GMT-05:00
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
  double t11401;
  double t4827;
  double t10561;
  double t11416;
  double t2746;
  double t11382;
  double t11427;
  double t11428;
  double t11432;
  double t11437;
  double t11438;
  double t11441;
  double t3636;
  double t3884;
  double t11470;
  double t11480;
  double t11481;
  t11401 = Cos(var1[2]);
  t4827 = Cos(var1[5]);
  t10561 = Sin(var1[2]);
  t11416 = Sin(var1[5]);
  t2746 = Cos(var1[6]);
  t11382 = t4827*t10561;
  t11427 = t11401*t11416;
  t11428 = t11382 + t11427;
  t11432 = t11401*t4827;
  t11437 = -1.*t10561*t11416;
  t11438 = t11432 + t11437;
  t11441 = Sin(var1[6]);
  t3636 = -1.*t2746;
  t3884 = 1. + t3636;
  t11470 = -1.*t4827*t10561;
  t11480 = -1.*t11401*t11416;
  t11481 = t11470 + t11480;
  p_output1[0]=-0.4*t11438*t11441 + 0.8*(t11438*t11441 + t11428*t2746) + 0.4*t11428*t3884 + var1[0] - 1.*var2[0];
  p_output1[1]=-1.*var2[1];
  p_output1[2]=-0.4*t11441*t11481 + 0.8*(t11441*t11481 + t11438*t2746) + 0.4*t11438*t3884 + var1[1] - 1.*var2[2];
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

#include "h_LeftToe_LeftStance.hh"

namespace LeftStance
{

void h_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
