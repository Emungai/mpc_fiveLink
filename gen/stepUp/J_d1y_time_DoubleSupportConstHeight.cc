/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:22:26 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t8142;
  double t2843;
  double t4995;
  double t4996;
  double t5982;
  double t5994;
  double t8882;
  double t9349;
  double t9714;
  double t10205;
  double t11278;
  double t11308;
  double t11401;
  double t12106;
  double t12149;
  double t12748;
  double t12756;
  double t12879;
  double t13308;
  double t13309;
  double t13398;
  double t13399;
  double t13446;
  double t13537;
  double t13938;
  double t18345;
  double t18346;
  double t13447;
  double t13452;
  double t13454;
  double t13456;
  double t13469;
  double t13474;
  double t13486;
  double t13488;
  double t13490;
  double t13494;
  double t13538;
  double t13540;
  double t13541;
  double t13566;
  t8142 = -1.*var5[1];
  t2843 = -1. + var6[0];
  t4995 = -1. + var7[0];
  t4996 = 1/t4995;
  t5982 = -1.*t2843*t4996;
  t5994 = 1. + t5982;
  t8882 = var5[0] + t8142;
  t9349 = Power(t8882,-5);
  t9714 = -1.*var1[0];
  t10205 = t9714 + var1[1];
  t11278 = t2843*t4996*t10205;
  t11308 = t8142 + var1[0] + t11278;
  t11401 = Power(t11308,3);
  t12106 = Power(t8882,-4);
  t12149 = Power(t11308,2);
  t12748 = 1/t8882;
  t12756 = -1.*t12748*t11308;
  t12879 = 1. + t12756;
  t13308 = Power(t8882,-3);
  t13309 = Power(t12879,2);
  t13398 = Power(t8882,-2);
  t13399 = Power(t12879,3);
  t13446 = Power(t12879,4);
  t13537 = Power(t11308,4);
  t13938 = Power(t8882,-6);
  t18345 = -1.*t13398*t11308;
  t18346 = t12748 + t18345;
  t13447 = 5.*t12748*t13446;
  t13452 = 20.*t13398*t11308*t13399;
  t13454 = -5.*t12748*t13446;
  t13456 = t13452 + t13454;
  t13469 = 30.*t13308*t12149*t13309;
  t13474 = -20.*t13398*t11308*t13399;
  t13486 = t13469 + t13474;
  t13488 = 20.*t12106*t11401*t12879;
  t13490 = -30.*t13308*t12149*t13309;
  t13494 = t13488 + t13490;
  t13538 = 5.*t9349*t13537;
  t13540 = -20.*t12106*t11401*t12879;
  t13541 = t13538 + t13540;
  t13566 = -5.*t9349*t13537;
  p_output1[0]=-20.*t13398*t13399*t5994*var4[0] - 60.*t11308*t13308*t13309*t5994*var4[4] + 40.*t13398*t13399*t5994*var4[4] - 60.*t12106*t12149*t12879*t5994*var4[8] + 120.*t11308*t13308*t13309*t5994*var4[8] - 20.*t13398*t13399*t5994*var4[8] + 120.*t12106*t12149*t12879*t5994*var4[12] - 60.*t11308*t13308*t13309*t5994*var4[12] - 20.*t11401*t5994*t9349*var4[12] - 60.*t12106*t12149*t12879*t5994*var4[16] + 40.*t11401*t5994*t9349*var4[16] - 20.*t11401*t5994*t9349*var4[20];
  p_output1[1]=-20.*t13398*t13399*t2843*t4996*var4[0] - 60.*t11308*t13308*t13309*t2843*t4996*var4[4] + 40.*t13398*t13399*t2843*t4996*var4[4] - 60.*t12106*t12149*t12879*t2843*t4996*var4[8] + 120.*t11308*t13308*t13309*t2843*t4996*var4[8] - 20.*t13398*t13399*t2843*t4996*var4[8] + 120.*t12106*t12149*t12879*t2843*t4996*var4[12] - 60.*t11308*t13308*t13309*t2843*t4996*var4[12] - 20.*t11401*t2843*t4996*t9349*var4[12] - 60.*t12106*t12149*t12879*t2843*t4996*var4[16] + 40.*t11401*t2843*t4996*t9349*var4[16] - 20.*t11401*t2843*t4996*t9349*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t13447;
  p_output1[4]=t13456;
  p_output1[5]=t13486;
  p_output1[6]=t13494;
  p_output1[7]=t13541;
  p_output1[8]=t13566;
  p_output1[9]=20.*t11308*t13308*t13399*var4[0] - 5.*t13398*t13446*var4[0] + 60.*t12106*t12149*t13309*var4[4] - 60.*t11308*t13308*t13399*var4[4] + 5.*t13398*t13446*var4[4] - 150.*t12106*t12149*t13309*var4[8] + 40.*t11308*t13308*t13399*var4[8] + 60.*t11401*t12879*t9349*var4[8] + 90.*t12106*t12149*t13309*var4[12] + 20.*t13537*t13938*var4[12] - 140.*t11401*t12879*t9349*var4[12] - 45.*t13537*t13938*var4[16] + 80.*t11401*t12879*t9349*var4[16] + 25.*t13537*t13938*var4[20];
  p_output1[10]=5.*t13398*t13446*var4[0] + 20.*t12748*t13399*t18346*var4[0] + 40.*t11308*t13308*t13399*var4[4] - 20.*t13398*t13399*var4[4] - 5.*t13398*t13446*var4[4] + 60.*t11308*t13309*t13398*t18346*var4[4] - 20.*t12748*t13399*t18346*var4[4] + 90.*t12106*t12149*t13309*var4[8] - 60.*t11308*t13308*t13309*var4[8] - 40.*t11308*t13308*t13399*var4[8] + 20.*t13398*t13399*var4[8] + 60.*t12149*t12879*t13308*t18346*var4[8] - 60.*t11308*t13309*t13398*t18346*var4[8] - 60.*t12106*t12149*t12879*var4[12] - 90.*t12106*t12149*t13309*var4[12] + 60.*t11308*t13308*t13309*var4[12] + 20.*t11401*t12106*t18346*var4[12] - 60.*t12149*t12879*t13308*t18346*var4[12] + 80.*t11401*t12879*t9349*var4[12] + 60.*t12106*t12149*t12879*var4[16] + 25.*t13537*t13938*var4[16] - 20.*t11401*t12106*t18346*var4[16] - 20.*t11401*t9349*var4[16] - 80.*t11401*t12879*t9349*var4[16] - 25.*t13537*t13938*var4[20] + 20.*t11401*t9349*var4[20];
  p_output1[11]=-20.*t13398*t13399*t5994*var4[1] - 60.*t11308*t13308*t13309*t5994*var4[5] + 40.*t13398*t13399*t5994*var4[5] - 60.*t12106*t12149*t12879*t5994*var4[9] + 120.*t11308*t13308*t13309*t5994*var4[9] - 20.*t13398*t13399*t5994*var4[9] + 120.*t12106*t12149*t12879*t5994*var4[13] - 60.*t11308*t13308*t13309*t5994*var4[13] - 20.*t11401*t5994*t9349*var4[13] - 60.*t12106*t12149*t12879*t5994*var4[17] + 40.*t11401*t5994*t9349*var4[17] - 20.*t11401*t5994*t9349*var4[21];
  p_output1[12]=-20.*t13398*t13399*t2843*t4996*var4[1] - 60.*t11308*t13308*t13309*t2843*t4996*var4[5] + 40.*t13398*t13399*t2843*t4996*var4[5] - 60.*t12106*t12149*t12879*t2843*t4996*var4[9] + 120.*t11308*t13308*t13309*t2843*t4996*var4[9] - 20.*t13398*t13399*t2843*t4996*var4[9] + 120.*t12106*t12149*t12879*t2843*t4996*var4[13] - 60.*t11308*t13308*t13309*t2843*t4996*var4[13] - 20.*t11401*t2843*t4996*t9349*var4[13] - 60.*t12106*t12149*t12879*t2843*t4996*var4[17] + 40.*t11401*t2843*t4996*t9349*var4[17] - 20.*t11401*t2843*t4996*t9349*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t13447;
  p_output1[15]=t13456;
  p_output1[16]=t13486;
  p_output1[17]=t13494;
  p_output1[18]=t13541;
  p_output1[19]=t13566;
  p_output1[20]=20.*t11308*t13308*t13399*var4[1] - 5.*t13398*t13446*var4[1] + 60.*t12106*t12149*t13309*var4[5] - 60.*t11308*t13308*t13399*var4[5] + 5.*t13398*t13446*var4[5] - 150.*t12106*t12149*t13309*var4[9] + 40.*t11308*t13308*t13399*var4[9] + 60.*t11401*t12879*t9349*var4[9] + 90.*t12106*t12149*t13309*var4[13] + 20.*t13537*t13938*var4[13] - 140.*t11401*t12879*t9349*var4[13] - 45.*t13537*t13938*var4[17] + 80.*t11401*t12879*t9349*var4[17] + 25.*t13537*t13938*var4[21];
  p_output1[21]=5.*t13398*t13446*var4[1] + 20.*t12748*t13399*t18346*var4[1] + 40.*t11308*t13308*t13399*var4[5] - 20.*t13398*t13399*var4[5] - 5.*t13398*t13446*var4[5] + 60.*t11308*t13309*t13398*t18346*var4[5] - 20.*t12748*t13399*t18346*var4[5] + 90.*t12106*t12149*t13309*var4[9] - 60.*t11308*t13308*t13309*var4[9] - 40.*t11308*t13308*t13399*var4[9] + 20.*t13398*t13399*var4[9] + 60.*t12149*t12879*t13308*t18346*var4[9] - 60.*t11308*t13309*t13398*t18346*var4[9] - 60.*t12106*t12149*t12879*var4[13] - 90.*t12106*t12149*t13309*var4[13] + 60.*t11308*t13308*t13309*var4[13] + 20.*t11401*t12106*t18346*var4[13] - 60.*t12149*t12879*t13308*t18346*var4[13] + 80.*t11401*t12879*t9349*var4[13] + 60.*t12106*t12149*t12879*var4[17] + 25.*t13537*t13938*var4[17] - 20.*t11401*t12106*t18346*var4[17] - 20.*t11401*t9349*var4[17] - 80.*t11401*t12879*t9349*var4[17] - 25.*t13537*t13938*var4[21] + 20.*t11401*t9349*var4[21];
  p_output1[22]=-20.*t13398*t13399*t5994*var4[2] - 60.*t11308*t13308*t13309*t5994*var4[6] + 40.*t13398*t13399*t5994*var4[6] - 60.*t12106*t12149*t12879*t5994*var4[10] + 120.*t11308*t13308*t13309*t5994*var4[10] - 20.*t13398*t13399*t5994*var4[10] + 120.*t12106*t12149*t12879*t5994*var4[14] - 60.*t11308*t13308*t13309*t5994*var4[14] - 20.*t11401*t5994*t9349*var4[14] - 60.*t12106*t12149*t12879*t5994*var4[18] + 40.*t11401*t5994*t9349*var4[18] - 20.*t11401*t5994*t9349*var4[22];
  p_output1[23]=-20.*t13398*t13399*t2843*t4996*var4[2] - 60.*t11308*t13308*t13309*t2843*t4996*var4[6] + 40.*t13398*t13399*t2843*t4996*var4[6] - 60.*t12106*t12149*t12879*t2843*t4996*var4[10] + 120.*t11308*t13308*t13309*t2843*t4996*var4[10] - 20.*t13398*t13399*t2843*t4996*var4[10] + 120.*t12106*t12149*t12879*t2843*t4996*var4[14] - 60.*t11308*t13308*t13309*t2843*t4996*var4[14] - 20.*t11401*t2843*t4996*t9349*var4[14] - 60.*t12106*t12149*t12879*t2843*t4996*var4[18] + 40.*t11401*t2843*t4996*t9349*var4[18] - 20.*t11401*t2843*t4996*t9349*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t13447;
  p_output1[26]=t13456;
  p_output1[27]=t13486;
  p_output1[28]=t13494;
  p_output1[29]=t13541;
  p_output1[30]=t13566;
  p_output1[31]=20.*t11308*t13308*t13399*var4[2] - 5.*t13398*t13446*var4[2] + 60.*t12106*t12149*t13309*var4[6] - 60.*t11308*t13308*t13399*var4[6] + 5.*t13398*t13446*var4[6] - 150.*t12106*t12149*t13309*var4[10] + 40.*t11308*t13308*t13399*var4[10] + 60.*t11401*t12879*t9349*var4[10] + 90.*t12106*t12149*t13309*var4[14] + 20.*t13537*t13938*var4[14] - 140.*t11401*t12879*t9349*var4[14] - 45.*t13537*t13938*var4[18] + 80.*t11401*t12879*t9349*var4[18] + 25.*t13537*t13938*var4[22];
  p_output1[32]=5.*t13398*t13446*var4[2] + 20.*t12748*t13399*t18346*var4[2] + 40.*t11308*t13308*t13399*var4[6] - 20.*t13398*t13399*var4[6] - 5.*t13398*t13446*var4[6] + 60.*t11308*t13309*t13398*t18346*var4[6] - 20.*t12748*t13399*t18346*var4[6] + 90.*t12106*t12149*t13309*var4[10] - 60.*t11308*t13308*t13309*var4[10] - 40.*t11308*t13308*t13399*var4[10] + 20.*t13398*t13399*var4[10] + 60.*t12149*t12879*t13308*t18346*var4[10] - 60.*t11308*t13309*t13398*t18346*var4[10] - 60.*t12106*t12149*t12879*var4[14] - 90.*t12106*t12149*t13309*var4[14] + 60.*t11308*t13308*t13309*var4[14] + 20.*t11401*t12106*t18346*var4[14] - 60.*t12149*t12879*t13308*t18346*var4[14] + 80.*t11401*t12879*t9349*var4[14] + 60.*t12106*t12149*t12879*var4[18] + 25.*t13537*t13938*var4[18] - 20.*t11401*t12106*t18346*var4[18] - 20.*t11401*t9349*var4[18] - 80.*t11401*t12879*t9349*var4[18] - 25.*t13537*t13938*var4[22] + 20.*t11401*t9349*var4[22];
  p_output1[33]=-20.*t13398*t13399*t5994*var4[3] - 60.*t11308*t13308*t13309*t5994*var4[7] + 40.*t13398*t13399*t5994*var4[7] - 60.*t12106*t12149*t12879*t5994*var4[11] + 120.*t11308*t13308*t13309*t5994*var4[11] - 20.*t13398*t13399*t5994*var4[11] + 120.*t12106*t12149*t12879*t5994*var4[15] - 60.*t11308*t13308*t13309*t5994*var4[15] - 20.*t11401*t5994*t9349*var4[15] - 60.*t12106*t12149*t12879*t5994*var4[19] + 40.*t11401*t5994*t9349*var4[19] - 20.*t11401*t5994*t9349*var4[23];
  p_output1[34]=-20.*t13398*t13399*t2843*t4996*var4[3] - 60.*t11308*t13308*t13309*t2843*t4996*var4[7] + 40.*t13398*t13399*t2843*t4996*var4[7] - 60.*t12106*t12149*t12879*t2843*t4996*var4[11] + 120.*t11308*t13308*t13309*t2843*t4996*var4[11] - 20.*t13398*t13399*t2843*t4996*var4[11] + 120.*t12106*t12149*t12879*t2843*t4996*var4[15] - 60.*t11308*t13308*t13309*t2843*t4996*var4[15] - 20.*t11401*t2843*t4996*t9349*var4[15] - 60.*t12106*t12149*t12879*t2843*t4996*var4[19] + 40.*t11401*t2843*t4996*t9349*var4[19] - 20.*t11401*t2843*t4996*t9349*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t13447;
  p_output1[37]=t13456;
  p_output1[38]=t13486;
  p_output1[39]=t13494;
  p_output1[40]=t13541;
  p_output1[41]=t13566;
  p_output1[42]=20.*t11308*t13308*t13399*var4[3] - 5.*t13398*t13446*var4[3] + 60.*t12106*t12149*t13309*var4[7] - 60.*t11308*t13308*t13399*var4[7] + 5.*t13398*t13446*var4[7] - 150.*t12106*t12149*t13309*var4[11] + 40.*t11308*t13308*t13399*var4[11] + 60.*t11401*t12879*t9349*var4[11] + 90.*t12106*t12149*t13309*var4[15] + 20.*t13537*t13938*var4[15] - 140.*t11401*t12879*t9349*var4[15] - 45.*t13537*t13938*var4[19] + 80.*t11401*t12879*t9349*var4[19] + 25.*t13537*t13938*var4[23];
  p_output1[43]=5.*t13398*t13446*var4[3] + 20.*t12748*t13399*t18346*var4[3] + 40.*t11308*t13308*t13399*var4[7] - 20.*t13398*t13399*var4[7] - 5.*t13398*t13446*var4[7] + 60.*t11308*t13309*t13398*t18346*var4[7] - 20.*t12748*t13399*t18346*var4[7] + 90.*t12106*t12149*t13309*var4[11] - 60.*t11308*t13308*t13309*var4[11] - 40.*t11308*t13308*t13399*var4[11] + 20.*t13398*t13399*var4[11] + 60.*t12149*t12879*t13308*t18346*var4[11] - 60.*t11308*t13309*t13398*t18346*var4[11] - 60.*t12106*t12149*t12879*var4[15] - 90.*t12106*t12149*t13309*var4[15] + 60.*t11308*t13308*t13309*var4[15] + 20.*t11401*t12106*t18346*var4[15] - 60.*t12149*t12879*t13308*t18346*var4[15] + 80.*t11401*t12879*t9349*var4[15] + 60.*t12106*t12149*t12879*var4[19] + 25.*t13537*t13938*var4[19] - 20.*t11401*t12106*t18346*var4[19] - 20.*t11401*t9349*var4[19] - 80.*t11401*t12879*t9349*var4[19] - 25.*t13537*t13938*var4[23] + 20.*t11401*t9349*var4[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_time_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_d1y_time_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
