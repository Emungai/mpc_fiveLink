/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:35 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t1133;
  double t1050;
  double t1054;
  double t1124;
  double t1129;
  double t1132;
  double t1750;
  double t1766;
  double t1852;
  double t2213;
  double t2303;
  double t2304;
  double t2323;
  double t2609;
  double t8994;
  double t8996;
  double t8997;
  double t9009;
  double t9010;
  double t9016;
  double t9045;
  double t9046;
  double t9052;
  double t9063;
  double t9108;
  double t9113;
  double t9121;
  double t9129;
  double t9148;
  double t9145;
  double t9199;
  double t9200;
  double t9109;
  double t9110;
  double t9111;
  double t9112;
  double t9114;
  double t9115;
  double t9116;
  double t9117;
  double t9118;
  double t9119;
  double t9120;
  double t9122;
  double t9123;
  double t9124;
  double t9125;
  double t9126;
  double t9127;
  double t9128;
  double t9130;
  double t9131;
  double t9132;
  double t9133;
  double t9134;
  double t9135;
  double t9136;
  double t9137;
  double t9138;
  double t9139;
  double t9140;
  double t9141;
  double t9142;
  double t9143;
  double t9144;
  double t9146;
  double t9147;
  t1133 = -1.*var6[1];
  t1050 = -1. + var7[0];
  t1054 = -1. + var8[0];
  t1124 = 1/t1054;
  t1129 = -1.*t1050*t1124;
  t1132 = 1. + t1129;
  t1750 = var6[0] + t1133;
  t1766 = Power(t1750,-5);
  t1852 = -1.*var1[0];
  t2213 = t1852 + var1[1];
  t2303 = t1050*t1124*t2213;
  t2304 = t1133 + var1[0] + t2303;
  t2323 = Power(t2304,2);
  t2609 = Power(t1750,-4);
  t8994 = 1/t1750;
  t8996 = -1.*t8994*t2304;
  t8997 = 1. + t8996;
  t9009 = Power(t1750,-3);
  t9010 = Power(t8997,2);
  t9016 = Power(t2304,3);
  t9045 = Power(t1750,-2);
  t9046 = Power(t8997,3);
  t9052 = Power(t2304,4);
  t9063 = Power(t8997,4);
  t9108 = -20.*t9045*t9046;
  t9113 = -60.*t9009*t2304*t9010;
  t9121 = -60.*t2609*t2323*t8997;
  t9129 = -20.*t1766*t9016;
  t9148 = Power(t1750,-6);
  t9145 = Power(t2304,5);
  t9199 = -1.*t9045*t2304;
  t9200 = t8994 + t9199;
  t9109 = 5.*var9[1]*t8994*t9063;
  t9110 = Power(t8997,5);
  t9111 = -1.*var9[0]*t9110;
  t9112 = t9108 + t9109 + t9111;
  t9114 = 40.*t9045*t9046;
  t9115 = -5.*var9[0]*t8994*t2304*t9063;
  t9116 = 20.*t9045*t2304*t9046;
  t9117 = -5.*t8994*t9063;
  t9118 = t9116 + t9117;
  t9119 = var9[1]*t9118;
  t9120 = t9113 + t9114 + t9115 + t9119;
  t9122 = 120.*t9009*t2304*t9010;
  t9123 = -10.*var9[0]*t9045*t2323*t9046;
  t9124 = 30.*t9009*t2323*t9010;
  t9125 = -20.*t9045*t2304*t9046;
  t9126 = t9124 + t9125;
  t9127 = var9[1]*t9126;
  t9128 = t9121 + t9122 + t9108 + t9123 + t9127;
  t9130 = 120.*t2609*t2323*t8997;
  t9131 = -10.*var9[0]*t9009*t9016*t9010;
  t9132 = 20.*t2609*t9016*t8997;
  t9133 = -30.*t9009*t2323*t9010;
  t9134 = t9132 + t9133;
  t9135 = var9[1]*t9134;
  t9136 = t9129 + t9130 + t9113 + t9131 + t9135;
  t9137 = 40.*t1766*t9016;
  t9138 = -5.*var9[0]*t2609*t9052*t8997;
  t9139 = 5.*t1766*t9052;
  t9140 = -20.*t2609*t9016*t8997;
  t9141 = t9139 + t9140;
  t9142 = var9[1]*t9141;
  t9143 = t9137 + t9121 + t9138 + t9142;
  t9144 = -5.*var9[1]*t1766*t9052;
  t9146 = -1.*var9[0]*t1766*t9145;
  t9147 = t9129 + t9144 + t9146;
  p_output1[0]=60.*t1132*t9009*t9010*var5[0] + 120.*t1132*t2304*t2609*t8997*var5[4] - 180.*t1132*t9009*t9010*var5[4] + 60.*t1132*t1766*t2323*var5[8] - 360.*t1132*t2304*t2609*t8997*var5[8] + 180.*t1132*t9009*t9010*var5[8] - 180.*t1132*t1766*t2323*var5[12] + 360.*t1132*t2304*t2609*t8997*var5[12] - 60.*t1132*t9009*t9010*var5[12] + 180.*t1132*t1766*t2323*var5[16] - 120.*t1132*t2304*t2609*t8997*var5[16] - 60.*t1132*t1766*t2323*var5[20] + (5.*t1132*t8994*t9063*var5[0] + 20.*t1132*t2304*t9045*t9046*var5[4] - 5.*t1132*t8994*t9063*var5[4] + 30.*t1132*t2323*t9009*t9010*var5[8] - 20.*t1132*t2304*t9045*t9046*var5[8] - 30.*t1132*t2323*t9009*t9010*var5[12] + 20.*t1132*t2609*t8997*t9016*var5[12] - 20.*t1132*t2609*t8997*t9016*var5[16] + 5.*t1132*t1766*t9052*var5[16] - 5.*t1132*t1766*t9052*var5[20])*var9[0] + (-20.*t1132*t9045*t9046*var5[0] - 60.*t1132*t2304*t9009*t9010*var5[4] + 40.*t1132*t9045*t9046*var5[4] - 60.*t1132*t2323*t2609*t8997*var5[8] + 120.*t1132*t2304*t9009*t9010*var5[8] - 20.*t1132*t9045*t9046*var5[8] + 120.*t1132*t2323*t2609*t8997*var5[12] - 60.*t1132*t2304*t9009*t9010*var5[12] - 20.*t1132*t1766*t9016*var5[12] - 60.*t1132*t2323*t2609*t8997*var5[16] + 40.*t1132*t1766*t9016*var5[16] - 20.*t1132*t1766*t9016*var5[20])*var9[1];
  p_output1[1]=60.*t1050*t1124*t9009*t9010*var5[0] + 120.*t1050*t1124*t2304*t2609*t8997*var5[4] - 180.*t1050*t1124*t9009*t9010*var5[4] + 60.*t1050*t1124*t1766*t2323*var5[8] - 360.*t1050*t1124*t2304*t2609*t8997*var5[8] + 180.*t1050*t1124*t9009*t9010*var5[8] - 180.*t1050*t1124*t1766*t2323*var5[12] + 360.*t1050*t1124*t2304*t2609*t8997*var5[12] - 60.*t1050*t1124*t9009*t9010*var5[12] + 180.*t1050*t1124*t1766*t2323*var5[16] - 120.*t1050*t1124*t2304*t2609*t8997*var5[16] - 60.*t1050*t1124*t1766*t2323*var5[20] + (5.*t1050*t1124*t8994*t9063*var5[0] + 20.*t1050*t1124*t2304*t9045*t9046*var5[4] - 5.*t1050*t1124*t8994*t9063*var5[4] + 30.*t1050*t1124*t2323*t9009*t9010*var5[8] - 20.*t1050*t1124*t2304*t9045*t9046*var5[8] - 30.*t1050*t1124*t2323*t9009*t9010*var5[12] + 20.*t1050*t1124*t2609*t8997*t9016*var5[12] - 20.*t1050*t1124*t2609*t8997*t9016*var5[16] + 5.*t1050*t1124*t1766*t9052*var5[16] - 5.*t1050*t1124*t1766*t9052*var5[20])*var9[0] + (-20.*t1050*t1124*t9045*t9046*var5[0] - 60.*t1050*t1124*t2304*t9009*t9010*var5[4] + 40.*t1050*t1124*t9045*t9046*var5[4] - 60.*t1050*t1124*t2323*t2609*t8997*var5[8] + 120.*t1050*t1124*t2304*t9009*t9010*var5[8] - 20.*t1050*t1124*t9045*t9046*var5[8] + 120.*t1050*t1124*t2323*t2609*t8997*var5[12] - 60.*t1050*t1124*t2304*t9009*t9010*var5[12] - 20.*t1050*t1124*t1766*t9016*var5[12] - 60.*t1050*t1124*t2323*t2609*t8997*var5[16] + 40.*t1050*t1124*t1766*t9016*var5[16] - 20.*t1050*t1124*t1766*t9016*var5[20])*var9[1];
  p_output1[2]=var9[0];
  p_output1[3]=var9[1];
  p_output1[4]=1.;
  p_output1[5]=t9112;
  p_output1[6]=t9120;
  p_output1[7]=t9128;
  p_output1[8]=t9136;
  p_output1[9]=t9143;
  p_output1[10]=t9147;
  p_output1[11]=-60.*t2304*t2609*t9010*var5[0] + 40.*t9009*t9046*var5[0] - 120.*t1766*t2323*t8997*var5[4] + 300.*t2304*t2609*t9010*var5[4] - 80.*t9009*t9046*var5[4] + 480.*t1766*t2323*t8997*var5[8] - 420.*t2304*t2609*t9010*var5[8] + 40.*t9009*t9046*var5[8] - 60.*t9016*t9148*var5[8] - 600.*t1766*t2323*t8997*var5[12] + 180.*t2304*t2609*t9010*var5[12] + 220.*t9016*t9148*var5[12] + 240.*t1766*t2323*t8997*var5[16] - 260.*t9016*t9148*var5[16] + 100.*t9016*t9148*var5[20] + (-5.*t2304*t9045*t9063*var5[0] - 20.*t2323*t9009*t9046*var5[4] + 5.*t2304*t9045*t9063*var5[4] - 30.*t2609*t9010*t9016*var5[8] + 20.*t2323*t9009*t9046*var5[8] + 30.*t2609*t9010*t9016*var5[12] - 20.*t1766*t8997*t9052*var5[12] + 20.*t1766*t8997*t9052*var5[16] - 5.*t9145*t9148*var5[16] + 5.*t9145*t9148*var5[20])*var9[0] + (20.*t2304*t9009*t9046*var5[0] - 5.*t9045*t9063*var5[0] + 60.*t2323*t2609*t9010*var5[4] - 60.*t2304*t9009*t9046*var5[4] + 5.*t9045*t9063*var5[4] - 150.*t2323*t2609*t9010*var5[8] + 60.*t1766*t8997*t9016*var5[8] + 40.*t2304*t9009*t9046*var5[8] + 90.*t2323*t2609*t9010*var5[12] - 140.*t1766*t8997*t9016*var5[12] + 20.*t9052*t9148*var5[12] + 80.*t1766*t8997*t9016*var5[16] - 45.*t9052*t9148*var5[16] + 25.*t9052*t9148*var5[20])*var9[1];
  p_output1[12]=-40.*t9009*t9046*var5[0] - 60.*t9010*t9045*t9200*var5[0] - 180.*t2304*t2609*t9010*var5[4] + 60.*t9009*t9010*var5[4] + 80.*t9009*t9046*var5[4] - 120.*t2304*t8997*t9009*t9200*var5[4] + 120.*t9010*t9045*t9200*var5[4] - 240.*t1766*t2323*t8997*var5[8] + 120.*t2304*t2609*t8997*var5[8] + 360.*t2304*t2609*t9010*var5[8] - 120.*t9009*t9010*var5[8] - 40.*t9009*t9046*var5[8] - 60.*t2323*t2609*t9200*var5[8] + 240.*t2304*t8997*t9009*t9200*var5[8] - 60.*t9010*t9045*t9200*var5[8] + 60.*t1766*t2323*var5[12] + 480.*t1766*t2323*t8997*var5[12] - 240.*t2304*t2609*t8997*var5[12] - 180.*t2304*t2609*t9010*var5[12] + 60.*t9009*t9010*var5[12] - 100.*t9016*t9148*var5[12] + 120.*t2323*t2609*t9200*var5[12] - 120.*t2304*t8997*t9009*t9200*var5[12] - 120.*t1766*t2323*var5[16] - 240.*t1766*t2323*t8997*var5[16] + 120.*t2304*t2609*t8997*var5[16] + 200.*t9016*t9148*var5[16] - 60.*t2323*t2609*t9200*var5[16] + 60.*t1766*t2323*var5[20] - 100.*t9016*t9148*var5[20] + (-5.*t9063*t9200*var5[0] + 5.*t8994*t9063*var5[4] - 5.*t2304*t9045*t9063*var5[4] - 20.*t2304*t8994*t9046*t9200*var5[4] - 20.*t2323*t9009*t9046*var5[8] + 20.*t2304*t9045*t9046*var5[8] - 30.*t2323*t9010*t9045*t9200*var5[8] + 30.*t2323*t9009*t9010*var5[12] - 30.*t2609*t9010*t9016*var5[12] - 20.*t8997*t9009*t9016*t9200*var5[12] + 20.*t2609*t8997*t9016*var5[16] - 20.*t1766*t8997*t9052*var5[16] - 5.*t2609*t9052*t9200*var5[16] + 5.*t1766*t9052*var5[20] - 5.*t9145*t9148*var5[20])*var9[0] + (5.*t9045*t9063*var5[0] + 20.*t8994*t9046*t9200*var5[0] + 40.*t2304*t9009*t9046*var5[4] - 20.*t9045*t9046*var5[4] - 5.*t9045*t9063*var5[4] + 60.*t2304*t9010*t9045*t9200*var5[4] - 20.*t8994*t9046*t9200*var5[4] + 90.*t2323*t2609*t9010*var5[8] - 60.*t2304*t9009*t9010*var5[8] - 40.*t2304*t9009*t9046*var5[8] + 20.*t9045*t9046*var5[8] + 60.*t2323*t8997*t9009*t9200*var5[8] - 60.*t2304*t9010*t9045*t9200*var5[8] - 60.*t2323*t2609*t8997*var5[12] - 90.*t2323*t2609*t9010*var5[12] + 60.*t2304*t9009*t9010*var5[12] + 80.*t1766*t8997*t9016*var5[12] - 60.*t2323*t8997*t9009*t9200*var5[12] + 20.*t2609*t9016*t9200*var5[12] + 60.*t2323*t2609*t8997*var5[16] - 20.*t1766*t9016*var5[16] - 80.*t1766*t8997*t9016*var5[16] + 25.*t9052*t9148*var5[16] - 20.*t2609*t9016*t9200*var5[16] + 20.*t1766*t9016*var5[20] - 25.*t9052*t9148*var5[20])*var9[1];
  p_output1[13]=60.*t1132*t9009*t9010*var5[1] + 120.*t1132*t2304*t2609*t8997*var5[5] - 180.*t1132*t9009*t9010*var5[5] + 60.*t1132*t1766*t2323*var5[9] - 360.*t1132*t2304*t2609*t8997*var5[9] + 180.*t1132*t9009*t9010*var5[9] - 180.*t1132*t1766*t2323*var5[13] + 360.*t1132*t2304*t2609*t8997*var5[13] - 60.*t1132*t9009*t9010*var5[13] + 180.*t1132*t1766*t2323*var5[17] - 120.*t1132*t2304*t2609*t8997*var5[17] - 60.*t1132*t1766*t2323*var5[21] + (5.*t1132*t8994*t9063*var5[1] + 20.*t1132*t2304*t9045*t9046*var5[5] - 5.*t1132*t8994*t9063*var5[5] + 30.*t1132*t2323*t9009*t9010*var5[9] - 20.*t1132*t2304*t9045*t9046*var5[9] - 30.*t1132*t2323*t9009*t9010*var5[13] + 20.*t1132*t2609*t8997*t9016*var5[13] - 20.*t1132*t2609*t8997*t9016*var5[17] + 5.*t1132*t1766*t9052*var5[17] - 5.*t1132*t1766*t9052*var5[21])*var9[0] + (-20.*t1132*t9045*t9046*var5[1] - 60.*t1132*t2304*t9009*t9010*var5[5] + 40.*t1132*t9045*t9046*var5[5] - 60.*t1132*t2323*t2609*t8997*var5[9] + 120.*t1132*t2304*t9009*t9010*var5[9] - 20.*t1132*t9045*t9046*var5[9] + 120.*t1132*t2323*t2609*t8997*var5[13] - 60.*t1132*t2304*t9009*t9010*var5[13] - 20.*t1132*t1766*t9016*var5[13] - 60.*t1132*t2323*t2609*t8997*var5[17] + 40.*t1132*t1766*t9016*var5[17] - 20.*t1132*t1766*t9016*var5[21])*var9[1];
  p_output1[14]=60.*t1050*t1124*t9009*t9010*var5[1] + 120.*t1050*t1124*t2304*t2609*t8997*var5[5] - 180.*t1050*t1124*t9009*t9010*var5[5] + 60.*t1050*t1124*t1766*t2323*var5[9] - 360.*t1050*t1124*t2304*t2609*t8997*var5[9] + 180.*t1050*t1124*t9009*t9010*var5[9] - 180.*t1050*t1124*t1766*t2323*var5[13] + 360.*t1050*t1124*t2304*t2609*t8997*var5[13] - 60.*t1050*t1124*t9009*t9010*var5[13] + 180.*t1050*t1124*t1766*t2323*var5[17] - 120.*t1050*t1124*t2304*t2609*t8997*var5[17] - 60.*t1050*t1124*t1766*t2323*var5[21] + (5.*t1050*t1124*t8994*t9063*var5[1] + 20.*t1050*t1124*t2304*t9045*t9046*var5[5] - 5.*t1050*t1124*t8994*t9063*var5[5] + 30.*t1050*t1124*t2323*t9009*t9010*var5[9] - 20.*t1050*t1124*t2304*t9045*t9046*var5[9] - 30.*t1050*t1124*t2323*t9009*t9010*var5[13] + 20.*t1050*t1124*t2609*t8997*t9016*var5[13] - 20.*t1050*t1124*t2609*t8997*t9016*var5[17] + 5.*t1050*t1124*t1766*t9052*var5[17] - 5.*t1050*t1124*t1766*t9052*var5[21])*var9[0] + (-20.*t1050*t1124*t9045*t9046*var5[1] - 60.*t1050*t1124*t2304*t9009*t9010*var5[5] + 40.*t1050*t1124*t9045*t9046*var5[5] - 60.*t1050*t1124*t2323*t2609*t8997*var5[9] + 120.*t1050*t1124*t2304*t9009*t9010*var5[9] - 20.*t1050*t1124*t9045*t9046*var5[9] + 120.*t1050*t1124*t2323*t2609*t8997*var5[13] - 60.*t1050*t1124*t2304*t9009*t9010*var5[13] - 20.*t1050*t1124*t1766*t9016*var5[13] - 60.*t1050*t1124*t2323*t2609*t8997*var5[17] + 40.*t1050*t1124*t1766*t9016*var5[17] - 20.*t1050*t1124*t1766*t9016*var5[21])*var9[1];
  p_output1[15]=var9[0];
  p_output1[16]=var9[1];
  p_output1[17]=1.;
  p_output1[18]=t9112;
  p_output1[19]=t9120;
  p_output1[20]=t9128;
  p_output1[21]=t9136;
  p_output1[22]=t9143;
  p_output1[23]=t9147;
  p_output1[24]=-60.*t2304*t2609*t9010*var5[1] + 40.*t9009*t9046*var5[1] - 120.*t1766*t2323*t8997*var5[5] + 300.*t2304*t2609*t9010*var5[5] - 80.*t9009*t9046*var5[5] + 480.*t1766*t2323*t8997*var5[9] - 420.*t2304*t2609*t9010*var5[9] + 40.*t9009*t9046*var5[9] - 60.*t9016*t9148*var5[9] - 600.*t1766*t2323*t8997*var5[13] + 180.*t2304*t2609*t9010*var5[13] + 220.*t9016*t9148*var5[13] + 240.*t1766*t2323*t8997*var5[17] - 260.*t9016*t9148*var5[17] + 100.*t9016*t9148*var5[21] + (-5.*t2304*t9045*t9063*var5[1] - 20.*t2323*t9009*t9046*var5[5] + 5.*t2304*t9045*t9063*var5[5] - 30.*t2609*t9010*t9016*var5[9] + 20.*t2323*t9009*t9046*var5[9] + 30.*t2609*t9010*t9016*var5[13] - 20.*t1766*t8997*t9052*var5[13] + 20.*t1766*t8997*t9052*var5[17] - 5.*t9145*t9148*var5[17] + 5.*t9145*t9148*var5[21])*var9[0] + (20.*t2304*t9009*t9046*var5[1] - 5.*t9045*t9063*var5[1] + 60.*t2323*t2609*t9010*var5[5] - 60.*t2304*t9009*t9046*var5[5] + 5.*t9045*t9063*var5[5] - 150.*t2323*t2609*t9010*var5[9] + 60.*t1766*t8997*t9016*var5[9] + 40.*t2304*t9009*t9046*var5[9] + 90.*t2323*t2609*t9010*var5[13] - 140.*t1766*t8997*t9016*var5[13] + 20.*t9052*t9148*var5[13] + 80.*t1766*t8997*t9016*var5[17] - 45.*t9052*t9148*var5[17] + 25.*t9052*t9148*var5[21])*var9[1];
  p_output1[25]=-40.*t9009*t9046*var5[1] - 60.*t9010*t9045*t9200*var5[1] - 180.*t2304*t2609*t9010*var5[5] + 60.*t9009*t9010*var5[5] + 80.*t9009*t9046*var5[5] - 120.*t2304*t8997*t9009*t9200*var5[5] + 120.*t9010*t9045*t9200*var5[5] - 240.*t1766*t2323*t8997*var5[9] + 120.*t2304*t2609*t8997*var5[9] + 360.*t2304*t2609*t9010*var5[9] - 120.*t9009*t9010*var5[9] - 40.*t9009*t9046*var5[9] - 60.*t2323*t2609*t9200*var5[9] + 240.*t2304*t8997*t9009*t9200*var5[9] - 60.*t9010*t9045*t9200*var5[9] + 60.*t1766*t2323*var5[13] + 480.*t1766*t2323*t8997*var5[13] - 240.*t2304*t2609*t8997*var5[13] - 180.*t2304*t2609*t9010*var5[13] + 60.*t9009*t9010*var5[13] - 100.*t9016*t9148*var5[13] + 120.*t2323*t2609*t9200*var5[13] - 120.*t2304*t8997*t9009*t9200*var5[13] - 120.*t1766*t2323*var5[17] - 240.*t1766*t2323*t8997*var5[17] + 120.*t2304*t2609*t8997*var5[17] + 200.*t9016*t9148*var5[17] - 60.*t2323*t2609*t9200*var5[17] + 60.*t1766*t2323*var5[21] - 100.*t9016*t9148*var5[21] + (-5.*t9063*t9200*var5[1] + 5.*t8994*t9063*var5[5] - 5.*t2304*t9045*t9063*var5[5] - 20.*t2304*t8994*t9046*t9200*var5[5] - 20.*t2323*t9009*t9046*var5[9] + 20.*t2304*t9045*t9046*var5[9] - 30.*t2323*t9010*t9045*t9200*var5[9] + 30.*t2323*t9009*t9010*var5[13] - 30.*t2609*t9010*t9016*var5[13] - 20.*t8997*t9009*t9016*t9200*var5[13] + 20.*t2609*t8997*t9016*var5[17] - 20.*t1766*t8997*t9052*var5[17] - 5.*t2609*t9052*t9200*var5[17] + 5.*t1766*t9052*var5[21] - 5.*t9145*t9148*var5[21])*var9[0] + (5.*t9045*t9063*var5[1] + 20.*t8994*t9046*t9200*var5[1] + 40.*t2304*t9009*t9046*var5[5] - 20.*t9045*t9046*var5[5] - 5.*t9045*t9063*var5[5] + 60.*t2304*t9010*t9045*t9200*var5[5] - 20.*t8994*t9046*t9200*var5[5] + 90.*t2323*t2609*t9010*var5[9] - 60.*t2304*t9009*t9010*var5[9] - 40.*t2304*t9009*t9046*var5[9] + 20.*t9045*t9046*var5[9] + 60.*t2323*t8997*t9009*t9200*var5[9] - 60.*t2304*t9010*t9045*t9200*var5[9] - 60.*t2323*t2609*t8997*var5[13] - 90.*t2323*t2609*t9010*var5[13] + 60.*t2304*t9009*t9010*var5[13] + 80.*t1766*t8997*t9016*var5[13] - 60.*t2323*t8997*t9009*t9200*var5[13] + 20.*t2609*t9016*t9200*var5[13] + 60.*t2323*t2609*t8997*var5[17] - 20.*t1766*t9016*var5[17] - 80.*t1766*t8997*t9016*var5[17] + 25.*t9052*t9148*var5[17] - 20.*t2609*t9016*t9200*var5[17] + 20.*t1766*t9016*var5[21] - 25.*t9052*t9148*var5[21])*var9[1];
  p_output1[26]=60.*t1132*t9009*t9010*var5[2] + 120.*t1132*t2304*t2609*t8997*var5[6] - 180.*t1132*t9009*t9010*var5[6] + 60.*t1132*t1766*t2323*var5[10] - 360.*t1132*t2304*t2609*t8997*var5[10] + 180.*t1132*t9009*t9010*var5[10] - 180.*t1132*t1766*t2323*var5[14] + 360.*t1132*t2304*t2609*t8997*var5[14] - 60.*t1132*t9009*t9010*var5[14] + 180.*t1132*t1766*t2323*var5[18] - 120.*t1132*t2304*t2609*t8997*var5[18] - 60.*t1132*t1766*t2323*var5[22] + (5.*t1132*t8994*t9063*var5[2] + 20.*t1132*t2304*t9045*t9046*var5[6] - 5.*t1132*t8994*t9063*var5[6] + 30.*t1132*t2323*t9009*t9010*var5[10] - 20.*t1132*t2304*t9045*t9046*var5[10] - 30.*t1132*t2323*t9009*t9010*var5[14] + 20.*t1132*t2609*t8997*t9016*var5[14] - 20.*t1132*t2609*t8997*t9016*var5[18] + 5.*t1132*t1766*t9052*var5[18] - 5.*t1132*t1766*t9052*var5[22])*var9[0] + (-20.*t1132*t9045*t9046*var5[2] - 60.*t1132*t2304*t9009*t9010*var5[6] + 40.*t1132*t9045*t9046*var5[6] - 60.*t1132*t2323*t2609*t8997*var5[10] + 120.*t1132*t2304*t9009*t9010*var5[10] - 20.*t1132*t9045*t9046*var5[10] + 120.*t1132*t2323*t2609*t8997*var5[14] - 60.*t1132*t2304*t9009*t9010*var5[14] - 20.*t1132*t1766*t9016*var5[14] - 60.*t1132*t2323*t2609*t8997*var5[18] + 40.*t1132*t1766*t9016*var5[18] - 20.*t1132*t1766*t9016*var5[22])*var9[1];
  p_output1[27]=60.*t1050*t1124*t9009*t9010*var5[2] + 120.*t1050*t1124*t2304*t2609*t8997*var5[6] - 180.*t1050*t1124*t9009*t9010*var5[6] + 60.*t1050*t1124*t1766*t2323*var5[10] - 360.*t1050*t1124*t2304*t2609*t8997*var5[10] + 180.*t1050*t1124*t9009*t9010*var5[10] - 180.*t1050*t1124*t1766*t2323*var5[14] + 360.*t1050*t1124*t2304*t2609*t8997*var5[14] - 60.*t1050*t1124*t9009*t9010*var5[14] + 180.*t1050*t1124*t1766*t2323*var5[18] - 120.*t1050*t1124*t2304*t2609*t8997*var5[18] - 60.*t1050*t1124*t1766*t2323*var5[22] + (5.*t1050*t1124*t8994*t9063*var5[2] + 20.*t1050*t1124*t2304*t9045*t9046*var5[6] - 5.*t1050*t1124*t8994*t9063*var5[6] + 30.*t1050*t1124*t2323*t9009*t9010*var5[10] - 20.*t1050*t1124*t2304*t9045*t9046*var5[10] - 30.*t1050*t1124*t2323*t9009*t9010*var5[14] + 20.*t1050*t1124*t2609*t8997*t9016*var5[14] - 20.*t1050*t1124*t2609*t8997*t9016*var5[18] + 5.*t1050*t1124*t1766*t9052*var5[18] - 5.*t1050*t1124*t1766*t9052*var5[22])*var9[0] + (-20.*t1050*t1124*t9045*t9046*var5[2] - 60.*t1050*t1124*t2304*t9009*t9010*var5[6] + 40.*t1050*t1124*t9045*t9046*var5[6] - 60.*t1050*t1124*t2323*t2609*t8997*var5[10] + 120.*t1050*t1124*t2304*t9009*t9010*var5[10] - 20.*t1050*t1124*t9045*t9046*var5[10] + 120.*t1050*t1124*t2323*t2609*t8997*var5[14] - 60.*t1050*t1124*t2304*t9009*t9010*var5[14] - 20.*t1050*t1124*t1766*t9016*var5[14] - 60.*t1050*t1124*t2323*t2609*t8997*var5[18] + 40.*t1050*t1124*t1766*t9016*var5[18] - 20.*t1050*t1124*t1766*t9016*var5[22])*var9[1];
  p_output1[28]=var9[0];
  p_output1[29]=var9[1];
  p_output1[30]=1.;
  p_output1[31]=t9112;
  p_output1[32]=t9120;
  p_output1[33]=t9128;
  p_output1[34]=t9136;
  p_output1[35]=t9143;
  p_output1[36]=t9147;
  p_output1[37]=-60.*t2304*t2609*t9010*var5[2] + 40.*t9009*t9046*var5[2] - 120.*t1766*t2323*t8997*var5[6] + 300.*t2304*t2609*t9010*var5[6] - 80.*t9009*t9046*var5[6] + 480.*t1766*t2323*t8997*var5[10] - 420.*t2304*t2609*t9010*var5[10] + 40.*t9009*t9046*var5[10] - 60.*t9016*t9148*var5[10] - 600.*t1766*t2323*t8997*var5[14] + 180.*t2304*t2609*t9010*var5[14] + 220.*t9016*t9148*var5[14] + 240.*t1766*t2323*t8997*var5[18] - 260.*t9016*t9148*var5[18] + 100.*t9016*t9148*var5[22] + (-5.*t2304*t9045*t9063*var5[2] - 20.*t2323*t9009*t9046*var5[6] + 5.*t2304*t9045*t9063*var5[6] - 30.*t2609*t9010*t9016*var5[10] + 20.*t2323*t9009*t9046*var5[10] + 30.*t2609*t9010*t9016*var5[14] - 20.*t1766*t8997*t9052*var5[14] + 20.*t1766*t8997*t9052*var5[18] - 5.*t9145*t9148*var5[18] + 5.*t9145*t9148*var5[22])*var9[0] + (20.*t2304*t9009*t9046*var5[2] - 5.*t9045*t9063*var5[2] + 60.*t2323*t2609*t9010*var5[6] - 60.*t2304*t9009*t9046*var5[6] + 5.*t9045*t9063*var5[6] - 150.*t2323*t2609*t9010*var5[10] + 60.*t1766*t8997*t9016*var5[10] + 40.*t2304*t9009*t9046*var5[10] + 90.*t2323*t2609*t9010*var5[14] - 140.*t1766*t8997*t9016*var5[14] + 20.*t9052*t9148*var5[14] + 80.*t1766*t8997*t9016*var5[18] - 45.*t9052*t9148*var5[18] + 25.*t9052*t9148*var5[22])*var9[1];
  p_output1[38]=-40.*t9009*t9046*var5[2] - 60.*t9010*t9045*t9200*var5[2] - 180.*t2304*t2609*t9010*var5[6] + 60.*t9009*t9010*var5[6] + 80.*t9009*t9046*var5[6] - 120.*t2304*t8997*t9009*t9200*var5[6] + 120.*t9010*t9045*t9200*var5[6] - 240.*t1766*t2323*t8997*var5[10] + 120.*t2304*t2609*t8997*var5[10] + 360.*t2304*t2609*t9010*var5[10] - 120.*t9009*t9010*var5[10] - 40.*t9009*t9046*var5[10] - 60.*t2323*t2609*t9200*var5[10] + 240.*t2304*t8997*t9009*t9200*var5[10] - 60.*t9010*t9045*t9200*var5[10] + 60.*t1766*t2323*var5[14] + 480.*t1766*t2323*t8997*var5[14] - 240.*t2304*t2609*t8997*var5[14] - 180.*t2304*t2609*t9010*var5[14] + 60.*t9009*t9010*var5[14] - 100.*t9016*t9148*var5[14] + 120.*t2323*t2609*t9200*var5[14] - 120.*t2304*t8997*t9009*t9200*var5[14] - 120.*t1766*t2323*var5[18] - 240.*t1766*t2323*t8997*var5[18] + 120.*t2304*t2609*t8997*var5[18] + 200.*t9016*t9148*var5[18] - 60.*t2323*t2609*t9200*var5[18] + 60.*t1766*t2323*var5[22] - 100.*t9016*t9148*var5[22] + (-5.*t9063*t9200*var5[2] + 5.*t8994*t9063*var5[6] - 5.*t2304*t9045*t9063*var5[6] - 20.*t2304*t8994*t9046*t9200*var5[6] - 20.*t2323*t9009*t9046*var5[10] + 20.*t2304*t9045*t9046*var5[10] - 30.*t2323*t9010*t9045*t9200*var5[10] + 30.*t2323*t9009*t9010*var5[14] - 30.*t2609*t9010*t9016*var5[14] - 20.*t8997*t9009*t9016*t9200*var5[14] + 20.*t2609*t8997*t9016*var5[18] - 20.*t1766*t8997*t9052*var5[18] - 5.*t2609*t9052*t9200*var5[18] + 5.*t1766*t9052*var5[22] - 5.*t9145*t9148*var5[22])*var9[0] + (5.*t9045*t9063*var5[2] + 20.*t8994*t9046*t9200*var5[2] + 40.*t2304*t9009*t9046*var5[6] - 20.*t9045*t9046*var5[6] - 5.*t9045*t9063*var5[6] + 60.*t2304*t9010*t9045*t9200*var5[6] - 20.*t8994*t9046*t9200*var5[6] + 90.*t2323*t2609*t9010*var5[10] - 60.*t2304*t9009*t9010*var5[10] - 40.*t2304*t9009*t9046*var5[10] + 20.*t9045*t9046*var5[10] + 60.*t2323*t8997*t9009*t9200*var5[10] - 60.*t2304*t9010*t9045*t9200*var5[10] - 60.*t2323*t2609*t8997*var5[14] - 90.*t2323*t2609*t9010*var5[14] + 60.*t2304*t9009*t9010*var5[14] + 80.*t1766*t8997*t9016*var5[14] - 60.*t2323*t8997*t9009*t9200*var5[14] + 20.*t2609*t9016*t9200*var5[14] + 60.*t2323*t2609*t8997*var5[18] - 20.*t1766*t9016*var5[18] - 80.*t1766*t8997*t9016*var5[18] + 25.*t9052*t9148*var5[18] - 20.*t2609*t9016*t9200*var5[18] + 20.*t1766*t9016*var5[22] - 25.*t9052*t9148*var5[22])*var9[1];
  p_output1[39]=60.*t1132*t9009*t9010*var5[3] + 120.*t1132*t2304*t2609*t8997*var5[7] - 180.*t1132*t9009*t9010*var5[7] + 60.*t1132*t1766*t2323*var5[11] - 360.*t1132*t2304*t2609*t8997*var5[11] + 180.*t1132*t9009*t9010*var5[11] - 180.*t1132*t1766*t2323*var5[15] + 360.*t1132*t2304*t2609*t8997*var5[15] - 60.*t1132*t9009*t9010*var5[15] + 180.*t1132*t1766*t2323*var5[19] - 120.*t1132*t2304*t2609*t8997*var5[19] - 60.*t1132*t1766*t2323*var5[23] + (5.*t1132*t8994*t9063*var5[3] + 20.*t1132*t2304*t9045*t9046*var5[7] - 5.*t1132*t8994*t9063*var5[7] + 30.*t1132*t2323*t9009*t9010*var5[11] - 20.*t1132*t2304*t9045*t9046*var5[11] - 30.*t1132*t2323*t9009*t9010*var5[15] + 20.*t1132*t2609*t8997*t9016*var5[15] - 20.*t1132*t2609*t8997*t9016*var5[19] + 5.*t1132*t1766*t9052*var5[19] - 5.*t1132*t1766*t9052*var5[23])*var9[0] + (-20.*t1132*t9045*t9046*var5[3] - 60.*t1132*t2304*t9009*t9010*var5[7] + 40.*t1132*t9045*t9046*var5[7] - 60.*t1132*t2323*t2609*t8997*var5[11] + 120.*t1132*t2304*t9009*t9010*var5[11] - 20.*t1132*t9045*t9046*var5[11] + 120.*t1132*t2323*t2609*t8997*var5[15] - 60.*t1132*t2304*t9009*t9010*var5[15] - 20.*t1132*t1766*t9016*var5[15] - 60.*t1132*t2323*t2609*t8997*var5[19] + 40.*t1132*t1766*t9016*var5[19] - 20.*t1132*t1766*t9016*var5[23])*var9[1];
  p_output1[40]=60.*t1050*t1124*t9009*t9010*var5[3] + 120.*t1050*t1124*t2304*t2609*t8997*var5[7] - 180.*t1050*t1124*t9009*t9010*var5[7] + 60.*t1050*t1124*t1766*t2323*var5[11] - 360.*t1050*t1124*t2304*t2609*t8997*var5[11] + 180.*t1050*t1124*t9009*t9010*var5[11] - 180.*t1050*t1124*t1766*t2323*var5[15] + 360.*t1050*t1124*t2304*t2609*t8997*var5[15] - 60.*t1050*t1124*t9009*t9010*var5[15] + 180.*t1050*t1124*t1766*t2323*var5[19] - 120.*t1050*t1124*t2304*t2609*t8997*var5[19] - 60.*t1050*t1124*t1766*t2323*var5[23] + (5.*t1050*t1124*t8994*t9063*var5[3] + 20.*t1050*t1124*t2304*t9045*t9046*var5[7] - 5.*t1050*t1124*t8994*t9063*var5[7] + 30.*t1050*t1124*t2323*t9009*t9010*var5[11] - 20.*t1050*t1124*t2304*t9045*t9046*var5[11] - 30.*t1050*t1124*t2323*t9009*t9010*var5[15] + 20.*t1050*t1124*t2609*t8997*t9016*var5[15] - 20.*t1050*t1124*t2609*t8997*t9016*var5[19] + 5.*t1050*t1124*t1766*t9052*var5[19] - 5.*t1050*t1124*t1766*t9052*var5[23])*var9[0] + (-20.*t1050*t1124*t9045*t9046*var5[3] - 60.*t1050*t1124*t2304*t9009*t9010*var5[7] + 40.*t1050*t1124*t9045*t9046*var5[7] - 60.*t1050*t1124*t2323*t2609*t8997*var5[11] + 120.*t1050*t1124*t2304*t9009*t9010*var5[11] - 20.*t1050*t1124*t9045*t9046*var5[11] + 120.*t1050*t1124*t2323*t2609*t8997*var5[15] - 60.*t1050*t1124*t2304*t9009*t9010*var5[15] - 20.*t1050*t1124*t1766*t9016*var5[15] - 60.*t1050*t1124*t2323*t2609*t8997*var5[19] + 40.*t1050*t1124*t1766*t9016*var5[19] - 20.*t1050*t1124*t1766*t9016*var5[23])*var9[1];
  p_output1[41]=var9[0];
  p_output1[42]=var9[1];
  p_output1[43]=1.;
  p_output1[44]=t9112;
  p_output1[45]=t9120;
  p_output1[46]=t9128;
  p_output1[47]=t9136;
  p_output1[48]=t9143;
  p_output1[49]=t9147;
  p_output1[50]=-60.*t2304*t2609*t9010*var5[3] + 40.*t9009*t9046*var5[3] - 120.*t1766*t2323*t8997*var5[7] + 300.*t2304*t2609*t9010*var5[7] - 80.*t9009*t9046*var5[7] + 480.*t1766*t2323*t8997*var5[11] - 420.*t2304*t2609*t9010*var5[11] + 40.*t9009*t9046*var5[11] - 60.*t9016*t9148*var5[11] - 600.*t1766*t2323*t8997*var5[15] + 180.*t2304*t2609*t9010*var5[15] + 220.*t9016*t9148*var5[15] + 240.*t1766*t2323*t8997*var5[19] - 260.*t9016*t9148*var5[19] + 100.*t9016*t9148*var5[23] + (-5.*t2304*t9045*t9063*var5[3] - 20.*t2323*t9009*t9046*var5[7] + 5.*t2304*t9045*t9063*var5[7] - 30.*t2609*t9010*t9016*var5[11] + 20.*t2323*t9009*t9046*var5[11] + 30.*t2609*t9010*t9016*var5[15] - 20.*t1766*t8997*t9052*var5[15] + 20.*t1766*t8997*t9052*var5[19] - 5.*t9145*t9148*var5[19] + 5.*t9145*t9148*var5[23])*var9[0] + (20.*t2304*t9009*t9046*var5[3] - 5.*t9045*t9063*var5[3] + 60.*t2323*t2609*t9010*var5[7] - 60.*t2304*t9009*t9046*var5[7] + 5.*t9045*t9063*var5[7] - 150.*t2323*t2609*t9010*var5[11] + 60.*t1766*t8997*t9016*var5[11] + 40.*t2304*t9009*t9046*var5[11] + 90.*t2323*t2609*t9010*var5[15] - 140.*t1766*t8997*t9016*var5[15] + 20.*t9052*t9148*var5[15] + 80.*t1766*t8997*t9016*var5[19] - 45.*t9052*t9148*var5[19] + 25.*t9052*t9148*var5[23])*var9[1];
  p_output1[51]=-40.*t9009*t9046*var5[3] - 60.*t9010*t9045*t9200*var5[3] - 180.*t2304*t2609*t9010*var5[7] + 60.*t9009*t9010*var5[7] + 80.*t9009*t9046*var5[7] - 120.*t2304*t8997*t9009*t9200*var5[7] + 120.*t9010*t9045*t9200*var5[7] - 240.*t1766*t2323*t8997*var5[11] + 120.*t2304*t2609*t8997*var5[11] + 360.*t2304*t2609*t9010*var5[11] - 120.*t9009*t9010*var5[11] - 40.*t9009*t9046*var5[11] - 60.*t2323*t2609*t9200*var5[11] + 240.*t2304*t8997*t9009*t9200*var5[11] - 60.*t9010*t9045*t9200*var5[11] + 60.*t1766*t2323*var5[15] + 480.*t1766*t2323*t8997*var5[15] - 240.*t2304*t2609*t8997*var5[15] - 180.*t2304*t2609*t9010*var5[15] + 60.*t9009*t9010*var5[15] - 100.*t9016*t9148*var5[15] + 120.*t2323*t2609*t9200*var5[15] - 120.*t2304*t8997*t9009*t9200*var5[15] - 120.*t1766*t2323*var5[19] - 240.*t1766*t2323*t8997*var5[19] + 120.*t2304*t2609*t8997*var5[19] + 200.*t9016*t9148*var5[19] - 60.*t2323*t2609*t9200*var5[19] + 60.*t1766*t2323*var5[23] - 100.*t9016*t9148*var5[23] + (-5.*t9063*t9200*var5[3] + 5.*t8994*t9063*var5[7] - 5.*t2304*t9045*t9063*var5[7] - 20.*t2304*t8994*t9046*t9200*var5[7] - 20.*t2323*t9009*t9046*var5[11] + 20.*t2304*t9045*t9046*var5[11] - 30.*t2323*t9010*t9045*t9200*var5[11] + 30.*t2323*t9009*t9010*var5[15] - 30.*t2609*t9010*t9016*var5[15] - 20.*t8997*t9009*t9016*t9200*var5[15] + 20.*t2609*t8997*t9016*var5[19] - 20.*t1766*t8997*t9052*var5[19] - 5.*t2609*t9052*t9200*var5[19] + 5.*t1766*t9052*var5[23] - 5.*t9145*t9148*var5[23])*var9[0] + (5.*t9045*t9063*var5[3] + 20.*t8994*t9046*t9200*var5[3] + 40.*t2304*t9009*t9046*var5[7] - 20.*t9045*t9046*var5[7] - 5.*t9045*t9063*var5[7] + 60.*t2304*t9010*t9045*t9200*var5[7] - 20.*t8994*t9046*t9200*var5[7] + 90.*t2323*t2609*t9010*var5[11] - 60.*t2304*t9009*t9010*var5[11] - 40.*t2304*t9009*t9046*var5[11] + 20.*t9045*t9046*var5[11] + 60.*t2323*t8997*t9009*t9200*var5[11] - 60.*t2304*t9010*t9045*t9200*var5[11] - 60.*t2323*t2609*t8997*var5[15] - 90.*t2323*t2609*t9010*var5[15] + 60.*t2304*t9009*t9010*var5[15] + 80.*t1766*t8997*t9016*var5[15] - 60.*t2323*t8997*t9009*t9200*var5[15] + 20.*t2609*t9016*t9200*var5[15] + 60.*t2323*t2609*t8997*var5[19] - 20.*t1766*t9016*var5[19] - 80.*t1766*t8997*t9016*var5[19] + 25.*t9052*t9148*var5[19] - 20.*t2609*t9016*t9200*var5[19] + 20.*t1766*t9016*var5[23] - 25.*t9052*t9148*var5[23])*var9[1];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 52, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "J_d2y_time_RightStance.hh"

namespace RightStance
{

void J_d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
