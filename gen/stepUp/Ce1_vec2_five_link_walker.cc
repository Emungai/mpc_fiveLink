/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:18:58 GMT-05:00
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
  double t1084;
  double t1072;
  double t1073;
  double t1085;
  double t1061;
  double t1095;
  double t1096;
  double t1097;
  double t1098;
  double t1107;
  double t1074;
  double t1089;
  double t1093;
  double t1109;
  double t1110;
  double t1111;
  double t1094;
  double t1108;
  double t1141;
  double t1143;
  double t1145;
  double t1154;
  double t1155;
  double t1156;
  double t3110;
  double t5618;
  double t5892;
  double t7956;
  double t8207;
  double t8558;
  double t1120;
  double t1124;
  double t1125;
  double t1146;
  double t1147;
  double t1149;
  double t1152;
  double t1153;
  double t1159;
  double t1162;
  double t1163;
  double t1164;
  double t1165;
  double t1166;
  double t5976;
  double t5995;
  double t5996;
  double t6067;
  double t6842;
  double t7246;
  double t8561;
  double t8864;
  double t8867;
  double t8886;
  double t8899;
  double t8909;
  double t11685;
  double t11704;
  double t11705;
  double t11706;
  double t11707;
  double t11750;
  double t11751;
  double t11752;
  double t11759;
  double t11773;
  double t11772;
  double t11774;
  double t11775;
  double t11777;
  double t11778;
  double t11779;
  double t11785;
  double t11794;
  double t11795;
  double t11796;
  double t11832;
  double t11784;
  double t11792;
  double t11797;
  double t11822;
  double t11827;
  double t11834;
  double t11842;
  double t11845;
  double t11846;
  double t11776;
  double t11852;
  double t11853;
  double t11854;
  double t11708;
  double t11709;
  double t11717;
  double t11718;
  double t11748;
  double t11749;
  double t11753;
  double t11754;
  double t11755;
  double t11756;
  double t11757;
  double t11758;
  double t11850;
  double t11851;
  double t11855;
  double t11856;
  double t11877;
  double t11881;
  double t11882;
  double t11883;
  double t11899;
  double t11900;
  double t11905;
  double t11908;
  double t9304;
  double t9388;
  double t11643;
  double t11675;
  double t11780;
  double t11783;
  double t11838;
  double t11839;
  double t11913;
  double t11914;
  double t11923;
  double t11928;
  double t11943;
  double t11944;
  double t11945;
  double t11946;
  double t11947;
  double t11948;
  double t11949;
  double t11950;
  double t11956;
  double t11961;
  double t11962;
  double t11968;
  double t11969;
  double t11970;
  double t11951;
  double t11963;
  double t11966;
  double t11967;
  double t11972;
  double t11973;
  double t11977;
  double t11978;
  double t11979;
  double t11980;
  double t11989;
  double t11990;
  double t11982;
  double t11992;
  double t11993;
  double t11984;
  double t11937;
  double t11938;
  double t11939;
  double t11940;
  double t11941;
  double t11942;
  double t12012;
  double t12013;
  double t12014;
  double t12015;
  double t12016;
  double t12017;
  double t12018;
  double t12019;
  double t12021;
  double t12022;
  double t12023;
  double t12006;
  double t12007;
  double t12008;
  double t12009;
  double t12010;
  double t12011;
  double t12020;
  double t12024;
  double t12025;
  double t12027;
  double t12028;
  double t12029;
  double t12034;
  double t12035;
  double t12036;
  double t12033;
  double t12038;
  double t12039;
  double t12043;
  double t12052;
  double t12053;
  double t12045;
  double t12055;
  double t12056;
  double t12047;
  double t12068;
  double t12074;
  double t12075;
  double t12076;
  double t12069;
  double t12070;
  double t12071;
  double t12072;
  double t12080;
  double t12081;
  double t12101;
  double t12107;
  double t12108;
  double t12109;
  double t12102;
  double t12103;
  double t12104;
  double t12105;
  double t12113;
  double t12114;
  t1084 = Cos(var1[3]);
  t1072 = Cos(var1[4]);
  t1073 = Sin(var1[3]);
  t1085 = Sin(var1[4]);
  t1061 = Sin(var1[2]);
  t1095 = Cos(var1[2]);
  t1096 = t1084*t1072;
  t1097 = -1.*t1073*t1085;
  t1098 = t1096 + t1097;
  t1107 = t1095*t1098;
  t1074 = -1.*t1072*t1073;
  t1089 = -1.*t1084*t1085;
  t1093 = t1074 + t1089;
  t1109 = t1072*t1073;
  t1110 = t1084*t1085;
  t1111 = t1109 + t1110;
  t1094 = t1061*t1093;
  t1108 = t1094 + t1107;
  t1141 = t1095*t1093;
  t1143 = -1.*t1061*t1098;
  t1145 = t1141 + t1143;
  t1154 = -1.*t1084*t1072;
  t1155 = t1073*t1085;
  t1156 = t1154 + t1155;
  t3110 = -1.*t1084*t1061;
  t5618 = -1.*t1095*t1073;
  t5892 = t3110 + t5618;
  t7956 = t1095*t1084;
  t8207 = -1.*t1061*t1073;
  t8558 = t7956 + t8207;
  t1120 = -1.*t1061*t1111;
  t1124 = t1120 + t1107;
  t1125 = 3.2*t1108*t1124;
  t1146 = t1095*t1111;
  t1147 = t1061*t1098;
  t1149 = t1146 + t1147;
  t1152 = 3.2*t1145*t1149;
  t1153 = -1.*t1061*t1093;
  t1159 = t1095*t1156;
  t1162 = t1153 + t1159;
  t1163 = 3.2*t1108*t1162;
  t1164 = t1061*t1156;
  t1165 = t1141 + t1164;
  t1166 = 3.2*t1145*t1165;
  t5976 = Power(t5892,2);
  t5995 = 6.8*t5976;
  t5996 = t1084*t1061;
  t6067 = t1095*t1073;
  t6842 = t5996 + t6067;
  t7246 = 6.8*t5892*t6842;
  t8561 = Power(t8558,2);
  t8864 = 6.8*t8561;
  t8867 = -1.*t1095*t1084;
  t8886 = t1061*t1073;
  t8899 = t8867 + t8886;
  t8909 = 6.8*t8558*t8899;
  t11685 = Cos(var1[5]);
  t11704 = -1.*t11685*t1061;
  t11705 = Sin(var1[5]);
  t11706 = -1.*t1095*t11705;
  t11707 = t11704 + t11706;
  t11750 = t1095*t11685;
  t11751 = -1.*t1061*t11705;
  t11752 = t11750 + t11751;
  t11759 = Cos(var1[6]);
  t11773 = Sin(var1[6]);
  t11772 = -1.*t11759*t11705;
  t11774 = -1.*t11685*t11773;
  t11775 = t11772 + t11774;
  t11777 = t11685*t11759;
  t11778 = -1.*t11705*t11773;
  t11779 = t11777 + t11778;
  t11785 = t1095*t11779;
  t11794 = t11759*t11705;
  t11795 = t11685*t11773;
  t11796 = t11794 + t11795;
  t11832 = -1.*t1061*t11779;
  t11784 = t1061*t11775;
  t11792 = t11784 + t11785;
  t11797 = -1.*t1061*t11796;
  t11822 = t11797 + t11785;
  t11827 = t1095*t11775;
  t11834 = t11827 + t11832;
  t11842 = t1095*t11796;
  t11845 = t1061*t11779;
  t11846 = t11842 + t11845;
  t11776 = -1.*t1061*t11775;
  t11852 = -1.*t11685*t11759;
  t11853 = t11705*t11773;
  t11854 = t11852 + t11853;
  t11708 = Power(t11707,2);
  t11709 = 6.8*t11708;
  t11717 = t11685*t1061;
  t11718 = t1095*t11705;
  t11748 = t11717 + t11718;
  t11749 = 6.8*t11707*t11748;
  t11753 = Power(t11752,2);
  t11754 = 6.8*t11753;
  t11755 = -1.*t1095*t11685;
  t11756 = t1061*t11705;
  t11757 = t11755 + t11756;
  t11758 = 6.8*t11752*t11757;
  t11850 = 3.2*t11792*t11822;
  t11851 = 3.2*t11834*t11846;
  t11855 = t1095*t11854;
  t11856 = t11776 + t11855;
  t11877 = 3.2*t11792*t11856;
  t11881 = t1061*t11854;
  t11882 = t11827 + t11881;
  t11883 = 3.2*t11834*t11882;
  t11899 = 6.4*t1124*t1145;
  t11900 = 6.4*t1145*t1162;
  t11905 = 13.6*t5892*t8558;
  t11908 = 13.6*t5892*t8899;
  t9304 = -1.*t1095*t1098;
  t9388 = t1153 + t9304;
  t11643 = -1.*t1095*t1111;
  t11675 = t11643 + t1143;
  t11780 = -1.*t1095*t11779;
  t11783 = t11776 + t11780;
  t11838 = -1.*t1095*t11796;
  t11839 = t11838 + t11832;
  t11913 = 13.6*t11707*t11752;
  t11914 = 13.6*t11707*t11757;
  t11923 = 6.4*t11822*t11834;
  t11928 = 6.4*t11834*t11856;
  t11943 = -1.*t1072;
  t11944 = 1. + t11943;
  t11945 = 0.4*t11944;
  t11946 = 0.64*t1072;
  t11947 = t11945 + t11946;
  t11948 = t11947*t1073;
  t11949 = 0.24*t1084*t1085;
  t11950 = t11948 + t11949;
  t11956 = t1084*t11947;
  t11961 = -0.24*t1073*t1085;
  t11962 = t11956 + t11961;
  t11968 = -1.*t11947*t1073;
  t11969 = -0.24*t1084*t1085;
  t11970 = t11968 + t11969;
  t11951 = -1.*t11950*t1098;
  t11963 = -1.*t1093*t11962;
  t11966 = t11951 + t11963;
  t11967 = 3.2*t1145*t11966;
  t11972 = t11950*t1098;
  t11973 = t1093*t11962;
  t11977 = t11950*t1111;
  t11978 = t1098*t11962;
  t11979 = t11977 + t11978;
  t11980 = 3.2*t11979*t1162;
  t11989 = -0.24*t1072*t1073;
  t11990 = t11989 + t11969;
  t11982 = -1.*t1093*t11950;
  t11992 = 0.24*t1084*t1072;
  t11993 = t11992 + t11961;
  t11984 = -1.*t11962*t1156;
  t11937 = Power(t1084,2);
  t11938 = 0.11*t11937;
  t11939 = Power(t1073,2);
  t11940 = 0.11*t11939;
  t11941 = t11938 + t11940;
  t11942 = 6.8*t8899*t11941;
  t12012 = -1.*t11759;
  t12013 = 1. + t12012;
  t12014 = 0.4*t12013;
  t12015 = 0.64*t11759;
  t12016 = t12014 + t12015;
  t12017 = t12016*t11705;
  t12018 = 0.24*t11685*t11773;
  t12019 = t12017 + t12018;
  t12021 = t11685*t12016;
  t12022 = -0.24*t11705*t11773;
  t12023 = t12021 + t12022;
  t12006 = Power(t11685,2);
  t12007 = 0.11*t12006;
  t12008 = Power(t11705,2);
  t12009 = 0.11*t12008;
  t12010 = t12007 + t12009;
  t12011 = 6.8*t11757*t12010;
  t12020 = -1.*t12019*t11779;
  t12024 = -1.*t11775*t12023;
  t12025 = t12020 + t12024;
  t12027 = t12019*t11796;
  t12028 = t11779*t12023;
  t12029 = t12027 + t12028;
  t12034 = -1.*t12016*t11705;
  t12035 = -0.24*t11685*t11773;
  t12036 = t12034 + t12035;
  t12033 = 3.2*t11834*t12025;
  t12038 = t12019*t11779;
  t12039 = t11775*t12023;
  t12043 = 3.2*t12029*t11856;
  t12052 = -0.24*t11759*t11705;
  t12053 = t12052 + t12035;
  t12045 = -1.*t11775*t12019;
  t12055 = 0.24*t11685*t11759;
  t12056 = t12055 + t12022;
  t12047 = -1.*t12023*t11854;
  t12068 = 0.748*t8899;
  t12074 = t11947*t1085;
  t12075 = -0.24*t1072*t1085;
  t12076 = t12074 + t12075;
  t12069 = t11947*t1072;
  t12070 = Power(t1085,2);
  t12071 = 0.24*t12070;
  t12072 = t12069 + t12071;
  t12080 = 3.2*t12076*t1145;
  t12081 = 3.2*t12072*t1162;
  t12101 = 0.748*t11757;
  t12107 = t12016*t11773;
  t12108 = -0.24*t11759*t11773;
  t12109 = t12107 + t12108;
  t12102 = t12016*t11759;
  t12103 = Power(t11773,2);
  t12104 = 0.24*t12103;
  t12105 = t12102 + t12104;
  t12113 = 3.2*t12109*t11834;
  t12114 = 3.2*t12105*t11856;
  p_output1[0]=var2[1]*(-0.5*(3.2*Power(t1124,2) + 3.2*Power(t1145,2) + 3.2*t1149*t11675 + t11709 + t11749 + t11754 + t11758 + 3.2*t11783*t11792 + 3.2*Power(t11822,2) + 3.2*Power(t11834,2) + 3.2*t11839*t11846 + t5995 + t7246 + t8864 + t8909 + 3.2*t1108*t9388)*var2[2] - 0.5*(t1125 + t1152 + t1163 + t1166 + t5995 + t7246 + t8864 + t8909)*var2[3] - 0.5*(t1125 + t1152 + t1163 + t1166)*var2[4] - 0.5*(t11709 + t11749 + t11754 + t11758 + t11850 + t11851 + t11877 + t11883)*var2[5] - 0.5*(t11850 + t11851 + t11877 + t11883)*var2[6]);
  p_output1[1]=var2[1]*(-0.5*(6.4*t1124*t11675 + 6.4*t11783*t11834 + 6.4*t11822*t11839 + t11905 + t11908 + t11913 + t11914 + 6.4*t1145*t9388)*var2[2] - 0.5*(t11899 + t11900 + t11905 + t11908)*var2[3] - 0.5*(t11899 + t11900)*var2[4] - 0.5*(t11913 + t11914 + t11923 + t11928)*var2[5] - 0.5*(t11923 + t11928)*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(-2.88*t1095 + t11942 + 3.2*t11675*t11966 + t12011 + 3.2*t11839*t12025 + 3.2*t11783*t12029 + 3.2*t11979*t9388)*var2[2] - 0.5*(t11942 + t11967 + 3.2*t1145*(t1111*t11962 + t1098*t11970 + t11972 + t11973) + t11980 + 3.2*t1124*(-1.*t1098*t11962 - 1.*t1093*t11970 + t11982 + t11984))*var2[3] - 0.5*(t11967 + t11980 + 3.2*t1124*(t11982 + t11984 - 1.*t1093*t11990 - 1.*t1098*t11993) + 3.2*t1145*(t11972 + t11973 + t1098*t11990 + t1111*t11993))*var2[4] - 0.5*(t12011 + t12033 + 3.2*t11834*(t11796*t12023 + t11779*t12036 + t12038 + t12039) + t12043 + 3.2*t11822*(-1.*t11779*t12023 - 1.*t11775*t12036 + t12045 + t12047))*var2[5] - 0.5*(t12033 + t12043 + 3.2*t11822*(t12045 + t12047 - 1.*t11775*t12053 - 1.*t11779*t12056) + 3.2*t11834*(t12038 + t12039 + t11779*t12053 + t11796*t12056))*var2[6]);
  p_output1[3]=var2[1]*(-0.5*(t12068 + 3.2*t11675*t12076 + 3.2*t12072*t9388)*var2[2] - 0.5*(t12068 + t12080 + t12081)*var2[3] - 0.5*(3.2*t1145*(0.24*t1072*t1085 - 1.*t1085*t11947) + 3.2*t1124*(-0.24*Power(t1072,2) + t12069) + t12080 + t12081)*var2[4]);
  p_output1[4]=var2[1]*(-0.384*t9388*var2[2] - 0.384*t1162*var2[3] - 0.384*t1162*var2[4]);
  p_output1[5]=var2[1]*(-0.5*(t12101 + 3.2*t11783*t12105 + 3.2*t11839*t12109)*var2[2] - 0.5*(t12101 + t12113 + t12114)*var2[5] - 0.5*(3.2*t11834*(0.24*t11759*t11773 - 1.*t11773*t12016) + 3.2*t11822*(-0.24*Power(t11759,2) + t12102) + t12113 + t12114)*var2[6]);
  p_output1[6]=var2[1]*(-0.384*t11783*var2[2] - 0.384*t11856*var2[5] - 0.384*t11856*var2[6]);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec2_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce1_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
