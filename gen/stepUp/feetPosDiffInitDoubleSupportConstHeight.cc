/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:22:49 GMT-05:00
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
  double t4854;
  double t796;
  double t2515;
  double t4951;
  double t5;
  double t2923;
  double t6133;
  double t6824;
  double t9239;
  double t9302;
  double t11091;
  double t11551;
  double t12094;
  double t12186;
  double t12030;
  double t12131;
  double t12199;
  double t12201;
  double t13217;
  double t13284;
  double t13306;
  double t13317;
  t4854 = Cos(var1[2]);
  t796 = Cos(var1[3]);
  t2515 = Sin(var1[2]);
  t4951 = Sin(var1[3]);
  t5 = Cos(var1[4]);
  t2923 = t796*t2515;
  t6133 = t4854*t4951;
  t6824 = t2923 + t6133;
  t9239 = t4854*t796;
  t9302 = -1.*t2515*t4951;
  t11091 = t9239 + t9302;
  t11551 = Sin(var1[4]);
  t12094 = Cos(var1[5]);
  t12186 = Sin(var1[5]);
  t12030 = Cos(var1[6]);
  t12131 = t12094*t2515;
  t12199 = t4854*t12186;
  t12201 = t12131 + t12199;
  t13217 = t4854*t12094;
  t13284 = -1.*t2515*t12186;
  t13306 = t13217 + t13284;
  t13317 = Sin(var1[6]);
  p_output1[0]=-0.4*t11091*t11551 - 0.4*(1. - 1.*t12030)*t12201 + 0.4*t13306*t13317 - 0.8*(t12030*t12201 + t13306*t13317) + 0.4*(1. - 1.*t5)*t6824 + 0.8*(t11091*t11551 + t5*t6824);
  p_output1[1]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "feetPosDiffInitDoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void feetPosDiffInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
