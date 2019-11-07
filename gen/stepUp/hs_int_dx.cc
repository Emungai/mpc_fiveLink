/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:27:58 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t2413;
  double t2537;
  double t2558;
  double t2635;
  double t362;
  double t2764;
  double t2969;
  double t3370;
  double t4863;
  double t4906;
  double t4923;
  t2413 = -1. + var8[0];
  t2537 = 1/t2413;
  t2558 = -1.*var1[0];
  t2635 = t2558 + var1[1];
  t362 = -1.*var2[0];
  t2764 = -1.*var2[1];
  t2969 = -1.*var2[2];
  t3370 = -1.*var2[3];
  t4863 = -1.*var2[4];
  t4906 = -1.*var2[5];
  t4923 = -1.*var2[6];
  p_output1[0]=t362 + var6[0] - 0.333333333333333*t2537*t2635*(var3[0] + 4.*var5[0] + var7[0]);
  p_output1[1]=t2764 + var6[1] - 0.333333333333333*t2537*t2635*(var3[1] + 4.*var5[1] + var7[1]);
  p_output1[2]=t2969 + var6[2] - 0.333333333333333*t2537*t2635*(var3[2] + 4.*var5[2] + var7[2]);
  p_output1[3]=t3370 + var6[3] - 0.333333333333333*t2537*t2635*(var3[3] + 4.*var5[3] + var7[3]);
  p_output1[4]=t4863 + var6[4] - 0.333333333333333*t2537*t2635*(var3[4] + 4.*var5[4] + var7[4]);
  p_output1[5]=t4906 + var6[5] - 0.333333333333333*t2537*t2635*(var3[5] + 4.*var5[5] + var7[5]);
  p_output1[6]=t4923 + var6[6] - 0.333333333333333*t2537*t2635*(var3[6] + 4.*var5[6] + var7[6]);
  p_output1[7]=var4[0] + 0.5*(t362 - 1.*var6[0]) - 0.25*t2537*t2635*(var3[0] - 1.*var7[0]);
  p_output1[8]=var4[1] + 0.5*(t2764 - 1.*var6[1]) - 0.25*t2537*t2635*(var3[1] - 1.*var7[1]);
  p_output1[9]=var4[2] + 0.5*(t2969 - 1.*var6[2]) - 0.25*t2537*t2635*(var3[2] - 1.*var7[2]);
  p_output1[10]=var4[3] + 0.5*(t3370 - 1.*var6[3]) - 0.25*t2537*t2635*(var3[3] - 1.*var7[3]);
  p_output1[11]=var4[4] + 0.5*(t4863 - 1.*var6[4]) - 0.25*t2537*t2635*(var3[4] - 1.*var7[4]);
  p_output1[12]=var4[5] + 0.5*(t4906 - 1.*var6[5]) - 0.25*t2537*t2635*(var3[5] - 1.*var7[5]);
  p_output1[13]=var4[6] + 0.5*(t4923 - 1.*var6[6]) - 0.25*t2537*t2635*(var3[6] - 1.*var7[6]);
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "hs_int_dx.hh"

namespace DoubleSupportDiffHeight
{

void hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
