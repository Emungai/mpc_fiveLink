/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:32 GMT-05:00
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
  double t12171;
  double t12195;
  double t12162;
  double t12196;
  double t1037;
  double t12185;
  double t12197;
  double t12198;
  double t12223;
  double t12232;
  double t12233;
  double t14149;
  double t3008;
  double t10895;
  double t12222;
  double t14150;
  double t17822;
  double t17823;
  double t17824;
  double t17825;
  double t17826;
  double t17828;
  double t17829;
  double t17830;
  double t17837;
  double t17838;
  double t17839;
  double t17836;
  double t17840;
  double t17841;
  double t17842;
  double t17843;
  double t17844;
  double t17845;
  t12171 = Cos(var1[3]);
  t12195 = Sin(var1[2]);
  t12162 = Cos(var1[2]);
  t12196 = Sin(var1[3]);
  t1037 = Cos(var1[4]);
  t12185 = t12162*t12171;
  t12197 = -1.*t12195*t12196;
  t12198 = t12185 + t12197;
  t12223 = -1.*t12171*t12195;
  t12232 = -1.*t12162*t12196;
  t12233 = t12223 + t12232;
  t14149 = Sin(var1[4]);
  t3008 = -1.*t1037;
  t10895 = 1. + t3008;
  t12222 = 0.4*t10895*t12198;
  t14150 = -0.4*t12233*t14149;
  t17822 = t1037*t12198;
  t17823 = t12233*t14149;
  t17824 = t17822 + t17823;
  t17825 = 0.8*t17824;
  t17826 = t12222 + t14150 + t17825;
  t17828 = t12171*t12195;
  t17829 = t12162*t12196;
  t17830 = t17828 + t17829;
  t17837 = -1.*t12162*t12171;
  t17838 = t12195*t12196;
  t17839 = t17837 + t17838;
  t17836 = 0.4*t10895*t12233;
  t17840 = -0.4*t17839*t14149;
  t17841 = t1037*t12233;
  t17842 = t17839*t14149;
  t17843 = t17841 + t17842;
  t17844 = 0.8*t17843;
  t17845 = t17836 + t17840 + t17844;
  p_output1[0]=1.;
  p_output1[1]=t17826;
  p_output1[2]=t17826;
  p_output1[3]=-0.4*t1037*t12198 + 0.4*t14149*t17830 + 0.8*(t17822 - 1.*t14149*t17830);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t17845;
  p_output1[8]=t17845;
  p_output1[9]=-0.4*t1037*t12233 + 0.4*t12198*t14149 + 0.8*(-1.*t12198*t14149 + t17841);
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

#include "J_h_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_h_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
