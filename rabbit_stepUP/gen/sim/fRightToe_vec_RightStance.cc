/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:58 GMT-05:00
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
  double t683;
  double t695;
  double t682;
  double t696;
  double t676;
  double t684;
  double t697;
  double t698;
  double t700;
  double t701;
  double t702;
  double t703;
  double t680;
  double t681;
  double t712;
  double t713;
  double t714;
  double t699;
  double t704;
  double t705;
  double t706;
  double t707;
  double t708;
  double t709;
  double t710;
  double t711;
  double t715;
  double t716;
  double t717;
  double t718;
  double t719;
  double t720;
  double t721;
  double t722;
  double t724;
  double t725;
  double t726;
  t683 = Cos(var1[3]);
  t695 = Sin(var1[2]);
  t682 = Cos(var1[2]);
  t696 = Sin(var1[3]);
  t676 = Cos(var1[4]);
  t684 = t682*t683;
  t697 = -1.*t695*t696;
  t698 = t684 + t697;
  t700 = -1.*t683*t695;
  t701 = -1.*t682*t696;
  t702 = t700 + t701;
  t703 = Sin(var1[4]);
  t680 = -1.*t676;
  t681 = 1. + t680;
  t712 = -1.*t682*t683;
  t713 = t695*t696;
  t714 = t712 + t713;
  t699 = 0.4*t681*t698;
  t704 = -0.4*t702*t703;
  t705 = t676*t698;
  t706 = t702*t703;
  t707 = t705 + t706;
  t708 = 0.8*t707;
  t709 = t699 + t704 + t708;
  t710 = var2[0]*t709;
  t711 = 0.4*t681*t702;
  t715 = -0.4*t714*t703;
  t716 = t676*t702;
  t717 = t714*t703;
  t718 = t716 + t717;
  t719 = 0.8*t718;
  t720 = t711 + t715 + t719;
  t721 = var2[2]*t720;
  t722 = t710 + t721;
  t724 = t683*t695;
  t725 = t682*t696;
  t726 = t724 + t725;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t722;
  p_output1[3]=t722;
  p_output1[4]=(-0.4*t676*t698 + 0.4*t703*t726 + 0.8*(t705 - 1.*t703*t726))*var2[0] + (-0.4*t676*t702 + 0.4*t698*t703 + 0.8*(-1.*t698*t703 + t716))*var2[2];
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

#include "fRightToe_vec_RightStance.hh"

namespace SymFunction
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
