/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:49 GMT-05:00
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
  double t14239;
  double t14252;
  double t14223;
  double t14254;
  double t144;
  double t14243;
  double t18052;
  double t18053;
  double t18055;
  double t18064;
  double t18065;
  double t18066;
  double t14100;
  double t14133;
  double t18054;
  double t18067;
  double t18068;
  double t18069;
  double t18070;
  double t18071;
  double t18072;
  double t18078;
  double t18079;
  double t18080;
  double t18121;
  double t18122;
  double t18123;
  double t18120;
  double t18124;
  double t18125;
  double t18126;
  double t18127;
  double t18128;
  double t18129;
  t14239 = Cos(var1[5]);
  t14252 = Sin(var1[2]);
  t14223 = Cos(var1[2]);
  t14254 = Sin(var1[5]);
  t144 = Cos(var1[6]);
  t14243 = t14223*t14239;
  t18052 = -1.*t14252*t14254;
  t18053 = t14243 + t18052;
  t18055 = -1.*t14239*t14252;
  t18064 = -1.*t14223*t14254;
  t18065 = t18055 + t18064;
  t18066 = Sin(var1[6]);
  t14100 = -1.*t144;
  t14133 = 1. + t14100;
  t18054 = 0.4*t14133*t18053;
  t18067 = -0.4*t18065*t18066;
  t18068 = t144*t18053;
  t18069 = t18065*t18066;
  t18070 = t18068 + t18069;
  t18071 = 0.8*t18070;
  t18072 = t18054 + t18067 + t18071;
  t18078 = t14239*t14252;
  t18079 = t14223*t14254;
  t18080 = t18078 + t18079;
  t18121 = -1.*t14223*t14239;
  t18122 = t14252*t14254;
  t18123 = t18121 + t18122;
  t18120 = 0.4*t14133*t18065;
  t18124 = -0.4*t18123*t18066;
  t18125 = t144*t18065;
  t18126 = t18123*t18066;
  t18127 = t18125 + t18126;
  t18128 = 0.8*t18127;
  t18129 = t18120 + t18124 + t18128;
  p_output1[0]=1.;
  p_output1[1]=t18072;
  p_output1[2]=t18072;
  p_output1[3]=-0.4*t144*t18053 + 0.4*t18066*t18080 + 0.8*(t18068 - 1.*t18066*t18080);
  p_output1[4]=-1.;
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t18129;
  p_output1[8]=t18129;
  p_output1[9]=-0.4*t144*t18065 + 0.4*t18053*t18066 + 0.8*(-1.*t18053*t18066 + t18125);
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

namespace DoubleSupportConstHeight
{

void J_h_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
