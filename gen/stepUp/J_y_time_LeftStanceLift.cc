/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:24:37 GMT-05:00
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
  double t4319;
  double t4342;
  double t4361;
  double t4371;
  double t4445;
  double t4760;
  double t4765;
  double t4861;
  double t4924;
  double t4928;
  double t4937;
  double t4940;
  double t4994;
  double t6022;
  double t6073;
  double t6208;
  double t6286;
  double t6294;
  double t6399;
  double t6400;
  double t6224;
  double t6225;
  double t6226;
  double t6269;
  double t6270;
  double t6277;
  double t6293;
  t4319 = -1.*var4[1];
  t4342 = var4[0] + t4319;
  t4361 = Power(t4342,-5);
  t4371 = t4319 + var1[0];
  t4445 = Power(t4371,4);
  t4760 = Power(t4342,-4);
  t4765 = Power(t4371,3);
  t4861 = 1/t4342;
  t4924 = -1.*t4861*t4371;
  t4928 = 1. + t4924;
  t4937 = Power(t4342,-3);
  t4940 = Power(t4371,2);
  t4994 = Power(t4928,2);
  t6022 = Power(t4342,-2);
  t6073 = Power(t4928,3);
  t6208 = Power(t4928,4);
  t6286 = Power(t4371,5);
  t6294 = Power(t4342,-6);
  t6399 = -1.*t6022*t4371;
  t6400 = t4861 + t6399;
  t6224 = Power(t4928,5);
  t6225 = -1.*t6224;
  t6226 = -5.*t4861*t4371*t6208;
  t6269 = -10.*t6022*t4940*t6073;
  t6270 = -10.*t4937*t4765*t4994;
  t6277 = -5.*t4760*t4445*t4928;
  t6293 = -1.*t4361*t6286;
  p_output1[0]=5.*t4861*t6208*var3[0] + 20.*t4371*t6022*t6073*var3[4] - 5.*t4861*t6208*var3[4] + 30.*t4937*t4940*t4994*var3[8] - 20.*t4371*t6022*t6073*var3[8] + 20.*t4760*t4765*t4928*var3[12] - 30.*t4937*t4940*t4994*var3[12] + 5.*t4361*t4445*var3[16] - 20.*t4760*t4765*t4928*var3[16] - 5.*t4361*t4445*var3[20];
  p_output1[1]=1.;
  p_output1[2]=t6225;
  p_output1[3]=t6226;
  p_output1[4]=t6269;
  p_output1[5]=t6270;
  p_output1[6]=t6277;
  p_output1[7]=t6293;
  p_output1[8]=-5.*t4371*t6022*t6208*var3[0] - 20.*t4937*t4940*t6073*var3[4] + 5.*t4371*t6022*t6208*var3[4] - 30.*t4760*t4765*t4994*var3[8] + 20.*t4937*t4940*t6073*var3[8] - 20.*t4361*t4445*t4928*var3[12] + 30.*t4760*t4765*t4994*var3[12] + 20.*t4361*t4445*t4928*var3[16] - 5.*t6286*t6294*var3[16] + 5.*t6286*t6294*var3[20];
  p_output1[9]=-5.*t6208*t6400*var3[0] + 5.*t4861*t6208*var3[4] - 5.*t4371*t6022*t6208*var3[4] - 20.*t4371*t4861*t6073*t6400*var3[4] - 20.*t4937*t4940*t6073*var3[8] + 20.*t4371*t6022*t6073*var3[8] - 30.*t4940*t4994*t6022*t6400*var3[8] - 30.*t4760*t4765*t4994*var3[12] + 30.*t4937*t4940*t4994*var3[12] - 20.*t4765*t4928*t4937*t6400*var3[12] - 20.*t4361*t4445*t4928*var3[16] + 20.*t4760*t4765*t4928*var3[16] - 5.*t4445*t4760*t6400*var3[16] + 5.*t4361*t4445*var3[20] - 5.*t6286*t6294*var3[20];
  p_output1[10]=5.*t4861*t6208*var3[1] + 20.*t4371*t6022*t6073*var3[5] - 5.*t4861*t6208*var3[5] + 30.*t4937*t4940*t4994*var3[9] - 20.*t4371*t6022*t6073*var3[9] + 20.*t4760*t4765*t4928*var3[13] - 30.*t4937*t4940*t4994*var3[13] + 5.*t4361*t4445*var3[17] - 20.*t4760*t4765*t4928*var3[17] - 5.*t4361*t4445*var3[21];
  p_output1[11]=1.;
  p_output1[12]=t6225;
  p_output1[13]=t6226;
  p_output1[14]=t6269;
  p_output1[15]=t6270;
  p_output1[16]=t6277;
  p_output1[17]=t6293;
  p_output1[18]=-5.*t4371*t6022*t6208*var3[1] - 20.*t4937*t4940*t6073*var3[5] + 5.*t4371*t6022*t6208*var3[5] - 30.*t4760*t4765*t4994*var3[9] + 20.*t4937*t4940*t6073*var3[9] - 20.*t4361*t4445*t4928*var3[13] + 30.*t4760*t4765*t4994*var3[13] + 20.*t4361*t4445*t4928*var3[17] - 5.*t6286*t6294*var3[17] + 5.*t6286*t6294*var3[21];
  p_output1[19]=-5.*t6208*t6400*var3[1] + 5.*t4861*t6208*var3[5] - 5.*t4371*t6022*t6208*var3[5] - 20.*t4371*t4861*t6073*t6400*var3[5] - 20.*t4937*t4940*t6073*var3[9] + 20.*t4371*t6022*t6073*var3[9] - 30.*t4940*t4994*t6022*t6400*var3[9] - 30.*t4760*t4765*t4994*var3[13] + 30.*t4937*t4940*t4994*var3[13] - 20.*t4765*t4928*t4937*t6400*var3[13] - 20.*t4361*t4445*t4928*var3[17] + 20.*t4760*t4765*t4928*var3[17] - 5.*t4445*t4760*t6400*var3[17] + 5.*t4361*t4445*var3[21] - 5.*t6286*t6294*var3[21];
  p_output1[20]=5.*t4861*t6208*var3[2] + 20.*t4371*t6022*t6073*var3[6] - 5.*t4861*t6208*var3[6] + 30.*t4937*t4940*t4994*var3[10] - 20.*t4371*t6022*t6073*var3[10] + 20.*t4760*t4765*t4928*var3[14] - 30.*t4937*t4940*t4994*var3[14] + 5.*t4361*t4445*var3[18] - 20.*t4760*t4765*t4928*var3[18] - 5.*t4361*t4445*var3[22];
  p_output1[21]=1.;
  p_output1[22]=t6225;
  p_output1[23]=t6226;
  p_output1[24]=t6269;
  p_output1[25]=t6270;
  p_output1[26]=t6277;
  p_output1[27]=t6293;
  p_output1[28]=-5.*t4371*t6022*t6208*var3[2] - 20.*t4937*t4940*t6073*var3[6] + 5.*t4371*t6022*t6208*var3[6] - 30.*t4760*t4765*t4994*var3[10] + 20.*t4937*t4940*t6073*var3[10] - 20.*t4361*t4445*t4928*var3[14] + 30.*t4760*t4765*t4994*var3[14] + 20.*t4361*t4445*t4928*var3[18] - 5.*t6286*t6294*var3[18] + 5.*t6286*t6294*var3[22];
  p_output1[29]=-5.*t6208*t6400*var3[2] + 5.*t4861*t6208*var3[6] - 5.*t4371*t6022*t6208*var3[6] - 20.*t4371*t4861*t6073*t6400*var3[6] - 20.*t4937*t4940*t6073*var3[10] + 20.*t4371*t6022*t6073*var3[10] - 30.*t4940*t4994*t6022*t6400*var3[10] - 30.*t4760*t4765*t4994*var3[14] + 30.*t4937*t4940*t4994*var3[14] - 20.*t4765*t4928*t4937*t6400*var3[14] - 20.*t4361*t4445*t4928*var3[18] + 20.*t4760*t4765*t4928*var3[18] - 5.*t4445*t4760*t6400*var3[18] + 5.*t4361*t4445*var3[22] - 5.*t6286*t6294*var3[22];
  p_output1[30]=5.*t4861*t6208*var3[3] + 20.*t4371*t6022*t6073*var3[7] - 5.*t4861*t6208*var3[7] + 30.*t4937*t4940*t4994*var3[11] - 20.*t4371*t6022*t6073*var3[11] + 20.*t4760*t4765*t4928*var3[15] - 30.*t4937*t4940*t4994*var3[15] + 5.*t4361*t4445*var3[19] - 20.*t4760*t4765*t4928*var3[19] - 5.*t4361*t4445*var3[23];
  p_output1[31]=1.;
  p_output1[32]=t6225;
  p_output1[33]=t6226;
  p_output1[34]=t6269;
  p_output1[35]=t6270;
  p_output1[36]=t6277;
  p_output1[37]=t6293;
  p_output1[38]=-5.*t4371*t6022*t6208*var3[3] - 20.*t4937*t4940*t6073*var3[7] + 5.*t4371*t6022*t6208*var3[7] - 30.*t4760*t4765*t4994*var3[11] + 20.*t4937*t4940*t6073*var3[11] - 20.*t4361*t4445*t4928*var3[15] + 30.*t4760*t4765*t4994*var3[15] + 20.*t4361*t4445*t4928*var3[19] - 5.*t6286*t6294*var3[19] + 5.*t6286*t6294*var3[23];
  p_output1[39]=-5.*t6208*t6400*var3[3] + 5.*t4861*t6208*var3[7] - 5.*t4371*t6022*t6208*var3[7] - 20.*t4371*t4861*t6073*t6400*var3[7] - 20.*t4937*t4940*t6073*var3[11] + 20.*t4371*t6022*t6073*var3[11] - 30.*t4940*t4994*t6022*t6400*var3[11] - 30.*t4760*t4765*t4994*var3[15] + 30.*t4937*t4940*t4994*var3[15] - 20.*t4765*t4928*t4937*t6400*var3[15] - 20.*t4361*t4445*t4928*var3[19] + 20.*t4760*t4765*t4928*var3[19] - 5.*t4445*t4760*t6400*var3[19] + 5.*t4361*t4445*var3[23] - 5.*t6286*t6294*var3[23];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_LeftStanceLift.hh"

namespace LeftStanceLift
{

void J_y_time_LeftStanceLift_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
