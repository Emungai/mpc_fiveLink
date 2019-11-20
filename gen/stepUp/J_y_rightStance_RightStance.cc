/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:43 GMT-05:00
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
  double t10994;
  double t10938;
  double t10948;
  double t10953;
  double t10990;
  double t10992;
  double t10995;
  double t10996;
  double t10997;
  double t10998;
  double t10999;
  double t11000;
  double t11005;
  double t11008;
  double t11009;
  double t11010;
  double t11011;
  double t11012;
  double t11015;
  double t11016;
  double t11017;
  double t11020;
  double t11021;
  double t11024;
  double t11045;
  double t11047;
  double t11061;
  double t11062;
  double t11039;
  double t11040;
  double t11041;
  double t11042;
  double t11043;
  double t11044;
  double t11046;
  t10994 = -1.*var4[1];
  t10938 = -1. + var5[0];
  t10948 = -1. + var6[0];
  t10953 = 1/t10948;
  t10990 = -1.*t10938*t10953;
  t10992 = 1. + t10990;
  t10995 = var4[0] + t10994;
  t10996 = Power(t10995,-5);
  t10997 = -1.*var1[0];
  t10998 = t10997 + var1[1];
  t10999 = t10938*t10953*t10998;
  t11000 = t10994 + var1[0] + t10999;
  t11005 = Power(t11000,4);
  t11008 = Power(t10995,-4);
  t11009 = Power(t11000,3);
  t11010 = 1/t10995;
  t11011 = -1.*t11010*t11000;
  t11012 = 1. + t11011;
  t11015 = Power(t10995,-3);
  t11016 = Power(t11000,2);
  t11017 = Power(t11012,2);
  t11020 = Power(t10995,-2);
  t11021 = Power(t11012,3);
  t11024 = Power(t11012,4);
  t11045 = Power(t11000,5);
  t11047 = Power(t10995,-6);
  t11061 = -1.*t11020*t11000;
  t11062 = t11010 + t11061;
  t11039 = Power(t11012,5);
  t11040 = -1.*t11039;
  t11041 = -5.*t11010*t11000*t11024;
  t11042 = -10.*t11020*t11016*t11021;
  t11043 = -10.*t11015*t11009*t11017;
  t11044 = -5.*t11008*t11005*t11012;
  t11046 = -1.*t10996*t11045;
  p_output1[0]=5.*t10992*t11010*t11024*var3[0] + 20.*t10992*t11000*t11020*t11021*var3[4] - 5.*t10992*t11010*t11024*var3[4] + 30.*t10992*t11015*t11016*t11017*var3[8] - 20.*t10992*t11000*t11020*t11021*var3[8] + 20.*t10992*t11008*t11009*t11012*var3[12] - 30.*t10992*t11015*t11016*t11017*var3[12] + 5.*t10992*t10996*t11005*var3[16] - 20.*t10992*t11008*t11009*t11012*var3[16] - 5.*t10992*t10996*t11005*var3[20];
  p_output1[1]=5.*t10938*t10953*t11010*t11024*var3[0] + 20.*t10938*t10953*t11000*t11020*t11021*var3[4] - 5.*t10938*t10953*t11010*t11024*var3[4] + 30.*t10938*t10953*t11015*t11016*t11017*var3[8] - 20.*t10938*t10953*t11000*t11020*t11021*var3[8] + 20.*t10938*t10953*t11008*t11009*t11012*var3[12] - 30.*t10938*t10953*t11015*t11016*t11017*var3[12] + 5.*t10938*t10953*t10996*t11005*var3[16] - 20.*t10938*t10953*t11008*t11009*t11012*var3[16] - 5.*t10938*t10953*t10996*t11005*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t11040;
  p_output1[4]=t11041;
  p_output1[5]=t11042;
  p_output1[6]=t11043;
  p_output1[7]=t11044;
  p_output1[8]=t11046;
  p_output1[9]=-5.*t11000*t11020*t11024*var3[0] - 20.*t11015*t11016*t11021*var3[4] + 5.*t11000*t11020*t11024*var3[4] - 30.*t11008*t11009*t11017*var3[8] + 20.*t11015*t11016*t11021*var3[8] - 20.*t10996*t11005*t11012*var3[12] + 30.*t11008*t11009*t11017*var3[12] + 20.*t10996*t11005*t11012*var3[16] - 5.*t11045*t11047*var3[16] + 5.*t11045*t11047*var3[20];
  p_output1[10]=-5.*t11024*t11062*var3[0] + 5.*t11010*t11024*var3[4] - 5.*t11000*t11020*t11024*var3[4] - 20.*t11000*t11010*t11021*t11062*var3[4] - 20.*t11015*t11016*t11021*var3[8] + 20.*t11000*t11020*t11021*var3[8] - 30.*t11016*t11017*t11020*t11062*var3[8] - 30.*t11008*t11009*t11017*var3[12] + 30.*t11015*t11016*t11017*var3[12] - 20.*t11009*t11012*t11015*t11062*var3[12] - 20.*t10996*t11005*t11012*var3[16] + 20.*t11008*t11009*t11012*var3[16] - 5.*t11005*t11008*t11062*var3[16] + 5.*t10996*t11005*var3[20] - 5.*t11045*t11047*var3[20];
  p_output1[11]=5.*t10992*t11010*t11024*var3[1] + 20.*t10992*t11000*t11020*t11021*var3[5] - 5.*t10992*t11010*t11024*var3[5] + 30.*t10992*t11015*t11016*t11017*var3[9] - 20.*t10992*t11000*t11020*t11021*var3[9] + 20.*t10992*t11008*t11009*t11012*var3[13] - 30.*t10992*t11015*t11016*t11017*var3[13] + 5.*t10992*t10996*t11005*var3[17] - 20.*t10992*t11008*t11009*t11012*var3[17] - 5.*t10992*t10996*t11005*var3[21];
  p_output1[12]=5.*t10938*t10953*t11010*t11024*var3[1] + 20.*t10938*t10953*t11000*t11020*t11021*var3[5] - 5.*t10938*t10953*t11010*t11024*var3[5] + 30.*t10938*t10953*t11015*t11016*t11017*var3[9] - 20.*t10938*t10953*t11000*t11020*t11021*var3[9] + 20.*t10938*t10953*t11008*t11009*t11012*var3[13] - 30.*t10938*t10953*t11015*t11016*t11017*var3[13] + 5.*t10938*t10953*t10996*t11005*var3[17] - 20.*t10938*t10953*t11008*t11009*t11012*var3[17] - 5.*t10938*t10953*t10996*t11005*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t11040;
  p_output1[15]=t11041;
  p_output1[16]=t11042;
  p_output1[17]=t11043;
  p_output1[18]=t11044;
  p_output1[19]=t11046;
  p_output1[20]=-5.*t11000*t11020*t11024*var3[1] - 20.*t11015*t11016*t11021*var3[5] + 5.*t11000*t11020*t11024*var3[5] - 30.*t11008*t11009*t11017*var3[9] + 20.*t11015*t11016*t11021*var3[9] - 20.*t10996*t11005*t11012*var3[13] + 30.*t11008*t11009*t11017*var3[13] + 20.*t10996*t11005*t11012*var3[17] - 5.*t11045*t11047*var3[17] + 5.*t11045*t11047*var3[21];
  p_output1[21]=-5.*t11024*t11062*var3[1] + 5.*t11010*t11024*var3[5] - 5.*t11000*t11020*t11024*var3[5] - 20.*t11000*t11010*t11021*t11062*var3[5] - 20.*t11015*t11016*t11021*var3[9] + 20.*t11000*t11020*t11021*var3[9] - 30.*t11016*t11017*t11020*t11062*var3[9] - 30.*t11008*t11009*t11017*var3[13] + 30.*t11015*t11016*t11017*var3[13] - 20.*t11009*t11012*t11015*t11062*var3[13] - 20.*t10996*t11005*t11012*var3[17] + 20.*t11008*t11009*t11012*var3[17] - 5.*t11005*t11008*t11062*var3[17] + 5.*t10996*t11005*var3[21] - 5.*t11045*t11047*var3[21];
  p_output1[22]=5.*t10992*t11010*t11024*var3[2] + 20.*t10992*t11000*t11020*t11021*var3[6] - 5.*t10992*t11010*t11024*var3[6] + 30.*t10992*t11015*t11016*t11017*var3[10] - 20.*t10992*t11000*t11020*t11021*var3[10] + 20.*t10992*t11008*t11009*t11012*var3[14] - 30.*t10992*t11015*t11016*t11017*var3[14] + 5.*t10992*t10996*t11005*var3[18] - 20.*t10992*t11008*t11009*t11012*var3[18] - 5.*t10992*t10996*t11005*var3[22];
  p_output1[23]=5.*t10938*t10953*t11010*t11024*var3[2] + 20.*t10938*t10953*t11000*t11020*t11021*var3[6] - 5.*t10938*t10953*t11010*t11024*var3[6] + 30.*t10938*t10953*t11015*t11016*t11017*var3[10] - 20.*t10938*t10953*t11000*t11020*t11021*var3[10] + 20.*t10938*t10953*t11008*t11009*t11012*var3[14] - 30.*t10938*t10953*t11015*t11016*t11017*var3[14] + 5.*t10938*t10953*t10996*t11005*var3[18] - 20.*t10938*t10953*t11008*t11009*t11012*var3[18] - 5.*t10938*t10953*t10996*t11005*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t11040;
  p_output1[26]=t11041;
  p_output1[27]=t11042;
  p_output1[28]=t11043;
  p_output1[29]=t11044;
  p_output1[30]=t11046;
  p_output1[31]=-5.*t11000*t11020*t11024*var3[2] - 20.*t11015*t11016*t11021*var3[6] + 5.*t11000*t11020*t11024*var3[6] - 30.*t11008*t11009*t11017*var3[10] + 20.*t11015*t11016*t11021*var3[10] - 20.*t10996*t11005*t11012*var3[14] + 30.*t11008*t11009*t11017*var3[14] + 20.*t10996*t11005*t11012*var3[18] - 5.*t11045*t11047*var3[18] + 5.*t11045*t11047*var3[22];
  p_output1[32]=-5.*t11024*t11062*var3[2] + 5.*t11010*t11024*var3[6] - 5.*t11000*t11020*t11024*var3[6] - 20.*t11000*t11010*t11021*t11062*var3[6] - 20.*t11015*t11016*t11021*var3[10] + 20.*t11000*t11020*t11021*var3[10] - 30.*t11016*t11017*t11020*t11062*var3[10] - 30.*t11008*t11009*t11017*var3[14] + 30.*t11015*t11016*t11017*var3[14] - 20.*t11009*t11012*t11015*t11062*var3[14] - 20.*t10996*t11005*t11012*var3[18] + 20.*t11008*t11009*t11012*var3[18] - 5.*t11005*t11008*t11062*var3[18] + 5.*t10996*t11005*var3[22] - 5.*t11045*t11047*var3[22];
  p_output1[33]=5.*t10992*t11010*t11024*var3[3] + 20.*t10992*t11000*t11020*t11021*var3[7] - 5.*t10992*t11010*t11024*var3[7] + 30.*t10992*t11015*t11016*t11017*var3[11] - 20.*t10992*t11000*t11020*t11021*var3[11] + 20.*t10992*t11008*t11009*t11012*var3[15] - 30.*t10992*t11015*t11016*t11017*var3[15] + 5.*t10992*t10996*t11005*var3[19] - 20.*t10992*t11008*t11009*t11012*var3[19] - 5.*t10992*t10996*t11005*var3[23];
  p_output1[34]=5.*t10938*t10953*t11010*t11024*var3[3] + 20.*t10938*t10953*t11000*t11020*t11021*var3[7] - 5.*t10938*t10953*t11010*t11024*var3[7] + 30.*t10938*t10953*t11015*t11016*t11017*var3[11] - 20.*t10938*t10953*t11000*t11020*t11021*var3[11] + 20.*t10938*t10953*t11008*t11009*t11012*var3[15] - 30.*t10938*t10953*t11015*t11016*t11017*var3[15] + 5.*t10938*t10953*t10996*t11005*var3[19] - 20.*t10938*t10953*t11008*t11009*t11012*var3[19] - 5.*t10938*t10953*t10996*t11005*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t11040;
  p_output1[37]=t11041;
  p_output1[38]=t11042;
  p_output1[39]=t11043;
  p_output1[40]=t11044;
  p_output1[41]=t11046;
  p_output1[42]=-5.*t11000*t11020*t11024*var3[3] - 20.*t11015*t11016*t11021*var3[7] + 5.*t11000*t11020*t11024*var3[7] - 30.*t11008*t11009*t11017*var3[11] + 20.*t11015*t11016*t11021*var3[11] - 20.*t10996*t11005*t11012*var3[15] + 30.*t11008*t11009*t11017*var3[15] + 20.*t10996*t11005*t11012*var3[19] - 5.*t11045*t11047*var3[19] + 5.*t11045*t11047*var3[23];
  p_output1[43]=-5.*t11024*t11062*var3[3] + 5.*t11010*t11024*var3[7] - 5.*t11000*t11020*t11024*var3[7] - 20.*t11000*t11010*t11021*t11062*var3[7] - 20.*t11015*t11016*t11021*var3[11] + 20.*t11000*t11020*t11021*var3[11] - 30.*t11016*t11017*t11020*t11062*var3[11] - 30.*t11008*t11009*t11017*var3[15] + 30.*t11015*t11016*t11017*var3[15] - 20.*t11009*t11012*t11015*t11062*var3[15] - 20.*t10996*t11005*t11012*var3[19] + 20.*t11008*t11009*t11012*var3[19] - 5.*t11005*t11008*t11062*var3[19] + 5.*t10996*t11005*var3[23] - 5.*t11045*t11047*var3[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_rightStance_RightStance.hh"

namespace RightStance
{

void J_y_rightStance_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
