/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:20:01 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double t730;
  double t732;
  double t729;
  double t733;
  double t723;
  double t731;
  double t734;
  double t735;
  double t737;
  double t738;
  double t739;
  double t740;
  double t727;
  double t728;
  double t736;
  double t741;
  double t742;
  double t743;
  double t744;
  double t745;
  double t746;
  double t748;
  double t749;
  double t750;
  double t757;
  double t758;
  double t759;
  double t756;
  double t760;
  double t761;
  double t762;
  double t763;
  double t764;
  double t765;
  t730 = Cos(var1[3]);
  t732 = Sin(var1[2]);
  t729 = Cos(var1[2]);
  t733 = Sin(var1[3]);
  t723 = Cos(var1[4]);
  t731 = t729*t730;
  t734 = -1.*t732*t733;
  t735 = t731 + t734;
  t737 = -1.*t730*t732;
  t738 = -1.*t729*t733;
  t739 = t737 + t738;
  t740 = Sin(var1[4]);
  t727 = -1.*t723;
  t728 = 1. + t727;
  t736 = 0.4*t728*t735;
  t741 = -0.4*t739*t740;
  t742 = t723*t735;
  t743 = t739*t740;
  t744 = t742 + t743;
  t745 = 0.8*t744;
  t746 = t736 + t741 + t745;
  t748 = t730*t732;
  t749 = t729*t733;
  t750 = t748 + t749;
  t757 = -1.*t729*t730;
  t758 = t732*t733;
  t759 = t757 + t758;
  t756 = 0.4*t728*t739;
  t760 = -0.4*t759*t740;
  t761 = t723*t739;
  t762 = t759*t740;
  t763 = t761 + t762;
  t764 = 0.8*t763;
  t765 = t756 + t760 + t764;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t746;
  p_output1[3]=t746;
  p_output1[4]=-0.4*t723*t735 + 0.4*t740*t750 + 0.8*(t742 - 1.*t740*t750);
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=1.;
  p_output1[16]=t765;
  p_output1[17]=t765;
  p_output1[18]=-0.4*t723*t739 + 0.4*t735*t740 + 0.8*(-1.*t735*t740 + t761);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "fRightToe_map_RightImpact.hh"

namespace SymFunction
{

void fRightToe_map_RightImpact_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
