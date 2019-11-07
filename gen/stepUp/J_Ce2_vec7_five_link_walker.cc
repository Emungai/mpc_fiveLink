/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:43 GMT-05:00
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
  double t6108;
  double t741;
  double t5999;
  double t6151;
  double t351;
  double t8248;
  double t10988;
  double t11192;
  double t11241;
  double t11277;
  double t11793;
  double t6045;
  double t7624;
  double t7702;
  double t13581;
  double t13616;
  double t13629;
  double t13863;
  double t13900;
  double t13907;
  double t11849;
  double t7706;
  double t8644;
  double t9447;
  double t9554;
  double t9629;
  double t10848;
  double t12044;
  double t12048;
  double t12176;
  double t13544;
  double t13729;
  double t13736;
  double t14160;
  double t14164;
  double t14245;
  double t14247;
  double t14248;
  double t14358;
  double t14366;
  double t14541;
  double t14547;
  double t15809;
  double t15814;
  double t15815;
  double t15850;
  double t15851;
  double t15852;
  double t15882;
  double t15883;
  double t15884;
  double t15895;
  double t15896;
  double t11892;
  double t11930;
  double t11936;
  double t14071;
  double t14074;
  double t14077;
  double t15940;
  double t15941;
  double t13785;
  double t13834;
  double t13848;
  double t13918;
  double t14062;
  double t14066;
  double t14466;
  double t15900;
  double t15901;
  double t15908;
  double t15816;
  double t15858;
  double t15876;
  double t15887;
  double t15892;
  double t15885;
  double t15897;
  double t15898;
  double t15982;
  double t15988;
  double t15915;
  double t15923;
  double t15910;
  double t15922;
  double t15924;
  double t15997;
  double t15998;
  double t16002;
  double t15949;
  double t15951;
  double t15954;
  double t15959;
  double t15961;
  double t15962;
  double t15963;
  double t15964;
  double t15965;
  double t15969;
  double t15970;
  double t15971;
  double t15972;
  double t15973;
  double t15974;
  double t15975;
  double t15976;
  double t15977;
  double t15978;
  double t15979;
  double t15980;
  double t15981;
  double t15994;
  double t15995;
  double t16003;
  double t16009;
  double t16020;
  double t16021;
  double t16023;
  double t16024;
  double t16072;
  double t16073;
  double t16074;
  double t16075;
  double t16076;
  double t16056;
  double t16057;
  double t16058;
  double t16060;
  double t16061;
  double t16062;
  double t16063;
  double t16064;
  double t16066;
  double t16067;
  double t16068;
  double t16069;
  double t16070;
  double t14456;
  double t14521;
  double t14186;
  double t14204;
  double t14158;
  double t14237;
  double t14385;
  double t14435;
  double t14539;
  double t15717;
  double t15718;
  double t15989;
  double t15990;
  double t15991;
  double t15996;
  double t16007;
  double t16008;
  double t16010;
  double t16013;
  double t16014;
  double t16015;
  double t16018;
  double t16019;
  double t16022;
  double t16025;
  double t16106;
  double t16032;
  double t16033;
  double t16034;
  double t16108;
  double t16110;
  double t16113;
  double t16114;
  double t16115;
  double t16116;
  double t16117;
  double t16118;
  double t16119;
  double t16120;
  double t16121;
  double t16122;
  double t16125;
  double t16043;
  double t16044;
  double t16045;
  double t16048;
  double t16049;
  double t16050;
  double t16065;
  double t15881;
  double t15899;
  double t15909;
  double t15932;
  double t15933;
  double t13759;
  double t13914;
  double t14069;
  double t14106;
  double t14110;
  double t14124;
  double t16148;
  double t15934;
  double t16098;
  double t16099;
  double t16100;
  double t16101;
  double t16102;
  double t15992;
  double t15993;
  double t16011;
  double t16016;
  double t16017;
  double t16026;
  double t16027;
  double t16123;
  double t16124;
  double t16126;
  double t16127;
  double t16128;
  double t16129;
  double t16130;
  double t16042;
  double t16046;
  double t16047;
  double t16051;
  double t16052;
  double t16140;
  double t16141;
  double t16142;
  double t16143;
  double t16144;
  double t16071;
  double t16150;
  double t16202;
  double t16203;
  double t16204;
  double t16205;
  double t16206;
  double t16198;
  double t16199;
  double t16200;
  double t16085;
  double t16086;
  double t16087;
  double t16088;
  double t16089;
  double t16107;
  double t16109;
  double t16111;
  double t15950;
  double t15956;
  double t15957;
  double t16161;
  double t16162;
  double t16163;
  double t16164;
  double t16165;
  double t16134;
  double t16135;
  double t16136;
  double t16137;
  double t16138;
  double t16031;
  double t16035;
  double t16036;
  double t16039;
  double t16040;
  double t16178;
  double t16179;
  double t16180;
  double t16181;
  double t16182;
  double t16183;
  double t16184;
  double t16077;
  double t16151;
  double t16207;
  double t16237;
  double t16238;
  double t16239;
  double t16251;
  double t16252;
  double t10858;
  t6108 = Cos(var1[5]);
  t741 = Cos(var1[6]);
  t5999 = Sin(var1[5]);
  t6151 = Sin(var1[6]);
  t351 = Sin(var1[2]);
  t8248 = Cos(var1[2]);
  t10988 = -1.*t741;
  t11192 = 1. + t10988;
  t11241 = 0.4*t11192;
  t11277 = 0.64*t741;
  t11793 = t11241 + t11277;
  t6045 = -1.*t741*t5999;
  t7624 = -1.*t6108*t6151;
  t7702 = t6045 + t7624;
  t13581 = t6108*t741;
  t13616 = -1.*t5999*t6151;
  t13629 = t13581 + t13616;
  t13863 = t8248*t7702;
  t13900 = -1.*t351*t13629;
  t13907 = t13863 + t13900;
  t11849 = t11793*t741;
  t7706 = -1.*t351*t7702;
  t8644 = -1.*t6108*t741;
  t9447 = t5999*t6151;
  t9554 = t8644 + t9447;
  t9629 = t8248*t9554;
  t10848 = t7706 + t9629;
  t12044 = t741*t5999;
  t12048 = t6108*t6151;
  t12176 = t12044 + t12048;
  t13544 = -1.*t351*t12176;
  t13729 = t8248*t13629;
  t13736 = t13544 + t13729;
  t14160 = t351*t7702;
  t14164 = t14160 + t13729;
  t14245 = -1.*t8248*t13629;
  t14247 = t7706 + t14245;
  t14248 = t8248*t12176;
  t14358 = t351*t13629;
  t14366 = t14248 + t14358;
  t14541 = t351*t9554;
  t14547 = t13863 + t14541;
  t15809 = t11793*t5999;
  t15814 = 0.24*t6108*t6151;
  t15815 = t15809 + t15814;
  t15850 = t6108*t11793;
  t15851 = -0.24*t5999*t6151;
  t15852 = t15850 + t15851;
  t15882 = -0.24*t741*t5999;
  t15883 = -0.24*t6108*t6151;
  t15884 = t15882 + t15883;
  t15895 = 0.24*t6108*t741;
  t15896 = t15895 + t15851;
  t11892 = Power(t741,2);
  t11930 = -0.24*t11892;
  t11936 = t11849 + t11930;
  t14071 = Power(t6151,2);
  t14074 = 0.24*t14071;
  t14077 = t11849 + t14074;
  t15940 = t351*t12176;
  t15941 = t15940 + t9629;
  t13785 = t11793*t6151;
  t13834 = -0.24*t741*t6151;
  t13848 = t13785 + t13834;
  t13918 = -1.*t11793*t6151;
  t14062 = 0.24*t741*t6151;
  t14066 = t13918 + t14062;
  t14466 = -1.*t351*t9554;
  t15900 = t15815*t12176;
  t15901 = t13629*t15852;
  t15908 = t15900 + t15901;
  t15816 = -1.*t15815*t13629;
  t15858 = -1.*t7702*t15852;
  t15876 = t15816 + t15858;
  t15887 = t15815*t13629;
  t15892 = t7702*t15852;
  t15885 = t15884*t13629;
  t15897 = t12176*t15896;
  t15898 = t15885 + t15887 + t15892 + t15897;
  t15982 = -1.*t11793*t5999;
  t15988 = t15982 + t15883;
  t15915 = -1.*t7702*t15815;
  t15923 = -1.*t15852*t9554;
  t15910 = -1.*t7702*t15884;
  t15922 = -1.*t13629*t15896;
  t15924 = t15910 + t15915 + t15922 + t15923;
  t15997 = -0.24*t6108*t741;
  t15998 = 0.24*t5999*t6151;
  t16002 = t15997 + t15998;
  t15949 = -0.384*var2[6]*t15941;
  t15951 = 3.2*t14077*t15941;
  t15954 = 3.2*t13848*t14547;
  t15959 = 6.4*t14164*t13907;
  t15961 = 3.2*t14366*t10848;
  t15962 = 3.2*t13907*t15941;
  t15963 = t14248 + t14466;
  t15964 = 3.2*t14164*t15963;
  t15965 = 3.2*t13736*t14547;
  t15969 = 6.4*t10848*t14547;
  t15970 = t15959 + t15961 + t15962 + t15964 + t15965 + t15969;
  t15971 = -0.5*var2[1]*t15970;
  t15972 = Power(t14164,2);
  t15973 = 6.4*t15972;
  t15974 = 6.4*t14164*t15941;
  t15975 = 6.4*t14366*t14547;
  t15976 = Power(t14547,2);
  t15977 = 6.4*t15976;
  t15978 = t15973 + t15974 + t15975 + t15977;
  t15979 = -0.5*var2[0]*t15978;
  t15980 = 3.2*t15908*t15941;
  t15981 = 3.2*t15876*t14547;
  t15994 = -1.*t15884*t13629;
  t15995 = -1.*t12176*t15852;
  t16003 = -1.*t7702*t16002;
  t16009 = -1.*t15815*t9554;
  t16020 = t7702*t15815;
  t16021 = t15884*t12176;
  t16023 = t13629*t16002;
  t16024 = t15852*t9554;
  t16072 = 3.2*t13848*t14164;
  t16073 = 3.2*t14066*t14164;
  t16074 = 3.2*t11936*t14366;
  t16075 = 3.2*t14077*t14547;
  t16076 = t16072 + t16073 + t16074 + t16075;
  t16056 = 6.4*t14164*t14366;
  t16057 = 6.4*t14164*t14547;
  t16058 = t16056 + t16057;
  t16060 = 3.2*t14164*t13736;
  t16061 = 3.2*t13907*t14366;
  t16062 = 3.2*t14164*t10848;
  t16063 = 3.2*t13907*t14547;
  t16064 = t16060 + t16061 + t16062 + t16063;
  t16066 = 3.2*t14164*t15876;
  t16067 = 3.2*t14164*t15898;
  t16068 = 3.2*t15908*t14547;
  t16069 = 3.2*t14366*t15924;
  t16070 = t16066 + t16067 + t16068 + t16069;
  t14456 = -1.*t8248*t7702;
  t14521 = t14456 + t14466;
  t14186 = -1.*t8248*t12176;
  t14204 = t14186 + t13900;
  t14158 = 6.4*t13736*t13907;
  t14237 = 3.2*t14164*t14204;
  t14385 = 3.2*t14247*t14366;
  t14435 = 6.4*t13907*t10848;
  t14539 = 3.2*t14164*t14521;
  t15717 = 3.2*t14247*t14547;
  t15718 = t14158 + t14237 + t14385 + t14435 + t14539 + t15717;
  t15989 = t15988*t13629;
  t15990 = t12176*t15852;
  t15991 = t15989 + t15887 + t15892 + t15990;
  t15996 = -1.*t7702*t15896;
  t16007 = -1.*t15988*t9554;
  t16008 = -1.*t15884*t9554;
  t16010 = t15994 + t15858 + t15995 + t15996 + t16003 + t16007 + t16008 + t16009;
  t16013 = -1.*t7702*t15988;
  t16014 = -1.*t13629*t15852;
  t16015 = t16013 + t15915 + t16014 + t15923;
  t16018 = t7702*t15988;
  t16019 = t7702*t15884;
  t16022 = t13629*t15896;
  t16025 = t16018 + t16019 + t16020 + t16021 + t15901 + t16022 + t16023 + t16024;
  t16106 = -0.384*var2[6]*t15963;
  t16032 = -1.*t11793*t741;
  t16033 = 0.24*t11892;
  t16034 = t16032 + t16033;
  t16108 = 3.2*t13848*t10848;
  t16110 = 3.2*t14077*t15963;
  t16113 = Power(t13907,2);
  t16114 = 6.4*t16113;
  t16115 = 6.4*t13736*t10848;
  t16116 = Power(t10848,2);
  t16117 = 6.4*t16116;
  t16118 = 6.4*t13907*t15963;
  t16119 = t16114 + t16115 + t16117 + t16118;
  t16120 = -0.5*var2[1]*t16119;
  t16121 = -0.5*var2[0]*t15970;
  t16122 = 3.2*t15876*t10848;
  t16125 = 3.2*t15908*t15963;
  t16043 = -2.*t7702*t15896;
  t16044 = -2.*t15884*t9554;
  t16045 = t15994 + t15995 + t16043 + t16003 + t16044 + t16009;
  t16048 = 2.*t7702*t15884;
  t16049 = 2.*t13629*t15896;
  t16050 = t16048 + t16020 + t16021 + t16049 + t16023 + t16024;
  t16065 = -0.5*var2[6]*t16064;
  t15881 = 3.2*t13907*t15876;
  t15899 = 3.2*t13907*t15898;
  t15909 = 3.2*t15908*t10848;
  t15932 = 3.2*t13736*t15924;
  t15933 = t15881 + t15899 + t15909 + t15932;
  t13759 = 3.2*t11936*t13736;
  t13914 = 3.2*t13848*t13907;
  t14069 = 3.2*t14066*t13907;
  t14106 = 3.2*t14077*t10848;
  t14110 = t13759 + t13914 + t14069 + t14106;
  t14124 = -0.5*var2[5]*t14110;
  t16148 = t14158 + t14435;
  t15934 = -0.5*var2[2]*t15933;
  t16098 = 3.2*t14247*t15876;
  t16099 = 3.2*t14247*t15898;
  t16100 = 3.2*t15908*t14521;
  t16101 = 3.2*t14204*t15924;
  t16102 = t16098 + t16099 + t16100 + t16101;
  t15992 = 3.2*t15991*t14547;
  t15993 = 3.2*t15898*t14547;
  t16011 = 3.2*t14366*t16010;
  t16016 = 3.2*t14164*t16015;
  t16017 = 3.2*t14164*t15924;
  t16026 = 3.2*t14164*t16025;
  t16027 = t15980 + t15981 + t15992 + t15993 + t16011 + t16016 + t16017 + t16026;
  t16123 = 3.2*t15991*t10848;
  t16124 = 3.2*t15898*t10848;
  t16126 = 3.2*t13736*t16010;
  t16127 = 3.2*t13907*t16015;
  t16128 = 3.2*t13907*t15924;
  t16129 = 3.2*t13907*t16025;
  t16130 = t16122 + t16123 + t16124 + t16125 + t16126 + t16127 + t16128 + t16129;
  t16042 = 6.4*t15898*t14547;
  t16046 = 3.2*t14366*t16045;
  t16047 = 6.4*t14164*t15924;
  t16051 = 3.2*t14164*t16050;
  t16052 = t15980 + t15981 + t16042 + t16046 + t16047 + t16051;
  t16140 = 6.4*t15898*t10848;
  t16141 = 3.2*t13736*t16045;
  t16142 = 6.4*t13907*t15924;
  t16143 = 3.2*t13907*t16050;
  t16144 = t16122 + t16140 + t16125 + t16141 + t16142 + t16143;
  t16071 = -0.5*var2[6]*t16070;
  t16150 = -0.5*var2[6]*t15933;
  t16202 = 3.2*t11936*t15876;
  t16203 = 3.2*t14066*t15908;
  t16204 = 3.2*t14077*t15898;
  t16205 = 3.2*t13848*t15924;
  t16206 = t16202 + t16203 + t16204 + t16205;
  t16198 = 6.4*t15908*t15898;
  t16199 = 6.4*t15876*t15924;
  t16200 = t16198 + t16199;
  t16085 = 3.2*t13848*t14247;
  t16086 = 3.2*t14066*t14247;
  t16087 = 3.2*t11936*t14204;
  t16088 = 3.2*t14077*t14521;
  t16089 = t16085 + t16086 + t16087 + t16088;
  t16107 = 3.2*t11936*t13907;
  t16109 = 3.2*t14066*t10848;
  t16111 = t16107 + t16108 + t16109 + t16110;
  t15950 = 3.2*t11936*t14164;
  t15956 = 3.2*t14066*t14547;
  t15957 = t15950 + t15951 + t15954 + t15956;
  t16161 = 3.2*t14066*t15991;
  t16162 = 3.2*t13848*t16010;
  t16163 = 3.2*t11936*t16015;
  t16164 = 3.2*t14077*t16025;
  t16165 = t16161 + t16162 + t16163 + t16164;
  t16134 = 3.2*t14066*t13736;
  t16135 = 6.4*t11936*t13907;
  t16136 = 3.2*t16034*t13907;
  t16137 = 6.4*t14066*t10848;
  t16138 = t16134 + t16135 + t16136 + t16108 + t16137 + t16110;
  t16031 = 6.4*t11936*t14164;
  t16035 = 3.2*t16034*t14164;
  t16036 = 3.2*t14066*t14366;
  t16039 = 6.4*t14066*t14547;
  t16040 = t16031 + t16035 + t16036 + t15951 + t15954 + t16039;
  t16178 = 3.2*t14066*t15876;
  t16179 = 3.2*t16034*t15908;
  t16180 = 6.4*t14066*t15898;
  t16181 = 3.2*t13848*t16045;
  t16182 = 6.4*t11936*t15924;
  t16183 = 3.2*t14077*t16050;
  t16184 = t16178 + t16179 + t16180 + t16181 + t16182 + t16183;
  t16077 = -0.5*var2[6]*t16076;
  t16151 = -0.5*var2[6]*t14110;
  t16207 = -0.5*var2[6]*t16206;
  t16237 = 6.4*t11936*t13848;
  t16238 = 6.4*t14066*t14077;
  t16239 = t16237 + t16238;
  t16251 = -0.384*var2[0]*t15941;
  t16252 = -0.384*var2[1]*t15963;
  t10858 = -0.384*var2[6]*t10848;
  p_output1[0]=(t10858 + t14124 + t15934 - 0.5*(6.4*t10848*t14164 + 6.4*t13736*t14164 + 6.4*t13907*t14366 + 6.4*t13907*t14547)*var2[0] - 0.5*t15718*var2[1])*var2[6];
  p_output1[1]=(t15949 + t15971 + t15979 - 0.5*t16027*var2[2] - 0.5*t15957*var2[5])*var2[6];
  p_output1[2]=(t15949 + t15971 + t15979 - 0.5*t16052*var2[2] - 0.5*t16040*var2[5])*var2[6];
  p_output1[3]=-0.5*t16058*var2[6];
  p_output1[4]=t16065;
  p_output1[5]=t16071;
  p_output1[6]=t16077;
  p_output1[7]=-0.5*t16058*var2[0] - 0.5*t16064*var2[1] - 0.5*t16070*var2[2] - 0.5*t16076*var2[5] - 0.768*t14547*var2[6];
  p_output1[8]=var2[6]*(-0.5*t15718*var2[0] - 0.5*(6.4*t13907*t14204 + 6.4*t10848*t14247 + 6.4*t13736*t14247 + 6.4*t13907*t14521)*var2[1] - 0.5*t16102*var2[2] - 0.5*t16089*var2[5] - 0.384*t14521*var2[6]);
  p_output1[9]=(t16106 + t16120 + t16121 - 0.5*t16130*var2[2] - 0.5*t16111*var2[5])*var2[6];
  p_output1[10]=(t16106 + t16120 + t16121 - 0.5*t16144*var2[2] - 0.5*t16138*var2[5])*var2[6];
  p_output1[11]=t16065;
  p_output1[12]=-0.5*t16148*var2[6];
  p_output1[13]=t16150;
  p_output1[14]=t16151;
  p_output1[15]=t14124 + t15934 - 0.5*t16064*var2[0] - 0.5*t16148*var2[1] - 0.768*t10848*var2[6];
  p_output1[16]=(-0.5*t15933*var2[0] - 0.5*t16102*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t16027*var2[0] - 0.5*t16130*var2[1] - 0.5*(6.4*t15898*t15991 + 6.4*t15876*t16010 + 6.4*t15924*t16015 + 6.4*t15908*t16025)*var2[2] - 0.5*t16165*var2[5] - 0.384*t16025*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t16052*var2[0] - 0.5*t16144*var2[1] - 0.5*(6.4*Power(t15898,2) + 6.4*Power(t15924,2) + 6.4*t15876*t16045 + 6.4*t15908*t16050)*var2[2] - 0.5*t16184*var2[5] - 0.384*t16050*var2[6]);
  p_output1[19]=t16071;
  p_output1[20]=t16150;
  p_output1[21]=-0.5*t16200*var2[6];
  p_output1[22]=t16207;
  p_output1[23]=-0.5*t16070*var2[0] - 0.5*t15933*var2[1] - 0.5*t16200*var2[2] - 0.5*t16206*var2[5] - 0.768*t15898*var2[6];
  p_output1[24]=(-0.5*t14110*var2[0] - 0.5*t16089*var2[1])*var2[6];
  p_output1[25]=(-0.5*t15957*var2[0] - 0.5*t16111*var2[1] - 0.5*t16165*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t16040*var2[0] - 0.5*t16138*var2[1] - 0.5*t16184*var2[2] - 0.5*(6.4*Power(t11936,2) + 6.4*t13848*t14066 + 6.4*Power(t14066,2) + 6.4*t14077*t16034)*var2[5] - 0.384*t16034*var2[6]);
  p_output1[27]=t16077;
  p_output1[28]=t16151;
  p_output1[29]=t16207;
  p_output1[30]=-0.5*t16239*var2[6];
  p_output1[31]=-0.5*t16076*var2[0] - 0.5*t14110*var2[1] - 0.5*t16206*var2[2] - 0.5*t16239*var2[5] - 0.768*t14066*var2[6];
  p_output1[32]=(-0.384*t10848*var2[0] - 0.384*t14521*var2[1])*var2[6];
  p_output1[33]=(t16251 + t16252 - 0.384*t16025*var2[2])*var2[6];
  p_output1[34]=(t16251 + t16252 - 0.384*t16050*var2[2] - 0.384*t16034*var2[5])*var2[6];
  p_output1[35]=-0.384*t14547*var2[6];
  p_output1[36]=t10858;
  p_output1[37]=-0.384*t15898*var2[6];
  p_output1[38]=-0.384*t14066*var2[6];
  p_output1[39]=-0.384*t14547*var2[0] - 0.384*t10848*var2[1] - 0.384*t15898*var2[2] - 0.384*t14066*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec7_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
