/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:49 GMT-05:00
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
  double t2696;
  double t2703;
  double t2693;
  double t2709;
  double t2619;
  double t2697;
  double t2714;
  double t2717;
  double t2719;
  double t2720;
  double t2721;
  double t2722;
  double t2651;
  double t2686;
  double t2733;
  double t2736;
  double t2737;
  double t2718;
  double t2725;
  double t2726;
  double t2727;
  double t2728;
  double t2729;
  double t2730;
  double t2731;
  double t2732;
  double t2738;
  double t2739;
  double t2740;
  double t2741;
  double t2742;
  double t2743;
  double t2744;
  double t2745;
  double t2747;
  double t2748;
  double t2749;
  t2696 = Cos(var1[3]);
  t2703 = Sin(var1[2]);
  t2693 = Cos(var1[2]);
  t2709 = Sin(var1[3]);
  t2619 = Cos(var1[4]);
  t2697 = t2693*t2696;
  t2714 = -1.*t2703*t2709;
  t2717 = t2697 + t2714;
  t2719 = -1.*t2696*t2703;
  t2720 = -1.*t2693*t2709;
  t2721 = t2719 + t2720;
  t2722 = Sin(var1[4]);
  t2651 = -1.*t2619;
  t2686 = 1. + t2651;
  t2733 = -1.*t2693*t2696;
  t2736 = t2703*t2709;
  t2737 = t2733 + t2736;
  t2718 = 0.4*t2686*t2717;
  t2725 = -0.4*t2721*t2722;
  t2726 = t2619*t2717;
  t2727 = t2721*t2722;
  t2728 = t2726 + t2727;
  t2729 = 0.8*t2728;
  t2730 = t2718 + t2725 + t2729;
  t2731 = var2[0]*t2730;
  t2732 = 0.4*t2686*t2721;
  t2738 = -0.4*t2737*t2722;
  t2739 = t2619*t2721;
  t2740 = t2737*t2722;
  t2741 = t2739 + t2740;
  t2742 = 0.8*t2741;
  t2743 = t2732 + t2738 + t2742;
  t2744 = var2[2]*t2743;
  t2745 = t2731 + t2744;
  t2747 = t2696*t2703;
  t2748 = t2693*t2709;
  t2749 = t2747 + t2748;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t2745;
  p_output1[3]=t2745;
  p_output1[4]=(-0.4*t2619*t2717 + 0.4*t2722*t2749 + 0.8*(t2726 - 1.*t2722*t2749))*var2[0] + (-0.4*t2619*t2721 + 0.4*t2717*t2722 + 0.8*(-1.*t2717*t2722 + t2739))*var2[2];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_vec_RightStance.hh"

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
