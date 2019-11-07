/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:15 GMT-05:00
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
  double t88;
  double t92;
  double t85;
  double t93;
  double t44;
  double t89;
  double t96;
  double t97;
  double t106;
  double t107;
  double t110;
  double t111;
  double t70;
  double t83;
  double t98;
  double t114;
  double t115;
  double t118;
  double t119;
  double t1043;
  double t2543;
  double t2628;
  double t2829;
  double t3015;
  double t5748;
  double t5749;
  double t5750;
  double t5747;
  double t5758;
  double t5759;
  double t5760;
  double t5761;
  double t5762;
  double t5763;
  t88 = Cos(var1[3]);
  t92 = Sin(var1[2]);
  t85 = Cos(var1[2]);
  t93 = Sin(var1[3]);
  t44 = Cos(var1[4]);
  t89 = t85*t88;
  t96 = -1.*t92*t93;
  t97 = t89 + t96;
  t106 = -1.*t88*t92;
  t107 = -1.*t85*t93;
  t110 = t106 + t107;
  t111 = Sin(var1[4]);
  t70 = -1.*t44;
  t83 = 1. + t70;
  t98 = 0.4*t83*t97;
  t114 = -0.4*t110*t111;
  t115 = t44*t97;
  t118 = t110*t111;
  t119 = t115 + t118;
  t1043 = 0.8*t119;
  t2543 = t98 + t114 + t1043;
  t2628 = t88*t92;
  t2829 = t85*t93;
  t3015 = t2628 + t2829;
  t5748 = -1.*t85*t88;
  t5749 = t92*t93;
  t5750 = t5748 + t5749;
  t5747 = 0.4*t83*t110;
  t5758 = -0.4*t5750*t111;
  t5759 = t44*t110;
  t5760 = t5750*t111;
  t5761 = t5759 + t5760;
  t5762 = 0.8*t5761;
  t5763 = t5747 + t5758 + t5762;
  p_output1[0]=1.;
  p_output1[1]=t2543;
  p_output1[2]=t2543;
  p_output1[3]=0.4*t111*t3015 + 0.8*(t115 - 1.*t111*t3015) - 0.4*t44*t97;
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t5763;
  p_output1[8]=t5763;
  p_output1[9]=-0.4*t110*t44 + 0.4*t111*t97 + 0.8*(t5759 - 1.*t111*t97);
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

#include "J_h_RightToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_h_RightToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
