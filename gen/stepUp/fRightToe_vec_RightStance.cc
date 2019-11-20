/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:16 GMT-05:00
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
  double t4523;
  double t4537;
  double t4521;
  double t4549;
  double t4499;
  double t4527;
  double t4551;
  double t4772;
  double t4826;
  double t9912;
  double t9974;
  double t10025;
  double t4517;
  double t4519;
  double t10199;
  double t10217;
  double t10222;
  double t4773;
  double t10038;
  double t10078;
  double t10083;
  double t10097;
  double t10098;
  double t10159;
  double t10172;
  double t10185;
  double t10234;
  double t10238;
  double t10252;
  double t10259;
  double t10268;
  double t10269;
  double t10279;
  double t10298;
  double t10327;
  double t10329;
  double t10334;
  t4523 = Cos(var1[3]);
  t4537 = Sin(var1[2]);
  t4521 = Cos(var1[2]);
  t4549 = Sin(var1[3]);
  t4499 = Cos(var1[4]);
  t4527 = t4521*t4523;
  t4551 = -1.*t4537*t4549;
  t4772 = t4527 + t4551;
  t4826 = -1.*t4523*t4537;
  t9912 = -1.*t4521*t4549;
  t9974 = t4826 + t9912;
  t10025 = Sin(var1[4]);
  t4517 = -1.*t4499;
  t4519 = 1. + t4517;
  t10199 = -1.*t4521*t4523;
  t10217 = t4537*t4549;
  t10222 = t10199 + t10217;
  t4773 = 0.4*t4519*t4772;
  t10038 = -0.4*t9974*t10025;
  t10078 = t4499*t4772;
  t10083 = t9974*t10025;
  t10097 = t10078 + t10083;
  t10098 = 0.8*t10097;
  t10159 = t4773 + t10038 + t10098;
  t10172 = var2[0]*t10159;
  t10185 = 0.4*t4519*t9974;
  t10234 = -0.4*t10222*t10025;
  t10238 = t4499*t9974;
  t10252 = t10222*t10025;
  t10259 = t10238 + t10252;
  t10268 = 0.8*t10259;
  t10269 = t10185 + t10234 + t10268;
  t10279 = var2[2]*t10269;
  t10298 = t10172 + t10279;
  t10327 = t4523*t4537;
  t10329 = t4521*t4549;
  t10334 = t10327 + t10329;
  p_output1[0]=var2[0];
  p_output1[1]=var2[2];
  p_output1[2]=t10298;
  p_output1[3]=t10298;
  p_output1[4]=(0.4*t10025*t10334 + 0.8*(t10078 - 1.*t10025*t10334) - 0.4*t4499*t4772)*var2[0] + (0.4*t10025*t4772 + 0.8*(t10238 - 1.*t10025*t4772) - 0.4*t4499*t9974)*var2[2];
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

namespace RightStance
{

void fRightToe_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
