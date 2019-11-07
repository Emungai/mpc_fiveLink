/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:35 GMT-05:00
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
  double t17831;
  double t17833;
  double t17827;
  double t17834;
  double t14219;
  double t17832;
  double t17835;
  double t17846;
  double t17848;
  double t17849;
  double t17850;
  double t17851;
  double t14378;
  double t14386;
  double t17847;
  double t17852;
  double t17853;
  double t17854;
  double t17855;
  double t17856;
  double t17857;
  double t17861;
  double t17862;
  double t17863;
  double t17873;
  double t17880;
  double t17881;
  double t17882;
  double t17879;
  double t17883;
  double t17884;
  double t17885;
  double t17886;
  double t17887;
  t17831 = Cos(var1[3]);
  t17833 = Sin(var1[2]);
  t17827 = Cos(var1[2]);
  t17834 = Sin(var1[3]);
  t14219 = Cos(var1[4]);
  t17832 = t17827*t17831;
  t17835 = -1.*t17833*t17834;
  t17846 = t17832 + t17835;
  t17848 = -1.*t17831*t17833;
  t17849 = -1.*t17827*t17834;
  t17850 = t17848 + t17849;
  t17851 = Sin(var1[4]);
  t14378 = -1.*t14219;
  t14386 = 1. + t14378;
  t17847 = 0.4*t14386*t17846;
  t17852 = -0.4*t17850*t17851;
  t17853 = t14219*t17846;
  t17854 = t17850*t17851;
  t17855 = t17853 + t17854;
  t17856 = 0.8*t17855;
  t17857 = t17847 + t17852 + t17856;
  t17861 = t17831*t17833;
  t17862 = t17827*t17834;
  t17863 = t17861 + t17862;
  t17873 = t14219*t17850;
  t17880 = -1.*t17827*t17831;
  t17881 = t17833*t17834;
  t17882 = t17880 + t17881;
  t17879 = 0.4*t14386*t17850;
  t17883 = -0.4*t17882*t17851;
  t17884 = t17882*t17851;
  t17885 = t17873 + t17884;
  t17886 = 0.8*t17885;
  t17887 = t17879 + t17883 + t17886;
  p_output1[0]=var2[0] + t17857*var2[2] + t17857*var2[3] + (-0.4*t14219*t17846 + 0.4*t17851*t17863 + 0.8*(t17853 - 1.*t17851*t17863))*var2[4];
  p_output1[1]=0;
  p_output1[2]=var2[1] + t17887*var2[2] + t17887*var2[3] + (-0.4*t14219*t17850 + 0.4*t17846*t17851 + 0.8*(-1.*t17846*t17851 + t17873))*var2[4];
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

#include "dh_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void dh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
