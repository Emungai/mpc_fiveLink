/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:44 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t9514;
  double t13654;
  double t9405;
  double t13716;
  double t734;
  double t11091;
  double t13838;
  double t13937;
  double t13964;
  double t13965;
  double t13971;
  double t13972;
  double t14395;
  double t14481;
  double t17913;
  double t17925;
  double t17926;
  double t17927;
  double t17945;
  double t801;
  double t7750;
  double t17959;
  double t17960;
  double t17967;
  double t17958;
  double t17968;
  double t17976;
  double t17977;
  double t17978;
  double t17979;
  double t17985;
  double t18000;
  double t18005;
  double t18006;
  double t18007;
  double t18009;
  double t18011;
  double t18023;
  double t18034;
  double t18035;
  double t18022;
  double t18036;
  double t18037;
  double t18038;
  double t18039;
  double t18040;
  double t18021;
  double t18041;
  double t18042;
  double t18043;
  double t13947;
  double t13975;
  double t13990;
  double t14004;
  double t14184;
  double t14348;
  double t17946;
  double t17957;
  double t17980;
  double t17981;
  double t17982;
  double t17983;
  double t17984;
  double t17999;
  double t18001;
  double t18002;
  double t18003;
  double t18004;
  double t18012;
  double t18013;
  double t18014;
  double t18020;
  double t18044;
  double t18045;
  double t18046;
  double t18056;
  double t18057;
  double t18058;
  double t18059;
  double t18060;
  double t18074;
  double t18075;
  double t18076;
  double t18077;
  double t18047;
  double t18048;
  double t18049;
  double t18050;
  double t18051;
  double t18082;
  double t18088;
  double t18090;
  double t18095;
  double t18096;
  double t18097;
  double t18098;
  double t18099;
  double t18104;
  double t18105;
  double t18106;
  double t18107;
  double t18108;
  double t18109;
  double t18110;
  double t18111;
  double t18112;
  double t18113;
  double t18084;
  double t18085;
  double t18086;
  double t18087;
  double t18089;
  double t18091;
  double t18092;
  double t18093;
  double t18094;
  double t18100;
  double t18101;
  double t18102;
  double t18103;
  double t18114;
  double t18115;
  double t18116;
  double t18131;
  double t18132;
  double t18133;
  double t18134;
  t9514 = Cos(var1[3]);
  t13654 = Sin(var1[2]);
  t9405 = Cos(var1[2]);
  t13716 = Sin(var1[3]);
  t734 = Cos(var1[4]);
  t11091 = t9405*t9514;
  t13838 = -1.*t13654*t13716;
  t13937 = t11091 + t13838;
  t13964 = -1.*t9514*t13654;
  t13965 = -1.*t9405*t13716;
  t13971 = t13964 + t13965;
  t13972 = Sin(var1[4]);
  t14395 = -0.4*t734*t13971;
  t14481 = 0.4*t13937*t13972;
  t17913 = t734*t13971;
  t17925 = -1.*t13937*t13972;
  t17926 = t17913 + t17925;
  t17927 = 0.8*t17926;
  t17945 = t14395 + t14481 + t17927;
  t801 = -1.*t734;
  t7750 = 1. + t801;
  t17959 = -1.*t9405*t9514;
  t17960 = t13654*t13716;
  t17967 = t17959 + t17960;
  t17958 = 0.4*t7750*t13971;
  t17968 = -0.4*t17967*t13972;
  t17976 = t17967*t13972;
  t17977 = t17913 + t17976;
  t17978 = 0.8*t17977;
  t17979 = t17958 + t17968 + t17978;
  t17985 = 0.4*t13971*t13972;
  t18000 = -1.*t13971*t13972;
  t18005 = -0.4*t734*t17967;
  t18006 = t734*t17967;
  t18007 = t18006 + t18000;
  t18009 = 0.8*t18007;
  t18011 = t18005 + t17985 + t18009;
  t18023 = t9514*t13654;
  t18034 = t9405*t13716;
  t18035 = t18023 + t18034;
  t18022 = 0.4*t7750*t17967;
  t18036 = -0.4*t18035*t13972;
  t18037 = t18035*t13972;
  t18038 = t18006 + t18037;
  t18039 = 0.8*t18038;
  t18040 = t18022 + t18036 + t18039;
  t18021 = var2[4]*t18011;
  t18041 = var2[2]*t18040;
  t18042 = var2[3]*t18040;
  t18043 = t18021 + t18041 + t18042;
  t13947 = 0.4*t7750*t13937;
  t13975 = -0.4*t13971*t13972;
  t13990 = t734*t13937;
  t14004 = t13971*t13972;
  t14184 = t13990 + t14004;
  t14348 = 0.8*t14184;
  t17946 = var3[4]*t17945;
  t17957 = var2[4]*t17945;
  t17980 = var3[2]*t17979;
  t17981 = var3[3]*t17979;
  t17982 = var2[2]*t17979;
  t17983 = var2[3]*t17979;
  t17984 = 0.4*t734*t13937;
  t17999 = -1.*t734*t13937;
  t18001 = t17999 + t18000;
  t18002 = 0.8*t18001;
  t18003 = t17984 + t17985 + t18002;
  t18004 = var2[4]*t18003;
  t18012 = var2[2]*t18011;
  t18013 = var2[3]*t18011;
  t18014 = t18004 + t18012 + t18013;
  t18020 = var2[4]*t18014;
  t18044 = var2[2]*t18043;
  t18045 = var2[3]*t18043;
  t18046 = t13947 + t13975 + t14348 + t17946 + t17957 + t17980 + t17981 + t17982 + t17983 + t18020 + t18044 + t18045;
  t18056 = 0.4*t734*t18035;
  t18057 = -1.*t734*t18035;
  t18058 = t18057 + t17925;
  t18059 = 0.8*t18058;
  t18060 = t18056 + t14481 + t18059;
  t18074 = 2.*var2[4]*t17945;
  t18075 = 2.*var2[2]*t17979;
  t18076 = 2.*var2[3]*t17979;
  t18077 = t13947 + t13975 + t14348 + t18074 + t18075 + t18076;
  t18047 = -0.4*t734*t13937;
  t18048 = 0.4*t18035*t13972;
  t18049 = -1.*t18035*t13972;
  t18050 = t13990 + t18049;
  t18051 = 0.8*t18050;
  t18082 = t13947 + t13975 + t14348;
  t18088 = 0.4*t17967*t13972;
  t18090 = -1.*t17967*t13972;
  t18095 = -0.4*t734*t18035;
  t18096 = t734*t18035;
  t18097 = t18096 + t18090;
  t18098 = 0.8*t18097;
  t18099 = t18095 + t18088 + t18098;
  t18104 = 0.4*t7750*t18035;
  t18105 = -0.4*t13937*t13972;
  t18106 = t13937*t13972;
  t18107 = t18096 + t18106;
  t18108 = 0.8*t18107;
  t18109 = t18104 + t18105 + t18108;
  t18110 = var2[2]*t18109;
  t18111 = var2[3]*t18109;
  t18112 = var2[4]*t18099;
  t18113 = t18110 + t18111 + t18112;
  t18084 = var3[4]*t18011;
  t18085 = var3[2]*t18040;
  t18086 = var3[3]*t18040;
  t18087 = 0.4*t734*t13971;
  t18089 = -1.*t734*t13971;
  t18091 = t18089 + t18090;
  t18092 = 0.8*t18091;
  t18093 = t18087 + t18088 + t18092;
  t18094 = var2[4]*t18093;
  t18100 = var2[2]*t18099;
  t18101 = var2[3]*t18099;
  t18102 = t18094 + t18100 + t18101;
  t18103 = var2[4]*t18102;
  t18114 = var2[2]*t18113;
  t18115 = var2[3]*t18113;
  t18116 = t17958 + t17968 + t17978 + t18084 + t18021 + t18085 + t18086 + t18041 + t18042 + t18103 + t18114 + t18115;
  t18131 = 2.*var2[4]*t18011;
  t18132 = 2.*var2[2]*t18040;
  t18133 = 2.*var2[3]*t18040;
  t18134 = t17958 + t17968 + t17978 + t18131 + t18132 + t18133;
  p_output1[0]=1.;
  p_output1[1]=t18046;
  p_output1[2]=t18046;
  p_output1[3]=t18047 + t18048 + t18051 + t17945*var2[2] + t18014*var2[2] + t17945*var2[3] + t18014*var2[3] + t18060*var2[4] + var2[4]*(t18003*var2[2] + t18003*var2[3] + (t17984 + t18036 + 0.8*(t17999 + t18037))*var2[4]) + t17945*var3[2] + t17945*var3[3] + t18060*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t18077;
  p_output1[6]=t18077;
  p_output1[7]=t18047 + t18048 + t18051 + 2.*t17945*var2[2] + 2.*t17945*var2[3] + 2.*t18060*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t18082;
  p_output1[10]=t18082;
  p_output1[11]=t18047 + t18048 + t18051;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t18116;
  p_output1[16]=t18116;
  p_output1[17]=t14395 + t14481 + t17927 + t18004 + t18012 + t18013 + t18102*var2[2] + t18102*var2[3] + var2[4]*(t18093*var2[2] + t18093*var2[3] + (t18087 + t18105 + 0.8*(t18089 + t18106))*var2[4]) + t18011*var3[2] + t18011*var3[3] + t18003*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t18134;
  p_output1[20]=t18134;
  p_output1[21]=t14395 + t14481 + t17927 + 2.*t18011*var2[2] + 2.*t18011*var2[3] + 2.*t18003*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t17979;
  p_output1[24]=t17979;
  p_output1[25]=t17945;
  p_output1[26]=-1.;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_ddh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
