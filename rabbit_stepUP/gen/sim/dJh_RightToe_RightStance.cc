/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:33 GMT-05:00
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
  double t543;
  double t538;
  double t539;
  double t544;
  double t532;
  double t542;
  double t545;
  double t546;
  double t548;
  double t549;
  double t550;
  double t551;
  double t553;
  double t562;
  double t563;
  double t564;
  double t559;
  double t560;
  double t561;
  double t565;
  double t566;
  double t567;
  double t568;
  double t569;
  double t575;
  double t582;
  double t583;
  double t584;
  double t581;
  double t585;
  double t586;
  double t587;
  double t588;
  double t589;
  double t547;
  double t552;
  double t554;
  double t555;
  double t556;
  double t557;
  double t558;
  double t570;
  double t571;
  double t572;
  double t573;
  double t574;
  double t576;
  double t577;
  double t578;
  double t579;
  double t580;
  double t590;
  double t591;
  double t592;
  t543 = Cos(var1[2]);
  t538 = Cos(var1[3]);
  t539 = Sin(var1[2]);
  t544 = Sin(var1[3]);
  t532 = Cos(var1[4]);
  t542 = -1.*t538*t539;
  t545 = -1.*t543*t544;
  t546 = t542 + t545;
  t548 = t543*t538;
  t549 = -1.*t539*t544;
  t550 = t548 + t549;
  t551 = Sin(var1[4]);
  t553 = t532*t546;
  t562 = -1.*t543*t538;
  t563 = t539*t544;
  t564 = t562 + t563;
  t559 = -1.*t532;
  t560 = 1. + t559;
  t561 = 0.4*t560*t546;
  t565 = -0.4*t564*t551;
  t566 = t564*t551;
  t567 = t553 + t566;
  t568 = 0.8*t567;
  t569 = t561 + t565 + t568;
  t575 = t532*t564;
  t582 = t538*t539;
  t583 = t543*t544;
  t584 = t582 + t583;
  t581 = 0.4*t560*t564;
  t585 = -0.4*t584*t551;
  t586 = t584*t551;
  t587 = t575 + t586;
  t588 = 0.8*t587;
  t589 = t581 + t585 + t588;
  t547 = -0.4*t532*t546;
  t552 = 0.4*t550*t551;
  t554 = -1.*t550*t551;
  t555 = t553 + t554;
  t556 = 0.8*t555;
  t557 = t547 + t552 + t556;
  t558 = var2[4]*t557;
  t570 = var2[2]*t569;
  t571 = var2[3]*t569;
  t572 = t558 + t570 + t571;
  t573 = -0.4*t532*t564;
  t574 = 0.4*t546*t551;
  t576 = -1.*t546*t551;
  t577 = t575 + t576;
  t578 = 0.8*t577;
  t579 = t573 + t574 + t578;
  t580 = var2[4]*t579;
  t590 = var2[2]*t589;
  t591 = var2[3]*t589;
  t592 = t580 + t590 + t591;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t572;
  p_output1[7]=0;
  p_output1[8]=t592;
  p_output1[9]=t572;
  p_output1[10]=0;
  p_output1[11]=t592;
  p_output1[12]=t557*var2[2] + t557*var2[3] + (t552 + 0.4*t532*t584 + 0.8*(t554 - 1.*t532*t584))*var2[4];
  p_output1[13]=0;
  p_output1[14]=t579*var2[2] + t579*var2[3] + (0.4*t532*t550 + t574 + 0.8*(-1.*t532*t550 + t576))*var2[4];
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJh_RightToe_RightStance.hh"

namespace SymFunction
{

void dJh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
