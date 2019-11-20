/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:25 GMT-05:00
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
  double t9074;
  double t9078;
  double t9073;
  double t9081;
  double t2831;
  double t9077;
  double t9082;
  double t9085;
  double t9089;
  double t9095;
  double t9096;
  double t9097;
  double t4812;
  double t9060;
  double t9086;
  double t9098;
  double t9099;
  double t9100;
  double t9101;
  double t9102;
  double t9103;
  double t9105;
  double t9106;
  double t9107;
  double t9114;
  double t9115;
  double t9116;
  double t9113;
  double t9117;
  double t9118;
  double t9119;
  double t9120;
  double t9121;
  double t9122;
  t9074 = Cos(var1[3]);
  t9078 = Sin(var1[2]);
  t9073 = Cos(var1[2]);
  t9081 = Sin(var1[3]);
  t2831 = Cos(var1[4]);
  t9077 = t9073*t9074;
  t9082 = -1.*t9078*t9081;
  t9085 = t9077 + t9082;
  t9089 = -1.*t9074*t9078;
  t9095 = -1.*t9073*t9081;
  t9096 = t9089 + t9095;
  t9097 = Sin(var1[4]);
  t4812 = -1.*t2831;
  t9060 = 1. + t4812;
  t9086 = 0.4*t9060*t9085;
  t9098 = -0.4*t9096*t9097;
  t9099 = t2831*t9085;
  t9100 = t9096*t9097;
  t9101 = t9099 + t9100;
  t9102 = 0.8*t9101;
  t9103 = t9086 + t9098 + t9102;
  t9105 = t9074*t9078;
  t9106 = t9073*t9081;
  t9107 = t9105 + t9106;
  t9114 = -1.*t9073*t9074;
  t9115 = t9078*t9081;
  t9116 = t9114 + t9115;
  t9113 = 0.4*t9060*t9096;
  t9117 = -0.4*t9116*t9097;
  t9118 = t2831*t9096;
  t9119 = t9116*t9097;
  t9120 = t9118 + t9119;
  t9121 = 0.8*t9120;
  t9122 = t9113 + t9117 + t9121;
  p_output1[0]=1.;
  p_output1[1]=t9103;
  p_output1[2]=t9103;
  p_output1[3]=-0.4*t2831*t9085 + 0.4*t9097*t9107 + 0.8*(t9099 - 1.*t9097*t9107);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t9122;
  p_output1[8]=t9122;
  p_output1[9]=-0.4*t2831*t9096 + 0.4*t9085*t9097 + 0.8*(-1.*t9085*t9097 + t9118);
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

#include "J_h_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_h_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
