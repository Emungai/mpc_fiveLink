/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:34 GMT-05:00
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
  double t424;
  double t501;
  double t393;
  double t404;
  double t390;
  double t403;
  double t426;
  double t427;
  double t457;
  double t458;
  double t459;
  double t541;
  double t545;
  double t546;
  double t556;
  double t557;
  double t559;
  double t561;
  double t563;
  double t564;
  double t565;
  double t502;
  double t503;
  double t510;
  double t511;
  double t517;
  double t518;
  double t569;
  double t576;
  double t577;
  double t578;
  double t579;
  double t566;
  double t572;
  double t580;
  double t394;
  double t416;
  double t417;
  double t418;
  double t547;
  double t603;
  double t604;
  double t605;
  double t652;
  double t653;
  double t658;
  double t636;
  double t637;
  double t638;
  double t640;
  double t641;
  double t648;
  double t683;
  double t684;
  double t685;
  double t687;
  double t688;
  double t689;
  double t520;
  double t552;
  double t602;
  double t608;
  double t609;
  double t610;
  double t615;
  double t620;
  double t625;
  double t631;
  double t632;
  double t633;
  double t649;
  double t659;
  double t736;
  double t737;
  double t674;
  double t739;
  double t740;
  double t676;
  t424 = Cos(var1[6]);
  t501 = Sin(var1[6]);
  t393 = Sin(var1[2]);
  t404 = Sin(var1[5]);
  t390 = Cos(var1[5]);
  t403 = Cos(var1[2]);
  t426 = -1.*t424;
  t427 = 1. + t426;
  t457 = 0.4*t427;
  t458 = 0.64*t424;
  t459 = t457 + t458;
  t541 = t390*t424;
  t545 = -1.*t404*t501;
  t546 = t541 + t545;
  t556 = t459*t424;
  t557 = Power(t501,2);
  t559 = 0.24*t557;
  t561 = t556 + t559;
  t563 = -1.*t424*t404;
  t564 = -1.*t390*t501;
  t565 = t563 + t564;
  t502 = t459*t501;
  t503 = -0.24*t424*t501;
  t510 = t502 + t503;
  t511 = t424*t404;
  t517 = t390*t501;
  t518 = t511 + t517;
  t569 = -1.*t393*t546;
  t576 = -1.*t403*t390;
  t577 = t393*t404;
  t578 = t576 + t577;
  t579 = -0.748*t578;
  t566 = t403*t565;
  t572 = t566 + t569;
  t580 = -1.*t393*t565;
  t394 = -1.*t390*t393;
  t416 = -1.*t403*t404;
  t417 = t394 + t416;
  t418 = -0.748*t417;
  t547 = t403*t546;
  t603 = -1.*t390*t424;
  t604 = t404*t501;
  t605 = t603 + t604;
  t652 = t390*t459;
  t653 = -0.24*t404*t501;
  t658 = t652 + t653;
  t636 = -1.*t459*t404;
  t637 = -0.24*t390*t501;
  t638 = t636 + t637;
  t640 = t459*t404;
  t641 = 0.24*t390*t501;
  t648 = t640 + t641;
  t683 = -1.*t459*t501;
  t684 = 0.24*t424*t501;
  t685 = t683 + t684;
  t687 = Power(t424,2);
  t688 = -0.24*t687;
  t689 = t556 + t688;
  t520 = -1.*t393*t518;
  t552 = t520 + t547;
  t602 = -3.2*t510*t572;
  t608 = t403*t605;
  t609 = t580 + t608;
  t610 = -3.2*t561*t609;
  t615 = t393*t565;
  t620 = t615 + t547;
  t625 = -3.2*t510*t620;
  t631 = t393*t605;
  t632 = t566 + t631;
  t633 = -3.2*t561*t632;
  t649 = t648*t546;
  t659 = t565*t658;
  t736 = -0.24*t424*t404;
  t737 = t736 + t637;
  t674 = -1.*t565*t648;
  t739 = 0.24*t390*t424;
  t740 = t739 + t653;
  t676 = -1.*t658*t605;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t418 - 3.2*t510*t552 - 3.2*t561*t572)*var2[0] - 0.5*(-3.2*t510*(-1.*t403*t518 + t569) + t579 - 3.2*t561*(-1.*t403*t546 + t580))*var2[1])*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*(t418 + t625 + t633)*var2[0] - 0.5*(t579 + t602 + t610)*var2[1] - 0.5*(-3.2*t561*(t546*t638 + t649 + t518*t658 + t659) - 3.2*t510*(-1.*t565*t638 - 1.*t546*t658 + t674 + t676))*var2[2])*var2[5];
  p_output1[6]=var2[5]*(-0.5*(t625 + t633 - 3.2*t620*t685 - 3.2*(t403*t518 + t393*t546)*t689)*var2[0] - 0.5*(t602 + t610 - 3.2*t572*t685 - 3.2*t552*t689)*var2[1] - 0.5*(-3.2*(t518*t648 + t546*t658)*t685 - 3.2*(-1.*t546*t648 - 1.*t565*t658)*t689 - 3.2*t561*(t649 + t659 + t546*t737 + t518*t740) - 3.2*t510*(t674 + t676 - 1.*t565*t737 - 1.*t546*t740))*var2[2] - 0.5*(-6.4*t561*t685 - 6.4*t510*t689)*var2[5] + 0.384*t685*var2[6]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce3_vec6_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
