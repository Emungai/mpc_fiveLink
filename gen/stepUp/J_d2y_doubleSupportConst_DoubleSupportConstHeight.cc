/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:03:19 GMT-05:00
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
  double t9792;
  double t4436;
  double t4529;
  double t4618;
  double t4691;
  double t4752;
  double t9797;
  double t9798;
  double t9806;
  double t9807;
  double t9808;
  double t9811;
  double t9812;
  double t9837;
  double t9838;
  double t9839;
  double t9840;
  double t9846;
  double t9847;
  double t9853;
  double t9866;
  double t9867;
  double t9873;
  double t9882;
  double t9927;
  double t9932;
  double t9940;
  double t9948;
  double t9967;
  double t9964;
  double t10018;
  double t10019;
  double t9928;
  double t9929;
  double t9930;
  double t9931;
  double t9933;
  double t9934;
  double t9935;
  double t9936;
  double t9937;
  double t9938;
  double t9939;
  double t9941;
  double t9942;
  double t9943;
  double t9944;
  double t9945;
  double t9946;
  double t9947;
  double t9949;
  double t9950;
  double t9951;
  double t9952;
  double t9953;
  double t9954;
  double t9955;
  double t9956;
  double t9957;
  double t9958;
  double t9959;
  double t9960;
  double t9961;
  double t9962;
  double t9963;
  double t9965;
  double t9966;
  t9792 = -1.*var6[1];
  t4436 = -1. + var7[0];
  t4529 = -1. + var8[0];
  t4618 = 1/t4529;
  t4691 = -1.*t4436*t4618;
  t4752 = 1. + t4691;
  t9797 = var6[0] + t9792;
  t9798 = Power(t9797,-5);
  t9806 = -1.*var1[0];
  t9807 = t9806 + var1[1];
  t9808 = t4436*t4618*t9807;
  t9811 = t9792 + var1[0] + t9808;
  t9812 = Power(t9811,2);
  t9837 = Power(t9797,-4);
  t9838 = 1/t9797;
  t9839 = -1.*t9838*t9811;
  t9840 = 1. + t9839;
  t9846 = Power(t9797,-3);
  t9847 = Power(t9840,2);
  t9853 = Power(t9811,3);
  t9866 = Power(t9797,-2);
  t9867 = Power(t9840,3);
  t9873 = Power(t9811,4);
  t9882 = Power(t9840,4);
  t9927 = -20.*t9866*t9867;
  t9932 = -60.*t9846*t9811*t9847;
  t9940 = -60.*t9837*t9812*t9840;
  t9948 = -20.*t9798*t9853;
  t9967 = Power(t9797,-6);
  t9964 = Power(t9811,5);
  t10018 = -1.*t9866*t9811;
  t10019 = t9838 + t10018;
  t9928 = 5.*var9[1]*t9838*t9882;
  t9929 = Power(t9840,5);
  t9930 = -1.*var9[0]*t9929;
  t9931 = t9927 + t9928 + t9930;
  t9933 = 40.*t9866*t9867;
  t9934 = -5.*var9[0]*t9838*t9811*t9882;
  t9935 = 20.*t9866*t9811*t9867;
  t9936 = -5.*t9838*t9882;
  t9937 = t9935 + t9936;
  t9938 = var9[1]*t9937;
  t9939 = t9932 + t9933 + t9934 + t9938;
  t9941 = 120.*t9846*t9811*t9847;
  t9942 = -10.*var9[0]*t9866*t9812*t9867;
  t9943 = 30.*t9846*t9812*t9847;
  t9944 = -20.*t9866*t9811*t9867;
  t9945 = t9943 + t9944;
  t9946 = var9[1]*t9945;
  t9947 = t9940 + t9941 + t9927 + t9942 + t9946;
  t9949 = 120.*t9837*t9812*t9840;
  t9950 = -10.*var9[0]*t9846*t9853*t9847;
  t9951 = 20.*t9837*t9853*t9840;
  t9952 = -30.*t9846*t9812*t9847;
  t9953 = t9951 + t9952;
  t9954 = var9[1]*t9953;
  t9955 = t9948 + t9949 + t9932 + t9950 + t9954;
  t9956 = 40.*t9798*t9853;
  t9957 = -5.*var9[0]*t9837*t9873*t9840;
  t9958 = 5.*t9798*t9873;
  t9959 = -20.*t9837*t9853*t9840;
  t9960 = t9958 + t9959;
  t9961 = var9[1]*t9960;
  t9962 = t9956 + t9940 + t9957 + t9961;
  t9963 = -5.*var9[1]*t9798*t9873;
  t9965 = -1.*var9[0]*t9798*t9964;
  t9966 = t9948 + t9963 + t9965;
  p_output1[0]=60.*t4752*t9846*t9847*var5[0] + 120.*t4752*t9811*t9837*t9840*var5[2] - 180.*t4752*t9846*t9847*var5[2] + 60.*t4752*t9798*t9812*var5[4] - 360.*t4752*t9811*t9837*t9840*var5[4] + 180.*t4752*t9846*t9847*var5[4] - 180.*t4752*t9798*t9812*var5[6] + 360.*t4752*t9811*t9837*t9840*var5[6] - 60.*t4752*t9846*t9847*var5[6] + 180.*t4752*t9798*t9812*var5[8] - 120.*t4752*t9811*t9837*t9840*var5[8] - 60.*t4752*t9798*t9812*var5[10] + (5.*t4752*t9838*t9882*var5[0] + 20.*t4752*t9811*t9866*t9867*var5[2] - 5.*t4752*t9838*t9882*var5[2] + 30.*t4752*t9812*t9846*t9847*var5[4] - 20.*t4752*t9811*t9866*t9867*var5[4] - 30.*t4752*t9812*t9846*t9847*var5[6] + 20.*t4752*t9837*t9840*t9853*var5[6] - 20.*t4752*t9837*t9840*t9853*var5[8] + 5.*t4752*t9798*t9873*var5[8] - 5.*t4752*t9798*t9873*var5[10])*var9[0] + (-20.*t4752*t9866*t9867*var5[0] - 60.*t4752*t9811*t9846*t9847*var5[2] + 40.*t4752*t9866*t9867*var5[2] - 60.*t4752*t9812*t9837*t9840*var5[4] + 120.*t4752*t9811*t9846*t9847*var5[4] - 20.*t4752*t9866*t9867*var5[4] + 120.*t4752*t9812*t9837*t9840*var5[6] - 60.*t4752*t9811*t9846*t9847*var5[6] - 20.*t4752*t9798*t9853*var5[6] - 60.*t4752*t9812*t9837*t9840*var5[8] + 40.*t4752*t9798*t9853*var5[8] - 20.*t4752*t9798*t9853*var5[10])*var9[1];
  p_output1[1]=60.*t4436*t4618*t9846*t9847*var5[0] + 120.*t4436*t4618*t9811*t9837*t9840*var5[2] - 180.*t4436*t4618*t9846*t9847*var5[2] + 60.*t4436*t4618*t9798*t9812*var5[4] - 360.*t4436*t4618*t9811*t9837*t9840*var5[4] + 180.*t4436*t4618*t9846*t9847*var5[4] - 180.*t4436*t4618*t9798*t9812*var5[6] + 360.*t4436*t4618*t9811*t9837*t9840*var5[6] - 60.*t4436*t4618*t9846*t9847*var5[6] + 180.*t4436*t4618*t9798*t9812*var5[8] - 120.*t4436*t4618*t9811*t9837*t9840*var5[8] - 60.*t4436*t4618*t9798*t9812*var5[10] + (5.*t4436*t4618*t9838*t9882*var5[0] + 20.*t4436*t4618*t9811*t9866*t9867*var5[2] - 5.*t4436*t4618*t9838*t9882*var5[2] + 30.*t4436*t4618*t9812*t9846*t9847*var5[4] - 20.*t4436*t4618*t9811*t9866*t9867*var5[4] - 30.*t4436*t4618*t9812*t9846*t9847*var5[6] + 20.*t4436*t4618*t9837*t9840*t9853*var5[6] - 20.*t4436*t4618*t9837*t9840*t9853*var5[8] + 5.*t4436*t4618*t9798*t9873*var5[8] - 5.*t4436*t4618*t9798*t9873*var5[10])*var9[0] + (-20.*t4436*t4618*t9866*t9867*var5[0] - 60.*t4436*t4618*t9811*t9846*t9847*var5[2] + 40.*t4436*t4618*t9866*t9867*var5[2] - 60.*t4436*t4618*t9812*t9837*t9840*var5[4] + 120.*t4436*t4618*t9811*t9846*t9847*var5[4] - 20.*t4436*t4618*t9866*t9867*var5[4] + 120.*t4436*t4618*t9812*t9837*t9840*var5[6] - 60.*t4436*t4618*t9811*t9846*t9847*var5[6] - 20.*t4436*t4618*t9798*t9853*var5[6] - 60.*t4436*t4618*t9812*t9837*t9840*var5[8] + 40.*t4436*t4618*t9798*t9853*var5[8] - 20.*t4436*t4618*t9798*t9853*var5[10])*var9[1];
  p_output1[2]=var9[0];
  p_output1[3]=var9[1];
  p_output1[4]=1.;
  p_output1[5]=t9931;
  p_output1[6]=t9939;
  p_output1[7]=t9947;
  p_output1[8]=t9955;
  p_output1[9]=t9962;
  p_output1[10]=t9966;
  p_output1[11]=-60.*t9811*t9837*t9847*var5[0] + 40.*t9846*t9867*var5[0] - 120.*t9798*t9812*t9840*var5[2] + 300.*t9811*t9837*t9847*var5[2] - 80.*t9846*t9867*var5[2] + 480.*t9798*t9812*t9840*var5[4] - 420.*t9811*t9837*t9847*var5[4] + 40.*t9846*t9867*var5[4] - 60.*t9853*t9967*var5[4] - 600.*t9798*t9812*t9840*var5[6] + 180.*t9811*t9837*t9847*var5[6] + 220.*t9853*t9967*var5[6] + 240.*t9798*t9812*t9840*var5[8] - 260.*t9853*t9967*var5[8] + 100.*t9853*t9967*var5[10] + (-5.*t9811*t9866*t9882*var5[0] - 20.*t9812*t9846*t9867*var5[2] + 5.*t9811*t9866*t9882*var5[2] - 30.*t9837*t9847*t9853*var5[4] + 20.*t9812*t9846*t9867*var5[4] + 30.*t9837*t9847*t9853*var5[6] - 20.*t9798*t9840*t9873*var5[6] + 20.*t9798*t9840*t9873*var5[8] - 5.*t9964*t9967*var5[8] + 5.*t9964*t9967*var5[10])*var9[0] + (20.*t9811*t9846*t9867*var5[0] - 5.*t9866*t9882*var5[0] + 60.*t9812*t9837*t9847*var5[2] - 60.*t9811*t9846*t9867*var5[2] + 5.*t9866*t9882*var5[2] - 150.*t9812*t9837*t9847*var5[4] + 60.*t9798*t9840*t9853*var5[4] + 40.*t9811*t9846*t9867*var5[4] + 90.*t9812*t9837*t9847*var5[6] - 140.*t9798*t9840*t9853*var5[6] + 20.*t9873*t9967*var5[6] + 80.*t9798*t9840*t9853*var5[8] - 45.*t9873*t9967*var5[8] + 25.*t9873*t9967*var5[10])*var9[1];
  p_output1[12]=-60.*t10019*t9847*t9866*var5[0] - 40.*t9846*t9867*var5[0] - 120.*t10019*t9811*t9840*t9846*var5[2] - 180.*t9811*t9837*t9847*var5[2] + 60.*t9846*t9847*var5[2] + 120.*t10019*t9847*t9866*var5[2] + 80.*t9846*t9867*var5[2] - 60.*t10019*t9812*t9837*var5[4] - 240.*t9798*t9812*t9840*var5[4] + 120.*t9811*t9837*t9840*var5[4] + 240.*t10019*t9811*t9840*t9846*var5[4] + 360.*t9811*t9837*t9847*var5[4] - 120.*t9846*t9847*var5[4] - 60.*t10019*t9847*t9866*var5[4] - 40.*t9846*t9867*var5[4] + 60.*t9798*t9812*var5[6] + 120.*t10019*t9812*t9837*var5[6] + 480.*t9798*t9812*t9840*var5[6] - 240.*t9811*t9837*t9840*var5[6] - 120.*t10019*t9811*t9840*t9846*var5[6] - 180.*t9811*t9837*t9847*var5[6] + 60.*t9846*t9847*var5[6] - 100.*t9853*t9967*var5[6] - 120.*t9798*t9812*var5[8] - 60.*t10019*t9812*t9837*var5[8] - 240.*t9798*t9812*t9840*var5[8] + 120.*t9811*t9837*t9840*var5[8] + 200.*t9853*t9967*var5[8] + 60.*t9798*t9812*var5[10] - 100.*t9853*t9967*var5[10] + (-5.*t10019*t9882*var5[0] - 20.*t10019*t9811*t9838*t9867*var5[2] + 5.*t9838*t9882*var5[2] - 5.*t9811*t9866*t9882*var5[2] - 30.*t10019*t9812*t9847*t9866*var5[4] - 20.*t9812*t9846*t9867*var5[4] + 20.*t9811*t9866*t9867*var5[4] + 30.*t9812*t9846*t9847*var5[6] - 20.*t10019*t9840*t9846*t9853*var5[6] - 30.*t9837*t9847*t9853*var5[6] + 20.*t9837*t9840*t9853*var5[8] - 5.*t10019*t9837*t9873*var5[8] - 20.*t9798*t9840*t9873*var5[8] + 5.*t9798*t9873*var5[10] - 5.*t9964*t9967*var5[10])*var9[0] + (20.*t10019*t9838*t9867*var5[0] + 5.*t9866*t9882*var5[0] + 60.*t10019*t9811*t9847*t9866*var5[2] - 20.*t10019*t9838*t9867*var5[2] + 40.*t9811*t9846*t9867*var5[2] - 20.*t9866*t9867*var5[2] - 5.*t9866*t9882*var5[2] + 60.*t10019*t9812*t9840*t9846*var5[4] + 90.*t9812*t9837*t9847*var5[4] - 60.*t9811*t9846*t9847*var5[4] - 60.*t10019*t9811*t9847*t9866*var5[4] - 40.*t9811*t9846*t9867*var5[4] + 20.*t9866*t9867*var5[4] - 60.*t9812*t9837*t9840*var5[6] - 60.*t10019*t9812*t9840*t9846*var5[6] - 90.*t9812*t9837*t9847*var5[6] + 60.*t9811*t9846*t9847*var5[6] + 20.*t10019*t9837*t9853*var5[6] + 80.*t9798*t9840*t9853*var5[6] + 60.*t9812*t9837*t9840*var5[8] - 20.*t9798*t9853*var5[8] - 20.*t10019*t9837*t9853*var5[8] - 80.*t9798*t9840*t9853*var5[8] + 25.*t9873*t9967*var5[8] + 20.*t9798*t9853*var5[10] - 25.*t9873*t9967*var5[10])*var9[1];
  p_output1[13]=60.*t4752*t9846*t9847*var5[1] + 120.*t4752*t9811*t9837*t9840*var5[3] - 180.*t4752*t9846*t9847*var5[3] + 60.*t4752*t9798*t9812*var5[5] - 360.*t4752*t9811*t9837*t9840*var5[5] + 180.*t4752*t9846*t9847*var5[5] - 180.*t4752*t9798*t9812*var5[7] + 360.*t4752*t9811*t9837*t9840*var5[7] - 60.*t4752*t9846*t9847*var5[7] + 180.*t4752*t9798*t9812*var5[9] - 120.*t4752*t9811*t9837*t9840*var5[9] - 60.*t4752*t9798*t9812*var5[11] + (5.*t4752*t9838*t9882*var5[1] + 20.*t4752*t9811*t9866*t9867*var5[3] - 5.*t4752*t9838*t9882*var5[3] + 30.*t4752*t9812*t9846*t9847*var5[5] - 20.*t4752*t9811*t9866*t9867*var5[5] - 30.*t4752*t9812*t9846*t9847*var5[7] + 20.*t4752*t9837*t9840*t9853*var5[7] - 20.*t4752*t9837*t9840*t9853*var5[9] + 5.*t4752*t9798*t9873*var5[9] - 5.*t4752*t9798*t9873*var5[11])*var9[0] + (-20.*t4752*t9866*t9867*var5[1] - 60.*t4752*t9811*t9846*t9847*var5[3] + 40.*t4752*t9866*t9867*var5[3] - 60.*t4752*t9812*t9837*t9840*var5[5] + 120.*t4752*t9811*t9846*t9847*var5[5] - 20.*t4752*t9866*t9867*var5[5] + 120.*t4752*t9812*t9837*t9840*var5[7] - 60.*t4752*t9811*t9846*t9847*var5[7] - 20.*t4752*t9798*t9853*var5[7] - 60.*t4752*t9812*t9837*t9840*var5[9] + 40.*t4752*t9798*t9853*var5[9] - 20.*t4752*t9798*t9853*var5[11])*var9[1];
  p_output1[14]=60.*t4436*t4618*t9846*t9847*var5[1] + 120.*t4436*t4618*t9811*t9837*t9840*var5[3] - 180.*t4436*t4618*t9846*t9847*var5[3] + 60.*t4436*t4618*t9798*t9812*var5[5] - 360.*t4436*t4618*t9811*t9837*t9840*var5[5] + 180.*t4436*t4618*t9846*t9847*var5[5] - 180.*t4436*t4618*t9798*t9812*var5[7] + 360.*t4436*t4618*t9811*t9837*t9840*var5[7] - 60.*t4436*t4618*t9846*t9847*var5[7] + 180.*t4436*t4618*t9798*t9812*var5[9] - 120.*t4436*t4618*t9811*t9837*t9840*var5[9] - 60.*t4436*t4618*t9798*t9812*var5[11] + (5.*t4436*t4618*t9838*t9882*var5[1] + 20.*t4436*t4618*t9811*t9866*t9867*var5[3] - 5.*t4436*t4618*t9838*t9882*var5[3] + 30.*t4436*t4618*t9812*t9846*t9847*var5[5] - 20.*t4436*t4618*t9811*t9866*t9867*var5[5] - 30.*t4436*t4618*t9812*t9846*t9847*var5[7] + 20.*t4436*t4618*t9837*t9840*t9853*var5[7] - 20.*t4436*t4618*t9837*t9840*t9853*var5[9] + 5.*t4436*t4618*t9798*t9873*var5[9] - 5.*t4436*t4618*t9798*t9873*var5[11])*var9[0] + (-20.*t4436*t4618*t9866*t9867*var5[1] - 60.*t4436*t4618*t9811*t9846*t9847*var5[3] + 40.*t4436*t4618*t9866*t9867*var5[3] - 60.*t4436*t4618*t9812*t9837*t9840*var5[5] + 120.*t4436*t4618*t9811*t9846*t9847*var5[5] - 20.*t4436*t4618*t9866*t9867*var5[5] + 120.*t4436*t4618*t9812*t9837*t9840*var5[7] - 60.*t4436*t4618*t9811*t9846*t9847*var5[7] - 20.*t4436*t4618*t9798*t9853*var5[7] - 60.*t4436*t4618*t9812*t9837*t9840*var5[9] + 40.*t4436*t4618*t9798*t9853*var5[9] - 20.*t4436*t4618*t9798*t9853*var5[11])*var9[1];
  p_output1[15]=var9[0];
  p_output1[16]=var9[1];
  p_output1[17]=1.;
  p_output1[18]=t9931;
  p_output1[19]=t9939;
  p_output1[20]=t9947;
  p_output1[21]=t9955;
  p_output1[22]=t9962;
  p_output1[23]=t9966;
  p_output1[24]=-60.*t9811*t9837*t9847*var5[1] + 40.*t9846*t9867*var5[1] - 120.*t9798*t9812*t9840*var5[3] + 300.*t9811*t9837*t9847*var5[3] - 80.*t9846*t9867*var5[3] + 480.*t9798*t9812*t9840*var5[5] - 420.*t9811*t9837*t9847*var5[5] + 40.*t9846*t9867*var5[5] - 60.*t9853*t9967*var5[5] - 600.*t9798*t9812*t9840*var5[7] + 180.*t9811*t9837*t9847*var5[7] + 220.*t9853*t9967*var5[7] + 240.*t9798*t9812*t9840*var5[9] - 260.*t9853*t9967*var5[9] + 100.*t9853*t9967*var5[11] + (-5.*t9811*t9866*t9882*var5[1] - 20.*t9812*t9846*t9867*var5[3] + 5.*t9811*t9866*t9882*var5[3] - 30.*t9837*t9847*t9853*var5[5] + 20.*t9812*t9846*t9867*var5[5] + 30.*t9837*t9847*t9853*var5[7] - 20.*t9798*t9840*t9873*var5[7] + 20.*t9798*t9840*t9873*var5[9] - 5.*t9964*t9967*var5[9] + 5.*t9964*t9967*var5[11])*var9[0] + (20.*t9811*t9846*t9867*var5[1] - 5.*t9866*t9882*var5[1] + 60.*t9812*t9837*t9847*var5[3] - 60.*t9811*t9846*t9867*var5[3] + 5.*t9866*t9882*var5[3] - 150.*t9812*t9837*t9847*var5[5] + 60.*t9798*t9840*t9853*var5[5] + 40.*t9811*t9846*t9867*var5[5] + 90.*t9812*t9837*t9847*var5[7] - 140.*t9798*t9840*t9853*var5[7] + 20.*t9873*t9967*var5[7] + 80.*t9798*t9840*t9853*var5[9] - 45.*t9873*t9967*var5[9] + 25.*t9873*t9967*var5[11])*var9[1];
  p_output1[25]=-60.*t10019*t9847*t9866*var5[1] - 40.*t9846*t9867*var5[1] - 120.*t10019*t9811*t9840*t9846*var5[3] - 180.*t9811*t9837*t9847*var5[3] + 60.*t9846*t9847*var5[3] + 120.*t10019*t9847*t9866*var5[3] + 80.*t9846*t9867*var5[3] - 60.*t10019*t9812*t9837*var5[5] - 240.*t9798*t9812*t9840*var5[5] + 120.*t9811*t9837*t9840*var5[5] + 240.*t10019*t9811*t9840*t9846*var5[5] + 360.*t9811*t9837*t9847*var5[5] - 120.*t9846*t9847*var5[5] - 60.*t10019*t9847*t9866*var5[5] - 40.*t9846*t9867*var5[5] + 60.*t9798*t9812*var5[7] + 120.*t10019*t9812*t9837*var5[7] + 480.*t9798*t9812*t9840*var5[7] - 240.*t9811*t9837*t9840*var5[7] - 120.*t10019*t9811*t9840*t9846*var5[7] - 180.*t9811*t9837*t9847*var5[7] + 60.*t9846*t9847*var5[7] - 100.*t9853*t9967*var5[7] - 120.*t9798*t9812*var5[9] - 60.*t10019*t9812*t9837*var5[9] - 240.*t9798*t9812*t9840*var5[9] + 120.*t9811*t9837*t9840*var5[9] + 200.*t9853*t9967*var5[9] + 60.*t9798*t9812*var5[11] - 100.*t9853*t9967*var5[11] + (-5.*t10019*t9882*var5[1] - 20.*t10019*t9811*t9838*t9867*var5[3] + 5.*t9838*t9882*var5[3] - 5.*t9811*t9866*t9882*var5[3] - 30.*t10019*t9812*t9847*t9866*var5[5] - 20.*t9812*t9846*t9867*var5[5] + 20.*t9811*t9866*t9867*var5[5] + 30.*t9812*t9846*t9847*var5[7] - 20.*t10019*t9840*t9846*t9853*var5[7] - 30.*t9837*t9847*t9853*var5[7] + 20.*t9837*t9840*t9853*var5[9] - 5.*t10019*t9837*t9873*var5[9] - 20.*t9798*t9840*t9873*var5[9] + 5.*t9798*t9873*var5[11] - 5.*t9964*t9967*var5[11])*var9[0] + (20.*t10019*t9838*t9867*var5[1] + 5.*t9866*t9882*var5[1] + 60.*t10019*t9811*t9847*t9866*var5[3] - 20.*t10019*t9838*t9867*var5[3] + 40.*t9811*t9846*t9867*var5[3] - 20.*t9866*t9867*var5[3] - 5.*t9866*t9882*var5[3] + 60.*t10019*t9812*t9840*t9846*var5[5] + 90.*t9812*t9837*t9847*var5[5] - 60.*t9811*t9846*t9847*var5[5] - 60.*t10019*t9811*t9847*t9866*var5[5] - 40.*t9811*t9846*t9867*var5[5] + 20.*t9866*t9867*var5[5] - 60.*t9812*t9837*t9840*var5[7] - 60.*t10019*t9812*t9840*t9846*var5[7] - 90.*t9812*t9837*t9847*var5[7] + 60.*t9811*t9846*t9847*var5[7] + 20.*t10019*t9837*t9853*var5[7] + 80.*t9798*t9840*t9853*var5[7] + 60.*t9812*t9837*t9840*var5[9] - 20.*t9798*t9853*var5[9] - 20.*t10019*t9837*t9853*var5[9] - 80.*t9798*t9840*t9853*var5[9] + 25.*t9873*t9967*var5[9] + 20.*t9798*t9853*var5[11] - 25.*t9873*t9967*var5[11])*var9[1];
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
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 26, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "J_d2y_doubleSupportConst_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_d2y_doubleSupportConst_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
