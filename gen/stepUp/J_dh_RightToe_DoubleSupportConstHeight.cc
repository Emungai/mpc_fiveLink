/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:07 GMT-05:00
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
  double t3627;
  double t3544;
  double t3549;
  double t3642;
  double t2972;
  double t3626;
  double t3646;
  double t3653;
  double t3666;
  double t3668;
  double t3671;
  double t5819;
  double t9404;
  double t9416;
  double t9417;
  double t9419;
  double t9413;
  double t9414;
  double t9415;
  double t9420;
  double t9421;
  double t9422;
  double t9423;
  double t9433;
  double t3657;
  double t9403;
  double t9405;
  double t9409;
  double t9410;
  double t9411;
  double t9412;
  double t9434;
  double t9435;
  double t9436;
  double t9439;
  double t9440;
  double t9441;
  double t9451;
  double t9452;
  double t9453;
  double t9454;
  double t9455;
  double t9456;
  double t9457;
  double t9466;
  double t9472;
  double t9473;
  double t9474;
  double t9475;
  double t9476;
  double t9477;
  double t9464;
  double t9465;
  double t9467;
  double t9468;
  double t9469;
  double t9470;
  double t9471;
  double t9478;
  double t9479;
  double t9480;
  t3627 = Cos(var1[2]);
  t3544 = Cos(var1[3]);
  t3549 = Sin(var1[2]);
  t3642 = Sin(var1[3]);
  t2972 = Cos(var1[4]);
  t3626 = -1.*t3544*t3549;
  t3646 = -1.*t3627*t3642;
  t3653 = t3626 + t3646;
  t3666 = t3627*t3544;
  t3668 = -1.*t3549*t3642;
  t3671 = t3666 + t3668;
  t5819 = Sin(var1[4]);
  t9404 = t2972*t3653;
  t9416 = -1.*t3627*t3544;
  t9417 = t3549*t3642;
  t9419 = t9416 + t9417;
  t9413 = -1.*t2972;
  t9414 = 1. + t9413;
  t9415 = 0.4*t9414*t3653;
  t9420 = -0.4*t9419*t5819;
  t9421 = t9419*t5819;
  t9422 = t9404 + t9421;
  t9423 = 0.8*t9422;
  t9433 = t9415 + t9420 + t9423;
  t3657 = -0.4*t2972*t3653;
  t9403 = 0.4*t3671*t5819;
  t9405 = -1.*t3671*t5819;
  t9409 = t9404 + t9405;
  t9410 = 0.8*t9409;
  t9411 = t3657 + t9403 + t9410;
  t9412 = var2[4]*t9411;
  t9434 = var2[2]*t9433;
  t9435 = var2[3]*t9433;
  t9436 = t9412 + t9434 + t9435;
  t9439 = t3544*t3549;
  t9440 = t3627*t3642;
  t9441 = t9439 + t9440;
  t9451 = 0.4*t9414*t3671;
  t9452 = -0.4*t3653*t5819;
  t9453 = t2972*t3671;
  t9454 = t3653*t5819;
  t9455 = t9453 + t9454;
  t9456 = 0.8*t9455;
  t9457 = t9451 + t9452 + t9456;
  t9466 = t2972*t9419;
  t9472 = 0.4*t9414*t9419;
  t9473 = -0.4*t9441*t5819;
  t9474 = t9441*t5819;
  t9475 = t9466 + t9474;
  t9476 = 0.8*t9475;
  t9477 = t9472 + t9473 + t9476;
  t9464 = -0.4*t2972*t9419;
  t9465 = 0.4*t3653*t5819;
  t9467 = -1.*t3653*t5819;
  t9468 = t9466 + t9467;
  t9469 = 0.8*t9468;
  t9470 = t9464 + t9465 + t9469;
  t9471 = var2[4]*t9470;
  t9478 = var2[2]*t9477;
  t9479 = var2[3]*t9477;
  t9480 = t9471 + t9478 + t9479;
  p_output1[0]=t9436;
  p_output1[1]=t9436;
  p_output1[2]=t9411*var2[2] + t9411*var2[3] + (t9403 + 0.4*t2972*t9441 + 0.8*(t9405 - 1.*t2972*t9441))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t9457;
  p_output1[5]=t9457;
  p_output1[6]=-0.4*t2972*t3671 + 0.4*t5819*t9441 + 0.8*(-1.*t5819*t9441 + t9453);
  p_output1[7]=t9480;
  p_output1[8]=t9480;
  p_output1[9]=t9470*var2[2] + t9470*var2[3] + (0.4*t2972*t3671 + t9465 + 0.8*(-1.*t2972*t3671 + t9467))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t9433;
  p_output1[12]=t9433;
  p_output1[13]=t9411;
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

#include "J_dh_RightToe_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_dh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
