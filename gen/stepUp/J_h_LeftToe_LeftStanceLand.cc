/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:26:20 GMT-05:00
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
  double t16345;
  double t16352;
  double t16340;
  double t16364;
  double t3046;
  double t16350;
  double t16365;
  double t16367;
  double t16383;
  double t16384;
  double t16388;
  double t16389;
  double t16319;
  double t16339;
  double t16369;
  double t16390;
  double t16394;
  double t16395;
  double t16396;
  double t16402;
  double t16404;
  double t16408;
  double t16409;
  double t16410;
  double t16431;
  double t16442;
  double t16443;
  double t16430;
  double t16444;
  double t16445;
  double t16446;
  double t16447;
  double t16453;
  double t16456;
  t16345 = Cos(var1[5]);
  t16352 = Sin(var1[2]);
  t16340 = Cos(var1[2]);
  t16364 = Sin(var1[5]);
  t3046 = Cos(var1[6]);
  t16350 = t16340*t16345;
  t16365 = -1.*t16352*t16364;
  t16367 = t16350 + t16365;
  t16383 = -1.*t16345*t16352;
  t16384 = -1.*t16340*t16364;
  t16388 = t16383 + t16384;
  t16389 = Sin(var1[6]);
  t16319 = -1.*t3046;
  t16339 = 1. + t16319;
  t16369 = 0.4*t16339*t16367;
  t16390 = -0.4*t16388*t16389;
  t16394 = t3046*t16367;
  t16395 = t16388*t16389;
  t16396 = t16394 + t16395;
  t16402 = 0.8*t16396;
  t16404 = t16369 + t16390 + t16402;
  t16408 = t16345*t16352;
  t16409 = t16340*t16364;
  t16410 = t16408 + t16409;
  t16431 = -1.*t16340*t16345;
  t16442 = t16352*t16364;
  t16443 = t16431 + t16442;
  t16430 = 0.4*t16339*t16388;
  t16444 = -0.4*t16443*t16389;
  t16445 = t3046*t16388;
  t16446 = t16443*t16389;
  t16447 = t16445 + t16446;
  t16453 = 0.8*t16447;
  t16456 = t16430 + t16444 + t16453;
  p_output1[0]=1.;
  p_output1[1]=t16404;
  p_output1[2]=t16404;
  p_output1[3]=0.4*t16389*t16410 + 0.8*(t16394 - 1.*t16389*t16410) - 0.4*t16367*t3046;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t16456;
  p_output1[8]=t16456;
  p_output1[9]=0.4*t16367*t16389 + 0.8*(-1.*t16367*t16389 + t16445) - 0.4*t16388*t3046;
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

#include "J_h_LeftToe_LeftStanceLand.hh"

namespace LeftStanceLand
{

void J_h_LeftToe_LeftStanceLand_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
