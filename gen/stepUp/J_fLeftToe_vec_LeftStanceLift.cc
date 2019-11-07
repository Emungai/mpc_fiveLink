/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:24:07 GMT-05:00
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
  double t3660;
  double t3662;
  double t3659;
  double t3663;
  double t183;
  double t3661;
  double t3664;
  double t3665;
  double t3667;
  double t3668;
  double t3669;
  double t3672;
  double t212;
  double t3655;
  double t3692;
  double t3693;
  double t3694;
  double t3666;
  double t3674;
  double t3684;
  double t3685;
  double t3687;
  double t3688;
  double t3689;
  double t3691;
  double t3716;
  double t3726;
  double t3727;
  double t3728;
  double t3729;
  double t3730;
  double t3731;
  double t3732;
  double t3733;
  double t3795;
  double t3796;
  double t3797;
  double t3734;
  double t3741;
  double t3768;
  double t3769;
  double t3775;
  double t3779;
  double t3780;
  double t3785;
  double t3798;
  double t3801;
  double t3802;
  double t3807;
  double t3808;
  double t3809;
  double t3810;
  double t3811;
  double t3812;
  double t3813;
  double t3814;
  double t3815;
  double t3816;
  double t3817;
  t3660 = Cos(var1[5]);
  t3662 = Sin(var1[2]);
  t3659 = Cos(var1[2]);
  t3663 = Sin(var1[5]);
  t183 = Cos(var1[6]);
  t3661 = -1.*t3659*t3660;
  t3664 = t3662*t3663;
  t3665 = t3661 + t3664;
  t3667 = t3660*t3662;
  t3668 = t3659*t3663;
  t3669 = t3667 + t3668;
  t3672 = Sin(var1[6]);
  t212 = -1.*t183;
  t3655 = 1. + t212;
  t3692 = -1.*t3660*t3662;
  t3693 = -1.*t3659*t3663;
  t3694 = t3692 + t3693;
  t3666 = 0.4*t3655*t3665;
  t3674 = -0.4*t3669*t3672;
  t3684 = t183*t3665;
  t3685 = t3669*t3672;
  t3687 = t3684 + t3685;
  t3688 = 0.8*t3687;
  t3689 = t3666 + t3674 + t3688;
  t3691 = var2[2]*t3689;
  t3716 = 0.4*t3655*t3694;
  t3726 = -0.4*t3665*t3672;
  t3727 = t183*t3694;
  t3728 = t3665*t3672;
  t3729 = t3727 + t3728;
  t3730 = 0.8*t3729;
  t3731 = t3716 + t3726 + t3730;
  t3732 = var2[0]*t3731;
  t3733 = t3691 + t3732;
  t3795 = t3659*t3660;
  t3796 = -1.*t3662*t3663;
  t3797 = t3795 + t3796;
  t3734 = -0.4*t183*t3665;
  t3741 = 0.4*t3694*t3672;
  t3768 = -1.*t3694*t3672;
  t3769 = t3684 + t3768;
  t3775 = 0.8*t3769;
  t3779 = t3734 + t3741 + t3775;
  t3780 = var2[2]*t3779;
  t3785 = -0.4*t183*t3694;
  t3798 = 0.4*t3797*t3672;
  t3801 = -1.*t3797*t3672;
  t3802 = t3727 + t3801;
  t3807 = 0.8*t3802;
  t3808 = t3785 + t3798 + t3807;
  t3809 = var2[0]*t3808;
  t3810 = t3780 + t3809;
  t3811 = 0.4*t3655*t3797;
  t3812 = -0.4*t3694*t3672;
  t3813 = t183*t3797;
  t3814 = t3694*t3672;
  t3815 = t3813 + t3814;
  t3816 = 0.8*t3815;
  t3817 = t3811 + t3812 + t3816;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t3733;
  p_output1[3]=t3733;
  p_output1[4]=t3810;
  p_output1[5]=t3817;
  p_output1[6]=t3731;
  p_output1[7]=t3733;
  p_output1[8]=t3733;
  p_output1[9]=t3810;
  p_output1[10]=t3817;
  p_output1[11]=t3731;
  p_output1[12]=t3810;
  p_output1[13]=t3810;
  p_output1[14]=(0.4*t183*t3669 + t3798 + 0.8*(-1.*t183*t3669 + t3801))*var2[0] + (t3741 + 0.4*t183*t3797 + 0.8*(t3768 - 1.*t183*t3797))*var2[2];
  p_output1[15]=0.4*t3669*t3672 - 0.4*t183*t3797 + 0.8*(-1.*t3669*t3672 + t3813);
  p_output1[16]=t3808;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fLeftToe_vec_LeftStanceLift.hh"

namespace LeftStanceLift
{

void J_fLeftToe_vec_LeftStanceLift_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
