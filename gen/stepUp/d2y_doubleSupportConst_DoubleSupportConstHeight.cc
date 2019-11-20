/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:03:17 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t3853;
  double t3972;
  double t4000;
  double t4019;
  double t4445;
  double t4573;
  double t9782;
  double t9783;
  double t9784;
  double t9790;
  double t9791;
  double t9799;
  double t9802;
  double t9803;
  double t9804;
  double t9805;
  double t9809;
  double t9810;
  double t9814;
  double t9815;
  double t9836;
  double t9845;
  double t9850;
  double t9858;
  t3853 = -1.*var6[1];
  t3972 = var6[0] + t3853;
  t4000 = Power(t3972,-5);
  t4019 = -1. + var7[0];
  t4445 = -1. + var8[0];
  t4573 = 1/t4445;
  t9782 = -1.*var1[0];
  t9783 = t9782 + var1[1];
  t9784 = t4019*t4573*t9783;
  t9790 = t3853 + var1[0] + t9784;
  t9791 = Power(t9790,3);
  t9799 = Power(t3972,-4);
  t9802 = Power(t9790,2);
  t9803 = 1/t3972;
  t9804 = -1.*t9803*t9790;
  t9805 = 1. + t9804;
  t9809 = Power(t3972,-3);
  t9810 = Power(t9805,2);
  t9814 = Power(t3972,-2);
  t9815 = Power(t9805,3);
  t9836 = Power(t9790,4);
  t9845 = Power(t9805,4);
  t9850 = Power(t9790,5);
  t9858 = Power(t9805,5);
  p_output1[0]=var4[3] - 20.*t9814*t9815*var5[0] - 60.*t9790*t9809*t9810*var5[2] + 40.*t9814*t9815*var5[2] - 60.*t9799*t9802*t9805*var5[4] + 120.*t9790*t9809*t9810*var5[4] - 20.*t9814*t9815*var5[4] - 20.*t4000*t9791*var5[6] + 120.*t9799*t9802*t9805*var5[6] - 60.*t9790*t9809*t9810*var5[6] + 40.*t4000*t9791*var5[8] - 60.*t9799*t9802*t9805*var5[8] - 20.*t4000*t9791*var5[10] + (var2[3] - 1.*t9858*var5[0] - 5.*t9790*t9803*t9845*var5[2] - 10.*t9802*t9814*t9815*var5[4] - 10.*t9791*t9809*t9810*var5[6] - 5.*t9799*t9805*t9836*var5[8] - 1.*t4000*t9850*var5[10])*var9[0] + (var3[3] + 5.*t9803*t9845*var5[0] + 20.*t9790*t9814*t9815*var5[2] - 5.*t9803*t9845*var5[2] + 30.*t9802*t9809*t9810*var5[4] - 20.*t9790*t9814*t9815*var5[4] + 20.*t9791*t9799*t9805*var5[6] - 30.*t9802*t9809*t9810*var5[6] - 20.*t9791*t9799*t9805*var5[8] + 5.*t4000*t9836*var5[8] - 5.*t4000*t9836*var5[10])*var9[1];
  p_output1[1]=var4[4] - 20.*t9814*t9815*var5[1] - 60.*t9790*t9809*t9810*var5[3] + 40.*t9814*t9815*var5[3] - 60.*t9799*t9802*t9805*var5[5] + 120.*t9790*t9809*t9810*var5[5] - 20.*t9814*t9815*var5[5] - 20.*t4000*t9791*var5[7] + 120.*t9799*t9802*t9805*var5[7] - 60.*t9790*t9809*t9810*var5[7] + 40.*t4000*t9791*var5[9] - 60.*t9799*t9802*t9805*var5[9] - 20.*t4000*t9791*var5[11] + (var2[4] - 1.*t9858*var5[1] - 5.*t9790*t9803*t9845*var5[3] - 10.*t9802*t9814*t9815*var5[5] - 10.*t9791*t9809*t9810*var5[7] - 5.*t9799*t9805*t9836*var5[9] - 1.*t4000*t9850*var5[11])*var9[0] + (var3[4] + 5.*t9803*t9845*var5[1] + 20.*t9790*t9814*t9815*var5[3] - 5.*t9803*t9845*var5[3] + 30.*t9802*t9809*t9810*var5[5] - 20.*t9790*t9814*t9815*var5[5] + 20.*t9791*t9799*t9805*var5[7] - 30.*t9802*t9809*t9810*var5[7] - 20.*t9791*t9799*t9805*var5[9] + 5.*t4000*t9836*var5[9] - 5.*t4000*t9836*var5[11])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 2, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "d2y_doubleSupportConst_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void d2y_doubleSupportConst_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
