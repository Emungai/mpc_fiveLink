/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:02 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t789;
  double t767;
  double t769;
  double t716;
  double t865;
  double t185;
  double t790;
  double t798;
  double t804;
  double t856;
  double t863;
  double t908;
  double t909;
  double t910;
  double t766;
  double t783;
  double t787;
  double t788;
  double t924;
  double t925;
  double t926;
  double t894;
  double t902;
  double t906;
  double t931;
  double t864;
  double t877;
  double t892;
  double t893;
  double t907;
  double t927;
  double t928;
  double t929;
  double t944;
  double t945;
  double t946;
  double t947;
  double t949;
  double t953;
  double t956;
  double t957;
  double t958;
  double t960;
  double t962;
  double t971;
  double t972;
  double t974;
  double t1017;
  double t1018;
  double t1019;
  double t1020;
  double t1021;
  double t1026;
  double t992;
  double t993;
  double t994;
  double t973;
  double t975;
  double t991;
  double t1003;
  double t1004;
  double t1042;
  double t1044;
  double t1045;
  double t1303;
  double t1352;
  double t4702;
  double t4703;
  double t4704;
  double t4745;
  double t4746;
  double t4758;
  double t4830;
  double t4858;
  double t4682;
  double t4686;
  double t4687;
  double t4860;
  double t4864;
  double t4883;
  double t4884;
  double t916;
  double t4891;
  double t4892;
  double t4893;
  double t4894;
  double t921;
  double t4902;
  double t4907;
  double t930;
  double t932;
  double t4908;
  double t4909;
  double t4910;
  double t4911;
  double t4920;
  double t4921;
  double t4922;
  double t4913;
  double t4914;
  double t4915;
  double t4925;
  double t4926;
  double t4927;
  double t3342;
  double t4628;
  double t4634;
  double t923;
  double t940;
  double t941;
  double t943;
  double t1005;
  double t4967;
  double t4968;
  double t4969;
  double t4957;
  double t4964;
  double t4965;
  double t4984;
  double t4985;
  double t4986;
  double t4974;
  double t4977;
  double t4978;
  double t4973;
  double t5037;
  double t5038;
  double t4989;
  double t4997;
  double t5042;
  double t5043;
  double t5046;
  double t5047;
  double t5002;
  double t5013;
  double t5014;
  double t5032;
  double t5033;
  double t5034;
  double t5036;
  double t5040;
  double t5041;
  double t5044;
  double t5048;
  double t5049;
  double t5050;
  double t5053;
  double t5057;
  double t5062;
  double t5063;
  double t5064;
  double t5065;
  double t5066;
  double t5067;
  double t5068;
  double t5069;
  double t5070;
  double t5071;
  double t5072;
  double t5073;
  double t5074;
  double t5075;
  double t5076;
  double t5081;
  double t5082;
  double t5084;
  double t5085;
  double t5087;
  double t5088;
  double t5089;
  double t5095;
  double t5096;
  double t5101;
  double t5134;
  double t5135;
  double t5147;
  double t5148;
  double t5149;
  double t8162;
  double t8163;
  double t8224;
  t789 = Cos(var1[4]);
  t767 = Sin(var1[2]);
  t769 = Sin(var1[3]);
  t716 = Cos(var1[3]);
  t865 = Sin(var1[4]);
  t185 = Cos(var1[2]);
  t790 = -1.*t789;
  t798 = 1. + t790;
  t804 = 0.4*t798;
  t856 = 0.64*t789;
  t863 = t804 + t856;
  t908 = t716*t789;
  t909 = -1.*t769*t865;
  t910 = t908 + t909;
  t766 = -1.*t185*t716;
  t783 = t767*t769;
  t787 = t766 + t783;
  t788 = 0.748*t787;
  t924 = t863*t865;
  t925 = -0.24*t789*t865;
  t926 = t924 + t925;
  t894 = -1.*t789*t769;
  t902 = -1.*t716*t865;
  t906 = t894 + t902;
  t931 = -1.*t767*t910;
  t864 = t863*t789;
  t877 = Power(t865,2);
  t892 = 0.24*t877;
  t893 = t864 + t892;
  t907 = -1.*t767*t906;
  t927 = t789*t769;
  t928 = t716*t865;
  t929 = t927 + t928;
  t944 = t185*t906;
  t945 = t944 + t931;
  t946 = 3.2*t926*t945;
  t947 = -1.*t716*t789;
  t949 = t769*t865;
  t953 = t947 + t949;
  t956 = t185*t953;
  t957 = t907 + t956;
  t958 = 3.2*t893*t957;
  t960 = t788 + t946 + t958;
  t962 = Power(t789,2);
  t971 = -0.24*t962;
  t972 = t864 + t971;
  t974 = t185*t910;
  t1017 = t767*t929;
  t1018 = t1017 + t956;
  t1019 = 3.2*t893*t1018;
  t1020 = t767*t953;
  t1021 = t944 + t1020;
  t1026 = 3.2*t926*t1021;
  t992 = -1.*t863*t865;
  t993 = 0.24*t789*t865;
  t994 = t992 + t993;
  t973 = -1.*t767*t929;
  t975 = t973 + t974;
  t991 = 3.2*t972*t975;
  t1003 = 3.2*t994*t945;
  t1004 = t991 + t946 + t1003 + t958;
  t1042 = t767*t906;
  t1044 = t1042 + t974;
  t1045 = 3.2*t972*t1044;
  t1303 = 3.2*t994*t1021;
  t1352 = t1045 + t1019 + t1026 + t1303;
  t4702 = -1.*t716*t767;
  t4703 = -1.*t185*t769;
  t4704 = t4702 + t4703;
  t4745 = 0.748*t4704;
  t4746 = 3.2*t926*t975;
  t4758 = 3.2*t893*t945;
  t4830 = t4745 + t4746 + t4758;
  t4858 = 3.2*t926*t1044;
  t4682 = t185*t929;
  t4686 = t767*t910;
  t4687 = t4682 + t4686;
  t4860 = 3.2*t893*t1021;
  t4864 = 3.2*t994*t1044;
  t4883 = 3.2*t972*t4687;
  t4884 = t4858 + t4864 + t4883 + t4860;
  t916 = -1.*t185*t910;
  t4891 = t716*t767;
  t4892 = t185*t769;
  t4893 = t4891 + t4892;
  t4894 = 0.748*t4893;
  t921 = t907 + t916;
  t4902 = -1.*t185*t906;
  t4907 = 3.2*t926*t921;
  t930 = -1.*t185*t929;
  t932 = t930 + t931;
  t4908 = -1.*t767*t953;
  t4909 = t4902 + t4908;
  t4910 = 3.2*t893*t4909;
  t4911 = t4894 + t4907 + t4910;
  t4920 = 3.2*t926*t957;
  t4921 = t4682 + t4908;
  t4922 = 3.2*t893*t4921;
  t4913 = 3.2*t994*t921;
  t4914 = 3.2*t972*t932;
  t4915 = t4907 + t4913 + t4914 + t4910;
  t4925 = 3.2*t972*t945;
  t4926 = 3.2*t994*t957;
  t4927 = t4925 + t4920 + t4926 + t4922;
  t3342 = -1.*t863*t789;
  t4628 = 0.24*t962;
  t4634 = t3342 + t4628;
  t923 = 3.2*t893*t921;
  t940 = 3.2*t926*t932;
  t941 = t788 + t923 + t940;
  t943 = -0.5*var2[2]*t941;
  t1005 = -0.5*var2[4]*t1004;
  t4967 = t716*t863;
  t4968 = -0.24*t769*t865;
  t4969 = t4967 + t4968;
  t4957 = -1.*t863*t769;
  t4964 = -0.24*t716*t865;
  t4965 = t4957 + t4964;
  t4984 = t863*t769;
  t4985 = 0.24*t716*t865;
  t4986 = t4984 + t4985;
  t4974 = -1.*t716*t863;
  t4977 = 0.24*t769*t865;
  t4978 = t4974 + t4977;
  t4973 = -1.*t929*t4969;
  t5037 = -0.24*t789*t769;
  t5038 = t5037 + t4964;
  t4989 = -1.*t4986*t953;
  t4997 = t906*t4986;
  t5042 = 0.24*t716*t789;
  t5043 = t5042 + t4968;
  t5046 = -0.24*t716*t789;
  t5047 = t5046 + t4977;
  t5002 = t4969*t953;
  t5013 = t4965*t910;
  t5014 = t4986*t910;
  t5032 = t906*t4969;
  t5033 = t929*t4969;
  t5034 = t5013 + t5014 + t5032 + t5033;
  t5036 = 3.2*t994*t5034;
  t5040 = -1.*t5038*t910;
  t5041 = -1.*t906*t4969;
  t5044 = -1.*t906*t5043;
  t5048 = -1.*t906*t5047;
  t5049 = -1.*t4965*t953;
  t5050 = -1.*t5038*t953;
  t5053 = t5040 + t5041 + t4973 + t5044 + t5048 + t5049 + t5050 + t4989;
  t5057 = 3.2*t926*t5053;
  t5062 = -1.*t906*t4965;
  t5063 = -1.*t906*t4986;
  t5064 = -1.*t910*t4969;
  t5065 = -1.*t4969*t953;
  t5066 = t5062 + t5063 + t5064 + t5065;
  t5067 = 3.2*t972*t5066;
  t5068 = t906*t4965;
  t5069 = t906*t5038;
  t5070 = t5038*t929;
  t5071 = t910*t4969;
  t5072 = t910*t5043;
  t5073 = t910*t5047;
  t5074 = t5068 + t5069 + t4997 + t5070 + t5071 + t5072 + t5073 + t5002;
  t5075 = 3.2*t893*t5074;
  t5076 = t5036 + t5057 + t5067 + t5075;
  t5081 = -1.*t4986*t910;
  t5082 = t5081 + t5041;
  t5084 = t4986*t929;
  t5085 = t5084 + t5071;
  t5087 = t5038*t910;
  t5088 = t929*t5043;
  t5089 = t5087 + t5014 + t5032 + t5088;
  t5095 = -1.*t906*t5038;
  t5096 = -1.*t910*t5043;
  t5101 = t5095 + t5063 + t5096 + t5065;
  t5134 = 3.2*t972*t5082;
  t5135 = 3.2*t994*t5085;
  t5147 = 3.2*t893*t5089;
  t5148 = 3.2*t926*t5101;
  t5149 = t5134 + t5135 + t5147 + t5148;
  t8162 = 6.4*t972*t926;
  t8163 = 6.4*t994*t893;
  t8224 = t8162 + t8163;
  p_output1[0]=var2[3]*(t1005 + t943 - 0.5*t960*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t960*var2[2] - 0.5*(t1019 + t1026 + t788)*var2[3] - 0.5*t1352*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t1004*var2[2] - 0.5*t1352*var2[3] - 0.5*(t1019 + t1026 + 3.2*t1044*t4634 + 6.4*t1044*t972 + 6.4*t1021*t994 + 3.2*t4687*t994)*var2[4]);
  p_output1[3]=-0.5*t4830*var2[3];
  p_output1[4]=-0.5*t4830*var2[2] - 1.*(t4745 + t4858 + t4860)*var2[3] - 0.5*t4884*var2[4];
  p_output1[5]=-0.5*t4884*var2[3];
  p_output1[6]=var2[3]*(-0.5*(t4894 + 3.2*(t4686 + t4902)*t893 + 3.2*(t1017 + t916)*t926)*var2[2] - 0.5*t4911*var2[3] - 0.5*t4915*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t4911*var2[2] - 0.5*(t4894 + t4920 + t4922)*var2[3] - 0.5*t4927*var2[4]);
  p_output1[8]=var2[3]*(-0.5*t4915*var2[2] - 0.5*t4927*var2[3] - 0.5*(t4920 + t4922 + 3.2*t4634*t945 + 6.4*t945*t972 + 6.4*t957*t994 + 3.2*t975*t994)*var2[4]);
  p_output1[9]=-0.5*t941*var2[3];
  p_output1[10]=t1005 + t943 - 1.*t960*var2[3];
  p_output1[11]=-0.5*t1004*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.2*t893*(t4997 + t5002 + 2.*t4965*t906 + 2.*t4969*t910 + t4978*t910 + t4965*t929) + 3.2*t926*(t4973 + t4989 - 2.*t4969*t906 - 1.*t4978*t906 - 1.*t4965*t910 - 2.*t4965*t953))*var2[3] - 0.5*t5076*var2[4]);
  p_output1[13]=var2[3]*(-0.5*t5076*var2[3] - 0.5*(3.2*t4634*t5085 + 3.2*t893*(t4997 + t5002 + t5070 + t5073 + 2.*t5038*t906 + 2.*t5043*t910) + 3.2*t926*(t4973 + t4989 + t5040 + t5048 - 2.*t5043*t906 - 2.*t5038*t953) + 6.4*t5101*t972 + 3.2*t5082*t994 + 6.4*t5089*t994)*var2[4]);
  p_output1[14]=-1.*(3.2*t5034*t893 + 3.2*t5066*t926)*var2[3] - 0.5*t5149*var2[4];
  p_output1[15]=-0.5*t5149*var2[3];
  p_output1[16]=-0.5*(6.4*t4634*t893 + 6.4*Power(t972,2) + 6.4*t926*t994 + 6.4*Power(t994,2))*var2[3]*var2[4];
  p_output1[17]=-0.5*t8224*var2[4];
  p_output1[18]=-0.5*t8224*var2[3];
  p_output1[19]=-0.384*t4634*var2[3]*var2[4];
  p_output1[20]=-0.384*t994*var2[4];
  p_output1[21]=-0.384*t994*var2[3];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec4_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
