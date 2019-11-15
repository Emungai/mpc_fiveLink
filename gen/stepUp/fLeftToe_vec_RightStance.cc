/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:13 GMT-05:00
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
  double t9399;
  double t9406;
  double t9394;
  double t9407;
  double t3159;
  double t9401;
  double t9424;
  double t9425;
  double t9428;
  double t9429;
  double t10911;
  double t10915;
  double t9336;
  double t9339;
  double t10924;
  double t10925;
  double t10926;
  double t9426;
  double t10916;
  double t10917;
  double t10918;
  double t10919;
  double t10920;
  double t10921;
  double t10922;
  double t10923;
  double t10929;
  double t10930;
  double t10931;
  double t10932;
  double t10933;
  double t10934;
  double t10935;
  double t10936;
  double t10938;
  double t10939;
  double t10940;
  t9399 = Cos(var1[5]);
  t9406 = Sin(var1[2]);
  t9394 = Cos(var1[2]);
  t9407 = Sin(var1[5]);
  t3159 = Cos(var1[6]);
  t9401 = t9394*t9399;
  t9424 = -1.*t9406*t9407;
  t9425 = t9401 + t9424;
  t9428 = -1.*t9399*t9406;
  t9429 = -1.*t9394*t9407;
  t10911 = t9428 + t9429;
  t10915 = Sin(var1[6]);
  t9336 = -1.*t3159;
  t9339 = 1. + t9336;
  t10924 = -1.*t9394*t9399;
  t10925 = t9406*t9407;
  t10926 = t10924 + t10925;
  t9426 = 0.4*t9339*t9425;
  t10916 = -0.4*t10911*t10915;
  t10917 = t3159*t9425;
  t10918 = t10911*t10915;
  t10919 = t10917 + t10918;
  t10920 = 0.8*t10919;
  t10921 = t9426 + t10916 + t10920;
  t10922 = var2[0]*t10921;
  t10923 = 0.4*t9339*t10911;
  t10929 = -0.4*t10926*t10915;
  t10930 = t3159*t10911;
  t10931 = t10926*t10915;
  t10932 = t10930 + t10931;
  t10933 = 0.8*t10932;
  t10934 = t10923 + t10929 + t10933;
  t10935 = var2[2]*t10934;
  t10936 = t10922 + t10935;
  t10938 = t9399*t9406;
  t10939 = t9394*t9407;
  t10940 = t10938 + t10939;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t10936;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=t10936;
  p_output1[6]=(0.4*t10915*t10940 + 0.8*(t10917 - 1.*t10915*t10940) - 0.4*t3159*t9425)*var2[0] + (-0.4*t10911*t3159 + 0.4*t10915*t9425 + 0.8*(t10930 - 1.*t10915*t9425))*var2[2];
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

#include "fLeftToe_vec_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void fLeftToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
