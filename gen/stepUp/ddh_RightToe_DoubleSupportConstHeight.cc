/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:10 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t9442;
  double t5803;
  double t9437;
  double t9443;
  double t3248;
  double t9438;
  double t9446;
  double t9447;
  double t9449;
  double t9450;
  double t9458;
  double t9459;
  double t3249;
  double t3819;
  double t9483;
  double t9484;
  double t9485;
  double t9482;
  double t9486;
  double t9487;
  double t9488;
  double t9489;
  double t9490;
  double t9491;
  double t9496;
  double t9497;
  double t9498;
  double t9499;
  double t9500;
  double t9501;
  double t9504;
  double t9505;
  double t9506;
  double t9507;
  double t9508;
  double t9509;
  double t9510;
  double t9523;
  double t9524;
  double t9525;
  double t9522;
  double t9526;
  double t9527;
  double t9528;
  double t9529;
  double t9530;
  double t9521;
  double t9531;
  double t9532;
  double t9533;
  double t9543;
  double t9545;
  double t9550;
  double t9551;
  double t9552;
  double t9553;
  double t9554;
  double t9560;
  double t9561;
  double t9562;
  double t9563;
  double t9564;
  double t9565;
  double t9559;
  double t9566;
  double t9567;
  double t9568;
  t9442 = Cos(var1[2]);
  t5803 = Cos(var1[3]);
  t9437 = Sin(var1[2]);
  t9443 = Sin(var1[3]);
  t3248 = Cos(var1[4]);
  t9438 = t5803*t9437;
  t9446 = t9442*t9443;
  t9447 = t9438 + t9446;
  t9449 = t9442*t5803;
  t9450 = -1.*t9437*t9443;
  t9458 = t9449 + t9450;
  t9459 = Sin(var1[4]);
  t3249 = -1.*t3248;
  t3819 = 1. + t3249;
  t9483 = -1.*t5803*t9437;
  t9484 = -1.*t9442*t9443;
  t9485 = t9483 + t9484;
  t9482 = 0.4*t3819*t9458;
  t9486 = -0.4*t9485*t9459;
  t9487 = t3248*t9458;
  t9488 = t9485*t9459;
  t9489 = t9487 + t9488;
  t9490 = 0.8*t9489;
  t9491 = t9482 + t9486 + t9490;
  t9496 = -0.4*t3248*t9458;
  t9497 = 0.4*t9447*t9459;
  t9498 = -1.*t9447*t9459;
  t9499 = t9487 + t9498;
  t9500 = 0.8*t9499;
  t9501 = t9496 + t9497 + t9500;
  t9504 = -0.4*t3248*t9485;
  t9505 = 0.4*t9458*t9459;
  t9506 = t3248*t9485;
  t9507 = -1.*t9458*t9459;
  t9508 = t9506 + t9507;
  t9509 = 0.8*t9508;
  t9510 = t9504 + t9505 + t9509;
  t9523 = -1.*t9442*t5803;
  t9524 = t9437*t9443;
  t9525 = t9523 + t9524;
  t9522 = 0.4*t3819*t9485;
  t9526 = -0.4*t9525*t9459;
  t9527 = t9525*t9459;
  t9528 = t9506 + t9527;
  t9529 = 0.8*t9528;
  t9530 = t9522 + t9526 + t9529;
  t9521 = var2[4]*t9510;
  t9531 = var2[2]*t9530;
  t9532 = var2[3]*t9530;
  t9533 = t9521 + t9531 + t9532;
  t9543 = 0.4*t9485*t9459;
  t9545 = -1.*t9485*t9459;
  t9550 = -0.4*t3248*t9525;
  t9551 = t3248*t9525;
  t9552 = t9551 + t9545;
  t9553 = 0.8*t9552;
  t9554 = t9550 + t9543 + t9553;
  t9560 = 0.4*t3819*t9525;
  t9561 = -0.4*t9447*t9459;
  t9562 = t9447*t9459;
  t9563 = t9551 + t9562;
  t9564 = 0.8*t9563;
  t9565 = t9560 + t9561 + t9564;
  t9559 = var2[4]*t9554;
  t9566 = var2[2]*t9565;
  t9567 = var2[3]*t9565;
  t9568 = t9559 + t9566 + t9567;
  p_output1[0]=0.4*t3819*t9447 - 0.4*t9458*t9459 + 0.8*(t3248*t9447 + t9458*t9459) + var1[0] + var2[0] + t9491*var2[2] + t9533*var2[2] + t9491*var2[3] + t9533*var2[3] + t9501*var2[4] + var2[4]*(t9510*var2[2] + t9510*var2[3] + (0.4*t3248*t9447 + t9505 + 0.8*(-1.*t3248*t9447 + t9507))*var2[4]) + var3[0] + t9491*var3[2] + t9491*var3[3] + t9501*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t9482 + t9486 + t9490 + t9521 + t9531 + t9532 + var1[1] + var2[1] + t9568*var2[2] + t9568*var2[3] + var2[4]*(t9554*var2[2] + t9554*var2[3] + (0.4*t3248*t9458 + t9543 + 0.8*(-1.*t3248*t9458 + t9545))*var2[4]) + var3[1] + t9530*var3[2] + t9530*var3[3] + t9510*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void ddh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
