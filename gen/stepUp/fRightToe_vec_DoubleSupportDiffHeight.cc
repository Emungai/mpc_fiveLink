/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:03 GMT-05:00
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
  double t2813;
  double t4688;
  double t2766;
  double t4885;
  double t328;
  double t4676;
  double t4895;
  double t4912;
  double t4935;
  double t4941;
  double t4955;
  double t4956;
  double t2457;
  double t2493;
  double t5104;
  double t5108;
  double t5124;
  double t4916;
  double t4979;
  double t4983;
  double t5000;
  double t5001;
  double t5077;
  double t5079;
  double t5086;
  double t5091;
  double t5131;
  double t5141;
  double t5142;
  double t5161;
  double t5272;
  double t5279;
  double t5281;
  double t5283;
  double t5291;
  double t5293;
  double t5295;
  t2813 = Cos(var1[3]);
  t4688 = Sin(var1[2]);
  t2766 = Cos(var1[2]);
  t4885 = Sin(var1[3]);
  t328 = Cos(var1[4]);
  t4676 = t2766*t2813;
  t4895 = -1.*t4688*t4885;
  t4912 = t4676 + t4895;
  t4935 = -1.*t2813*t4688;
  t4941 = -1.*t2766*t4885;
  t4955 = t4935 + t4941;
  t4956 = Sin(var1[4]);
  t2457 = -1.*t328;
  t2493 = 1. + t2457;
  t5104 = -1.*t2766*t2813;
  t5108 = t4688*t4885;
  t5124 = t5104 + t5108;
  t4916 = 0.4*t2493*t4912;
  t4979 = -0.4*t4955*t4956;
  t4983 = t328*t4912;
  t5000 = t4955*t4956;
  t5001 = t4983 + t5000;
  t5077 = 0.8*t5001;
  t5079 = t4916 + t4979 + t5077;
  t5086 = var2[0]*t5079;
  t5091 = 0.4*t2493*t4955;
  t5131 = -0.4*t5124*t4956;
  t5141 = t328*t4955;
  t5142 = t5124*t4956;
  t5161 = t5141 + t5142;
  t5272 = 0.8*t5161;
  t5279 = t5091 + t5131 + t5272;
  t5281 = var2[2]*t5279;
  t5283 = t5086 + t5281;
  t5291 = t2813*t4688;
  t5293 = t2766*t4885;
  t5295 = t5291 + t5293;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t5283;
  p_output1[3]=t5283;
  p_output1[4]=(-0.4*t328*t4912 + 0.4*t4956*t5295 + 0.8*(t4983 - 1.*t4956*t5295))*var2[0] + (-0.4*t328*t4955 + 0.4*t4912*t4956 + 0.8*(-1.*t4912*t4956 + t5141))*var2[2];
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

#include "fRightToe_vec_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void fRightToe_vec_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
