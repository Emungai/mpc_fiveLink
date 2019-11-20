/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:18 GMT-05:00
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
  double t10339;
  double t10346;
  double t10338;
  double t10347;
  double t4395;
  double t10342;
  double t10352;
  double t10353;
  double t10355;
  double t10366;
  double t10367;
  double t10377;
  double t10325;
  double t10335;
  double t10396;
  double t10398;
  double t10400;
  double t10354;
  double t10378;
  double t10379;
  double t10380;
  double t10381;
  double t10384;
  double t10387;
  double t10395;
  double t10405;
  double t10406;
  double t10409;
  double t10410;
  double t10413;
  double t10417;
  double t10418;
  double t10423;
  double t10424;
  double t10452;
  double t10455;
  double t10458;
  double t10425;
  double t10426;
  double t10437;
  double t10438;
  double t10448;
  double t10449;
  double t10450;
  double t10451;
  double t10466;
  double t10467;
  double t10470;
  double t10471;
  double t10472;
  double t10473;
  double t10474;
  double t10475;
  double t10476;
  double t10485;
  double t10493;
  double t10497;
  double t10502;
  double t10504;
  t10339 = Cos(var1[3]);
  t10346 = Sin(var1[2]);
  t10338 = Cos(var1[2]);
  t10347 = Sin(var1[3]);
  t4395 = Cos(var1[4]);
  t10342 = -1.*t10338*t10339;
  t10352 = t10346*t10347;
  t10353 = t10342 + t10352;
  t10355 = t10339*t10346;
  t10366 = t10338*t10347;
  t10367 = t10355 + t10366;
  t10377 = Sin(var1[4]);
  t10325 = -1.*t4395;
  t10335 = 1. + t10325;
  t10396 = -1.*t10339*t10346;
  t10398 = -1.*t10338*t10347;
  t10400 = t10396 + t10398;
  t10354 = 0.4*t10335*t10353;
  t10378 = -0.4*t10367*t10377;
  t10379 = t4395*t10353;
  t10380 = t10367*t10377;
  t10381 = t10379 + t10380;
  t10384 = 0.8*t10381;
  t10387 = t10354 + t10378 + t10384;
  t10395 = var2[2]*t10387;
  t10405 = 0.4*t10335*t10400;
  t10406 = -0.4*t10353*t10377;
  t10409 = t4395*t10400;
  t10410 = t10353*t10377;
  t10413 = t10409 + t10410;
  t10417 = 0.8*t10413;
  t10418 = t10405 + t10406 + t10417;
  t10423 = var2[0]*t10418;
  t10424 = t10395 + t10423;
  t10452 = t10338*t10339;
  t10455 = -1.*t10346*t10347;
  t10458 = t10452 + t10455;
  t10425 = -0.4*t4395*t10353;
  t10426 = 0.4*t10400*t10377;
  t10437 = -1.*t10400*t10377;
  t10438 = t10379 + t10437;
  t10448 = 0.8*t10438;
  t10449 = t10425 + t10426 + t10448;
  t10450 = var2[2]*t10449;
  t10451 = -0.4*t4395*t10400;
  t10466 = 0.4*t10458*t10377;
  t10467 = -1.*t10458*t10377;
  t10470 = t10409 + t10467;
  t10471 = 0.8*t10470;
  t10472 = t10451 + t10466 + t10471;
  t10473 = var2[0]*t10472;
  t10474 = t10450 + t10473;
  t10475 = 0.4*t10335*t10458;
  t10476 = -0.4*t10400*t10377;
  t10485 = t4395*t10458;
  t10493 = t10400*t10377;
  t10497 = t10485 + t10493;
  t10502 = 0.8*t10497;
  t10504 = t10475 + t10476 + t10502;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t10424;
  p_output1[3]=t10424;
  p_output1[4]=t10474;
  p_output1[5]=t10504;
  p_output1[6]=t10418;
  p_output1[7]=t10424;
  p_output1[8]=t10424;
  p_output1[9]=t10474;
  p_output1[10]=t10504;
  p_output1[11]=t10418;
  p_output1[12]=t10474;
  p_output1[13]=t10474;
  p_output1[14]=(t10466 + 0.4*t10367*t4395 + 0.8*(t10467 - 1.*t10367*t4395))*var2[0] + (t10426 + 0.4*t10458*t4395 + 0.8*(t10437 - 1.*t10458*t4395))*var2[2];
  p_output1[15]=0.4*t10367*t10377 + 0.8*(-1.*t10367*t10377 + t10485) - 0.4*t10458*t4395;
  p_output1[16]=t10472;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_RightStance.hh"

namespace RightStance
{

void J_fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
