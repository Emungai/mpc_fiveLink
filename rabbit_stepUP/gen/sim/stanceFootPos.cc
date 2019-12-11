/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 22:35:39 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
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

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t1125;
  double t1122;
  double t1123;
  double t1126;
  double t1116;
  double t1124;
  double t1127;
  double t1128;
  double t1130;
  double t1131;
  double t1132;
  double t1133;
  double t1120;
  double t1121;
  double t1141;
  double t1142;
  double t1143;
  t1125 = Cos(var1[2]);
  t1122 = Cos(var1[3]);
  t1123 = Sin(var1[2]);
  t1126 = Sin(var1[3]);
  t1116 = Cos(var1[4]);
  t1124 = t1122*t1123;
  t1127 = t1125*t1126;
  t1128 = t1124 + t1127;
  t1130 = t1125*t1122;
  t1131 = -1.*t1123*t1126;
  t1132 = t1130 + t1131;
  t1133 = Sin(var1[4]);
  t1120 = -1.*t1116;
  t1121 = 1. + t1120;
  t1141 = -1.*t1122*t1123;
  t1142 = -1.*t1125*t1126;
  t1143 = t1141 + t1142;
  p_output1[0]=0.4*t1121*t1128 - 0.4*t1132*t1133 + 0.8*(t1116*t1128 + t1132*t1133) + var1[0];
  p_output1[1]=0;
  p_output1[2]=0.4*t1121*t1132 - 0.4*t1133*t1143 + 0.8*(t1116*t1132 + t1133*t1143) + var1[1];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "stanceFootPos.hh"

namespace SymExpression
{

void stanceFootPos_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
