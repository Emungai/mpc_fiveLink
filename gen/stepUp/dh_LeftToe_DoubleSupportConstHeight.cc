/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:46 GMT-05:00
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
  double t9422;
  double t9438;
  double t9421;
  double t9439;
  double t9415;
  double t9427;
  double t9440;
  double t9441;
  double t9443;
  double t9444;
  double t9445;
  double t9446;
  double t9419;
  double t9420;
  double t9442;
  double t9447;
  double t9448;
  double t9449;
  double t9450;
  double t9451;
  double t9452;
  double t9456;
  double t9457;
  double t9458;
  double t9468;
  double t9475;
  double t9476;
  double t9477;
  double t9474;
  double t9478;
  double t9479;
  double t9480;
  double t9481;
  double t9482;
  t9422 = Cos(var1[5]);
  t9438 = Sin(var1[2]);
  t9421 = Cos(var1[2]);
  t9439 = Sin(var1[5]);
  t9415 = Cos(var1[6]);
  t9427 = t9421*t9422;
  t9440 = -1.*t9438*t9439;
  t9441 = t9427 + t9440;
  t9443 = -1.*t9422*t9438;
  t9444 = -1.*t9421*t9439;
  t9445 = t9443 + t9444;
  t9446 = Sin(var1[6]);
  t9419 = -1.*t9415;
  t9420 = 1. + t9419;
  t9442 = 0.4*t9420*t9441;
  t9447 = -0.4*t9445*t9446;
  t9448 = t9415*t9441;
  t9449 = t9445*t9446;
  t9450 = t9448 + t9449;
  t9451 = 0.8*t9450;
  t9452 = t9442 + t9447 + t9451;
  t9456 = t9422*t9438;
  t9457 = t9421*t9439;
  t9458 = t9456 + t9457;
  t9468 = t9415*t9445;
  t9475 = -1.*t9421*t9422;
  t9476 = t9438*t9439;
  t9477 = t9475 + t9476;
  t9474 = 0.4*t9420*t9445;
  t9478 = -0.4*t9477*t9446;
  t9479 = t9477*t9446;
  t9480 = t9468 + t9479;
  t9481 = 0.8*t9480;
  t9482 = t9474 + t9478 + t9481;
  p_output1[0]=var2[0] + t9452*var2[2] + t9452*var2[5] + (-0.4*t9415*t9441 + 0.4*t9446*t9458 + 0.8*(t9448 - 1.*t9446*t9458))*var2[6];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t9482*var2[2] + t9482*var2[5] + (-0.4*t9415*t9445 + 0.4*t9441*t9446 + 0.8*(-1.*t9441*t9446 + t9468))*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void dh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
