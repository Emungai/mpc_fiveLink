/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:26:25 GMT-05:00
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
  double t16488;
  double t3212;
  double t11660;
  double t16489;
  double t2873;
  double t16348;
  double t16490;
  double t16548;
  double t16573;
  double t16574;
  double t16576;
  double t16577;
  double t16581;
  double t16673;
  double t16674;
  double t16675;
  double t16598;
  double t16668;
  double t16672;
  double t16676;
  double t16677;
  double t16680;
  double t16681;
  double t16682;
  double t16572;
  double t16578;
  double t16582;
  double t16585;
  double t16587;
  double t16589;
  double t16597;
  double t16683;
  double t16685;
  double t16688;
  double t16694;
  double t16696;
  double t16699;
  double t16735;
  double t16736;
  double t16737;
  double t16738;
  double t16739;
  double t16740;
  double t16741;
  double t16804;
  double t17784;
  double t17786;
  double t17788;
  double t17789;
  double t17795;
  double t17796;
  double t16796;
  double t16797;
  double t17771;
  double t17773;
  double t17780;
  double t17782;
  double t17783;
  double t17809;
  double t17810;
  double t17811;
  t16488 = Cos(var1[2]);
  t3212 = Cos(var1[5]);
  t11660 = Sin(var1[2]);
  t16489 = Sin(var1[5]);
  t2873 = Cos(var1[6]);
  t16348 = -1.*t3212*t11660;
  t16490 = -1.*t16488*t16489;
  t16548 = t16348 + t16490;
  t16573 = t16488*t3212;
  t16574 = -1.*t11660*t16489;
  t16576 = t16573 + t16574;
  t16577 = Sin(var1[6]);
  t16581 = t2873*t16548;
  t16673 = -1.*t16488*t3212;
  t16674 = t11660*t16489;
  t16675 = t16673 + t16674;
  t16598 = -1.*t2873;
  t16668 = 1. + t16598;
  t16672 = 0.4*t16668*t16548;
  t16676 = -0.4*t16675*t16577;
  t16677 = t16675*t16577;
  t16680 = t16581 + t16677;
  t16681 = 0.8*t16680;
  t16682 = t16672 + t16676 + t16681;
  t16572 = -0.4*t2873*t16548;
  t16578 = 0.4*t16576*t16577;
  t16582 = -1.*t16576*t16577;
  t16585 = t16581 + t16582;
  t16587 = 0.8*t16585;
  t16589 = t16572 + t16578 + t16587;
  t16597 = var2[6]*t16589;
  t16683 = var2[2]*t16682;
  t16685 = var2[5]*t16682;
  t16688 = t16597 + t16683 + t16685;
  t16694 = t3212*t11660;
  t16696 = t16488*t16489;
  t16699 = t16694 + t16696;
  t16735 = 0.4*t16668*t16576;
  t16736 = -0.4*t16548*t16577;
  t16737 = t2873*t16576;
  t16738 = t16548*t16577;
  t16739 = t16737 + t16738;
  t16740 = 0.8*t16739;
  t16741 = t16735 + t16736 + t16740;
  t16804 = t2873*t16675;
  t17784 = 0.4*t16668*t16675;
  t17786 = -0.4*t16699*t16577;
  t17788 = t16699*t16577;
  t17789 = t16804 + t17788;
  t17795 = 0.8*t17789;
  t17796 = t17784 + t17786 + t17795;
  t16796 = -0.4*t2873*t16675;
  t16797 = 0.4*t16548*t16577;
  t17771 = -1.*t16548*t16577;
  t17773 = t16804 + t17771;
  t17780 = 0.8*t17773;
  t17782 = t16796 + t16797 + t17780;
  t17783 = var2[6]*t17782;
  t17809 = var2[2]*t17796;
  t17810 = var2[5]*t17796;
  t17811 = t17783 + t17809 + t17810;
  p_output1[0]=t16688;
  p_output1[1]=t16688;
  p_output1[2]=t16589*var2[2] + t16589*var2[5] + (t16578 + 0.4*t16699*t2873 + 0.8*(t16582 - 1.*t16699*t2873))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t16741;
  p_output1[5]=t16741;
  p_output1[6]=0.4*t16577*t16699 + 0.8*(-1.*t16577*t16699 + t16737) - 0.4*t16576*t2873;
  p_output1[7]=t17811;
  p_output1[8]=t17811;
  p_output1[9]=t17782*var2[2] + t17782*var2[5] + (t16797 + 0.4*t16576*t2873 + 0.8*(t17771 - 1.*t16576*t2873))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=t16682;
  p_output1[12]=t16682;
  p_output1[13]=t16589;
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

#include "J_dh_LeftToe_LeftStanceLand.hh"

namespace LeftStanceLand
{

void J_dh_LeftToe_LeftStanceLand_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
