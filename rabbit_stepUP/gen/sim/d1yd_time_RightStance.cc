/*
 * Automatically Generated from Mathematica.
 * Mon 9 Dec 2019 23:19:43 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3)
{
  double t599;
  double t605;
  double t609;
  double t613;
  double t615;
  double t619;
  double t620;
  double t621;
  double t622;
  double t623;
  double t626;
  double t627;
  double t628;
  double t631;
  double t632;
  double t635;
  t599 = -1.*var3[1];
  t605 = var3[0] + t599;
  t609 = Power(t605,-5);
  t613 = t599 + var1[0];
  t615 = Power(t613,4);
  t619 = Power(t605,-4);
  t620 = Power(t613,3);
  t621 = 1/t605;
  t622 = -1.*t621*t613;
  t623 = 1. + t622;
  t626 = Power(t605,-3);
  t627 = Power(t613,2);
  t628 = Power(t623,2);
  t631 = Power(t605,-2);
  t632 = Power(t623,3);
  t635 = Power(t623,4);
  p_output1[0]=-5.*t621*t635*var2[0] - 20.*t613*t631*t632*var2[4] + 5.*t621*t635*var2[4] - 30.*t626*t627*t628*var2[8] + 20.*t613*t631*t632*var2[8] - 20.*t619*t620*t623*var2[12] + 30.*t626*t627*t628*var2[12] - 5.*t609*t615*var2[16] + 20.*t619*t620*t623*var2[16] + 5.*t609*t615*var2[20];
  p_output1[1]=-5.*t621*t635*var2[1] - 20.*t613*t631*t632*var2[5] + 5.*t621*t635*var2[5] - 30.*t626*t627*t628*var2[9] + 20.*t613*t631*t632*var2[9] - 20.*t619*t620*t623*var2[13] + 30.*t626*t627*t628*var2[13] - 5.*t609*t615*var2[17] + 20.*t619*t620*t623*var2[17] + 5.*t609*t615*var2[21];
  p_output1[2]=-5.*t621*t635*var2[2] - 20.*t613*t631*t632*var2[6] + 5.*t621*t635*var2[6] - 30.*t626*t627*t628*var2[10] + 20.*t613*t631*t632*var2[10] - 20.*t619*t620*t623*var2[14] + 30.*t626*t627*t628*var2[14] - 5.*t609*t615*var2[18] + 20.*t619*t620*t623*var2[18] + 5.*t609*t615*var2[22];
  p_output1[3]=-5.*t621*t635*var2[3] - 20.*t613*t631*t632*var2[7] + 5.*t621*t635*var2[7] - 30.*t626*t627*t628*var2[11] + 20.*t613*t631*t632*var2[11] - 20.*t619*t620*t623*var2[15] + 30.*t626*t627*t628*var2[15] - 5.*t609*t615*var2[19] + 20.*t619*t620*t623*var2[19] + 5.*t609*t615*var2[23];
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

  double *var1,*var2,*var3;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 3)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Three input(s) required (var1,var2,var3).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3);


}

#else // MATLAB_MEX_FILE

#include "d1yd_time_RightStance.hh"

namespace SymFunction
{

void d1yd_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3);

}

}

#endif // MATLAB_MEX_FILE
