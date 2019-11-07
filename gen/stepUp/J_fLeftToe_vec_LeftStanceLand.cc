/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:26:14 GMT-05:00
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
  double t12177;
  double t12252;
  double t12126;
  double t12841;
  double t11190;
  double t12178;
  double t12847;
  double t13417;
  double t13536;
  double t13568;
  double t13575;
  double t13620;
  double t12054;
  double t12097;
  double t13875;
  double t13945;
  double t13965;
  double t13531;
  double t13633;
  double t13652;
  double t13716;
  double t13757;
  double t13787;
  double t13824;
  double t13838;
  double t14039;
  double t14126;
  double t14162;
  double t14172;
  double t14246;
  double t14284;
  double t14324;
  double t14348;
  double t14357;
  double t14761;
  double t14762;
  double t14881;
  double t14453;
  double t14478;
  double t14479;
  double t14522;
  double t14694;
  double t14726;
  double t14748;
  double t14758;
  double t14918;
  double t16030;
  double t16059;
  double t16097;
  double t16185;
  double t16188;
  double t16189;
  double t16192;
  double t16196;
  double t16217;
  double t16225;
  double t16248;
  double t16262;
  double t16268;
  t12177 = Cos(var1[5]);
  t12252 = Sin(var1[2]);
  t12126 = Cos(var1[2]);
  t12841 = Sin(var1[5]);
  t11190 = Cos(var1[6]);
  t12178 = -1.*t12126*t12177;
  t12847 = t12252*t12841;
  t13417 = t12178 + t12847;
  t13536 = t12177*t12252;
  t13568 = t12126*t12841;
  t13575 = t13536 + t13568;
  t13620 = Sin(var1[6]);
  t12054 = -1.*t11190;
  t12097 = 1. + t12054;
  t13875 = -1.*t12177*t12252;
  t13945 = -1.*t12126*t12841;
  t13965 = t13875 + t13945;
  t13531 = 0.4*t12097*t13417;
  t13633 = -0.4*t13575*t13620;
  t13652 = t11190*t13417;
  t13716 = t13575*t13620;
  t13757 = t13652 + t13716;
  t13787 = 0.8*t13757;
  t13824 = t13531 + t13633 + t13787;
  t13838 = var2[2]*t13824;
  t14039 = 0.4*t12097*t13965;
  t14126 = -0.4*t13417*t13620;
  t14162 = t11190*t13965;
  t14172 = t13417*t13620;
  t14246 = t14162 + t14172;
  t14284 = 0.8*t14246;
  t14324 = t14039 + t14126 + t14284;
  t14348 = var2[0]*t14324;
  t14357 = t13838 + t14348;
  t14761 = t12126*t12177;
  t14762 = -1.*t12252*t12841;
  t14881 = t14761 + t14762;
  t14453 = -0.4*t11190*t13417;
  t14478 = 0.4*t13965*t13620;
  t14479 = -1.*t13965*t13620;
  t14522 = t13652 + t14479;
  t14694 = 0.8*t14522;
  t14726 = t14453 + t14478 + t14694;
  t14748 = var2[2]*t14726;
  t14758 = -0.4*t11190*t13965;
  t14918 = 0.4*t14881*t13620;
  t16030 = -1.*t14881*t13620;
  t16059 = t14162 + t16030;
  t16097 = 0.8*t16059;
  t16185 = t14758 + t14918 + t16097;
  t16188 = var2[0]*t16185;
  t16189 = t14748 + t16188;
  t16192 = 0.4*t12097*t14881;
  t16196 = -0.4*t13965*t13620;
  t16217 = t11190*t14881;
  t16225 = t13965*t13620;
  t16248 = t16217 + t16225;
  t16262 = 0.8*t16248;
  t16268 = t16192 + t16196 + t16262;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t14357;
  p_output1[3]=t14357;
  p_output1[4]=t16189;
  p_output1[5]=t16268;
  p_output1[6]=t14324;
  p_output1[7]=t14357;
  p_output1[8]=t14357;
  p_output1[9]=t16189;
  p_output1[10]=t16268;
  p_output1[11]=t14324;
  p_output1[12]=t16189;
  p_output1[13]=t16189;
  p_output1[14]=(0.4*t11190*t13575 + t14918 + 0.8*(-1.*t11190*t13575 + t16030))*var2[0] + (t14478 + 0.4*t11190*t14881 + 0.8*(t14479 - 1.*t11190*t14881))*var2[2];
  p_output1[15]=0.4*t13575*t13620 - 0.4*t11190*t14881 + 0.8*(-1.*t13575*t13620 + t16217);
  p_output1[16]=t16185;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fLeftToe_vec_LeftStanceLand.hh"

namespace LeftStanceLand
{

void J_fLeftToe_vec_LeftStanceLand_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
