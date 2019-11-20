/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:47 GMT-05:00
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
  double t9459;
  double t9453;
  double t9454;
  double t9460;
  double t2617;
  double t9455;
  double t9461;
  double t9462;
  double t9464;
  double t9465;
  double t9466;
  double t9467;
  double t9470;
  double t9488;
  double t9489;
  double t9490;
  double t9485;
  double t9486;
  double t9487;
  double t9491;
  double t9492;
  double t9493;
  double t9494;
  double t9495;
  double t9463;
  double t9469;
  double t9471;
  double t9472;
  double t9473;
  double t9483;
  double t9484;
  double t9496;
  double t9497;
  double t9498;
  double t9501;
  double t9502;
  double t9503;
  double t9511;
  double t9512;
  double t9513;
  double t9514;
  double t9515;
  double t9516;
  double t9517;
  double t9526;
  double t9532;
  double t9533;
  double t9534;
  double t9535;
  double t9536;
  double t9537;
  double t9524;
  double t9525;
  double t9527;
  double t9528;
  double t9529;
  double t9530;
  double t9531;
  double t9538;
  double t9539;
  double t9540;
  t9459 = Cos(var1[2]);
  t9453 = Cos(var1[5]);
  t9454 = Sin(var1[2]);
  t9460 = Sin(var1[5]);
  t2617 = Cos(var1[6]);
  t9455 = -1.*t9453*t9454;
  t9461 = -1.*t9459*t9460;
  t9462 = t9455 + t9461;
  t9464 = t9459*t9453;
  t9465 = -1.*t9454*t9460;
  t9466 = t9464 + t9465;
  t9467 = Sin(var1[6]);
  t9470 = t2617*t9462;
  t9488 = -1.*t9459*t9453;
  t9489 = t9454*t9460;
  t9490 = t9488 + t9489;
  t9485 = -1.*t2617;
  t9486 = 1. + t9485;
  t9487 = 0.4*t9486*t9462;
  t9491 = -0.4*t9490*t9467;
  t9492 = t9490*t9467;
  t9493 = t9470 + t9492;
  t9494 = 0.8*t9493;
  t9495 = t9487 + t9491 + t9494;
  t9463 = -0.4*t2617*t9462;
  t9469 = 0.4*t9466*t9467;
  t9471 = -1.*t9466*t9467;
  t9472 = t9470 + t9471;
  t9473 = 0.8*t9472;
  t9483 = t9463 + t9469 + t9473;
  t9484 = var2[6]*t9483;
  t9496 = var2[2]*t9495;
  t9497 = var2[5]*t9495;
  t9498 = t9484 + t9496 + t9497;
  t9501 = t9453*t9454;
  t9502 = t9459*t9460;
  t9503 = t9501 + t9502;
  t9511 = 0.4*t9486*t9466;
  t9512 = -0.4*t9462*t9467;
  t9513 = t2617*t9466;
  t9514 = t9462*t9467;
  t9515 = t9513 + t9514;
  t9516 = 0.8*t9515;
  t9517 = t9511 + t9512 + t9516;
  t9526 = t2617*t9490;
  t9532 = 0.4*t9486*t9490;
  t9533 = -0.4*t9503*t9467;
  t9534 = t9503*t9467;
  t9535 = t9526 + t9534;
  t9536 = 0.8*t9535;
  t9537 = t9532 + t9533 + t9536;
  t9524 = -0.4*t2617*t9490;
  t9525 = 0.4*t9462*t9467;
  t9527 = -1.*t9462*t9467;
  t9528 = t9526 + t9527;
  t9529 = 0.8*t9528;
  t9530 = t9524 + t9525 + t9529;
  t9531 = var2[6]*t9530;
  t9538 = var2[2]*t9537;
  t9539 = var2[5]*t9537;
  t9540 = t9531 + t9538 + t9539;
  p_output1[0]=t9498;
  p_output1[1]=t9498;
  p_output1[2]=t9483*var2[2] + t9483*var2[5] + (t9469 + 0.4*t2617*t9503 + 0.8*(t9471 - 1.*t2617*t9503))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t9517;
  p_output1[5]=t9517;
  p_output1[6]=-0.4*t2617*t9466 + 0.4*t9467*t9503 + 0.8*(-1.*t9467*t9503 + t9513);
  p_output1[7]=t9540;
  p_output1[8]=t9540;
  p_output1[9]=t9530*var2[2] + t9530*var2[5] + (0.4*t2617*t9466 + t9525 + 0.8*(-1.*t2617*t9466 + t9527))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=t9495;
  p_output1[12]=t9495;
  p_output1[13]=t9483;
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_dh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
