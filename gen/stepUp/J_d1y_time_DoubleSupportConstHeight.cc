/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:27 GMT-05:00
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
  double t5759;
  double t2310;
  double t2418;
  double t5566;
  double t5604;
  double t5662;
  double t9695;
  double t9699;
  double t9706;
  double t9707;
  double t9710;
  double t9711;
  double t9713;
  double t9717;
  double t9718;
  double t9719;
  double t9729;
  double t9730;
  double t9734;
  double t9735;
  double t9739;
  double t9740;
  double t9760;
  double t9771;
  double t9776;
  double t9796;
  double t9797;
  double t9761;
  double t9762;
  double t9763;
  double t9764;
  double t9765;
  double t9766;
  double t9767;
  double t9768;
  double t9769;
  double t9770;
  double t9772;
  double t9773;
  double t9774;
  double t9775;
  t5759 = -1.*var5[1];
  t2310 = -1. + var6[0];
  t2418 = -1. + var7[0];
  t5566 = 1/t2418;
  t5604 = -1.*t2310*t5566;
  t5662 = 1. + t5604;
  t9695 = var5[0] + t5759;
  t9699 = Power(t9695,-5);
  t9706 = -1.*var1[0];
  t9707 = t9706 + var1[1];
  t9710 = t2310*t5566*t9707;
  t9711 = t5759 + var1[0] + t9710;
  t9713 = Power(t9711,3);
  t9717 = Power(t9695,-4);
  t9718 = Power(t9711,2);
  t9719 = 1/t9695;
  t9729 = -1.*t9719*t9711;
  t9730 = 1. + t9729;
  t9734 = Power(t9695,-3);
  t9735 = Power(t9730,2);
  t9739 = Power(t9695,-2);
  t9740 = Power(t9730,3);
  t9760 = Power(t9730,4);
  t9771 = Power(t9711,4);
  t9776 = Power(t9695,-6);
  t9796 = -1.*t9739*t9711;
  t9797 = t9719 + t9796;
  t9761 = 5.*t9719*t9760;
  t9762 = 20.*t9739*t9711*t9740;
  t9763 = -5.*t9719*t9760;
  t9764 = t9762 + t9763;
  t9765 = 30.*t9734*t9718*t9735;
  t9766 = -20.*t9739*t9711*t9740;
  t9767 = t9765 + t9766;
  t9768 = 20.*t9717*t9713*t9730;
  t9769 = -30.*t9734*t9718*t9735;
  t9770 = t9768 + t9769;
  t9772 = 5.*t9699*t9771;
  t9773 = -20.*t9717*t9713*t9730;
  t9774 = t9772 + t9773;
  t9775 = -5.*t9699*t9771;
  p_output1[0]=-20.*t5662*t9739*t9740*var4[0] - 60.*t5662*t9711*t9734*t9735*var4[4] + 40.*t5662*t9739*t9740*var4[4] - 60.*t5662*t9717*t9718*t9730*var4[8] + 120.*t5662*t9711*t9734*t9735*var4[8] - 20.*t5662*t9739*t9740*var4[8] - 20.*t5662*t9699*t9713*var4[12] + 120.*t5662*t9717*t9718*t9730*var4[12] - 60.*t5662*t9711*t9734*t9735*var4[12] + 40.*t5662*t9699*t9713*var4[16] - 60.*t5662*t9717*t9718*t9730*var4[16] - 20.*t5662*t9699*t9713*var4[20];
  p_output1[1]=-20.*t2310*t5566*t9739*t9740*var4[0] - 60.*t2310*t5566*t9711*t9734*t9735*var4[4] + 40.*t2310*t5566*t9739*t9740*var4[4] - 60.*t2310*t5566*t9717*t9718*t9730*var4[8] + 120.*t2310*t5566*t9711*t9734*t9735*var4[8] - 20.*t2310*t5566*t9739*t9740*var4[8] - 20.*t2310*t5566*t9699*t9713*var4[12] + 120.*t2310*t5566*t9717*t9718*t9730*var4[12] - 60.*t2310*t5566*t9711*t9734*t9735*var4[12] + 40.*t2310*t5566*t9699*t9713*var4[16] - 60.*t2310*t5566*t9717*t9718*t9730*var4[16] - 20.*t2310*t5566*t9699*t9713*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t9761;
  p_output1[4]=t9764;
  p_output1[5]=t9767;
  p_output1[6]=t9770;
  p_output1[7]=t9774;
  p_output1[8]=t9775;
  p_output1[9]=20.*t9711*t9734*t9740*var4[0] - 5.*t9739*t9760*var4[0] + 60.*t9717*t9718*t9735*var4[4] - 60.*t9711*t9734*t9740*var4[4] + 5.*t9739*t9760*var4[4] + 60.*t9699*t9713*t9730*var4[8] - 150.*t9717*t9718*t9735*var4[8] + 40.*t9711*t9734*t9740*var4[8] - 140.*t9699*t9713*t9730*var4[12] + 90.*t9717*t9718*t9735*var4[12] + 20.*t9771*t9776*var4[12] + 80.*t9699*t9713*t9730*var4[16] - 45.*t9771*t9776*var4[16] + 25.*t9771*t9776*var4[20];
  p_output1[10]=5.*t9739*t9760*var4[0] + 20.*t9719*t9740*t9797*var4[0] + 40.*t9711*t9734*t9740*var4[4] - 20.*t9739*t9740*var4[4] - 5.*t9739*t9760*var4[4] + 60.*t9711*t9735*t9739*t9797*var4[4] - 20.*t9719*t9740*t9797*var4[4] + 90.*t9717*t9718*t9735*var4[8] - 60.*t9711*t9734*t9735*var4[8] - 40.*t9711*t9734*t9740*var4[8] + 20.*t9739*t9740*var4[8] + 60.*t9718*t9730*t9734*t9797*var4[8] - 60.*t9711*t9735*t9739*t9797*var4[8] + 80.*t9699*t9713*t9730*var4[12] - 60.*t9717*t9718*t9730*var4[12] - 90.*t9717*t9718*t9735*var4[12] + 60.*t9711*t9734*t9735*var4[12] + 20.*t9713*t9717*t9797*var4[12] - 60.*t9718*t9730*t9734*t9797*var4[12] - 20.*t9699*t9713*var4[16] - 80.*t9699*t9713*t9730*var4[16] + 60.*t9717*t9718*t9730*var4[16] + 25.*t9771*t9776*var4[16] - 20.*t9713*t9717*t9797*var4[16] + 20.*t9699*t9713*var4[20] - 25.*t9771*t9776*var4[20];
  p_output1[11]=-20.*t5662*t9739*t9740*var4[1] - 60.*t5662*t9711*t9734*t9735*var4[5] + 40.*t5662*t9739*t9740*var4[5] - 60.*t5662*t9717*t9718*t9730*var4[9] + 120.*t5662*t9711*t9734*t9735*var4[9] - 20.*t5662*t9739*t9740*var4[9] - 20.*t5662*t9699*t9713*var4[13] + 120.*t5662*t9717*t9718*t9730*var4[13] - 60.*t5662*t9711*t9734*t9735*var4[13] + 40.*t5662*t9699*t9713*var4[17] - 60.*t5662*t9717*t9718*t9730*var4[17] - 20.*t5662*t9699*t9713*var4[21];
  p_output1[12]=-20.*t2310*t5566*t9739*t9740*var4[1] - 60.*t2310*t5566*t9711*t9734*t9735*var4[5] + 40.*t2310*t5566*t9739*t9740*var4[5] - 60.*t2310*t5566*t9717*t9718*t9730*var4[9] + 120.*t2310*t5566*t9711*t9734*t9735*var4[9] - 20.*t2310*t5566*t9739*t9740*var4[9] - 20.*t2310*t5566*t9699*t9713*var4[13] + 120.*t2310*t5566*t9717*t9718*t9730*var4[13] - 60.*t2310*t5566*t9711*t9734*t9735*var4[13] + 40.*t2310*t5566*t9699*t9713*var4[17] - 60.*t2310*t5566*t9717*t9718*t9730*var4[17] - 20.*t2310*t5566*t9699*t9713*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t9761;
  p_output1[15]=t9764;
  p_output1[16]=t9767;
  p_output1[17]=t9770;
  p_output1[18]=t9774;
  p_output1[19]=t9775;
  p_output1[20]=20.*t9711*t9734*t9740*var4[1] - 5.*t9739*t9760*var4[1] + 60.*t9717*t9718*t9735*var4[5] - 60.*t9711*t9734*t9740*var4[5] + 5.*t9739*t9760*var4[5] + 60.*t9699*t9713*t9730*var4[9] - 150.*t9717*t9718*t9735*var4[9] + 40.*t9711*t9734*t9740*var4[9] - 140.*t9699*t9713*t9730*var4[13] + 90.*t9717*t9718*t9735*var4[13] + 20.*t9771*t9776*var4[13] + 80.*t9699*t9713*t9730*var4[17] - 45.*t9771*t9776*var4[17] + 25.*t9771*t9776*var4[21];
  p_output1[21]=5.*t9739*t9760*var4[1] + 20.*t9719*t9740*t9797*var4[1] + 40.*t9711*t9734*t9740*var4[5] - 20.*t9739*t9740*var4[5] - 5.*t9739*t9760*var4[5] + 60.*t9711*t9735*t9739*t9797*var4[5] - 20.*t9719*t9740*t9797*var4[5] + 90.*t9717*t9718*t9735*var4[9] - 60.*t9711*t9734*t9735*var4[9] - 40.*t9711*t9734*t9740*var4[9] + 20.*t9739*t9740*var4[9] + 60.*t9718*t9730*t9734*t9797*var4[9] - 60.*t9711*t9735*t9739*t9797*var4[9] + 80.*t9699*t9713*t9730*var4[13] - 60.*t9717*t9718*t9730*var4[13] - 90.*t9717*t9718*t9735*var4[13] + 60.*t9711*t9734*t9735*var4[13] + 20.*t9713*t9717*t9797*var4[13] - 60.*t9718*t9730*t9734*t9797*var4[13] - 20.*t9699*t9713*var4[17] - 80.*t9699*t9713*t9730*var4[17] + 60.*t9717*t9718*t9730*var4[17] + 25.*t9771*t9776*var4[17] - 20.*t9713*t9717*t9797*var4[17] + 20.*t9699*t9713*var4[21] - 25.*t9771*t9776*var4[21];
  p_output1[22]=-20.*t5662*t9739*t9740*var4[2] - 60.*t5662*t9711*t9734*t9735*var4[6] + 40.*t5662*t9739*t9740*var4[6] - 60.*t5662*t9717*t9718*t9730*var4[10] + 120.*t5662*t9711*t9734*t9735*var4[10] - 20.*t5662*t9739*t9740*var4[10] - 20.*t5662*t9699*t9713*var4[14] + 120.*t5662*t9717*t9718*t9730*var4[14] - 60.*t5662*t9711*t9734*t9735*var4[14] + 40.*t5662*t9699*t9713*var4[18] - 60.*t5662*t9717*t9718*t9730*var4[18] - 20.*t5662*t9699*t9713*var4[22];
  p_output1[23]=-20.*t2310*t5566*t9739*t9740*var4[2] - 60.*t2310*t5566*t9711*t9734*t9735*var4[6] + 40.*t2310*t5566*t9739*t9740*var4[6] - 60.*t2310*t5566*t9717*t9718*t9730*var4[10] + 120.*t2310*t5566*t9711*t9734*t9735*var4[10] - 20.*t2310*t5566*t9739*t9740*var4[10] - 20.*t2310*t5566*t9699*t9713*var4[14] + 120.*t2310*t5566*t9717*t9718*t9730*var4[14] - 60.*t2310*t5566*t9711*t9734*t9735*var4[14] + 40.*t2310*t5566*t9699*t9713*var4[18] - 60.*t2310*t5566*t9717*t9718*t9730*var4[18] - 20.*t2310*t5566*t9699*t9713*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t9761;
  p_output1[26]=t9764;
  p_output1[27]=t9767;
  p_output1[28]=t9770;
  p_output1[29]=t9774;
  p_output1[30]=t9775;
  p_output1[31]=20.*t9711*t9734*t9740*var4[2] - 5.*t9739*t9760*var4[2] + 60.*t9717*t9718*t9735*var4[6] - 60.*t9711*t9734*t9740*var4[6] + 5.*t9739*t9760*var4[6] + 60.*t9699*t9713*t9730*var4[10] - 150.*t9717*t9718*t9735*var4[10] + 40.*t9711*t9734*t9740*var4[10] - 140.*t9699*t9713*t9730*var4[14] + 90.*t9717*t9718*t9735*var4[14] + 20.*t9771*t9776*var4[14] + 80.*t9699*t9713*t9730*var4[18] - 45.*t9771*t9776*var4[18] + 25.*t9771*t9776*var4[22];
  p_output1[32]=5.*t9739*t9760*var4[2] + 20.*t9719*t9740*t9797*var4[2] + 40.*t9711*t9734*t9740*var4[6] - 20.*t9739*t9740*var4[6] - 5.*t9739*t9760*var4[6] + 60.*t9711*t9735*t9739*t9797*var4[6] - 20.*t9719*t9740*t9797*var4[6] + 90.*t9717*t9718*t9735*var4[10] - 60.*t9711*t9734*t9735*var4[10] - 40.*t9711*t9734*t9740*var4[10] + 20.*t9739*t9740*var4[10] + 60.*t9718*t9730*t9734*t9797*var4[10] - 60.*t9711*t9735*t9739*t9797*var4[10] + 80.*t9699*t9713*t9730*var4[14] - 60.*t9717*t9718*t9730*var4[14] - 90.*t9717*t9718*t9735*var4[14] + 60.*t9711*t9734*t9735*var4[14] + 20.*t9713*t9717*t9797*var4[14] - 60.*t9718*t9730*t9734*t9797*var4[14] - 20.*t9699*t9713*var4[18] - 80.*t9699*t9713*t9730*var4[18] + 60.*t9717*t9718*t9730*var4[18] + 25.*t9771*t9776*var4[18] - 20.*t9713*t9717*t9797*var4[18] + 20.*t9699*t9713*var4[22] - 25.*t9771*t9776*var4[22];
  p_output1[33]=-20.*t5662*t9739*t9740*var4[3] - 60.*t5662*t9711*t9734*t9735*var4[7] + 40.*t5662*t9739*t9740*var4[7] - 60.*t5662*t9717*t9718*t9730*var4[11] + 120.*t5662*t9711*t9734*t9735*var4[11] - 20.*t5662*t9739*t9740*var4[11] - 20.*t5662*t9699*t9713*var4[15] + 120.*t5662*t9717*t9718*t9730*var4[15] - 60.*t5662*t9711*t9734*t9735*var4[15] + 40.*t5662*t9699*t9713*var4[19] - 60.*t5662*t9717*t9718*t9730*var4[19] - 20.*t5662*t9699*t9713*var4[23];
  p_output1[34]=-20.*t2310*t5566*t9739*t9740*var4[3] - 60.*t2310*t5566*t9711*t9734*t9735*var4[7] + 40.*t2310*t5566*t9739*t9740*var4[7] - 60.*t2310*t5566*t9717*t9718*t9730*var4[11] + 120.*t2310*t5566*t9711*t9734*t9735*var4[11] - 20.*t2310*t5566*t9739*t9740*var4[11] - 20.*t2310*t5566*t9699*t9713*var4[15] + 120.*t2310*t5566*t9717*t9718*t9730*var4[15] - 60.*t2310*t5566*t9711*t9734*t9735*var4[15] + 40.*t2310*t5566*t9699*t9713*var4[19] - 60.*t2310*t5566*t9717*t9718*t9730*var4[19] - 20.*t2310*t5566*t9699*t9713*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t9761;
  p_output1[37]=t9764;
  p_output1[38]=t9767;
  p_output1[39]=t9770;
  p_output1[40]=t9774;
  p_output1[41]=t9775;
  p_output1[42]=20.*t9711*t9734*t9740*var4[3] - 5.*t9739*t9760*var4[3] + 60.*t9717*t9718*t9735*var4[7] - 60.*t9711*t9734*t9740*var4[7] + 5.*t9739*t9760*var4[7] + 60.*t9699*t9713*t9730*var4[11] - 150.*t9717*t9718*t9735*var4[11] + 40.*t9711*t9734*t9740*var4[11] - 140.*t9699*t9713*t9730*var4[15] + 90.*t9717*t9718*t9735*var4[15] + 20.*t9771*t9776*var4[15] + 80.*t9699*t9713*t9730*var4[19] - 45.*t9771*t9776*var4[19] + 25.*t9771*t9776*var4[23];
  p_output1[43]=5.*t9739*t9760*var4[3] + 20.*t9719*t9740*t9797*var4[3] + 40.*t9711*t9734*t9740*var4[7] - 20.*t9739*t9740*var4[7] - 5.*t9739*t9760*var4[7] + 60.*t9711*t9735*t9739*t9797*var4[7] - 20.*t9719*t9740*t9797*var4[7] + 90.*t9717*t9718*t9735*var4[11] - 60.*t9711*t9734*t9735*var4[11] - 40.*t9711*t9734*t9740*var4[11] + 20.*t9739*t9740*var4[11] + 60.*t9718*t9730*t9734*t9797*var4[11] - 60.*t9711*t9735*t9739*t9797*var4[11] + 80.*t9699*t9713*t9730*var4[15] - 60.*t9717*t9718*t9730*var4[15] - 90.*t9717*t9718*t9735*var4[15] + 60.*t9711*t9734*t9735*var4[15] + 20.*t9713*t9717*t9797*var4[15] - 60.*t9718*t9730*t9734*t9797*var4[15] - 20.*t9699*t9713*var4[19] - 80.*t9699*t9713*t9730*var4[19] + 60.*t9717*t9718*t9730*var4[19] + 25.*t9771*t9776*var4[19] - 20.*t9713*t9717*t9797*var4[19] + 20.*t9699*t9713*var4[23] - 25.*t9771*t9776*var4[23];
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

namespace Pattern[DS1, Blank[opt]]
{

void J_d1y_time_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
