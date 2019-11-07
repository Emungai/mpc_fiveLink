/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:26 GMT-05:00
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
  double t14362;
  double t17769;
  double t14185;
  double t17770;
  double t9706;
  double t17768;
  double t17771;
  double t17772;
  double t17774;
  double t17775;
  double t17776;
  double t17777;
  double t10733;
  double t13511;
  double t17785;
  double t17786;
  double t17787;
  double t17773;
  double t17778;
  double t17779;
  double t17780;
  double t17781;
  double t17782;
  double t17783;
  double t17784;
  double t17788;
  double t17789;
  double t17790;
  double t17791;
  double t17792;
  double t17793;
  double t17794;
  double t17795;
  double t17796;
  double t17805;
  double t17806;
  double t17807;
  double t17797;
  double t17798;
  double t17799;
  double t17800;
  double t17801;
  double t17802;
  double t17803;
  double t17804;
  double t17808;
  double t17809;
  double t17810;
  double t17811;
  double t17812;
  double t17813;
  double t17814;
  double t17815;
  double t17816;
  double t17817;
  double t17818;
  double t17819;
  double t17820;
  double t17821;
  t14362 = Cos(var1[5]);
  t17769 = Sin(var1[2]);
  t14185 = Cos(var1[2]);
  t17770 = Sin(var1[5]);
  t9706 = Cos(var1[6]);
  t17768 = -1.*t14185*t14362;
  t17771 = t17769*t17770;
  t17772 = t17768 + t17771;
  t17774 = t14362*t17769;
  t17775 = t14185*t17770;
  t17776 = t17774 + t17775;
  t17777 = Sin(var1[6]);
  t10733 = -1.*t9706;
  t13511 = 1. + t10733;
  t17785 = -1.*t14362*t17769;
  t17786 = -1.*t14185*t17770;
  t17787 = t17785 + t17786;
  t17773 = 0.4*t13511*t17772;
  t17778 = -0.4*t17776*t17777;
  t17779 = t9706*t17772;
  t17780 = t17776*t17777;
  t17781 = t17779 + t17780;
  t17782 = 0.8*t17781;
  t17783 = t17773 + t17778 + t17782;
  t17784 = var2[2]*t17783;
  t17788 = 0.4*t13511*t17787;
  t17789 = -0.4*t17772*t17777;
  t17790 = t9706*t17787;
  t17791 = t17772*t17777;
  t17792 = t17790 + t17791;
  t17793 = 0.8*t17792;
  t17794 = t17788 + t17789 + t17793;
  t17795 = var2[0]*t17794;
  t17796 = t17784 + t17795;
  t17805 = t14185*t14362;
  t17806 = -1.*t17769*t17770;
  t17807 = t17805 + t17806;
  t17797 = -0.4*t9706*t17772;
  t17798 = 0.4*t17787*t17777;
  t17799 = -1.*t17787*t17777;
  t17800 = t17779 + t17799;
  t17801 = 0.8*t17800;
  t17802 = t17797 + t17798 + t17801;
  t17803 = var2[2]*t17802;
  t17804 = -0.4*t9706*t17787;
  t17808 = 0.4*t17807*t17777;
  t17809 = -1.*t17807*t17777;
  t17810 = t17790 + t17809;
  t17811 = 0.8*t17810;
  t17812 = t17804 + t17808 + t17811;
  t17813 = var2[0]*t17812;
  t17814 = t17803 + t17813;
  t17815 = 0.4*t13511*t17807;
  t17816 = -0.4*t17787*t17777;
  t17817 = t9706*t17807;
  t17818 = t17787*t17777;
  t17819 = t17817 + t17818;
  t17820 = 0.8*t17819;
  t17821 = t17815 + t17816 + t17820;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t17796;
  p_output1[3]=t17796;
  p_output1[4]=t17814;
  p_output1[5]=t17821;
  p_output1[6]=t17794;
  p_output1[7]=t17796;
  p_output1[8]=t17796;
  p_output1[9]=t17814;
  p_output1[10]=t17821;
  p_output1[11]=t17794;
  p_output1[12]=t17814;
  p_output1[13]=t17814;
  p_output1[14]=(t17808 + 0.4*t17776*t9706 + 0.8*(t17809 - 1.*t17776*t9706))*var2[0] + (t17798 + 0.4*t17807*t9706 + 0.8*(t17799 - 1.*t17807*t9706))*var2[2];
  p_output1[15]=0.4*t17776*t17777 + 0.8*(-1.*t17776*t17777 + t17817) - 0.4*t17807*t9706;
  p_output1[16]=t17812;
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

#include "J_fLeftToe_vec_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_fLeftToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
