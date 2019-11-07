/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:14 GMT-05:00
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
  double t104;
  double t12827;
  double t13547;
  double t14118;
  double t14128;
  double t14178;
  double t14187;
  double t14407;
  double t17523;
  double t17529;
  double t17530;
  double t17534;
  double t17638;
  double t17639;
  double t17640;
  double t17641;
  double t17686;
  double t17690;
  double t17694;
  double t17695;
  double t17696;
  double t17697;
  double t14392;
  double t14408;
  double t14413;
  double t17420;
  double t17538;
  double t17620;
  double t17628;
  double t17632;
  double t17633;
  double t17635;
  double t17636;
  double t17714;
  double t17715;
  double t17716;
  double t17687;
  double t17691;
  double t17692;
  double t17693;
  double t17698;
  double t17699;
  double t17700;
  double t17701;
  double t17705;
  double t17709;
  double t17710;
  double t17725;
  double t17726;
  double t17727;
  double t17712;
  double t17713;
  double t17717;
  double t17718;
  double t17719;
  double t17720;
  double t17721;
  double t17722;
  double t17734;
  double t17735;
  double t17736;
  double t17723;
  double t17724;
  double t17728;
  double t17729;
  double t17730;
  double t17731;
  double t17732;
  double t17733;
  double t17743;
  double t17744;
  double t17745;
  t104 = Cos(var1[2]);
  t12827 = Cos(var1[3]);
  t13547 = -1.*t104*t12827;
  t14118 = Sin(var1[2]);
  t14128 = Sin(var1[3]);
  t14178 = t14118*t14128;
  t14187 = t13547 + t14178;
  t14407 = Cos(var1[4]);
  t17523 = t12827*t14118;
  t17529 = t104*t14128;
  t17530 = t17523 + t17529;
  t17534 = Sin(var1[4]);
  t17638 = Cos(var1[5]);
  t17639 = -1.*t104*t17638;
  t17640 = Sin(var1[5]);
  t17641 = t14118*t17640;
  t17686 = t17639 + t17641;
  t17690 = Cos(var1[6]);
  t17694 = t17638*t14118;
  t17695 = t104*t17640;
  t17696 = t17694 + t17695;
  t17697 = Sin(var1[6]);
  t14392 = -7.33788*t14187;
  t14408 = -1.*t14407;
  t14413 = 1. + t14408;
  t17420 = 0.4*t14413*t14187;
  t17538 = -0.4*t17530*t17534;
  t17620 = t14407*t14187;
  t17628 = t17530*t17534;
  t17632 = t17620 + t17628;
  t17633 = 0.64*t17632;
  t17635 = t17420 + t17538 + t17633;
  t17636 = -31.392000000000003*t17635;
  t17714 = -1.*t12827*t14118;
  t17715 = -1.*t104*t14128;
  t17716 = t17714 + t17715;
  t17687 = -7.33788*t17686;
  t17691 = -1.*t17690;
  t17692 = 1. + t17691;
  t17693 = 0.4*t17692*t17686;
  t17698 = -0.4*t17696*t17697;
  t17699 = t17690*t17686;
  t17700 = t17696*t17697;
  t17701 = t17699 + t17700;
  t17705 = 0.64*t17701;
  t17709 = t17693 + t17698 + t17705;
  t17710 = -31.392000000000003*t17709;
  t17725 = -1.*t17638*t14118;
  t17726 = -1.*t104*t17640;
  t17727 = t17725 + t17726;
  t17712 = t14392 + t17636;
  t17713 = -0.4*t14407*t14187;
  t17717 = 0.4*t17716*t17534;
  t17718 = -1.*t17716*t17534;
  t17719 = t17620 + t17718;
  t17720 = 0.64*t17719;
  t17721 = t17713 + t17717 + t17720;
  t17722 = -31.392000000000003*t17721;
  t17734 = t104*t12827;
  t17735 = -1.*t14118*t14128;
  t17736 = t17734 + t17735;
  t17723 = t17687 + t17710;
  t17724 = -0.4*t17690*t17686;
  t17728 = 0.4*t17727*t17697;
  t17729 = -1.*t17727*t17697;
  t17730 = t17699 + t17729;
  t17731 = 0.64*t17730;
  t17732 = t17724 + t17728 + t17731;
  t17733 = -31.392000000000003*t17732;
  t17743 = t104*t17638;
  t17744 = -1.*t14118*t17640;
  t17745 = t17743 + t17744;
  p_output1[0]=28.252799999999997*t104 + t14392 + t17636 + t17687 + t17710;
  p_output1[1]=t17712;
  p_output1[2]=t17722;
  p_output1[3]=t17723;
  p_output1[4]=t17733;
  p_output1[5]=t17712;
  p_output1[6]=t17712;
  p_output1[7]=t17722;
  p_output1[8]=t17722;
  p_output1[9]=t17722;
  p_output1[10]=-31.392000000000003*(t17717 + 0.4*t14407*t17736 + 0.64*(t17718 - 1.*t14407*t17736));
  p_output1[11]=t17723;
  p_output1[12]=t17723;
  p_output1[13]=t17733;
  p_output1[14]=t17733;
  p_output1[15]=t17733;
  p_output1[16]=-31.392000000000003*(t17728 + 0.4*t17690*t17745 + 0.64*(t17729 - 1.*t17690*t17745));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ge_vec_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
