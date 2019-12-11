/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:57 GMT-05:00
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
  double t659;
  double t661;
  double t658;
  double t662;
  double t634;
  double t660;
  double t663;
  double t664;
  double t666;
  double t667;
  double t668;
  double t669;
  double t641;
  double t653;
  double t665;
  double t670;
  double t671;
  double t672;
  double t673;
  double t674;
  double t675;
  double t677;
  double t678;
  double t679;
  double t686;
  double t687;
  double t688;
  double t685;
  double t689;
  double t690;
  double t691;
  double t692;
  double t693;
  double t694;
  t659 = Cos(var1[3]);
  t661 = Sin(var1[2]);
  t658 = Cos(var1[2]);
  t662 = Sin(var1[3]);
  t634 = Cos(var1[4]);
  t660 = t658*t659;
  t663 = -1.*t661*t662;
  t664 = t660 + t663;
  t666 = -1.*t659*t661;
  t667 = -1.*t658*t662;
  t668 = t666 + t667;
  t669 = Sin(var1[4]);
  t641 = -1.*t634;
  t653 = 1. + t641;
  t665 = 0.4*t653*t664;
  t670 = -0.4*t668*t669;
  t671 = t634*t664;
  t672 = t668*t669;
  t673 = t671 + t672;
  t674 = 0.8*t673;
  t675 = t665 + t670 + t674;
  t677 = t659*t661;
  t678 = t658*t662;
  t679 = t677 + t678;
  t686 = -1.*t658*t659;
  t687 = t661*t662;
  t688 = t686 + t687;
  t685 = 0.4*t653*t668;
  t689 = -0.4*t688*t669;
  t690 = t634*t668;
  t691 = t688*t669;
  t692 = t690 + t691;
  t693 = 0.8*t692;
  t694 = t685 + t689 + t693;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=t675;
  p_output1[3]=t675;
  p_output1[4]=-0.4*t634*t664 + 0.4*t669*t679 + 0.8*(t671 - 1.*t669*t679);
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
  p_output1[16]=t694;
  p_output1[17]=t694;
  p_output1[18]=-0.4*t634*t668 + 0.4*t664*t669 + 0.8*(-1.*t664*t669 + t690);
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

#include "fRightToe_map_RightStance.hh"

namespace SymFunction
{

void fRightToe_map_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
