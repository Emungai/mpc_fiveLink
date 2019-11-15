/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:41:47 GMT-05:00
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
  double t8774;
  double t8780;
  double t8769;
  double t8781;
  double t3033;
  double t8779;
  double t8782;
  double t8784;
  double t8819;
  double t8820;
  double t8824;
  double t8825;
  double t3347;
  double t8753;
  double t8818;
  double t8826;
  double t8827;
  double t8828;
  double t8829;
  double t8830;
  double t8831;
  double t8837;
  double t8838;
  double t8839;
  double t8846;
  double t8847;
  double t8848;
  double t8845;
  double t8849;
  double t8850;
  double t8851;
  double t8852;
  double t8853;
  double t8854;
  t8774 = Cos(var1[5]);
  t8780 = Sin(var1[2]);
  t8769 = Cos(var1[2]);
  t8781 = Sin(var1[5]);
  t3033 = Cos(var1[6]);
  t8779 = t8769*t8774;
  t8782 = -1.*t8780*t8781;
  t8784 = t8779 + t8782;
  t8819 = -1.*t8774*t8780;
  t8820 = -1.*t8769*t8781;
  t8824 = t8819 + t8820;
  t8825 = Sin(var1[6]);
  t3347 = -1.*t3033;
  t8753 = 1. + t3347;
  t8818 = 0.4*t8753*t8784;
  t8826 = -0.4*t8824*t8825;
  t8827 = t3033*t8784;
  t8828 = t8824*t8825;
  t8829 = t8827 + t8828;
  t8830 = 0.8*t8829;
  t8831 = t8818 + t8826 + t8830;
  t8837 = t8774*t8780;
  t8838 = t8769*t8781;
  t8839 = t8837 + t8838;
  t8846 = -1.*t8769*t8774;
  t8847 = t8780*t8781;
  t8848 = t8846 + t8847;
  t8845 = 0.4*t8753*t8824;
  t8849 = -0.4*t8848*t8825;
  t8850 = t3033*t8824;
  t8851 = t8848*t8825;
  t8852 = t8850 + t8851;
  t8853 = 0.8*t8852;
  t8854 = t8845 + t8849 + t8853;
  p_output1[0]=1.;
  p_output1[1]=t8831;
  p_output1[2]=t8831;
  p_output1[3]=-0.4*t3033*t8784 + 0.4*t8825*t8839 + 0.8*(t8827 - 1.*t8825*t8839);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t8854;
  p_output1[8]=t8854;
  p_output1[9]=-0.4*t3033*t8824 + 0.4*t8784*t8825 + 0.8*(-1.*t8784*t8825 + t8850);
  p_output1[10]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 11, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_LeftToe_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_h_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
