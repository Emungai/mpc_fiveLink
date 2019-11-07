/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:20 GMT-05:00
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
  double t5789;
  double t5783;
  double t5784;
  double t5790;
  double t5782;
  double t5788;
  double t5791;
  double t5792;
  double t5794;
  double t5795;
  double t5796;
  double t5798;
  double t5800;
  double t5821;
  double t5822;
  double t5823;
  double t5818;
  double t5819;
  double t5820;
  double t5824;
  double t5825;
  double t5826;
  double t5827;
  double t5828;
  double t5793;
  double t5799;
  double t5801;
  double t5802;
  double t5815;
  double t5816;
  double t5817;
  double t5830;
  double t5831;
  double t5832;
  double t5841;
  double t5842;
  double t5843;
  double t5859;
  double t5860;
  double t5862;
  double t5863;
  double t5864;
  double t5865;
  double t5866;
  double t5879;
  double t5888;
  double t5889;
  double t5890;
  double t5891;
  double t5893;
  double t5895;
  double t5874;
  double t5878;
  double t5880;
  double t5881;
  double t5882;
  double t5883;
  double t5884;
  double t5896;
  double t5897;
  double t5898;
  t5789 = Cos(var1[2]);
  t5783 = Cos(var1[3]);
  t5784 = Sin(var1[2]);
  t5790 = Sin(var1[3]);
  t5782 = Cos(var1[4]);
  t5788 = -1.*t5783*t5784;
  t5791 = -1.*t5789*t5790;
  t5792 = t5788 + t5791;
  t5794 = t5789*t5783;
  t5795 = -1.*t5784*t5790;
  t5796 = t5794 + t5795;
  t5798 = Sin(var1[4]);
  t5800 = t5782*t5792;
  t5821 = -1.*t5789*t5783;
  t5822 = t5784*t5790;
  t5823 = t5821 + t5822;
  t5818 = -1.*t5782;
  t5819 = 1. + t5818;
  t5820 = 0.4*t5819*t5792;
  t5824 = -0.4*t5823*t5798;
  t5825 = t5823*t5798;
  t5826 = t5800 + t5825;
  t5827 = 0.8*t5826;
  t5828 = t5820 + t5824 + t5827;
  t5793 = -0.4*t5782*t5792;
  t5799 = 0.4*t5796*t5798;
  t5801 = -1.*t5796*t5798;
  t5802 = t5800 + t5801;
  t5815 = 0.8*t5802;
  t5816 = t5793 + t5799 + t5815;
  t5817 = var2[4]*t5816;
  t5830 = var2[2]*t5828;
  t5831 = var2[3]*t5828;
  t5832 = t5817 + t5830 + t5831;
  t5841 = t5783*t5784;
  t5842 = t5789*t5790;
  t5843 = t5841 + t5842;
  t5859 = 0.4*t5819*t5796;
  t5860 = -0.4*t5792*t5798;
  t5862 = t5782*t5796;
  t5863 = t5792*t5798;
  t5864 = t5862 + t5863;
  t5865 = 0.8*t5864;
  t5866 = t5859 + t5860 + t5865;
  t5879 = t5782*t5823;
  t5888 = 0.4*t5819*t5823;
  t5889 = -0.4*t5843*t5798;
  t5890 = t5843*t5798;
  t5891 = t5879 + t5890;
  t5893 = 0.8*t5891;
  t5895 = t5888 + t5889 + t5893;
  t5874 = -0.4*t5782*t5823;
  t5878 = 0.4*t5792*t5798;
  t5880 = -1.*t5792*t5798;
  t5881 = t5879 + t5880;
  t5882 = 0.8*t5881;
  t5883 = t5874 + t5878 + t5882;
  t5884 = var2[4]*t5883;
  t5896 = var2[2]*t5895;
  t5897 = var2[3]*t5895;
  t5898 = t5884 + t5896 + t5897;
  p_output1[0]=t5832;
  p_output1[1]=t5832;
  p_output1[2]=t5816*var2[2] + t5816*var2[3] + (t5799 + 0.4*t5782*t5843 + 0.8*(t5801 - 1.*t5782*t5843))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t5866;
  p_output1[5]=t5866;
  p_output1[6]=-0.4*t5782*t5796 + 0.4*t5798*t5843 + 0.8*(-1.*t5798*t5843 + t5862);
  p_output1[7]=t5898;
  p_output1[8]=t5898;
  p_output1[9]=t5883*var2[2] + t5883*var2[3] + (0.4*t5782*t5796 + t5878 + 0.8*(-1.*t5782*t5796 + t5880))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t5828;
  p_output1[12]=t5828;
  p_output1[13]=t5816;
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

#include "J_dh_RightToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_dh_RightToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
