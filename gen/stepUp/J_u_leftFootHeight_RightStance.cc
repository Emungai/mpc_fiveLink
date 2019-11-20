/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:08:27 GMT-05:00
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
  double t4686;
  double t4677;
  double t4681;
  double t4692;
  double t4569;
  double t4683;
  double t4705;
  double t4734;
  double t4780;
  double t4782;
  double t4790;
  double t4797;
  double t4631;
  double t4655;
  double t4762;
  double t4800;
  double t4801;
  double t4803;
  double t4809;
  double t4828;
  double t4830;
  double t4833;
  double t4834;
  double t4841;
  t4686 = Cos(var1[2]);
  t4677 = Cos(var1[5]);
  t4681 = Sin(var1[2]);
  t4692 = Sin(var1[5]);
  t4569 = Cos(var1[6]);
  t4683 = -1.*t4677*t4681;
  t4705 = -1.*t4686*t4692;
  t4734 = t4683 + t4705;
  t4780 = -1.*t4686*t4677;
  t4782 = t4681*t4692;
  t4790 = t4780 + t4782;
  t4797 = Sin(var1[6]);
  t4631 = -1.*t4569;
  t4655 = 1. + t4631;
  t4762 = 0.4*t4655*t4734;
  t4800 = -0.4*t4790*t4797;
  t4801 = t4569*t4734;
  t4803 = t4790*t4797;
  t4809 = t4801 + t4803;
  t4828 = 0.8*t4809;
  t4830 = t4762 + t4800 + t4828;
  t4833 = t4686*t4677;
  t4834 = -1.*t4681*t4692;
  t4841 = t4833 + t4834;
  p_output1[0]=1.;
  p_output1[1]=t4830;
  p_output1[2]=t4830;
  p_output1[3]=-0.4*t4569*t4734 + 0.4*t4797*t4841 + 0.8*(t4801 - 1.*t4797*t4841);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "J_u_leftFootHeight_RightStance.hh"

namespace RightStance
{

void J_u_leftFootHeight_RightStance_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
