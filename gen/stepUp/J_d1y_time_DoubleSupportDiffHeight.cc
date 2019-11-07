/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:29:06 GMT-05:00
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
  double t986;
  double t66;
  double t575;
  double t634;
  double t695;
  double t985;
  double t998;
  double t999;
  double t1032;
  double t1034;
  double t1052;
  double t1053;
  double t1055;
  double t1059;
  double t1060;
  double t1064;
  double t1065;
  double t1066;
  double t1070;
  double t1071;
  double t1078;
  double t1079;
  double t1116;
  double t1136;
  double t1158;
  double t9023;
  double t9024;
  double t1117;
  double t1126;
  double t1127;
  double t1128;
  double t1130;
  double t1131;
  double t1132;
  double t1133;
  double t1134;
  double t1135;
  double t1137;
  double t1142;
  double t1144;
  double t1157;
  t986 = -1.*var5[1];
  t66 = -1. + var6[0];
  t575 = -1. + var7[0];
  t634 = 1/t575;
  t695 = -1.*t66*t634;
  t985 = 1. + t695;
  t998 = var5[0] + t986;
  t999 = Power(t998,-5);
  t1032 = -1.*var1[0];
  t1034 = t1032 + var1[1];
  t1052 = t66*t634*t1034;
  t1053 = t986 + var1[0] + t1052;
  t1055 = Power(t1053,3);
  t1059 = Power(t998,-4);
  t1060 = Power(t1053,2);
  t1064 = 1/t998;
  t1065 = -1.*t1064*t1053;
  t1066 = 1. + t1065;
  t1070 = Power(t998,-3);
  t1071 = Power(t1066,2);
  t1078 = Power(t998,-2);
  t1079 = Power(t1066,3);
  t1116 = Power(t1066,4);
  t1136 = Power(t1053,4);
  t1158 = Power(t998,-6);
  t9023 = -1.*t1078*t1053;
  t9024 = t1064 + t9023;
  t1117 = 5.*t1064*t1116;
  t1126 = 20.*t1078*t1053*t1079;
  t1127 = -5.*t1064*t1116;
  t1128 = t1126 + t1127;
  t1130 = 30.*t1070*t1060*t1071;
  t1131 = -20.*t1078*t1053*t1079;
  t1132 = t1130 + t1131;
  t1133 = 20.*t1059*t1055*t1066;
  t1134 = -30.*t1070*t1060*t1071;
  t1135 = t1133 + t1134;
  t1137 = 5.*t999*t1136;
  t1142 = -20.*t1059*t1055*t1066;
  t1144 = t1137 + t1142;
  t1157 = -5.*t999*t1136;
  p_output1[0]=-20.*t1078*t1079*t985*var4[0] - 60.*t1053*t1070*t1071*t985*var4[4] + 40.*t1078*t1079*t985*var4[4] - 60.*t1059*t1060*t1066*t985*var4[8] + 120.*t1053*t1070*t1071*t985*var4[8] - 20.*t1078*t1079*t985*var4[8] + 120.*t1059*t1060*t1066*t985*var4[12] - 60.*t1053*t1070*t1071*t985*var4[12] - 20.*t1055*t985*t999*var4[12] - 60.*t1059*t1060*t1066*t985*var4[16] + 40.*t1055*t985*t999*var4[16] - 20.*t1055*t985*t999*var4[20];
  p_output1[1]=-20.*t1078*t1079*t634*t66*var4[0] - 60.*t1053*t1070*t1071*t634*t66*var4[4] + 40.*t1078*t1079*t634*t66*var4[4] - 60.*t1059*t1060*t1066*t634*t66*var4[8] + 120.*t1053*t1070*t1071*t634*t66*var4[8] - 20.*t1078*t1079*t634*t66*var4[8] + 120.*t1059*t1060*t1066*t634*t66*var4[12] - 60.*t1053*t1070*t1071*t634*t66*var4[12] - 20.*t1055*t634*t66*t999*var4[12] - 60.*t1059*t1060*t1066*t634*t66*var4[16] + 40.*t1055*t634*t66*t999*var4[16] - 20.*t1055*t634*t66*t999*var4[20];
  p_output1[2]=1.;
  p_output1[3]=t1117;
  p_output1[4]=t1128;
  p_output1[5]=t1132;
  p_output1[6]=t1135;
  p_output1[7]=t1144;
  p_output1[8]=t1157;
  p_output1[9]=20.*t1053*t1070*t1079*var4[0] - 5.*t1078*t1116*var4[0] + 60.*t1059*t1060*t1071*var4[4] - 60.*t1053*t1070*t1079*var4[4] + 5.*t1078*t1116*var4[4] - 150.*t1059*t1060*t1071*var4[8] + 40.*t1053*t1070*t1079*var4[8] + 60.*t1055*t1066*t999*var4[8] + 90.*t1059*t1060*t1071*var4[12] + 20.*t1136*t1158*var4[12] - 140.*t1055*t1066*t999*var4[12] - 45.*t1136*t1158*var4[16] + 80.*t1055*t1066*t999*var4[16] + 25.*t1136*t1158*var4[20];
  p_output1[10]=5.*t1078*t1116*var4[0] + 20.*t1064*t1079*t9024*var4[0] + 40.*t1053*t1070*t1079*var4[4] - 20.*t1078*t1079*var4[4] - 5.*t1078*t1116*var4[4] + 60.*t1053*t1071*t1078*t9024*var4[4] - 20.*t1064*t1079*t9024*var4[4] + 90.*t1059*t1060*t1071*var4[8] - 60.*t1053*t1070*t1071*var4[8] - 40.*t1053*t1070*t1079*var4[8] + 20.*t1078*t1079*var4[8] + 60.*t1060*t1066*t1070*t9024*var4[8] - 60.*t1053*t1071*t1078*t9024*var4[8] - 60.*t1059*t1060*t1066*var4[12] - 90.*t1059*t1060*t1071*var4[12] + 60.*t1053*t1070*t1071*var4[12] + 20.*t1055*t1059*t9024*var4[12] - 60.*t1060*t1066*t1070*t9024*var4[12] + 80.*t1055*t1066*t999*var4[12] + 60.*t1059*t1060*t1066*var4[16] + 25.*t1136*t1158*var4[16] - 20.*t1055*t1059*t9024*var4[16] - 20.*t1055*t999*var4[16] - 80.*t1055*t1066*t999*var4[16] - 25.*t1136*t1158*var4[20] + 20.*t1055*t999*var4[20];
  p_output1[11]=-20.*t1078*t1079*t985*var4[1] - 60.*t1053*t1070*t1071*t985*var4[5] + 40.*t1078*t1079*t985*var4[5] - 60.*t1059*t1060*t1066*t985*var4[9] + 120.*t1053*t1070*t1071*t985*var4[9] - 20.*t1078*t1079*t985*var4[9] + 120.*t1059*t1060*t1066*t985*var4[13] - 60.*t1053*t1070*t1071*t985*var4[13] - 20.*t1055*t985*t999*var4[13] - 60.*t1059*t1060*t1066*t985*var4[17] + 40.*t1055*t985*t999*var4[17] - 20.*t1055*t985*t999*var4[21];
  p_output1[12]=-20.*t1078*t1079*t634*t66*var4[1] - 60.*t1053*t1070*t1071*t634*t66*var4[5] + 40.*t1078*t1079*t634*t66*var4[5] - 60.*t1059*t1060*t1066*t634*t66*var4[9] + 120.*t1053*t1070*t1071*t634*t66*var4[9] - 20.*t1078*t1079*t634*t66*var4[9] + 120.*t1059*t1060*t1066*t634*t66*var4[13] - 60.*t1053*t1070*t1071*t634*t66*var4[13] - 20.*t1055*t634*t66*t999*var4[13] - 60.*t1059*t1060*t1066*t634*t66*var4[17] + 40.*t1055*t634*t66*t999*var4[17] - 20.*t1055*t634*t66*t999*var4[21];
  p_output1[13]=1.;
  p_output1[14]=t1117;
  p_output1[15]=t1128;
  p_output1[16]=t1132;
  p_output1[17]=t1135;
  p_output1[18]=t1144;
  p_output1[19]=t1157;
  p_output1[20]=20.*t1053*t1070*t1079*var4[1] - 5.*t1078*t1116*var4[1] + 60.*t1059*t1060*t1071*var4[5] - 60.*t1053*t1070*t1079*var4[5] + 5.*t1078*t1116*var4[5] - 150.*t1059*t1060*t1071*var4[9] + 40.*t1053*t1070*t1079*var4[9] + 60.*t1055*t1066*t999*var4[9] + 90.*t1059*t1060*t1071*var4[13] + 20.*t1136*t1158*var4[13] - 140.*t1055*t1066*t999*var4[13] - 45.*t1136*t1158*var4[17] + 80.*t1055*t1066*t999*var4[17] + 25.*t1136*t1158*var4[21];
  p_output1[21]=5.*t1078*t1116*var4[1] + 20.*t1064*t1079*t9024*var4[1] + 40.*t1053*t1070*t1079*var4[5] - 20.*t1078*t1079*var4[5] - 5.*t1078*t1116*var4[5] + 60.*t1053*t1071*t1078*t9024*var4[5] - 20.*t1064*t1079*t9024*var4[5] + 90.*t1059*t1060*t1071*var4[9] - 60.*t1053*t1070*t1071*var4[9] - 40.*t1053*t1070*t1079*var4[9] + 20.*t1078*t1079*var4[9] + 60.*t1060*t1066*t1070*t9024*var4[9] - 60.*t1053*t1071*t1078*t9024*var4[9] - 60.*t1059*t1060*t1066*var4[13] - 90.*t1059*t1060*t1071*var4[13] + 60.*t1053*t1070*t1071*var4[13] + 20.*t1055*t1059*t9024*var4[13] - 60.*t1060*t1066*t1070*t9024*var4[13] + 80.*t1055*t1066*t999*var4[13] + 60.*t1059*t1060*t1066*var4[17] + 25.*t1136*t1158*var4[17] - 20.*t1055*t1059*t9024*var4[17] - 20.*t1055*t999*var4[17] - 80.*t1055*t1066*t999*var4[17] - 25.*t1136*t1158*var4[21] + 20.*t1055*t999*var4[21];
  p_output1[22]=-20.*t1078*t1079*t985*var4[2] - 60.*t1053*t1070*t1071*t985*var4[6] + 40.*t1078*t1079*t985*var4[6] - 60.*t1059*t1060*t1066*t985*var4[10] + 120.*t1053*t1070*t1071*t985*var4[10] - 20.*t1078*t1079*t985*var4[10] + 120.*t1059*t1060*t1066*t985*var4[14] - 60.*t1053*t1070*t1071*t985*var4[14] - 20.*t1055*t985*t999*var4[14] - 60.*t1059*t1060*t1066*t985*var4[18] + 40.*t1055*t985*t999*var4[18] - 20.*t1055*t985*t999*var4[22];
  p_output1[23]=-20.*t1078*t1079*t634*t66*var4[2] - 60.*t1053*t1070*t1071*t634*t66*var4[6] + 40.*t1078*t1079*t634*t66*var4[6] - 60.*t1059*t1060*t1066*t634*t66*var4[10] + 120.*t1053*t1070*t1071*t634*t66*var4[10] - 20.*t1078*t1079*t634*t66*var4[10] + 120.*t1059*t1060*t1066*t634*t66*var4[14] - 60.*t1053*t1070*t1071*t634*t66*var4[14] - 20.*t1055*t634*t66*t999*var4[14] - 60.*t1059*t1060*t1066*t634*t66*var4[18] + 40.*t1055*t634*t66*t999*var4[18] - 20.*t1055*t634*t66*t999*var4[22];
  p_output1[24]=1.;
  p_output1[25]=t1117;
  p_output1[26]=t1128;
  p_output1[27]=t1132;
  p_output1[28]=t1135;
  p_output1[29]=t1144;
  p_output1[30]=t1157;
  p_output1[31]=20.*t1053*t1070*t1079*var4[2] - 5.*t1078*t1116*var4[2] + 60.*t1059*t1060*t1071*var4[6] - 60.*t1053*t1070*t1079*var4[6] + 5.*t1078*t1116*var4[6] - 150.*t1059*t1060*t1071*var4[10] + 40.*t1053*t1070*t1079*var4[10] + 60.*t1055*t1066*t999*var4[10] + 90.*t1059*t1060*t1071*var4[14] + 20.*t1136*t1158*var4[14] - 140.*t1055*t1066*t999*var4[14] - 45.*t1136*t1158*var4[18] + 80.*t1055*t1066*t999*var4[18] + 25.*t1136*t1158*var4[22];
  p_output1[32]=5.*t1078*t1116*var4[2] + 20.*t1064*t1079*t9024*var4[2] + 40.*t1053*t1070*t1079*var4[6] - 20.*t1078*t1079*var4[6] - 5.*t1078*t1116*var4[6] + 60.*t1053*t1071*t1078*t9024*var4[6] - 20.*t1064*t1079*t9024*var4[6] + 90.*t1059*t1060*t1071*var4[10] - 60.*t1053*t1070*t1071*var4[10] - 40.*t1053*t1070*t1079*var4[10] + 20.*t1078*t1079*var4[10] + 60.*t1060*t1066*t1070*t9024*var4[10] - 60.*t1053*t1071*t1078*t9024*var4[10] - 60.*t1059*t1060*t1066*var4[14] - 90.*t1059*t1060*t1071*var4[14] + 60.*t1053*t1070*t1071*var4[14] + 20.*t1055*t1059*t9024*var4[14] - 60.*t1060*t1066*t1070*t9024*var4[14] + 80.*t1055*t1066*t999*var4[14] + 60.*t1059*t1060*t1066*var4[18] + 25.*t1136*t1158*var4[18] - 20.*t1055*t1059*t9024*var4[18] - 20.*t1055*t999*var4[18] - 80.*t1055*t1066*t999*var4[18] - 25.*t1136*t1158*var4[22] + 20.*t1055*t999*var4[22];
  p_output1[33]=-20.*t1078*t1079*t985*var4[3] - 60.*t1053*t1070*t1071*t985*var4[7] + 40.*t1078*t1079*t985*var4[7] - 60.*t1059*t1060*t1066*t985*var4[11] + 120.*t1053*t1070*t1071*t985*var4[11] - 20.*t1078*t1079*t985*var4[11] + 120.*t1059*t1060*t1066*t985*var4[15] - 60.*t1053*t1070*t1071*t985*var4[15] - 20.*t1055*t985*t999*var4[15] - 60.*t1059*t1060*t1066*t985*var4[19] + 40.*t1055*t985*t999*var4[19] - 20.*t1055*t985*t999*var4[23];
  p_output1[34]=-20.*t1078*t1079*t634*t66*var4[3] - 60.*t1053*t1070*t1071*t634*t66*var4[7] + 40.*t1078*t1079*t634*t66*var4[7] - 60.*t1059*t1060*t1066*t634*t66*var4[11] + 120.*t1053*t1070*t1071*t634*t66*var4[11] - 20.*t1078*t1079*t634*t66*var4[11] + 120.*t1059*t1060*t1066*t634*t66*var4[15] - 60.*t1053*t1070*t1071*t634*t66*var4[15] - 20.*t1055*t634*t66*t999*var4[15] - 60.*t1059*t1060*t1066*t634*t66*var4[19] + 40.*t1055*t634*t66*t999*var4[19] - 20.*t1055*t634*t66*t999*var4[23];
  p_output1[35]=1.;
  p_output1[36]=t1117;
  p_output1[37]=t1128;
  p_output1[38]=t1132;
  p_output1[39]=t1135;
  p_output1[40]=t1144;
  p_output1[41]=t1157;
  p_output1[42]=20.*t1053*t1070*t1079*var4[3] - 5.*t1078*t1116*var4[3] + 60.*t1059*t1060*t1071*var4[7] - 60.*t1053*t1070*t1079*var4[7] + 5.*t1078*t1116*var4[7] - 150.*t1059*t1060*t1071*var4[11] + 40.*t1053*t1070*t1079*var4[11] + 60.*t1055*t1066*t999*var4[11] + 90.*t1059*t1060*t1071*var4[15] + 20.*t1136*t1158*var4[15] - 140.*t1055*t1066*t999*var4[15] - 45.*t1136*t1158*var4[19] + 80.*t1055*t1066*t999*var4[19] + 25.*t1136*t1158*var4[23];
  p_output1[43]=5.*t1078*t1116*var4[3] + 20.*t1064*t1079*t9024*var4[3] + 40.*t1053*t1070*t1079*var4[7] - 20.*t1078*t1079*var4[7] - 5.*t1078*t1116*var4[7] + 60.*t1053*t1071*t1078*t9024*var4[7] - 20.*t1064*t1079*t9024*var4[7] + 90.*t1059*t1060*t1071*var4[11] - 60.*t1053*t1070*t1071*var4[11] - 40.*t1053*t1070*t1079*var4[11] + 20.*t1078*t1079*var4[11] + 60.*t1060*t1066*t1070*t9024*var4[11] - 60.*t1053*t1071*t1078*t9024*var4[11] - 60.*t1059*t1060*t1066*var4[15] - 90.*t1059*t1060*t1071*var4[15] + 60.*t1053*t1070*t1071*var4[15] + 20.*t1055*t1059*t9024*var4[15] - 60.*t1060*t1066*t1070*t9024*var4[15] + 80.*t1055*t1066*t999*var4[15] + 60.*t1059*t1060*t1066*var4[19] + 25.*t1136*t1158*var4[19] - 20.*t1055*t1059*t9024*var4[19] - 20.*t1055*t999*var4[19] - 80.*t1055*t1066*t999*var4[19] - 25.*t1136*t1158*var4[23] + 20.*t1055*t999*var4[23];
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

#include "J_d1y_time_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_d1y_time_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
