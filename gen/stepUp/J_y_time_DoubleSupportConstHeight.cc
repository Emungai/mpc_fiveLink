/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:22:20 GMT-05:00
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
  double t18269;
  double t11996;
  double t14103;
  double t14228;
  double t14402;
  double t18260;
  double t18273;
  double t18275;
  double t18277;
  double t18278;
  double t18283;
  double t18284;
  double t18285;
  double t18322;
  double t18323;
  double t18324;
  double t18325;
  double t18326;
  double t18329;
  double t18330;
  double t18331;
  double t18334;
  double t18335;
  double t18342;
  double t18363;
  double t18365;
  double t18379;
  double t18380;
  double t18357;
  double t18358;
  double t18359;
  double t18360;
  double t18361;
  double t18362;
  double t18364;
  t18269 = -1.*var4[1];
  t11996 = -1. + var5[0];
  t14103 = -1. + var6[0];
  t14228 = 1/t14103;
  t14402 = -1.*t11996*t14228;
  t18260 = 1. + t14402;
  t18273 = var4[0] + t18269;
  t18275 = Power(t18273,-5);
  t18277 = -1.*var1[0];
  t18278 = t18277 + var1[1];
  t18283 = t11996*t14228*t18278;
  t18284 = t18269 + var1[0] + t18283;
  t18285 = Power(t18284,4);
  t18322 = Power(t18273,-4);
  t18323 = Power(t18284,3);
  t18324 = 1/t18273;
  t18325 = -1.*t18324*t18284;
  t18326 = 1. + t18325;
  t18329 = Power(t18273,-3);
  t18330 = Power(t18284,2);
  t18331 = Power(t18326,2);
  t18334 = Power(t18273,-2);
  t18335 = Power(t18326,3);
  t18342 = Power(t18326,4);
  t18363 = Power(t18284,5);
  t18365 = Power(t18273,-6);
  t18379 = -1.*t18334*t18284;
  t18380 = t18324 + t18379;
  t18357 = Power(t18326,5);
  t18358 = -1.*t18357;
  t18359 = -5.*t18324*t18284*t18342;
  t18360 = -10.*t18334*t18330*t18335;
  t18361 = -10.*t18329*t18323*t18331;
  t18362 = -5.*t18322*t18285*t18326;
  t18364 = -1.*t18275*t18363;
  p_output1[0]=5.*t18260*t18324*t18342*var3[0] + 20.*t18260*t18284*t18334*t18335*var3[4] - 5.*t18260*t18324*t18342*var3[4] + 30.*t18260*t18329*t18330*t18331*var3[8] - 20.*t18260*t18284*t18334*t18335*var3[8] + 20.*t18260*t18322*t18323*t18326*var3[12] - 30.*t18260*t18329*t18330*t18331*var3[12] + 5.*t18260*t18275*t18285*var3[16] - 20.*t18260*t18322*t18323*t18326*var3[16] - 5.*t18260*t18275*t18285*var3[20];
  p_output1[1]=5.*t11996*t14228*t18324*t18342*var3[0] + 20.*t11996*t14228*t18284*t18334*t18335*var3[4] - 5.*t11996*t14228*t18324*t18342*var3[4] + 30.*t11996*t14228*t18329*t18330*t18331*var3[8] - 20.*t11996*t14228*t18284*t18334*t18335*var3[8] + 20.*t11996*t14228*t18322*t18323*t18326*var3[12] - 30.*t11996*t14228*t18329*t18330*t18331*var3[12] + 5.*t11996*t14228*t18275*t18285*var3[16] - 20.*t11996*t14228*t18322*t18323*t18326*var3[16] - 5.*t11996*t14228*t18275*t18285*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t18358;
  p_output1[4]=t18359;
  p_output1[5]=t18360;
  p_output1[6]=t18361;
  p_output1[7]=t18362;
  p_output1[8]=t18364;
  p_output1[9]=-5.*t18284*t18334*t18342*var3[0] - 20.*t18329*t18330*t18335*var3[4] + 5.*t18284*t18334*t18342*var3[4] - 30.*t18322*t18323*t18331*var3[8] + 20.*t18329*t18330*t18335*var3[8] - 20.*t18275*t18285*t18326*var3[12] + 30.*t18322*t18323*t18331*var3[12] + 20.*t18275*t18285*t18326*var3[16] - 5.*t18363*t18365*var3[16] + 5.*t18363*t18365*var3[20];
  p_output1[10]=-5.*t18342*t18380*var3[0] + 5.*t18324*t18342*var3[4] - 5.*t18284*t18334*t18342*var3[4] - 20.*t18284*t18324*t18335*t18380*var3[4] - 20.*t18329*t18330*t18335*var3[8] + 20.*t18284*t18334*t18335*var3[8] - 30.*t18330*t18331*t18334*t18380*var3[8] - 30.*t18322*t18323*t18331*var3[12] + 30.*t18329*t18330*t18331*var3[12] - 20.*t18323*t18326*t18329*t18380*var3[12] - 20.*t18275*t18285*t18326*var3[16] + 20.*t18322*t18323*t18326*var3[16] - 5.*t18285*t18322*t18380*var3[16] + 5.*t18275*t18285*var3[20] - 5.*t18363*t18365*var3[20];
  p_output1[11]=5.*t18260*t18324*t18342*var3[1] + 20.*t18260*t18284*t18334*t18335*var3[5] - 5.*t18260*t18324*t18342*var3[5] + 30.*t18260*t18329*t18330*t18331*var3[9] - 20.*t18260*t18284*t18334*t18335*var3[9] + 20.*t18260*t18322*t18323*t18326*var3[13] - 30.*t18260*t18329*t18330*t18331*var3[13] + 5.*t18260*t18275*t18285*var3[17] - 20.*t18260*t18322*t18323*t18326*var3[17] - 5.*t18260*t18275*t18285*var3[21];
  p_output1[12]=5.*t11996*t14228*t18324*t18342*var3[1] + 20.*t11996*t14228*t18284*t18334*t18335*var3[5] - 5.*t11996*t14228*t18324*t18342*var3[5] + 30.*t11996*t14228*t18329*t18330*t18331*var3[9] - 20.*t11996*t14228*t18284*t18334*t18335*var3[9] + 20.*t11996*t14228*t18322*t18323*t18326*var3[13] - 30.*t11996*t14228*t18329*t18330*t18331*var3[13] + 5.*t11996*t14228*t18275*t18285*var3[17] - 20.*t11996*t14228*t18322*t18323*t18326*var3[17] - 5.*t11996*t14228*t18275*t18285*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t18358;
  p_output1[15]=t18359;
  p_output1[16]=t18360;
  p_output1[17]=t18361;
  p_output1[18]=t18362;
  p_output1[19]=t18364;
  p_output1[20]=-5.*t18284*t18334*t18342*var3[1] - 20.*t18329*t18330*t18335*var3[5] + 5.*t18284*t18334*t18342*var3[5] - 30.*t18322*t18323*t18331*var3[9] + 20.*t18329*t18330*t18335*var3[9] - 20.*t18275*t18285*t18326*var3[13] + 30.*t18322*t18323*t18331*var3[13] + 20.*t18275*t18285*t18326*var3[17] - 5.*t18363*t18365*var3[17] + 5.*t18363*t18365*var3[21];
  p_output1[21]=-5.*t18342*t18380*var3[1] + 5.*t18324*t18342*var3[5] - 5.*t18284*t18334*t18342*var3[5] - 20.*t18284*t18324*t18335*t18380*var3[5] - 20.*t18329*t18330*t18335*var3[9] + 20.*t18284*t18334*t18335*var3[9] - 30.*t18330*t18331*t18334*t18380*var3[9] - 30.*t18322*t18323*t18331*var3[13] + 30.*t18329*t18330*t18331*var3[13] - 20.*t18323*t18326*t18329*t18380*var3[13] - 20.*t18275*t18285*t18326*var3[17] + 20.*t18322*t18323*t18326*var3[17] - 5.*t18285*t18322*t18380*var3[17] + 5.*t18275*t18285*var3[21] - 5.*t18363*t18365*var3[21];
  p_output1[22]=5.*t18260*t18324*t18342*var3[2] + 20.*t18260*t18284*t18334*t18335*var3[6] - 5.*t18260*t18324*t18342*var3[6] + 30.*t18260*t18329*t18330*t18331*var3[10] - 20.*t18260*t18284*t18334*t18335*var3[10] + 20.*t18260*t18322*t18323*t18326*var3[14] - 30.*t18260*t18329*t18330*t18331*var3[14] + 5.*t18260*t18275*t18285*var3[18] - 20.*t18260*t18322*t18323*t18326*var3[18] - 5.*t18260*t18275*t18285*var3[22];
  p_output1[23]=5.*t11996*t14228*t18324*t18342*var3[2] + 20.*t11996*t14228*t18284*t18334*t18335*var3[6] - 5.*t11996*t14228*t18324*t18342*var3[6] + 30.*t11996*t14228*t18329*t18330*t18331*var3[10] - 20.*t11996*t14228*t18284*t18334*t18335*var3[10] + 20.*t11996*t14228*t18322*t18323*t18326*var3[14] - 30.*t11996*t14228*t18329*t18330*t18331*var3[14] + 5.*t11996*t14228*t18275*t18285*var3[18] - 20.*t11996*t14228*t18322*t18323*t18326*var3[18] - 5.*t11996*t14228*t18275*t18285*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t18358;
  p_output1[26]=t18359;
  p_output1[27]=t18360;
  p_output1[28]=t18361;
  p_output1[29]=t18362;
  p_output1[30]=t18364;
  p_output1[31]=-5.*t18284*t18334*t18342*var3[2] - 20.*t18329*t18330*t18335*var3[6] + 5.*t18284*t18334*t18342*var3[6] - 30.*t18322*t18323*t18331*var3[10] + 20.*t18329*t18330*t18335*var3[10] - 20.*t18275*t18285*t18326*var3[14] + 30.*t18322*t18323*t18331*var3[14] + 20.*t18275*t18285*t18326*var3[18] - 5.*t18363*t18365*var3[18] + 5.*t18363*t18365*var3[22];
  p_output1[32]=-5.*t18342*t18380*var3[2] + 5.*t18324*t18342*var3[6] - 5.*t18284*t18334*t18342*var3[6] - 20.*t18284*t18324*t18335*t18380*var3[6] - 20.*t18329*t18330*t18335*var3[10] + 20.*t18284*t18334*t18335*var3[10] - 30.*t18330*t18331*t18334*t18380*var3[10] - 30.*t18322*t18323*t18331*var3[14] + 30.*t18329*t18330*t18331*var3[14] - 20.*t18323*t18326*t18329*t18380*var3[14] - 20.*t18275*t18285*t18326*var3[18] + 20.*t18322*t18323*t18326*var3[18] - 5.*t18285*t18322*t18380*var3[18] + 5.*t18275*t18285*var3[22] - 5.*t18363*t18365*var3[22];
  p_output1[33]=5.*t18260*t18324*t18342*var3[3] + 20.*t18260*t18284*t18334*t18335*var3[7] - 5.*t18260*t18324*t18342*var3[7] + 30.*t18260*t18329*t18330*t18331*var3[11] - 20.*t18260*t18284*t18334*t18335*var3[11] + 20.*t18260*t18322*t18323*t18326*var3[15] - 30.*t18260*t18329*t18330*t18331*var3[15] + 5.*t18260*t18275*t18285*var3[19] - 20.*t18260*t18322*t18323*t18326*var3[19] - 5.*t18260*t18275*t18285*var3[23];
  p_output1[34]=5.*t11996*t14228*t18324*t18342*var3[3] + 20.*t11996*t14228*t18284*t18334*t18335*var3[7] - 5.*t11996*t14228*t18324*t18342*var3[7] + 30.*t11996*t14228*t18329*t18330*t18331*var3[11] - 20.*t11996*t14228*t18284*t18334*t18335*var3[11] + 20.*t11996*t14228*t18322*t18323*t18326*var3[15] - 30.*t11996*t14228*t18329*t18330*t18331*var3[15] + 5.*t11996*t14228*t18275*t18285*var3[19] - 20.*t11996*t14228*t18322*t18323*t18326*var3[19] - 5.*t11996*t14228*t18275*t18285*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t18358;
  p_output1[37]=t18359;
  p_output1[38]=t18360;
  p_output1[39]=t18361;
  p_output1[40]=t18362;
  p_output1[41]=t18364;
  p_output1[42]=-5.*t18284*t18334*t18342*var3[3] - 20.*t18329*t18330*t18335*var3[7] + 5.*t18284*t18334*t18342*var3[7] - 30.*t18322*t18323*t18331*var3[11] + 20.*t18329*t18330*t18335*var3[11] - 20.*t18275*t18285*t18326*var3[15] + 30.*t18322*t18323*t18331*var3[15] + 20.*t18275*t18285*t18326*var3[19] - 5.*t18363*t18365*var3[19] + 5.*t18363*t18365*var3[23];
  p_output1[43]=-5.*t18342*t18380*var3[3] + 5.*t18324*t18342*var3[7] - 5.*t18284*t18334*t18342*var3[7] - 20.*t18284*t18324*t18335*t18380*var3[7] - 20.*t18329*t18330*t18335*var3[11] + 20.*t18284*t18334*t18335*var3[11] - 30.*t18330*t18331*t18334*t18380*var3[11] - 30.*t18322*t18323*t18331*var3[15] + 30.*t18329*t18330*t18331*var3[15] - 20.*t18323*t18326*t18329*t18380*var3[15] - 20.*t18275*t18285*t18326*var3[19] + 20.*t18322*t18323*t18326*var3[19] - 5.*t18285*t18322*t18380*var3[19] + 5.*t18275*t18285*var3[23] - 5.*t18363*t18365*var3[23];
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

#include "J_y_time_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_y_time_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
