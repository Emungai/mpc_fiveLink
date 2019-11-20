/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:26 GMT-05:00
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
  double t10603;
  double t10627;
  double t10597;
  double t10629;
  double t10586;
  double t10604;
  double t10631;
  double t10632;
  double t10648;
  double t10655;
  double t10656;
  double t10661;
  double t10595;
  double t10596;
  double t10647;
  double t10662;
  double t10663;
  double t10664;
  double t10668;
  double t10669;
  double t10670;
  double t10674;
  double t10675;
  double t10676;
  double t10708;
  double t10715;
  double t10716;
  double t10722;
  double t10714;
  double t10723;
  double t10724;
  double t10725;
  double t10726;
  double t10727;
  t10603 = Cos(var1[3]);
  t10627 = Sin(var1[2]);
  t10597 = Cos(var1[2]);
  t10629 = Sin(var1[3]);
  t10586 = Cos(var1[4]);
  t10604 = t10597*t10603;
  t10631 = -1.*t10627*t10629;
  t10632 = t10604 + t10631;
  t10648 = -1.*t10603*t10627;
  t10655 = -1.*t10597*t10629;
  t10656 = t10648 + t10655;
  t10661 = Sin(var1[4]);
  t10595 = -1.*t10586;
  t10596 = 1. + t10595;
  t10647 = 0.4*t10596*t10632;
  t10662 = -0.4*t10656*t10661;
  t10663 = t10586*t10632;
  t10664 = t10656*t10661;
  t10668 = t10663 + t10664;
  t10669 = 0.8*t10668;
  t10670 = t10647 + t10662 + t10669;
  t10674 = t10603*t10627;
  t10675 = t10597*t10629;
  t10676 = t10674 + t10675;
  t10708 = t10586*t10656;
  t10715 = -1.*t10597*t10603;
  t10716 = t10627*t10629;
  t10722 = t10715 + t10716;
  t10714 = 0.4*t10596*t10656;
  t10723 = -0.4*t10722*t10661;
  t10724 = t10722*t10661;
  t10725 = t10708 + t10724;
  t10726 = 0.8*t10725;
  t10727 = t10714 + t10723 + t10726;
  p_output1[0]=var2[0] + t10670*var2[2] + t10670*var2[3] + (-0.4*t10586*t10632 + 0.4*t10661*t10676 + 0.8*(t10663 - 1.*t10661*t10676))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t10727*var2[2] + t10727*var2[3] + (-0.4*t10586*t10656 + 0.4*t10632*t10661 + 0.8*(-1.*t10632*t10661 + t10708))*var2[4];
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

#include "dh_RightToe_RightStance.hh"

namespace RightStance
{

void dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
