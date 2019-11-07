/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:35 GMT-05:00
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
  double t581;
  double t573;
  double t574;
  double t582;
  double t594;
  double t575;
  double t587;
  double t592;
  double t555;
  double t597;
  double t598;
  double t599;
  double t673;
  double t675;
  double t677;
  double t678;
  double t679;
  double t694;
  double t695;
  double t697;
  double t593;
  double t634;
  double t714;
  double t715;
  double t717;
  double t681;
  double t690;
  double t691;
  double t692;
  double t693;
  double t698;
  double t702;
  double t703;
  double t704;
  double t718;
  double t731;
  double t732;
  double t733;
  double t734;
  double t735;
  t581 = Cos(var1[5]);
  t573 = Cos(var1[6]);
  t574 = Sin(var1[5]);
  t582 = Sin(var1[6]);
  t594 = Cos(var1[2]);
  t575 = -1.*t573*t574;
  t587 = -1.*t581*t582;
  t592 = t575 + t587;
  t555 = Sin(var1[2]);
  t597 = t581*t573;
  t598 = -1.*t574*t582;
  t599 = t597 + t598;
  t673 = -1.*t573;
  t675 = 1. + t673;
  t677 = 0.4*t675;
  t678 = 0.64*t573;
  t679 = t677 + t678;
  t694 = t581*t679;
  t695 = -0.24*t574*t582;
  t697 = t694 + t695;
  t593 = -1.*t555*t592;
  t634 = t594*t592;
  t714 = -1.*t581*t573;
  t715 = t574*t582;
  t717 = t714 + t715;
  t681 = -0.24*t581*t582;
  t690 = t679*t574;
  t691 = 0.24*t581*t582;
  t692 = t690 + t691;
  t693 = t692*t599;
  t698 = t592*t697;
  t702 = t573*t574;
  t703 = t581*t582;
  t704 = t702 + t703;
  t718 = t594*t717;
  t731 = t593 + t718;
  t732 = 0.384*var2[1]*t731;
  t733 = t555*t717;
  t734 = t634 + t733;
  t735 = 0.384*var2[0]*t734;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t555*t599 + t634)*var2[0] + 0.384*(t593 - 1.*t594*t599)*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(t732 + t735 + 0.384*(t599*(-1.*t574*t679 + t681) + t693 + t698 + t697*t704)*var2[2])*var2[6];
  p_output1[6]=(t732 + t735 + 0.384*(t599*(-0.24*t573*t574 + t681) + t693 + t698 + (0.24*t573*t581 + t695)*t704)*var2[2] + 0.384*(0.24*t573*t582 - 1.*t582*t679)*var2[5])*var2[6];
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

#include "Ce3_vec7_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
