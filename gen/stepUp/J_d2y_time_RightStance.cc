/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:19:16 GMT-05:00
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
  double t130;
  double t85;
  double t98;
  double t103;
  double t120;
  double t127;
  double t131;
  double t133;
  double t134;
  double t138;
  double t146;
  double t147;
  double t150;
  double t184;
  double t187;
  double t202;
  double t210;
  double t222;
  double t223;
  double t276;
  double t299;
  double t300;
  double t331;
  double t363;
  double t11788;
  double t11797;
  double t11823;
  double t11833;
  double t11855;
  double t11852;
  double t11906;
  double t11907;
  double t11789;
  double t11792;
  double t11793;
  double t11794;
  double t11798;
  double t11799;
  double t11818;
  double t11819;
  double t11820;
  double t11821;
  double t11822;
  double t11824;
  double t11825;
  double t11827;
  double t11828;
  double t11829;
  double t11830;
  double t11832;
  double t11834;
  double t11835;
  double t11836;
  double t11840;
  double t11841;
  double t11842;
  double t11843;
  double t11844;
  double t11845;
  double t11846;
  double t11847;
  double t11848;
  double t11849;
  double t11850;
  double t11851;
  double t11853;
  double t11854;
  t130 = -1.*var6[1];
  t85 = -1. + var7[0];
  t98 = -1. + var8[0];
  t103 = 1/t98;
  t120 = -1.*t85*t103;
  t127 = 1. + t120;
  t131 = var6[0] + t130;
  t133 = Power(t131,-5);
  t134 = -1.*var1[0];
  t138 = t134 + var1[1];
  t146 = t85*t103*t138;
  t147 = t130 + var1[0] + t146;
  t150 = Power(t147,2);
  t184 = Power(t131,-4);
  t187 = 1/t131;
  t202 = -1.*t187*t147;
  t210 = 1. + t202;
  t222 = Power(t131,-3);
  t223 = Power(t210,2);
  t276 = Power(t147,3);
  t299 = Power(t131,-2);
  t300 = Power(t210,3);
  t331 = Power(t147,4);
  t363 = Power(t210,4);
  t11788 = -20.*t299*t300;
  t11797 = -60.*t222*t147*t223;
  t11823 = -60.*t184*t150*t210;
  t11833 = -20.*t133*t276;
  t11855 = Power(t131,-6);
  t11852 = Power(t147,5);
  t11906 = -1.*t299*t147;
  t11907 = t187 + t11906;
  t11789 = 5.*var9[1]*t187*t363;
  t11792 = Power(t210,5);
  t11793 = -1.*var9[0]*t11792;
  t11794 = t11788 + t11789 + t11793;
  t11798 = 40.*t299*t300;
  t11799 = -5.*var9[0]*t187*t147*t363;
  t11818 = 20.*t299*t147*t300;
  t11819 = -5.*t187*t363;
  t11820 = t11818 + t11819;
  t11821 = var9[1]*t11820;
  t11822 = t11797 + t11798 + t11799 + t11821;
  t11824 = 120.*t222*t147*t223;
  t11825 = -10.*var9[0]*t299*t150*t300;
  t11827 = 30.*t222*t150*t223;
  t11828 = -20.*t299*t147*t300;
  t11829 = t11827 + t11828;
  t11830 = var9[1]*t11829;
  t11832 = t11823 + t11824 + t11788 + t11825 + t11830;
  t11834 = 120.*t184*t150*t210;
  t11835 = -10.*var9[0]*t222*t276*t223;
  t11836 = 20.*t184*t276*t210;
  t11840 = -30.*t222*t150*t223;
  t11841 = t11836 + t11840;
  t11842 = var9[1]*t11841;
  t11843 = t11833 + t11834 + t11797 + t11835 + t11842;
  t11844 = 40.*t133*t276;
  t11845 = -5.*var9[0]*t184*t331*t210;
  t11846 = 5.*t133*t331;
  t11847 = -20.*t184*t276*t210;
  t11848 = t11846 + t11847;
  t11849 = var9[1]*t11848;
  t11850 = t11844 + t11823 + t11845 + t11849;
  t11851 = -5.*var9[1]*t133*t331;
  t11853 = -1.*var9[0]*t133*t11852;
  t11854 = t11833 + t11851 + t11853;
  p_output1[0]=60.*t127*t222*t223*var5[0] + 120.*t127*t147*t184*t210*var5[4] - 180.*t127*t222*t223*var5[4] + 60.*t127*t133*t150*var5[8] - 360.*t127*t147*t184*t210*var5[8] + 180.*t127*t222*t223*var5[8] - 180.*t127*t133*t150*var5[12] + 360.*t127*t147*t184*t210*var5[12] - 60.*t127*t222*t223*var5[12] + 180.*t127*t133*t150*var5[16] - 120.*t127*t147*t184*t210*var5[16] - 60.*t127*t133*t150*var5[20] + (5.*t127*t187*t363*var5[0] + 20.*t127*t147*t299*t300*var5[4] - 5.*t127*t187*t363*var5[4] + 30.*t127*t150*t222*t223*var5[8] - 20.*t127*t147*t299*t300*var5[8] - 30.*t127*t150*t222*t223*var5[12] + 20.*t127*t184*t210*t276*var5[12] - 20.*t127*t184*t210*t276*var5[16] + 5.*t127*t133*t331*var5[16] - 5.*t127*t133*t331*var5[20])*var9[0] + (-20.*t127*t299*t300*var5[0] - 60.*t127*t147*t222*t223*var5[4] + 40.*t127*t299*t300*var5[4] - 60.*t127*t150*t184*t210*var5[8] + 120.*t127*t147*t222*t223*var5[8] - 20.*t127*t299*t300*var5[8] + 120.*t127*t150*t184*t210*var5[12] - 60.*t127*t147*t222*t223*var5[12] - 20.*t127*t133*t276*var5[12] - 60.*t127*t150*t184*t210*var5[16] + 40.*t127*t133*t276*var5[16] - 20.*t127*t133*t276*var5[20])*var9[1];
  p_output1[1]=60.*t103*t222*t223*t85*var5[0] + 120.*t103*t147*t184*t210*t85*var5[4] - 180.*t103*t222*t223*t85*var5[4] + 60.*t103*t133*t150*t85*var5[8] - 360.*t103*t147*t184*t210*t85*var5[8] + 180.*t103*t222*t223*t85*var5[8] - 180.*t103*t133*t150*t85*var5[12] + 360.*t103*t147*t184*t210*t85*var5[12] - 60.*t103*t222*t223*t85*var5[12] + 180.*t103*t133*t150*t85*var5[16] - 120.*t103*t147*t184*t210*t85*var5[16] - 60.*t103*t133*t150*t85*var5[20] + (5.*t103*t187*t363*t85*var5[0] + 20.*t103*t147*t299*t300*t85*var5[4] - 5.*t103*t187*t363*t85*var5[4] + 30.*t103*t150*t222*t223*t85*var5[8] - 20.*t103*t147*t299*t300*t85*var5[8] - 30.*t103*t150*t222*t223*t85*var5[12] + 20.*t103*t184*t210*t276*t85*var5[12] - 20.*t103*t184*t210*t276*t85*var5[16] + 5.*t103*t133*t331*t85*var5[16] - 5.*t103*t133*t331*t85*var5[20])*var9[0] + (-20.*t103*t299*t300*t85*var5[0] - 60.*t103*t147*t222*t223*t85*var5[4] + 40.*t103*t299*t300*t85*var5[4] - 60.*t103*t150*t184*t210*t85*var5[8] + 120.*t103*t147*t222*t223*t85*var5[8] - 20.*t103*t299*t300*t85*var5[8] + 120.*t103*t150*t184*t210*t85*var5[12] - 60.*t103*t147*t222*t223*t85*var5[12] - 20.*t103*t133*t276*t85*var5[12] - 60.*t103*t150*t184*t210*t85*var5[16] + 40.*t103*t133*t276*t85*var5[16] - 20.*t103*t133*t276*t85*var5[20])*var9[1];
  p_output1[2]=var9[0];
  p_output1[3]=var9[1];
  p_output1[4]=1.;
  p_output1[5]=t11794;
  p_output1[6]=t11822;
  p_output1[7]=t11832;
  p_output1[8]=t11843;
  p_output1[9]=t11850;
  p_output1[10]=t11854;
  p_output1[11]=-60.*t147*t184*t223*var5[0] + 40.*t222*t300*var5[0] - 120.*t133*t150*t210*var5[4] + 300.*t147*t184*t223*var5[4] - 80.*t222*t300*var5[4] + 480.*t133*t150*t210*var5[8] - 420.*t147*t184*t223*var5[8] - 60.*t11855*t276*var5[8] + 40.*t222*t300*var5[8] - 600.*t133*t150*t210*var5[12] + 180.*t147*t184*t223*var5[12] + 220.*t11855*t276*var5[12] + 240.*t133*t150*t210*var5[16] - 260.*t11855*t276*var5[16] + 100.*t11855*t276*var5[20] + (-5.*t147*t299*t363*var5[0] - 20.*t150*t222*t300*var5[4] + 5.*t147*t299*t363*var5[4] - 30.*t184*t223*t276*var5[8] + 20.*t150*t222*t300*var5[8] + 30.*t184*t223*t276*var5[12] - 20.*t133*t210*t331*var5[12] - 5.*t11852*t11855*var5[16] + 20.*t133*t210*t331*var5[16] + 5.*t11852*t11855*var5[20])*var9[0] + (20.*t147*t222*t300*var5[0] - 5.*t299*t363*var5[0] + 60.*t150*t184*t223*var5[4] - 60.*t147*t222*t300*var5[4] + 5.*t299*t363*var5[4] - 150.*t150*t184*t223*var5[8] + 60.*t133*t210*t276*var5[8] + 40.*t147*t222*t300*var5[8] + 90.*t150*t184*t223*var5[12] - 140.*t133*t210*t276*var5[12] + 20.*t11855*t331*var5[12] + 80.*t133*t210*t276*var5[16] - 45.*t11855*t331*var5[16] + 25.*t11855*t331*var5[20])*var9[1];
  p_output1[12]=-60.*t11907*t223*t299*var5[0] - 40.*t222*t300*var5[0] - 120.*t11907*t147*t210*t222*var5[4] - 180.*t147*t184*t223*var5[4] + 60.*t222*t223*var5[4] + 120.*t11907*t223*t299*var5[4] + 80.*t222*t300*var5[4] - 60.*t11907*t150*t184*var5[8] - 240.*t133*t150*t210*var5[8] + 120.*t147*t184*t210*var5[8] + 240.*t11907*t147*t210*t222*var5[8] + 360.*t147*t184*t223*var5[8] - 120.*t222*t223*var5[8] - 60.*t11907*t223*t299*var5[8] - 40.*t222*t300*var5[8] + 60.*t133*t150*var5[12] + 120.*t11907*t150*t184*var5[12] + 480.*t133*t150*t210*var5[12] - 240.*t147*t184*t210*var5[12] - 120.*t11907*t147*t210*t222*var5[12] - 180.*t147*t184*t223*var5[12] + 60.*t222*t223*var5[12] - 100.*t11855*t276*var5[12] - 120.*t133*t150*var5[16] - 60.*t11907*t150*t184*var5[16] - 240.*t133*t150*t210*var5[16] + 120.*t147*t184*t210*var5[16] + 200.*t11855*t276*var5[16] + 60.*t133*t150*var5[20] - 100.*t11855*t276*var5[20] + (-5.*t11907*t363*var5[0] - 20.*t11907*t147*t187*t300*var5[4] + 5.*t187*t363*var5[4] - 5.*t147*t299*t363*var5[4] - 30.*t11907*t150*t223*t299*var5[8] - 20.*t150*t222*t300*var5[8] + 20.*t147*t299*t300*var5[8] + 30.*t150*t222*t223*var5[12] - 20.*t11907*t210*t222*t276*var5[12] - 30.*t184*t223*t276*var5[12] + 20.*t184*t210*t276*var5[16] - 5.*t11907*t184*t331*var5[16] - 20.*t133*t210*t331*var5[16] - 5.*t11852*t11855*var5[20] + 5.*t133*t331*var5[20])*var9[0] + (20.*t11907*t187*t300*var5[0] + 5.*t299*t363*var5[0] + 60.*t11907*t147*t223*t299*var5[4] - 20.*t11907*t187*t300*var5[4] + 40.*t147*t222*t300*var5[4] - 20.*t299*t300*var5[4] - 5.*t299*t363*var5[4] + 60.*t11907*t150*t210*t222*var5[8] + 90.*t150*t184*t223*var5[8] - 60.*t147*t222*t223*var5[8] - 60.*t11907*t147*t223*t299*var5[8] - 40.*t147*t222*t300*var5[8] + 20.*t299*t300*var5[8] - 60.*t150*t184*t210*var5[12] - 60.*t11907*t150*t210*t222*var5[12] - 90.*t150*t184*t223*var5[12] + 60.*t147*t222*t223*var5[12] + 20.*t11907*t184*t276*var5[12] + 80.*t133*t210*t276*var5[12] + 60.*t150*t184*t210*var5[16] - 20.*t133*t276*var5[16] - 20.*t11907*t184*t276*var5[16] - 80.*t133*t210*t276*var5[16] + 25.*t11855*t331*var5[16] + 20.*t133*t276*var5[20] - 25.*t11855*t331*var5[20])*var9[1];
  p_output1[13]=60.*t127*t222*t223*var5[1] + 120.*t127*t147*t184*t210*var5[5] - 180.*t127*t222*t223*var5[5] + 60.*t127*t133*t150*var5[9] - 360.*t127*t147*t184*t210*var5[9] + 180.*t127*t222*t223*var5[9] - 180.*t127*t133*t150*var5[13] + 360.*t127*t147*t184*t210*var5[13] - 60.*t127*t222*t223*var5[13] + 180.*t127*t133*t150*var5[17] - 120.*t127*t147*t184*t210*var5[17] - 60.*t127*t133*t150*var5[21] + (5.*t127*t187*t363*var5[1] + 20.*t127*t147*t299*t300*var5[5] - 5.*t127*t187*t363*var5[5] + 30.*t127*t150*t222*t223*var5[9] - 20.*t127*t147*t299*t300*var5[9] - 30.*t127*t150*t222*t223*var5[13] + 20.*t127*t184*t210*t276*var5[13] - 20.*t127*t184*t210*t276*var5[17] + 5.*t127*t133*t331*var5[17] - 5.*t127*t133*t331*var5[21])*var9[0] + (-20.*t127*t299*t300*var5[1] - 60.*t127*t147*t222*t223*var5[5] + 40.*t127*t299*t300*var5[5] - 60.*t127*t150*t184*t210*var5[9] + 120.*t127*t147*t222*t223*var5[9] - 20.*t127*t299*t300*var5[9] + 120.*t127*t150*t184*t210*var5[13] - 60.*t127*t147*t222*t223*var5[13] - 20.*t127*t133*t276*var5[13] - 60.*t127*t150*t184*t210*var5[17] + 40.*t127*t133*t276*var5[17] - 20.*t127*t133*t276*var5[21])*var9[1];
  p_output1[14]=60.*t103*t222*t223*t85*var5[1] + 120.*t103*t147*t184*t210*t85*var5[5] - 180.*t103*t222*t223*t85*var5[5] + 60.*t103*t133*t150*t85*var5[9] - 360.*t103*t147*t184*t210*t85*var5[9] + 180.*t103*t222*t223*t85*var5[9] - 180.*t103*t133*t150*t85*var5[13] + 360.*t103*t147*t184*t210*t85*var5[13] - 60.*t103*t222*t223*t85*var5[13] + 180.*t103*t133*t150*t85*var5[17] - 120.*t103*t147*t184*t210*t85*var5[17] - 60.*t103*t133*t150*t85*var5[21] + (5.*t103*t187*t363*t85*var5[1] + 20.*t103*t147*t299*t300*t85*var5[5] - 5.*t103*t187*t363*t85*var5[5] + 30.*t103*t150*t222*t223*t85*var5[9] - 20.*t103*t147*t299*t300*t85*var5[9] - 30.*t103*t150*t222*t223*t85*var5[13] + 20.*t103*t184*t210*t276*t85*var5[13] - 20.*t103*t184*t210*t276*t85*var5[17] + 5.*t103*t133*t331*t85*var5[17] - 5.*t103*t133*t331*t85*var5[21])*var9[0] + (-20.*t103*t299*t300*t85*var5[1] - 60.*t103*t147*t222*t223*t85*var5[5] + 40.*t103*t299*t300*t85*var5[5] - 60.*t103*t150*t184*t210*t85*var5[9] + 120.*t103*t147*t222*t223*t85*var5[9] - 20.*t103*t299*t300*t85*var5[9] + 120.*t103*t150*t184*t210*t85*var5[13] - 60.*t103*t147*t222*t223*t85*var5[13] - 20.*t103*t133*t276*t85*var5[13] - 60.*t103*t150*t184*t210*t85*var5[17] + 40.*t103*t133*t276*t85*var5[17] - 20.*t103*t133*t276*t85*var5[21])*var9[1];
  p_output1[15]=var9[0];
  p_output1[16]=var9[1];
  p_output1[17]=1.;
  p_output1[18]=t11794;
  p_output1[19]=t11822;
  p_output1[20]=t11832;
  p_output1[21]=t11843;
  p_output1[22]=t11850;
  p_output1[23]=t11854;
  p_output1[24]=-60.*t147*t184*t223*var5[1] + 40.*t222*t300*var5[1] - 120.*t133*t150*t210*var5[5] + 300.*t147*t184*t223*var5[5] - 80.*t222*t300*var5[5] + 480.*t133*t150*t210*var5[9] - 420.*t147*t184*t223*var5[9] - 60.*t11855*t276*var5[9] + 40.*t222*t300*var5[9] - 600.*t133*t150*t210*var5[13] + 180.*t147*t184*t223*var5[13] + 220.*t11855*t276*var5[13] + 240.*t133*t150*t210*var5[17] - 260.*t11855*t276*var5[17] + 100.*t11855*t276*var5[21] + (-5.*t147*t299*t363*var5[1] - 20.*t150*t222*t300*var5[5] + 5.*t147*t299*t363*var5[5] - 30.*t184*t223*t276*var5[9] + 20.*t150*t222*t300*var5[9] + 30.*t184*t223*t276*var5[13] - 20.*t133*t210*t331*var5[13] - 5.*t11852*t11855*var5[17] + 20.*t133*t210*t331*var5[17] + 5.*t11852*t11855*var5[21])*var9[0] + (20.*t147*t222*t300*var5[1] - 5.*t299*t363*var5[1] + 60.*t150*t184*t223*var5[5] - 60.*t147*t222*t300*var5[5] + 5.*t299*t363*var5[5] - 150.*t150*t184*t223*var5[9] + 60.*t133*t210*t276*var5[9] + 40.*t147*t222*t300*var5[9] + 90.*t150*t184*t223*var5[13] - 140.*t133*t210*t276*var5[13] + 20.*t11855*t331*var5[13] + 80.*t133*t210*t276*var5[17] - 45.*t11855*t331*var5[17] + 25.*t11855*t331*var5[21])*var9[1];
  p_output1[25]=-60.*t11907*t223*t299*var5[1] - 40.*t222*t300*var5[1] - 120.*t11907*t147*t210*t222*var5[5] - 180.*t147*t184*t223*var5[5] + 60.*t222*t223*var5[5] + 120.*t11907*t223*t299*var5[5] + 80.*t222*t300*var5[5] - 60.*t11907*t150*t184*var5[9] - 240.*t133*t150*t210*var5[9] + 120.*t147*t184*t210*var5[9] + 240.*t11907*t147*t210*t222*var5[9] + 360.*t147*t184*t223*var5[9] - 120.*t222*t223*var5[9] - 60.*t11907*t223*t299*var5[9] - 40.*t222*t300*var5[9] + 60.*t133*t150*var5[13] + 120.*t11907*t150*t184*var5[13] + 480.*t133*t150*t210*var5[13] - 240.*t147*t184*t210*var5[13] - 120.*t11907*t147*t210*t222*var5[13] - 180.*t147*t184*t223*var5[13] + 60.*t222*t223*var5[13] - 100.*t11855*t276*var5[13] - 120.*t133*t150*var5[17] - 60.*t11907*t150*t184*var5[17] - 240.*t133*t150*t210*var5[17] + 120.*t147*t184*t210*var5[17] + 200.*t11855*t276*var5[17] + 60.*t133*t150*var5[21] - 100.*t11855*t276*var5[21] + (-5.*t11907*t363*var5[1] - 20.*t11907*t147*t187*t300*var5[5] + 5.*t187*t363*var5[5] - 5.*t147*t299*t363*var5[5] - 30.*t11907*t150*t223*t299*var5[9] - 20.*t150*t222*t300*var5[9] + 20.*t147*t299*t300*var5[9] + 30.*t150*t222*t223*var5[13] - 20.*t11907*t210*t222*t276*var5[13] - 30.*t184*t223*t276*var5[13] + 20.*t184*t210*t276*var5[17] - 5.*t11907*t184*t331*var5[17] - 20.*t133*t210*t331*var5[17] - 5.*t11852*t11855*var5[21] + 5.*t133*t331*var5[21])*var9[0] + (20.*t11907*t187*t300*var5[1] + 5.*t299*t363*var5[1] + 60.*t11907*t147*t223*t299*var5[5] - 20.*t11907*t187*t300*var5[5] + 40.*t147*t222*t300*var5[5] - 20.*t299*t300*var5[5] - 5.*t299*t363*var5[5] + 60.*t11907*t150*t210*t222*var5[9] + 90.*t150*t184*t223*var5[9] - 60.*t147*t222*t223*var5[9] - 60.*t11907*t147*t223*t299*var5[9] - 40.*t147*t222*t300*var5[9] + 20.*t299*t300*var5[9] - 60.*t150*t184*t210*var5[13] - 60.*t11907*t150*t210*t222*var5[13] - 90.*t150*t184*t223*var5[13] + 60.*t147*t222*t223*var5[13] + 20.*t11907*t184*t276*var5[13] + 80.*t133*t210*t276*var5[13] + 60.*t150*t184*t210*var5[17] - 20.*t133*t276*var5[17] - 20.*t11907*t184*t276*var5[17] - 80.*t133*t210*t276*var5[17] + 25.*t11855*t331*var5[17] + 20.*t133*t276*var5[21] - 25.*t11855*t331*var5[21])*var9[1];
  p_output1[26]=60.*t127*t222*t223*var5[2] + 120.*t127*t147*t184*t210*var5[6] - 180.*t127*t222*t223*var5[6] + 60.*t127*t133*t150*var5[10] - 360.*t127*t147*t184*t210*var5[10] + 180.*t127*t222*t223*var5[10] - 180.*t127*t133*t150*var5[14] + 360.*t127*t147*t184*t210*var5[14] - 60.*t127*t222*t223*var5[14] + 180.*t127*t133*t150*var5[18] - 120.*t127*t147*t184*t210*var5[18] - 60.*t127*t133*t150*var5[22] + (5.*t127*t187*t363*var5[2] + 20.*t127*t147*t299*t300*var5[6] - 5.*t127*t187*t363*var5[6] + 30.*t127*t150*t222*t223*var5[10] - 20.*t127*t147*t299*t300*var5[10] - 30.*t127*t150*t222*t223*var5[14] + 20.*t127*t184*t210*t276*var5[14] - 20.*t127*t184*t210*t276*var5[18] + 5.*t127*t133*t331*var5[18] - 5.*t127*t133*t331*var5[22])*var9[0] + (-20.*t127*t299*t300*var5[2] - 60.*t127*t147*t222*t223*var5[6] + 40.*t127*t299*t300*var5[6] - 60.*t127*t150*t184*t210*var5[10] + 120.*t127*t147*t222*t223*var5[10] - 20.*t127*t299*t300*var5[10] + 120.*t127*t150*t184*t210*var5[14] - 60.*t127*t147*t222*t223*var5[14] - 20.*t127*t133*t276*var5[14] - 60.*t127*t150*t184*t210*var5[18] + 40.*t127*t133*t276*var5[18] - 20.*t127*t133*t276*var5[22])*var9[1];
  p_output1[27]=60.*t103*t222*t223*t85*var5[2] + 120.*t103*t147*t184*t210*t85*var5[6] - 180.*t103*t222*t223*t85*var5[6] + 60.*t103*t133*t150*t85*var5[10] - 360.*t103*t147*t184*t210*t85*var5[10] + 180.*t103*t222*t223*t85*var5[10] - 180.*t103*t133*t150*t85*var5[14] + 360.*t103*t147*t184*t210*t85*var5[14] - 60.*t103*t222*t223*t85*var5[14] + 180.*t103*t133*t150*t85*var5[18] - 120.*t103*t147*t184*t210*t85*var5[18] - 60.*t103*t133*t150*t85*var5[22] + (5.*t103*t187*t363*t85*var5[2] + 20.*t103*t147*t299*t300*t85*var5[6] - 5.*t103*t187*t363*t85*var5[6] + 30.*t103*t150*t222*t223*t85*var5[10] - 20.*t103*t147*t299*t300*t85*var5[10] - 30.*t103*t150*t222*t223*t85*var5[14] + 20.*t103*t184*t210*t276*t85*var5[14] - 20.*t103*t184*t210*t276*t85*var5[18] + 5.*t103*t133*t331*t85*var5[18] - 5.*t103*t133*t331*t85*var5[22])*var9[0] + (-20.*t103*t299*t300*t85*var5[2] - 60.*t103*t147*t222*t223*t85*var5[6] + 40.*t103*t299*t300*t85*var5[6] - 60.*t103*t150*t184*t210*t85*var5[10] + 120.*t103*t147*t222*t223*t85*var5[10] - 20.*t103*t299*t300*t85*var5[10] + 120.*t103*t150*t184*t210*t85*var5[14] - 60.*t103*t147*t222*t223*t85*var5[14] - 20.*t103*t133*t276*t85*var5[14] - 60.*t103*t150*t184*t210*t85*var5[18] + 40.*t103*t133*t276*t85*var5[18] - 20.*t103*t133*t276*t85*var5[22])*var9[1];
  p_output1[28]=var9[0];
  p_output1[29]=var9[1];
  p_output1[30]=1.;
  p_output1[31]=t11794;
  p_output1[32]=t11822;
  p_output1[33]=t11832;
  p_output1[34]=t11843;
  p_output1[35]=t11850;
  p_output1[36]=t11854;
  p_output1[37]=-60.*t147*t184*t223*var5[2] + 40.*t222*t300*var5[2] - 120.*t133*t150*t210*var5[6] + 300.*t147*t184*t223*var5[6] - 80.*t222*t300*var5[6] + 480.*t133*t150*t210*var5[10] - 420.*t147*t184*t223*var5[10] - 60.*t11855*t276*var5[10] + 40.*t222*t300*var5[10] - 600.*t133*t150*t210*var5[14] + 180.*t147*t184*t223*var5[14] + 220.*t11855*t276*var5[14] + 240.*t133*t150*t210*var5[18] - 260.*t11855*t276*var5[18] + 100.*t11855*t276*var5[22] + (-5.*t147*t299*t363*var5[2] - 20.*t150*t222*t300*var5[6] + 5.*t147*t299*t363*var5[6] - 30.*t184*t223*t276*var5[10] + 20.*t150*t222*t300*var5[10] + 30.*t184*t223*t276*var5[14] - 20.*t133*t210*t331*var5[14] - 5.*t11852*t11855*var5[18] + 20.*t133*t210*t331*var5[18] + 5.*t11852*t11855*var5[22])*var9[0] + (20.*t147*t222*t300*var5[2] - 5.*t299*t363*var5[2] + 60.*t150*t184*t223*var5[6] - 60.*t147*t222*t300*var5[6] + 5.*t299*t363*var5[6] - 150.*t150*t184*t223*var5[10] + 60.*t133*t210*t276*var5[10] + 40.*t147*t222*t300*var5[10] + 90.*t150*t184*t223*var5[14] - 140.*t133*t210*t276*var5[14] + 20.*t11855*t331*var5[14] + 80.*t133*t210*t276*var5[18] - 45.*t11855*t331*var5[18] + 25.*t11855*t331*var5[22])*var9[1];
  p_output1[38]=-60.*t11907*t223*t299*var5[2] - 40.*t222*t300*var5[2] - 120.*t11907*t147*t210*t222*var5[6] - 180.*t147*t184*t223*var5[6] + 60.*t222*t223*var5[6] + 120.*t11907*t223*t299*var5[6] + 80.*t222*t300*var5[6] - 60.*t11907*t150*t184*var5[10] - 240.*t133*t150*t210*var5[10] + 120.*t147*t184*t210*var5[10] + 240.*t11907*t147*t210*t222*var5[10] + 360.*t147*t184*t223*var5[10] - 120.*t222*t223*var5[10] - 60.*t11907*t223*t299*var5[10] - 40.*t222*t300*var5[10] + 60.*t133*t150*var5[14] + 120.*t11907*t150*t184*var5[14] + 480.*t133*t150*t210*var5[14] - 240.*t147*t184*t210*var5[14] - 120.*t11907*t147*t210*t222*var5[14] - 180.*t147*t184*t223*var5[14] + 60.*t222*t223*var5[14] - 100.*t11855*t276*var5[14] - 120.*t133*t150*var5[18] - 60.*t11907*t150*t184*var5[18] - 240.*t133*t150*t210*var5[18] + 120.*t147*t184*t210*var5[18] + 200.*t11855*t276*var5[18] + 60.*t133*t150*var5[22] - 100.*t11855*t276*var5[22] + (-5.*t11907*t363*var5[2] - 20.*t11907*t147*t187*t300*var5[6] + 5.*t187*t363*var5[6] - 5.*t147*t299*t363*var5[6] - 30.*t11907*t150*t223*t299*var5[10] - 20.*t150*t222*t300*var5[10] + 20.*t147*t299*t300*var5[10] + 30.*t150*t222*t223*var5[14] - 20.*t11907*t210*t222*t276*var5[14] - 30.*t184*t223*t276*var5[14] + 20.*t184*t210*t276*var5[18] - 5.*t11907*t184*t331*var5[18] - 20.*t133*t210*t331*var5[18] - 5.*t11852*t11855*var5[22] + 5.*t133*t331*var5[22])*var9[0] + (20.*t11907*t187*t300*var5[2] + 5.*t299*t363*var5[2] + 60.*t11907*t147*t223*t299*var5[6] - 20.*t11907*t187*t300*var5[6] + 40.*t147*t222*t300*var5[6] - 20.*t299*t300*var5[6] - 5.*t299*t363*var5[6] + 60.*t11907*t150*t210*t222*var5[10] + 90.*t150*t184*t223*var5[10] - 60.*t147*t222*t223*var5[10] - 60.*t11907*t147*t223*t299*var5[10] - 40.*t147*t222*t300*var5[10] + 20.*t299*t300*var5[10] - 60.*t150*t184*t210*var5[14] - 60.*t11907*t150*t210*t222*var5[14] - 90.*t150*t184*t223*var5[14] + 60.*t147*t222*t223*var5[14] + 20.*t11907*t184*t276*var5[14] + 80.*t133*t210*t276*var5[14] + 60.*t150*t184*t210*var5[18] - 20.*t133*t276*var5[18] - 20.*t11907*t184*t276*var5[18] - 80.*t133*t210*t276*var5[18] + 25.*t11855*t331*var5[18] + 20.*t133*t276*var5[22] - 25.*t11855*t331*var5[22])*var9[1];
  p_output1[39]=60.*t127*t222*t223*var5[3] + 120.*t127*t147*t184*t210*var5[7] - 180.*t127*t222*t223*var5[7] + 60.*t127*t133*t150*var5[11] - 360.*t127*t147*t184*t210*var5[11] + 180.*t127*t222*t223*var5[11] - 180.*t127*t133*t150*var5[15] + 360.*t127*t147*t184*t210*var5[15] - 60.*t127*t222*t223*var5[15] + 180.*t127*t133*t150*var5[19] - 120.*t127*t147*t184*t210*var5[19] - 60.*t127*t133*t150*var5[23] + (5.*t127*t187*t363*var5[3] + 20.*t127*t147*t299*t300*var5[7] - 5.*t127*t187*t363*var5[7] + 30.*t127*t150*t222*t223*var5[11] - 20.*t127*t147*t299*t300*var5[11] - 30.*t127*t150*t222*t223*var5[15] + 20.*t127*t184*t210*t276*var5[15] - 20.*t127*t184*t210*t276*var5[19] + 5.*t127*t133*t331*var5[19] - 5.*t127*t133*t331*var5[23])*var9[0] + (-20.*t127*t299*t300*var5[3] - 60.*t127*t147*t222*t223*var5[7] + 40.*t127*t299*t300*var5[7] - 60.*t127*t150*t184*t210*var5[11] + 120.*t127*t147*t222*t223*var5[11] - 20.*t127*t299*t300*var5[11] + 120.*t127*t150*t184*t210*var5[15] - 60.*t127*t147*t222*t223*var5[15] - 20.*t127*t133*t276*var5[15] - 60.*t127*t150*t184*t210*var5[19] + 40.*t127*t133*t276*var5[19] - 20.*t127*t133*t276*var5[23])*var9[1];
  p_output1[40]=60.*t103*t222*t223*t85*var5[3] + 120.*t103*t147*t184*t210*t85*var5[7] - 180.*t103*t222*t223*t85*var5[7] + 60.*t103*t133*t150*t85*var5[11] - 360.*t103*t147*t184*t210*t85*var5[11] + 180.*t103*t222*t223*t85*var5[11] - 180.*t103*t133*t150*t85*var5[15] + 360.*t103*t147*t184*t210*t85*var5[15] - 60.*t103*t222*t223*t85*var5[15] + 180.*t103*t133*t150*t85*var5[19] - 120.*t103*t147*t184*t210*t85*var5[19] - 60.*t103*t133*t150*t85*var5[23] + (5.*t103*t187*t363*t85*var5[3] + 20.*t103*t147*t299*t300*t85*var5[7] - 5.*t103*t187*t363*t85*var5[7] + 30.*t103*t150*t222*t223*t85*var5[11] - 20.*t103*t147*t299*t300*t85*var5[11] - 30.*t103*t150*t222*t223*t85*var5[15] + 20.*t103*t184*t210*t276*t85*var5[15] - 20.*t103*t184*t210*t276*t85*var5[19] + 5.*t103*t133*t331*t85*var5[19] - 5.*t103*t133*t331*t85*var5[23])*var9[0] + (-20.*t103*t299*t300*t85*var5[3] - 60.*t103*t147*t222*t223*t85*var5[7] + 40.*t103*t299*t300*t85*var5[7] - 60.*t103*t150*t184*t210*t85*var5[11] + 120.*t103*t147*t222*t223*t85*var5[11] - 20.*t103*t299*t300*t85*var5[11] + 120.*t103*t150*t184*t210*t85*var5[15] - 60.*t103*t147*t222*t223*t85*var5[15] - 20.*t103*t133*t276*t85*var5[15] - 60.*t103*t150*t184*t210*t85*var5[19] + 40.*t103*t133*t276*t85*var5[19] - 20.*t103*t133*t276*t85*var5[23])*var9[1];
  p_output1[41]=var9[0];
  p_output1[42]=var9[1];
  p_output1[43]=1.;
  p_output1[44]=t11794;
  p_output1[45]=t11822;
  p_output1[46]=t11832;
  p_output1[47]=t11843;
  p_output1[48]=t11850;
  p_output1[49]=t11854;
  p_output1[50]=-60.*t147*t184*t223*var5[3] + 40.*t222*t300*var5[3] - 120.*t133*t150*t210*var5[7] + 300.*t147*t184*t223*var5[7] - 80.*t222*t300*var5[7] + 480.*t133*t150*t210*var5[11] - 420.*t147*t184*t223*var5[11] - 60.*t11855*t276*var5[11] + 40.*t222*t300*var5[11] - 600.*t133*t150*t210*var5[15] + 180.*t147*t184*t223*var5[15] + 220.*t11855*t276*var5[15] + 240.*t133*t150*t210*var5[19] - 260.*t11855*t276*var5[19] + 100.*t11855*t276*var5[23] + (-5.*t147*t299*t363*var5[3] - 20.*t150*t222*t300*var5[7] + 5.*t147*t299*t363*var5[7] - 30.*t184*t223*t276*var5[11] + 20.*t150*t222*t300*var5[11] + 30.*t184*t223*t276*var5[15] - 20.*t133*t210*t331*var5[15] - 5.*t11852*t11855*var5[19] + 20.*t133*t210*t331*var5[19] + 5.*t11852*t11855*var5[23])*var9[0] + (20.*t147*t222*t300*var5[3] - 5.*t299*t363*var5[3] + 60.*t150*t184*t223*var5[7] - 60.*t147*t222*t300*var5[7] + 5.*t299*t363*var5[7] - 150.*t150*t184*t223*var5[11] + 60.*t133*t210*t276*var5[11] + 40.*t147*t222*t300*var5[11] + 90.*t150*t184*t223*var5[15] - 140.*t133*t210*t276*var5[15] + 20.*t11855*t331*var5[15] + 80.*t133*t210*t276*var5[19] - 45.*t11855*t331*var5[19] + 25.*t11855*t331*var5[23])*var9[1];
  p_output1[51]=-60.*t11907*t223*t299*var5[3] - 40.*t222*t300*var5[3] - 120.*t11907*t147*t210*t222*var5[7] - 180.*t147*t184*t223*var5[7] + 60.*t222*t223*var5[7] + 120.*t11907*t223*t299*var5[7] + 80.*t222*t300*var5[7] - 60.*t11907*t150*t184*var5[11] - 240.*t133*t150*t210*var5[11] + 120.*t147*t184*t210*var5[11] + 240.*t11907*t147*t210*t222*var5[11] + 360.*t147*t184*t223*var5[11] - 120.*t222*t223*var5[11] - 60.*t11907*t223*t299*var5[11] - 40.*t222*t300*var5[11] + 60.*t133*t150*var5[15] + 120.*t11907*t150*t184*var5[15] + 480.*t133*t150*t210*var5[15] - 240.*t147*t184*t210*var5[15] - 120.*t11907*t147*t210*t222*var5[15] - 180.*t147*t184*t223*var5[15] + 60.*t222*t223*var5[15] - 100.*t11855*t276*var5[15] - 120.*t133*t150*var5[19] - 60.*t11907*t150*t184*var5[19] - 240.*t133*t150*t210*var5[19] + 120.*t147*t184*t210*var5[19] + 200.*t11855*t276*var5[19] + 60.*t133*t150*var5[23] - 100.*t11855*t276*var5[23] + (-5.*t11907*t363*var5[3] - 20.*t11907*t147*t187*t300*var5[7] + 5.*t187*t363*var5[7] - 5.*t147*t299*t363*var5[7] - 30.*t11907*t150*t223*t299*var5[11] - 20.*t150*t222*t300*var5[11] + 20.*t147*t299*t300*var5[11] + 30.*t150*t222*t223*var5[15] - 20.*t11907*t210*t222*t276*var5[15] - 30.*t184*t223*t276*var5[15] + 20.*t184*t210*t276*var5[19] - 5.*t11907*t184*t331*var5[19] - 20.*t133*t210*t331*var5[19] - 5.*t11852*t11855*var5[23] + 5.*t133*t331*var5[23])*var9[0] + (20.*t11907*t187*t300*var5[3] + 5.*t299*t363*var5[3] + 60.*t11907*t147*t223*t299*var5[7] - 20.*t11907*t187*t300*var5[7] + 40.*t147*t222*t300*var5[7] - 20.*t299*t300*var5[7] - 5.*t299*t363*var5[7] + 60.*t11907*t150*t210*t222*var5[11] + 90.*t150*t184*t223*var5[11] - 60.*t147*t222*t223*var5[11] - 60.*t11907*t147*t223*t299*var5[11] - 40.*t147*t222*t300*var5[11] + 20.*t299*t300*var5[11] - 60.*t150*t184*t210*var5[15] - 60.*t11907*t150*t210*t222*var5[15] - 90.*t150*t184*t223*var5[15] + 60.*t147*t222*t223*var5[15] + 20.*t11907*t184*t276*var5[15] + 80.*t133*t210*t276*var5[15] + 60.*t150*t184*t210*var5[19] - 20.*t133*t276*var5[19] - 20.*t11907*t184*t276*var5[19] - 80.*t133*t210*t276*var5[19] + 25.*t11855*t331*var5[19] + 20.*t133*t276*var5[23] - 25.*t11855*t331*var5[23])*var9[1];
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

namespace Pattern[righStance, Blank[opt]]
{

void J_d2y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
