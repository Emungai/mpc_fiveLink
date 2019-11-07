/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:22:51 GMT-05:00
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
  double t11621;
  double t11837;
  double t8889;
  double t11934;
  double t738;
  double t11826;
  double t12000;
  double t12032;
  double t12225;
  double t13392;
  double t13394;
  double t13408;
  double t13437;
  double t13439;
  double t13433;
  double t13438;
  double t13445;
  double t13455;
  double t13526;
  double t13532;
  double t13543;
  double t13554;
  double t795;
  double t7950;
  double t12057;
  double t13415;
  double t13419;
  double t13420;
  double t13422;
  double t13423;
  double t13744;
  double t13792;
  double t13794;
  double t13434;
  double t13435;
  double t13495;
  double t13640;
  double t13655;
  double t13675;
  double t13699;
  double t13706;
  double t13913;
  double t13949;
  double t13950;
  t11621 = Cos(var1[3]);
  t11837 = Sin(var1[2]);
  t8889 = Cos(var1[2]);
  t11934 = Sin(var1[3]);
  t738 = Cos(var1[4]);
  t11826 = t8889*t11621;
  t12000 = -1.*t11837*t11934;
  t12032 = t11826 + t12000;
  t12225 = -1.*t11621*t11837;
  t13392 = -1.*t8889*t11934;
  t13394 = t12225 + t13392;
  t13408 = Sin(var1[4]);
  t13437 = Cos(var1[5]);
  t13439 = Sin(var1[5]);
  t13433 = Cos(var1[6]);
  t13438 = t8889*t13437;
  t13445 = -1.*t11837*t13439;
  t13455 = t13438 + t13445;
  t13526 = -1.*t13437*t11837;
  t13532 = -1.*t8889*t13439;
  t13543 = t13526 + t13532;
  t13554 = Sin(var1[6]);
  t795 = -1.*t738;
  t7950 = 1. + t795;
  t12057 = 0.4*t7950*t12032;
  t13415 = -0.4*t13394*t13408;
  t13419 = t738*t12032;
  t13420 = t13394*t13408;
  t13422 = t13419 + t13420;
  t13423 = 0.8*t13422;
  t13744 = t11621*t11837;
  t13792 = t8889*t11934;
  t13794 = t13744 + t13792;
  t13434 = -1.*t13433;
  t13435 = 1. + t13434;
  t13495 = -0.4*t13435*t13455;
  t13640 = 0.4*t13543*t13554;
  t13655 = t13433*t13455;
  t13675 = t13543*t13554;
  t13699 = t13655 + t13675;
  t13706 = -0.8*t13699;
  t13913 = t13437*t11837;
  t13949 = t8889*t13439;
  t13950 = t13913 + t13949;
  p_output1[0]=t12057 + t13415 + t13423 + t13495 + t13640 + t13706;
  p_output1[1]=t12057 + t13415 + t13423;
  p_output1[2]=0.4*t13408*t13794 + 0.8*(t13419 - 1.*t13408*t13794) - 0.4*t12032*t738;
  p_output1[3]=t13495 + t13640 + t13706;
  p_output1[4]=0.4*t13433*t13455 - 0.4*t13554*t13950 - 0.8*(t13655 - 1.*t13554*t13950);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 5, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_feetPosDiffInitDoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_feetPosDiffInitDoubleSupportConstHeight_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
