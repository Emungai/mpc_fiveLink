/*
 * Automatically Generated from Mathematica.
 * Tue 10 Dec 2019 22:12:58 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
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

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t828;
  double t830;
  double t827;
  double t831;
  double t807;
  double t829;
  double t832;
  double t833;
  double t838;
  double t839;
  double t840;
  double t841;
  double t821;
  double t826;
  double t849;
  double t850;
  double t851;
  double t834;
  double t842;
  double t843;
  double t844;
  double t845;
  double t846;
  double t847;
  double t848;
  double t852;
  double t853;
  double t854;
  double t855;
  double t856;
  double t857;
  double t859;
  double t860;
  double t861;
  t828 = Cos(var1[3]);
  t830 = Sin(var1[2]);
  t827 = Cos(var1[2]);
  t831 = Sin(var1[3]);
  t807 = Cos(var1[4]);
  t829 = t827*t828;
  t832 = -1.*t830*t831;
  t833 = t829 + t832;
  t838 = -1.*t828*t830;
  t839 = -1.*t827*t831;
  t840 = t838 + t839;
  t841 = Sin(var1[4]);
  t821 = -1.*t807;
  t826 = 1. + t821;
  t849 = -1.*t827*t828;
  t850 = t830*t831;
  t851 = t849 + t850;
  t834 = 0.4*t826*t833;
  t842 = -0.4*t840*t841;
  t843 = t807*t833;
  t844 = t840*t841;
  t845 = t843 + t844;
  t846 = 0.8*t845;
  t847 = t834 + t842 + t846;
  t848 = 0.4*t826*t840;
  t852 = -0.4*t851*t841;
  t853 = t807*t840;
  t854 = t851*t841;
  t855 = t853 + t854;
  t856 = 0.8*t855;
  t857 = t848 + t852 + t856;
  t859 = t828*t830;
  t860 = t827*t831;
  t861 = t859 + t860;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=1.;
  p_output1[6]=t847;
  p_output1[7]=0;
  p_output1[8]=t857;
  p_output1[9]=t847;
  p_output1[10]=0;
  p_output1[11]=t857;
  p_output1[12]=-0.4*t807*t833 + 0.4*t841*t861 + 0.8*(t843 - 1.*t841*t861);
  p_output1[13]=0;
  p_output1[14]=-0.4*t807*t840 + 0.4*t833*t841 + 0.8*(-1.*t833*t841 + t853);
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 7, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jh_RightToe_RightStance.hh"

namespace SymFunction
{

void Jh_RightToe_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
