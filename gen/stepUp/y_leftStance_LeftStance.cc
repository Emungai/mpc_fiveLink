/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:10:09 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t11925;
  double t11928;
  double t11943;
  double t11953;
  double t11954;
  double t11955;
  double t11929;
  double t11949;
  double t11951;
  double t11952;
  double t11957;
  double t11958;
  double t11959;
  double t11961;
  double t11966;
  double t11967;
  double t11969;
  double t12005;
  t11925 = -1.*var4[1];
  t11928 = var4[0] + t11925;
  t11943 = t11925 + var1[0];
  t11953 = 1/t11928;
  t11954 = -1.*t11953*t11943;
  t11955 = 1. + t11954;
  t11929 = Power(t11928,-5);
  t11949 = Power(t11943,5);
  t11951 = Power(t11928,-4);
  t11952 = Power(t11943,4);
  t11957 = Power(t11928,-3);
  t11958 = Power(t11943,3);
  t11959 = Power(t11955,2);
  t11961 = Power(t11928,-2);
  t11966 = Power(t11943,2);
  t11967 = Power(t11955,3);
  t11969 = Power(t11955,4);
  t12005 = Power(t11955,5);
  p_output1[0]=var2[3] - 1.*t12005*var3[0] - 5.*t11943*t11953*t11969*var3[4] - 10.*t11961*t11966*t11967*var3[8] - 10.*t11957*t11958*t11959*var3[12] - 5.*t11951*t11952*t11955*var3[16] - 1.*t11929*t11949*var3[20];
  p_output1[1]=var2[4] - 1.*t12005*var3[1] - 5.*t11943*t11953*t11969*var3[5] - 10.*t11961*t11966*t11967*var3[9] - 10.*t11957*t11958*t11959*var3[13] - 5.*t11951*t11952*t11955*var3[17] - 1.*t11929*t11949*var3[21];
  p_output1[2]=var2[5] - 1.*t12005*var3[2] - 5.*t11943*t11953*t11969*var3[6] - 10.*t11961*t11966*t11967*var3[10] - 10.*t11957*t11958*t11959*var3[14] - 5.*t11951*t11952*t11955*var3[18] - 1.*t11929*t11949*var3[22];
  p_output1[3]=var2[6] - 1.*t12005*var3[3] - 5.*t11943*t11953*t11969*var3[7] - 10.*t11961*t11966*t11967*var3[11] - 10.*t11957*t11958*t11959*var3[15] - 5.*t11951*t11952*t11955*var3[19] - 1.*t11929*t11949*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_leftStance_LeftStance.hh"

namespace LeftStance
{

void y_leftStance_LeftStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
