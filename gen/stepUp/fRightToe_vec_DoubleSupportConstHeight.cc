/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:00:33 GMT-05:00
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
  double t8806;
  double t8810;
  double t8805;
  double t8811;
  double t330;
  double t8807;
  double t8812;
  double t8813;
  double t8815;
  double t8816;
  double t8817;
  double t8818;
  double t333;
  double t8801;
  double t8827;
  double t8828;
  double t8829;
  double t8814;
  double t8819;
  double t8820;
  double t8821;
  double t8822;
  double t8823;
  double t8824;
  double t8825;
  double t8826;
  double t8830;
  double t8831;
  double t8832;
  double t8833;
  double t8834;
  double t8835;
  double t8836;
  double t8837;
  double t8839;
  double t8840;
  double t8841;
  t8806 = Cos(var1[3]);
  t8810 = Sin(var1[2]);
  t8805 = Cos(var1[2]);
  t8811 = Sin(var1[3]);
  t330 = Cos(var1[4]);
  t8807 = t8805*t8806;
  t8812 = -1.*t8810*t8811;
  t8813 = t8807 + t8812;
  t8815 = -1.*t8806*t8810;
  t8816 = -1.*t8805*t8811;
  t8817 = t8815 + t8816;
  t8818 = Sin(var1[4]);
  t333 = -1.*t330;
  t8801 = 1. + t333;
  t8827 = -1.*t8805*t8806;
  t8828 = t8810*t8811;
  t8829 = t8827 + t8828;
  t8814 = 0.4*t8801*t8813;
  t8819 = -0.4*t8817*t8818;
  t8820 = t330*t8813;
  t8821 = t8817*t8818;
  t8822 = t8820 + t8821;
  t8823 = 0.8*t8822;
  t8824 = t8814 + t8819 + t8823;
  t8825 = var2[0]*t8824;
  t8826 = 0.4*t8801*t8817;
  t8830 = -0.4*t8829*t8818;
  t8831 = t330*t8817;
  t8832 = t8829*t8818;
  t8833 = t8831 + t8832;
  t8834 = 0.8*t8833;
  t8835 = t8826 + t8830 + t8834;
  t8836 = var2[2]*t8835;
  t8837 = t8825 + t8836;
  t8839 = t8806*t8810;
  t8840 = t8805*t8811;
  t8841 = t8839 + t8840;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t8837;
  p_output1[3]=t8837;
  p_output1[4]=(-0.4*t330*t8813 + 0.4*t8818*t8841 + 0.8*(t8820 - 1.*t8818*t8841))*var2[0] + (-0.4*t330*t8817 + 0.4*t8813*t8818 + 0.8*(-1.*t8813*t8818 + t8831))*var2[2];
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

#include "fRightToe_vec_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void fRightToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
