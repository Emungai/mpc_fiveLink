/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:42 GMT-05:00
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
  double t4600;
  double t4710;
  double t4596;
  double t4788;
  double t2667;
  double t4694;
  double t4789;
  double t4806;
  double t4816;
  double t4818;
  double t4821;
  double t4822;
  double t3761;
  double t4213;
  double t9869;
  double t10158;
  double t10333;
  double t4807;
  double t4838;
  double t4839;
  double t4866;
  double t4874;
  double t4955;
  double t5072;
  double t8354;
  double t8592;
  double t11048;
  double t11049;
  double t11128;
  double t11129;
  double t11173;
  double t11184;
  double t11185;
  double t11186;
  double t11193;
  double t11200;
  double t11201;
  t4600 = Cos(var1[5]);
  t4710 = Sin(var1[2]);
  t4596 = Cos(var1[2]);
  t4788 = Sin(var1[5]);
  t2667 = Cos(var1[6]);
  t4694 = t4596*t4600;
  t4789 = -1.*t4710*t4788;
  t4806 = t4694 + t4789;
  t4816 = -1.*t4600*t4710;
  t4818 = -1.*t4596*t4788;
  t4821 = t4816 + t4818;
  t4822 = Sin(var1[6]);
  t3761 = -1.*t2667;
  t4213 = 1. + t3761;
  t9869 = -1.*t4596*t4600;
  t10158 = t4710*t4788;
  t10333 = t9869 + t10158;
  t4807 = 0.4*t4213*t4806;
  t4838 = -0.4*t4821*t4822;
  t4839 = t2667*t4806;
  t4866 = t4821*t4822;
  t4874 = t4839 + t4866;
  t4955 = 0.8*t4874;
  t5072 = t4807 + t4838 + t4955;
  t8354 = var2[0]*t5072;
  t8592 = 0.4*t4213*t4821;
  t11048 = -0.4*t10333*t4822;
  t11049 = t2667*t4821;
  t11128 = t10333*t4822;
  t11129 = t11049 + t11128;
  t11173 = 0.8*t11129;
  t11184 = t8592 + t11048 + t11173;
  t11185 = var2[2]*t11184;
  t11186 = t8354 + t11185;
  t11193 = t4600*t4710;
  t11200 = t4596*t4788;
  t11201 = t11193 + t11200;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t11186;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t11186;
  p_output1[6]=(-0.4*t2667*t4806 + 0.4*t11201*t4822 + 0.8*(-1.*t11201*t4822 + t4839))*var2[0] + (-0.4*t2667*t4821 + 0.4*t4806*t4822 + 0.8*(t11049 - 1.*t4806*t4822))*var2[2];
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

#include "fLeftToe_vec_LeftStance.hh"

namespace LeftStance
{

void fLeftToe_vec_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
