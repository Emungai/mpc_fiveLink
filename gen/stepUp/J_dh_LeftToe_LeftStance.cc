/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:55 GMT-05:00
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
  double t11610;
  double t11596;
  double t11600;
  double t11611;
  double t4627;
  double t11605;
  double t11612;
  double t11613;
  double t11625;
  double t11630;
  double t11632;
  double t11637;
  double t11645;
  double t11684;
  double t11685;
  double t11689;
  double t11678;
  double t11682;
  double t11683;
  double t11690;
  double t11694;
  double t11695;
  double t11698;
  double t11699;
  double t11621;
  double t11643;
  double t11646;
  double t11648;
  double t11649;
  double t11671;
  double t11677;
  double t11700;
  double t11706;
  double t11707;
  double t11713;
  double t11714;
  double t11718;
  double t11734;
  double t11735;
  double t11750;
  double t11751;
  double t11758;
  double t11759;
  double t11764;
  double t11776;
  double t11787;
  double t11788;
  double t11789;
  double t11790;
  double t11791;
  double t11792;
  double t11774;
  double t11775;
  double t11777;
  double t11778;
  double t11779;
  double t11785;
  double t11786;
  double t11793;
  double t11797;
  double t11798;
  t11610 = Cos(var1[2]);
  t11596 = Cos(var1[5]);
  t11600 = Sin(var1[2]);
  t11611 = Sin(var1[5]);
  t4627 = Cos(var1[6]);
  t11605 = -1.*t11596*t11600;
  t11612 = -1.*t11610*t11611;
  t11613 = t11605 + t11612;
  t11625 = t11610*t11596;
  t11630 = -1.*t11600*t11611;
  t11632 = t11625 + t11630;
  t11637 = Sin(var1[6]);
  t11645 = t4627*t11613;
  t11684 = -1.*t11610*t11596;
  t11685 = t11600*t11611;
  t11689 = t11684 + t11685;
  t11678 = -1.*t4627;
  t11682 = 1. + t11678;
  t11683 = 0.4*t11682*t11613;
  t11690 = -0.4*t11689*t11637;
  t11694 = t11689*t11637;
  t11695 = t11645 + t11694;
  t11698 = 0.8*t11695;
  t11699 = t11683 + t11690 + t11698;
  t11621 = -0.4*t4627*t11613;
  t11643 = 0.4*t11632*t11637;
  t11646 = -1.*t11632*t11637;
  t11648 = t11645 + t11646;
  t11649 = 0.8*t11648;
  t11671 = t11621 + t11643 + t11649;
  t11677 = var2[6]*t11671;
  t11700 = var2[2]*t11699;
  t11706 = var2[5]*t11699;
  t11707 = t11677 + t11700 + t11706;
  t11713 = t11596*t11600;
  t11714 = t11610*t11611;
  t11718 = t11713 + t11714;
  t11734 = 0.4*t11682*t11632;
  t11735 = -0.4*t11613*t11637;
  t11750 = t4627*t11632;
  t11751 = t11613*t11637;
  t11758 = t11750 + t11751;
  t11759 = 0.8*t11758;
  t11764 = t11734 + t11735 + t11759;
  t11776 = t4627*t11689;
  t11787 = 0.4*t11682*t11689;
  t11788 = -0.4*t11718*t11637;
  t11789 = t11718*t11637;
  t11790 = t11776 + t11789;
  t11791 = 0.8*t11790;
  t11792 = t11787 + t11788 + t11791;
  t11774 = -0.4*t4627*t11689;
  t11775 = 0.4*t11613*t11637;
  t11777 = -1.*t11613*t11637;
  t11778 = t11776 + t11777;
  t11779 = 0.8*t11778;
  t11785 = t11774 + t11775 + t11779;
  t11786 = var2[6]*t11785;
  t11793 = var2[2]*t11792;
  t11797 = var2[5]*t11792;
  t11798 = t11786 + t11793 + t11797;
  p_output1[0]=t11707;
  p_output1[1]=t11707;
  p_output1[2]=t11671*var2[2] + t11671*var2[5] + (t11643 + 0.4*t11718*t4627 + 0.8*(t11646 - 1.*t11718*t4627))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t11764;
  p_output1[5]=t11764;
  p_output1[6]=0.4*t11637*t11718 + 0.8*(-1.*t11637*t11718 + t11750) - 0.4*t11632*t4627;
  p_output1[7]=t11798;
  p_output1[8]=t11798;
  p_output1[9]=t11785*var2[2] + t11785*var2[5] + (t11775 + 0.4*t11632*t4627 + 0.8*(t11777 - 1.*t11632*t4627))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=t11699;
  p_output1[12]=t11699;
  p_output1[13]=t11671;
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

#include "J_dh_LeftToe_LeftStance.hh"

namespace LeftStance
{

void J_dh_LeftToe_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
