/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:49 GMT-05:00
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
  double t11449;
  double t11455;
  double t11445;
  double t11456;
  double t2745;
  double t11450;
  double t11457;
  double t11458;
  double t11482;
  double t11483;
  double t11484;
  double t11487;
  double t11430;
  double t11442;
  double t11469;
  double t11490;
  double t11498;
  double t11499;
  double t11501;
  double t11503;
  double t11508;
  double t11512;
  double t11513;
  double t11516;
  double t11540;
  double t11541;
  double t11551;
  double t11529;
  double t11552;
  double t11553;
  double t11554;
  double t11555;
  double t11558;
  double t11561;
  t11449 = Cos(var1[5]);
  t11455 = Sin(var1[2]);
  t11445 = Cos(var1[2]);
  t11456 = Sin(var1[5]);
  t2745 = Cos(var1[6]);
  t11450 = t11445*t11449;
  t11457 = -1.*t11455*t11456;
  t11458 = t11450 + t11457;
  t11482 = -1.*t11449*t11455;
  t11483 = -1.*t11445*t11456;
  t11484 = t11482 + t11483;
  t11487 = Sin(var1[6]);
  t11430 = -1.*t2745;
  t11442 = 1. + t11430;
  t11469 = 0.4*t11442*t11458;
  t11490 = -0.4*t11484*t11487;
  t11498 = t2745*t11458;
  t11499 = t11484*t11487;
  t11501 = t11498 + t11499;
  t11503 = 0.8*t11501;
  t11508 = t11469 + t11490 + t11503;
  t11512 = t11449*t11455;
  t11513 = t11445*t11456;
  t11516 = t11512 + t11513;
  t11540 = -1.*t11445*t11449;
  t11541 = t11455*t11456;
  t11551 = t11540 + t11541;
  t11529 = 0.4*t11442*t11484;
  t11552 = -0.4*t11551*t11487;
  t11553 = t2745*t11484;
  t11554 = t11551*t11487;
  t11555 = t11553 + t11554;
  t11558 = 0.8*t11555;
  t11561 = t11529 + t11552 + t11558;
  p_output1[0]=1.;
  p_output1[1]=t11508;
  p_output1[2]=t11508;
  p_output1[3]=0.4*t11487*t11516 + 0.8*(t11498 - 1.*t11487*t11516) - 0.4*t11458*t2745;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t11561;
  p_output1[8]=t11561;
  p_output1[9]=0.4*t11458*t11487 + 0.8*(-1.*t11458*t11487 + t11553) - 0.4*t11484*t2745;
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

#include "J_h_LeftToe_LeftStance.hh"

namespace LeftStance
{

void J_h_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
