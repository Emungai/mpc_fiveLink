/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:47 GMT-05:00
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
  double t3170;
  double t3183;
  double t3149;
  double t3333;
  double t437;
  double t3172;
  double t3470;
  double t3507;
  double t3527;
  double t3539;
  double t3631;
  double t3634;
  double t2754;
  double t3093;
  double t3514;
  double t3637;
  double t3702;
  double t3811;
  double t3827;
  double t3829;
  double t3833;
  double t3840;
  double t3841;
  double t3846;
  t3170 = Cos(var1[5]);
  t3183 = Sin(var1[2]);
  t3149 = Cos(var1[2]);
  t3333 = Sin(var1[5]);
  t437 = Cos(var1[6]);
  t3172 = t3149*t3170;
  t3470 = -1.*t3183*t3333;
  t3507 = t3172 + t3470;
  t3527 = -1.*t3170*t3183;
  t3539 = -1.*t3149*t3333;
  t3631 = t3527 + t3539;
  t3634 = Sin(var1[6]);
  t2754 = -1.*t437;
  t3093 = 1. + t2754;
  t3514 = 0.4*t3093*t3507;
  t3637 = -0.4*t3631*t3634;
  t3702 = t437*t3507;
  t3811 = t3631*t3634;
  t3827 = t3702 + t3811;
  t3829 = 0.8*t3827;
  t3833 = t3514 + t3637 + t3829;
  t3840 = t3170*t3183;
  t3841 = t3149*t3333;
  t3846 = t3840 + t3841;
  p_output1[0]=1.;
  p_output1[1]=t3833;
  p_output1[2]=t3833;
  p_output1[3]=0.4*t3634*t3846 + 0.8*(t3702 - 1.*t3634*t3846) - 0.4*t3507*t437;
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

#include "J_feetPosInitDoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_feetPosInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
