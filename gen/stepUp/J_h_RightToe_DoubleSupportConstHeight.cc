/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:03 GMT-05:00
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
  double t9311;
  double t9313;
  double t9310;
  double t9314;
  double t3132;
  double t9312;
  double t9315;
  double t9316;
  double t9321;
  double t9322;
  double t9323;
  double t9324;
  double t9303;
  double t9309;
  double t9317;
  double t9325;
  double t9326;
  double t9327;
  double t9328;
  double t9329;
  double t9330;
  double t9332;
  double t9333;
  double t9334;
  double t9341;
  double t9342;
  double t9343;
  double t9340;
  double t9344;
  double t9345;
  double t9346;
  double t9347;
  double t9348;
  double t9349;
  t9311 = Cos(var1[3]);
  t9313 = Sin(var1[2]);
  t9310 = Cos(var1[2]);
  t9314 = Sin(var1[3]);
  t3132 = Cos(var1[4]);
  t9312 = t9310*t9311;
  t9315 = -1.*t9313*t9314;
  t9316 = t9312 + t9315;
  t9321 = -1.*t9311*t9313;
  t9322 = -1.*t9310*t9314;
  t9323 = t9321 + t9322;
  t9324 = Sin(var1[4]);
  t9303 = -1.*t3132;
  t9309 = 1. + t9303;
  t9317 = 0.4*t9309*t9316;
  t9325 = -0.4*t9323*t9324;
  t9326 = t3132*t9316;
  t9327 = t9323*t9324;
  t9328 = t9326 + t9327;
  t9329 = 0.8*t9328;
  t9330 = t9317 + t9325 + t9329;
  t9332 = t9311*t9313;
  t9333 = t9310*t9314;
  t9334 = t9332 + t9333;
  t9341 = -1.*t9310*t9311;
  t9342 = t9313*t9314;
  t9343 = t9341 + t9342;
  t9340 = 0.4*t9309*t9323;
  t9344 = -0.4*t9343*t9324;
  t9345 = t3132*t9323;
  t9346 = t9343*t9324;
  t9347 = t9345 + t9346;
  t9348 = 0.8*t9347;
  t9349 = t9340 + t9344 + t9348;
  p_output1[0]=1.;
  p_output1[1]=t9330;
  p_output1[2]=t9330;
  p_output1[3]=-0.4*t3132*t9316 + 0.4*t9324*t9334 + 0.8*(t9326 - 1.*t9324*t9334);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t9349;
  p_output1[8]=t9349;
  p_output1[9]=-0.4*t3132*t9323 + 0.4*t9316*t9324 + 0.8*(-1.*t9316*t9324 + t9345);
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

namespace Pattern[DS1, Blank[opt]]
{

void J_h_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
