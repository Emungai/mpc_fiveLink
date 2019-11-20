/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:06:40 GMT-05:00
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
  double t9842;
  double t9817;
  double t9818;
  double t9843;
  double t9851;
  double t9816;
  double t9841;
  double t9844;
  double t9848;
  double t9849;
  double t9852;
  double t9854;
  double t9857;
  double t9859;
  double t9860;
  double t9870;
  double t9871;
  double t9872;
  double t9874;
  double t9875;
  double t9899;
  double t9896;
  double t9897;
  double t9900;
  double t9898;
  double t9901;
  double t9902;
  double t9903;
  double t9904;
  double t9905;
  double t9906;
  double t9907;
  double t9908;
  double t9916;
  double t9917;
  double t9918;
  double t9919;
  double t9920;
  double t9864;
  double t9865;
  double t9868;
  double t9885;
  double t9886;
  double t9887;
  double t9888;
  double t9889;
  double t9890;
  double t9912;
  double t9913;
  double t9914;
  double t9970;
  double t9971;
  double t9972;
  double t9973;
  double t9974;
  double t9975;
  double t9985;
  double t9986;
  double t9987;
  double t10000;
  double t10001;
  double t10002;
  double t10048;
  double t10049;
  double t10050;
  double t10052;
  double t10053;
  double t10054;
  double t10068;
  double t10069;
  double t10070;
  double t10072;
  double t10073;
  double t10074;
  double t4639;
  double t9813;
  double t9989;
  double t9990;
  double t9991;
  double t9862;
  double t9863;
  double t9981;
  double t9982;
  double t9983;
  double t9881;
  double t9883;
  double t9884;
  double t9993;
  double t9994;
  double t9876;
  double t9877;
  double t9878;
  double t9879;
  double t9894;
  double t9895;
  double t10004;
  double t10005;
  double t10006;
  double t9910;
  double t9911;
  double t9996;
  double t9997;
  double t9998;
  double t9926;
  double t9968;
  double t9969;
  double t10008;
  double t10009;
  double t9921;
  double t9922;
  double t9923;
  double t9924;
  double t9979;
  double t9980;
  double t10015;
  double t10016;
  double t10017;
  double t10020;
  double t10023;
  double t10024;
  double t10031;
  double t10032;
  double t10013;
  double t10014;
  double t9984;
  double t9988;
  double t9992;
  double t9995;
  double t9999;
  double t10003;
  double t10007;
  double t10010;
  double t10011;
  double t10039;
  double t10040;
  double t10042;
  double t10043;
  double t10044;
  double t10045;
  double t10046;
  double t10051;
  double t10055;
  double t10056;
  double t10058;
  double t10059;
  double t10060;
  double t10062;
  double t10063;
  double t10064;
  double t10065;
  double t10066;
  double t10071;
  double t10075;
  double t10076;
  double t10078;
  double t10079;
  double t10080;
  double t10132;
  double t10133;
  double t10134;
  double t10041;
  double t10047;
  double t10057;
  double t10061;
  double t10067;
  double t10077;
  double t10081;
  double t10082;
  double t10113;
  double t10114;
  double t10115;
  double t10116;
  double t10117;
  double t10118;
  double t10119;
  double t10120;
  double t10123;
  double t10124;
  double t10125;
  double t10126;
  double t10127;
  double t10128;
  double t10129;
  double t10130;
  double t10131;
  double t10135;
  double t10136;
  double t10137;
  double t10138;
  double t10139;
  double t10140;
  double t10141;
  double t10087;
  double t10088;
  double t10089;
  double t10090;
  double t9869;
  double t9880;
  double t9891;
  double t9892;
  double t10145;
  double t10146;
  double t10147;
  double t10148;
  double t10175;
  double t10176;
  double t10142;
  double t10143;
  double t10093;
  double t10094;
  double t10095;
  double t10096;
  double t9915;
  double t9925;
  double t9976;
  double t9977;
  double t10153;
  double t10154;
  double t10155;
  double t10156;
  double t10208;
  double t10209;
  double t10150;
  double t10151;
  t9842 = Cos(var2[3]);
  t9817 = Cos(var2[4]);
  t9818 = Sin(var2[3]);
  t9843 = Sin(var2[4]);
  t9851 = Cos(var2[2]);
  t9816 = Sin(var2[2]);
  t9841 = -1.*t9817*t9818;
  t9844 = -1.*t9842*t9843;
  t9848 = t9841 + t9844;
  t9849 = t9816*t9848;
  t9852 = t9842*t9817;
  t9854 = -1.*t9818*t9843;
  t9857 = t9852 + t9854;
  t9859 = t9851*t9857;
  t9860 = t9849 + t9859;
  t9870 = -1.*t9817;
  t9871 = 1. + t9870;
  t9872 = 0.4*t9871;
  t9874 = 0.64*t9817;
  t9875 = t9872 + t9874;
  t9899 = Cos(var2[5]);
  t9896 = Cos(var2[6]);
  t9897 = Sin(var2[5]);
  t9900 = Sin(var2[6]);
  t9898 = -1.*t9896*t9897;
  t9901 = -1.*t9899*t9900;
  t9902 = t9898 + t9901;
  t9903 = t9816*t9902;
  t9904 = t9899*t9896;
  t9905 = -1.*t9897*t9900;
  t9906 = t9904 + t9905;
  t9907 = t9851*t9906;
  t9908 = t9903 + t9907;
  t9916 = -1.*t9896;
  t9917 = 1. + t9916;
  t9918 = 0.4*t9917;
  t9919 = 0.64*t9896;
  t9920 = t9918 + t9919;
  t9864 = t9851*t9842;
  t9865 = -1.*t9816*t9818;
  t9868 = t9864 + t9865;
  t9885 = t9817*t9818;
  t9886 = t9842*t9843;
  t9887 = t9885 + t9886;
  t9888 = t9851*t9887;
  t9889 = t9816*t9857;
  t9890 = t9888 + t9889;
  t9912 = t9851*t9899;
  t9913 = -1.*t9816*t9897;
  t9914 = t9912 + t9913;
  t9970 = t9896*t9897;
  t9971 = t9899*t9900;
  t9972 = t9970 + t9971;
  t9973 = t9851*t9972;
  t9974 = t9816*t9906;
  t9975 = t9973 + t9974;
  t9985 = t9842*t9816;
  t9986 = t9851*t9818;
  t9987 = t9985 + t9986;
  t10000 = t9899*t9816;
  t10001 = t9851*t9897;
  t10002 = t10000 + t10001;
  t10048 = t9875*t9818;
  t10049 = 0.24*t9842*t9843;
  t10050 = t10048 + t10049;
  t10052 = t9842*t9875;
  t10053 = -0.24*t9818*t9843;
  t10054 = t10052 + t10053;
  t10068 = t9920*t9897;
  t10069 = 0.24*t9899*t9900;
  t10070 = t10068 + t10069;
  t10072 = t9899*t9920;
  t10073 = -0.24*t9897*t9900;
  t10074 = t10072 + t10073;
  t4639 = -1.*var1[4];
  t9813 = var3[4] + t4639;
  t9989 = t9851*t9848;
  t9990 = -1.*t9816*t9857;
  t9991 = t9989 + t9990;
  t9862 = -1.*var1[3];
  t9863 = var3[3] + t9862;
  t9981 = -1.*t9842*t9816;
  t9982 = -1.*t9851*t9818;
  t9983 = t9981 + t9982;
  t9881 = t9875*t9843;
  t9883 = -0.24*t9817*t9843;
  t9884 = t9881 + t9883;
  t9993 = -1.*t9816*t9887;
  t9994 = t9993 + t9859;
  t9876 = t9875*t9817;
  t9877 = Power(t9843,2);
  t9878 = 0.24*t9877;
  t9879 = t9876 + t9878;
  t9894 = -1.*var1[6];
  t9895 = var3[6] + t9894;
  t10004 = t9851*t9902;
  t10005 = -1.*t9816*t9906;
  t10006 = t10004 + t10005;
  t9910 = -1.*var1[5];
  t9911 = var3[5] + t9910;
  t9996 = -1.*t9899*t9816;
  t9997 = -1.*t9851*t9897;
  t9998 = t9996 + t9997;
  t9926 = t9920*t9900;
  t9968 = -0.24*t9896*t9900;
  t9969 = t9926 + t9968;
  t10008 = -1.*t9816*t9972;
  t10009 = t10008 + t9907;
  t9921 = t9920*t9896;
  t9922 = Power(t9900,2);
  t9923 = 0.24*t9922;
  t9924 = t9921 + t9923;
  t9979 = -1.*var1[1];
  t9980 = var3[1] + t9979;
  t10015 = Power(t9851,2);
  t10016 = 12.*t10015;
  t10017 = Power(t9816,2);
  t10020 = 12.*t10017;
  t10023 = Power(t9868,2);
  t10024 = 6.8*t10023;
  t10031 = Power(t9914,2);
  t10032 = 6.8*t10031;
  t10013 = -1.*var1[0];
  t10014 = var3[0] + t10013;
  t9984 = 6.8*t9983*t9868;
  t9988 = 6.8*t9987*t9868;
  t9992 = 3.2*t9860*t9991;
  t9995 = 3.2*t9994*t9890;
  t9999 = 6.8*t9998*t9914;
  t10003 = 6.8*t10002*t9914;
  t10007 = 3.2*t9908*t10006;
  t10010 = 3.2*t10009*t9975;
  t10011 = t9984 + t9988 + t9992 + t9995 + t9999 + t10003 + t10007 + t10010;
  t10039 = -1.*var1[2];
  t10040 = var3[2] + t10039;
  t10042 = Power(t9842,2);
  t10043 = 0.11*t10042;
  t10044 = Power(t9818,2);
  t10045 = 0.11*t10044;
  t10046 = t10043 + t10045;
  t10051 = -1.*t10050*t9857;
  t10055 = -1.*t9848*t10054;
  t10056 = t10051 + t10055;
  t10058 = t10050*t9887;
  t10059 = t9857*t10054;
  t10060 = t10058 + t10059;
  t10062 = Power(t9899,2);
  t10063 = 0.11*t10062;
  t10064 = Power(t9897,2);
  t10065 = 0.11*t10064;
  t10066 = t10063 + t10065;
  t10071 = -1.*t10070*t9906;
  t10075 = -1.*t9902*t10074;
  t10076 = t10071 + t10075;
  t10078 = t10070*t9972;
  t10079 = t9906*t10074;
  t10080 = t10078 + t10079;
  t10132 = -1.*t9851*t9842;
  t10133 = t9816*t9818;
  t10134 = t10132 + t10133;
  t10041 = 2.88*t9851;
  t10047 = 6.8*t9868*t10046;
  t10057 = 3.2*t9890*t10056;
  t10061 = 3.2*t9860*t10060;
  t10067 = 6.8*t9914*t10066;
  t10077 = 3.2*t9975*t10076;
  t10081 = 3.2*t9908*t10080;
  t10082 = t10041 + t10047 + t10057 + t10061 + t10067 + t10077 + t10081;
  t10113 = -2.88*t9816;
  t10114 = 6.8*t9983*t10046;
  t10115 = 3.2*t9994*t10056;
  t10116 = 3.2*t9991*t10060;
  t10117 = 6.8*t9998*t10066;
  t10118 = 3.2*t10009*t10076;
  t10119 = 3.2*t10006*t10080;
  t10120 = t10113 + t10114 + t10115 + t10116 + t10117 + t10118 + t10119;
  t10123 = 0.4*t9871*t9868;
  t10124 = -0.4*t9983*t9843;
  t10125 = t9817*t9868;
  t10126 = t9983*t9843;
  t10127 = t10125 + t10126;
  t10128 = 0.8*t10127;
  t10129 = t10123 + t10124 + t10128;
  t10130 = -1.*var4[0]*t10129;
  t10131 = 0.4*t9871*t9983;
  t10135 = -0.4*t10134*t9843;
  t10136 = t9817*t9983;
  t10137 = t10134*t9843;
  t10138 = t10136 + t10137;
  t10139 = 0.8*t10138;
  t10140 = t10131 + t10135 + t10139;
  t10141 = -1.*var4[2]*t10140;
  t10087 = 0.748*t9983;
  t10088 = 3.2*t9884*t9994;
  t10089 = 3.2*t9879*t9991;
  t10090 = t10087 + t10088 + t10089;
  t9869 = 0.748*t9868;
  t9880 = 3.2*t9879*t9860;
  t9891 = 3.2*t9884*t9890;
  t9892 = t9869 + t9880 + t9891;
  t10145 = 0.748*t10046;
  t10146 = 3.2*t9884*t10056;
  t10147 = 3.2*t9879*t10060;
  t10148 = 0.67 + t10145 + t10146 + t10147;
  t10175 = 0.768*t9879;
  t10176 = 0.2 + t10175;
  t10142 = 0.768*t10060;
  t10143 = 0.2 + t10142;
  t10093 = 0.748*t9998;
  t10094 = 3.2*t9969*t10009;
  t10095 = 3.2*t9924*t10006;
  t10096 = t10093 + t10094 + t10095;
  t9915 = 0.748*t9914;
  t9925 = 3.2*t9924*t9908;
  t9976 = 3.2*t9969*t9975;
  t9977 = t9915 + t9925 + t9976;
  t10153 = 0.748*t10066;
  t10154 = 3.2*t9969*t10076;
  t10155 = 3.2*t9924*t10080;
  t10156 = 0.67 + t10153 + t10154 + t10155;
  t10208 = 0.768*t9924;
  t10209 = 0.2 + t10208;
  t10150 = 0.768*t10080;
  t10151 = 0.2 + t10150;
  p_output1[0]=t10040*t10082 + 0.768*t9813*t9860 + t9863*t9892 + 0.768*t9895*t9908 + t9911*t9977 + t10011*t9980 + t10014*(6.8*Power(t10002,2) + t10016 + t10020 + t10024 + t10032 + 3.2*Power(t9860,2) + 3.2*Power(t9890,2) + 3.2*Power(t9908,2) + 3.2*Power(t9975,2) + 6.8*Power(t9987,2)) - 1.*var4[0];
  p_output1[1]=t10011*t10014 + t10040*t10120 + t10090*t9863 + 0.768*t10006*t9895 + t10096*t9911 + 0.768*t9813*t9991 + t9980*(3.2*Power(t10006,2) + 3.2*Power(t10009,2) + t10016 + t10020 + t10024 + t10032 + 6.8*Power(t9983,2) + 3.2*Power(t9991,2) + 3.2*Power(t9994,2) + 6.8*Power(t9998,2)) - 1.*var4[2];
  p_output1[2]=t10040*(3.3612 + 6.8*Power(t10046,2) + 3.2*Power(t10056,2) + 3.2*Power(t10060,2) + 6.8*Power(t10066,2) + 3.2*Power(t10076,2) + 3.2*Power(t10080,2)) + t10014*t10082 + t10130 + t10141 + t10143*t9813 + t10148*t9863 + t10151*t9895 + t10156*t9911 + t10120*t9980;
  p_output1[3]=t10130 + t10141 + t10040*t10148 + t10176*t9813 + t9863*(1.58228 + 3.2*Power(t9879,2) + 3.2*Power(t9884,2)) + t10014*t9892 + t10090*t9980;
  p_output1[4]=t10040*t10143 + 1.2143199999999998*t9813 + 0.768*t10014*t9860 + t10176*t9863 + 0.768*t9980*t9991 - 1.*(-0.4*t9817*t9868 + 0.4*t9843*t9987 + 0.8*(t10125 - 1.*t9843*t9987))*var4[0] - 1.*(0.4*t9843*t9868 + 0.8*(t10136 - 1.*t9843*t9868) - 0.4*t9817*t9983)*var4[2];
  p_output1[5]=t10040*t10156 + t10209*t9895 + t9911*(1.58228 + 3.2*Power(t9924,2) + 3.2*Power(t9969,2)) + t10014*t9977 + t10096*t9980;
  p_output1[6]=t10040*t10151 + 1.2143199999999998*t9895 + 0.768*t10014*t9908 + t10209*t9911 + 0.768*t10006*t9980;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapleftLiftOff.hh"

namespace leftLiftOff
{

void dxDiscreteMapleftLiftOff_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
