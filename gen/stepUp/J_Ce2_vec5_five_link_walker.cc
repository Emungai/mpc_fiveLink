/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:53 GMT-05:00
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
  double t5585;
  double t3179;
  double t5566;
  double t5586;
  double t2954;
  double t5649;
  double t5708;
  double t5709;
  double t5719;
  double t5721;
  double t5722;
  double t5584;
  double t5592;
  double t5593;
  double t5788;
  double t5789;
  double t5790;
  double t5804;
  double t5805;
  double t5806;
  double t5723;
  double t5594;
  double t5650;
  double t5657;
  double t5666;
  double t5677;
  double t5678;
  double t5763;
  double t5781;
  double t5786;
  double t5787;
  double t5792;
  double t5797;
  double t5845;
  double t5846;
  double t5859;
  double t5861;
  double t5862;
  double t5863;
  double t5864;
  double t5875;
  double t5876;
  double t5886;
  double t5887;
  double t5893;
  double t5895;
  double t5896;
  double t5897;
  double t5901;
  double t5902;
  double t5903;
  double t5913;
  double t5914;
  double t5755;
  double t5756;
  double t5757;
  double t5828;
  double t5829;
  double t5837;
  double t5933;
  double t5934;
  double t5801;
  double t5802;
  double t5803;
  double t5814;
  double t5815;
  double t5820;
  double t5869;
  double t5919;
  double t5920;
  double t5921;
  double t5894;
  double t5898;
  double t5899;
  double t5908;
  double t5912;
  double t5907;
  double t5915;
  double t5916;
  double t5963;
  double t5964;
  double t5924;
  double t5926;
  double t5923;
  double t5925;
  double t5927;
  double t5973;
  double t5974;
  double t5975;
  double t5935;
  double t5937;
  double t5938;
  double t5944;
  double t5945;
  double t5946;
  double t5947;
  double t5948;
  double t5949;
  double t5950;
  double t5951;
  double t5952;
  double t5953;
  double t5954;
  double t5955;
  double t5956;
  double t5957;
  double t5958;
  double t5959;
  double t5960;
  double t5961;
  double t5962;
  double t5970;
  double t5971;
  double t5976;
  double t5979;
  double t5989;
  double t5990;
  double t5992;
  double t5993;
  double t6039;
  double t6040;
  double t6041;
  double t6042;
  double t6043;
  double t6023;
  double t6024;
  double t6025;
  double t6027;
  double t6028;
  double t6029;
  double t6030;
  double t6031;
  double t6033;
  double t6034;
  double t6035;
  double t6036;
  double t6037;
  double t5868;
  double t5870;
  double t5854;
  double t5855;
  double t5844;
  double t5856;
  double t5866;
  double t5867;
  double t5874;
  double t5877;
  double t5878;
  double t5965;
  double t5966;
  double t5967;
  double t5972;
  double t5977;
  double t5978;
  double t5980;
  double t5982;
  double t5983;
  double t5984;
  double t5987;
  double t5988;
  double t5991;
  double t5994;
  double t6073;
  double t6001;
  double t6002;
  double t6003;
  double t6075;
  double t6077;
  double t6080;
  double t6081;
  double t6082;
  double t6083;
  double t6084;
  double t6085;
  double t6086;
  double t6087;
  double t6088;
  double t6089;
  double t6092;
  double t6010;
  double t6011;
  double t6012;
  double t6015;
  double t6016;
  double t6017;
  double t6032;
  double t5900;
  double t5918;
  double t5922;
  double t5928;
  double t5929;
  double t5800;
  double t5813;
  double t5827;
  double t5838;
  double t5839;
  double t5843;
  double t6115;
  double t5930;
  double t6065;
  double t6066;
  double t6067;
  double t6068;
  double t6069;
  double t5968;
  double t5969;
  double t5981;
  double t5985;
  double t5986;
  double t5995;
  double t5996;
  double t6090;
  double t6091;
  double t6093;
  double t6094;
  double t6095;
  double t6096;
  double t6097;
  double t6009;
  double t6013;
  double t6014;
  double t6018;
  double t6019;
  double t6107;
  double t6108;
  double t6109;
  double t6110;
  double t6111;
  double t6038;
  double t6117;
  double t6169;
  double t6170;
  double t6171;
  double t6172;
  double t6173;
  double t6165;
  double t6166;
  double t6167;
  double t6052;
  double t6053;
  double t6054;
  double t6055;
  double t6056;
  double t6074;
  double t6076;
  double t6078;
  double t5936;
  double t5939;
  double t5940;
  double t6128;
  double t6129;
  double t6130;
  double t6131;
  double t6132;
  double t6101;
  double t6102;
  double t6103;
  double t6104;
  double t6105;
  double t6000;
  double t6004;
  double t6005;
  double t6006;
  double t6007;
  double t6145;
  double t6146;
  double t6147;
  double t6148;
  double t6149;
  double t6150;
  double t6151;
  double t6044;
  double t6118;
  double t6174;
  double t6204;
  double t6205;
  double t6206;
  double t6218;
  double t6219;
  double t5707;
  t5585 = Cos(var1[3]);
  t3179 = Cos(var1[4]);
  t5566 = Sin(var1[3]);
  t5586 = Sin(var1[4]);
  t2954 = Sin(var1[2]);
  t5649 = Cos(var1[2]);
  t5708 = -1.*t3179;
  t5709 = 1. + t5708;
  t5719 = 0.4*t5709;
  t5721 = 0.64*t3179;
  t5722 = t5719 + t5721;
  t5584 = -1.*t3179*t5566;
  t5592 = -1.*t5585*t5586;
  t5593 = t5584 + t5592;
  t5788 = t5585*t3179;
  t5789 = -1.*t5566*t5586;
  t5790 = t5788 + t5789;
  t5804 = t5649*t5593;
  t5805 = -1.*t2954*t5790;
  t5806 = t5804 + t5805;
  t5723 = t5722*t3179;
  t5594 = -1.*t2954*t5593;
  t5650 = -1.*t5585*t3179;
  t5657 = t5566*t5586;
  t5666 = t5650 + t5657;
  t5677 = t5649*t5666;
  t5678 = t5594 + t5677;
  t5763 = t3179*t5566;
  t5781 = t5585*t5586;
  t5786 = t5763 + t5781;
  t5787 = -1.*t2954*t5786;
  t5792 = t5649*t5790;
  t5797 = t5787 + t5792;
  t5845 = t2954*t5593;
  t5846 = t5845 + t5792;
  t5859 = -1.*t5649*t5790;
  t5861 = t5594 + t5859;
  t5862 = t5649*t5786;
  t5863 = t2954*t5790;
  t5864 = t5862 + t5863;
  t5875 = t2954*t5666;
  t5876 = t5804 + t5875;
  t5886 = t5722*t5566;
  t5887 = 0.24*t5585*t5586;
  t5893 = t5886 + t5887;
  t5895 = t5585*t5722;
  t5896 = -0.24*t5566*t5586;
  t5897 = t5895 + t5896;
  t5901 = -0.24*t3179*t5566;
  t5902 = -0.24*t5585*t5586;
  t5903 = t5901 + t5902;
  t5913 = 0.24*t5585*t3179;
  t5914 = t5913 + t5896;
  t5755 = Power(t3179,2);
  t5756 = -0.24*t5755;
  t5757 = t5723 + t5756;
  t5828 = Power(t5586,2);
  t5829 = 0.24*t5828;
  t5837 = t5723 + t5829;
  t5933 = t2954*t5786;
  t5934 = t5933 + t5677;
  t5801 = t5722*t5586;
  t5802 = -0.24*t3179*t5586;
  t5803 = t5801 + t5802;
  t5814 = -1.*t5722*t5586;
  t5815 = 0.24*t3179*t5586;
  t5820 = t5814 + t5815;
  t5869 = -1.*t2954*t5666;
  t5919 = t5893*t5786;
  t5920 = t5790*t5897;
  t5921 = t5919 + t5920;
  t5894 = -1.*t5893*t5790;
  t5898 = -1.*t5593*t5897;
  t5899 = t5894 + t5898;
  t5908 = t5893*t5790;
  t5912 = t5593*t5897;
  t5907 = t5903*t5790;
  t5915 = t5786*t5914;
  t5916 = t5907 + t5908 + t5912 + t5915;
  t5963 = -1.*t5722*t5566;
  t5964 = t5963 + t5902;
  t5924 = -1.*t5593*t5893;
  t5926 = -1.*t5897*t5666;
  t5923 = -1.*t5593*t5903;
  t5925 = -1.*t5790*t5914;
  t5927 = t5923 + t5924 + t5925 + t5926;
  t5973 = -0.24*t5585*t3179;
  t5974 = 0.24*t5566*t5586;
  t5975 = t5973 + t5974;
  t5935 = -0.384*var2[4]*t5934;
  t5937 = 3.2*t5837*t5934;
  t5938 = 3.2*t5803*t5876;
  t5944 = 6.4*t5846*t5806;
  t5945 = 3.2*t5864*t5678;
  t5946 = 3.2*t5806*t5934;
  t5947 = t5862 + t5869;
  t5948 = 3.2*t5846*t5947;
  t5949 = 3.2*t5797*t5876;
  t5950 = 6.4*t5678*t5876;
  t5951 = t5944 + t5945 + t5946 + t5948 + t5949 + t5950;
  t5952 = -0.5*var2[1]*t5951;
  t5953 = Power(t5846,2);
  t5954 = 6.4*t5953;
  t5955 = 6.4*t5846*t5934;
  t5956 = 6.4*t5864*t5876;
  t5957 = Power(t5876,2);
  t5958 = 6.4*t5957;
  t5959 = t5954 + t5955 + t5956 + t5958;
  t5960 = -0.5*var2[0]*t5959;
  t5961 = 3.2*t5921*t5934;
  t5962 = 3.2*t5899*t5876;
  t5970 = -1.*t5903*t5790;
  t5971 = -1.*t5786*t5897;
  t5976 = -1.*t5593*t5975;
  t5979 = -1.*t5893*t5666;
  t5989 = t5593*t5893;
  t5990 = t5903*t5786;
  t5992 = t5790*t5975;
  t5993 = t5897*t5666;
  t6039 = 3.2*t5803*t5846;
  t6040 = 3.2*t5820*t5846;
  t6041 = 3.2*t5757*t5864;
  t6042 = 3.2*t5837*t5876;
  t6043 = t6039 + t6040 + t6041 + t6042;
  t6023 = 6.4*t5846*t5864;
  t6024 = 6.4*t5846*t5876;
  t6025 = t6023 + t6024;
  t6027 = 3.2*t5846*t5797;
  t6028 = 3.2*t5806*t5864;
  t6029 = 3.2*t5846*t5678;
  t6030 = 3.2*t5806*t5876;
  t6031 = t6027 + t6028 + t6029 + t6030;
  t6033 = 3.2*t5846*t5899;
  t6034 = 3.2*t5846*t5916;
  t6035 = 3.2*t5921*t5876;
  t6036 = 3.2*t5864*t5927;
  t6037 = t6033 + t6034 + t6035 + t6036;
  t5868 = -1.*t5649*t5593;
  t5870 = t5868 + t5869;
  t5854 = -1.*t5649*t5786;
  t5855 = t5854 + t5805;
  t5844 = 6.4*t5797*t5806;
  t5856 = 3.2*t5846*t5855;
  t5866 = 3.2*t5861*t5864;
  t5867 = 6.4*t5806*t5678;
  t5874 = 3.2*t5846*t5870;
  t5877 = 3.2*t5861*t5876;
  t5878 = t5844 + t5856 + t5866 + t5867 + t5874 + t5877;
  t5965 = t5964*t5790;
  t5966 = t5786*t5897;
  t5967 = t5965 + t5908 + t5912 + t5966;
  t5972 = -1.*t5593*t5914;
  t5977 = -1.*t5964*t5666;
  t5978 = -1.*t5903*t5666;
  t5980 = t5970 + t5898 + t5971 + t5972 + t5976 + t5977 + t5978 + t5979;
  t5982 = -1.*t5593*t5964;
  t5983 = -1.*t5790*t5897;
  t5984 = t5982 + t5924 + t5983 + t5926;
  t5987 = t5593*t5964;
  t5988 = t5593*t5903;
  t5991 = t5790*t5914;
  t5994 = t5987 + t5988 + t5989 + t5990 + t5920 + t5991 + t5992 + t5993;
  t6073 = -0.384*var2[4]*t5947;
  t6001 = -1.*t5722*t3179;
  t6002 = 0.24*t5755;
  t6003 = t6001 + t6002;
  t6075 = 3.2*t5803*t5678;
  t6077 = 3.2*t5837*t5947;
  t6080 = Power(t5806,2);
  t6081 = 6.4*t6080;
  t6082 = 6.4*t5797*t5678;
  t6083 = Power(t5678,2);
  t6084 = 6.4*t6083;
  t6085 = 6.4*t5806*t5947;
  t6086 = t6081 + t6082 + t6084 + t6085;
  t6087 = -0.5*var2[1]*t6086;
  t6088 = -0.5*var2[0]*t5951;
  t6089 = 3.2*t5899*t5678;
  t6092 = 3.2*t5921*t5947;
  t6010 = -2.*t5593*t5914;
  t6011 = -2.*t5903*t5666;
  t6012 = t5970 + t5971 + t6010 + t5976 + t6011 + t5979;
  t6015 = 2.*t5593*t5903;
  t6016 = 2.*t5790*t5914;
  t6017 = t6015 + t5989 + t5990 + t6016 + t5992 + t5993;
  t6032 = -0.5*var2[4]*t6031;
  t5900 = 3.2*t5806*t5899;
  t5918 = 3.2*t5806*t5916;
  t5922 = 3.2*t5921*t5678;
  t5928 = 3.2*t5797*t5927;
  t5929 = t5900 + t5918 + t5922 + t5928;
  t5800 = 3.2*t5757*t5797;
  t5813 = 3.2*t5803*t5806;
  t5827 = 3.2*t5820*t5806;
  t5838 = 3.2*t5837*t5678;
  t5839 = t5800 + t5813 + t5827 + t5838;
  t5843 = -0.5*var2[3]*t5839;
  t6115 = t5844 + t5867;
  t5930 = -0.5*var2[2]*t5929;
  t6065 = 3.2*t5861*t5899;
  t6066 = 3.2*t5861*t5916;
  t6067 = 3.2*t5921*t5870;
  t6068 = 3.2*t5855*t5927;
  t6069 = t6065 + t6066 + t6067 + t6068;
  t5968 = 3.2*t5967*t5876;
  t5969 = 3.2*t5916*t5876;
  t5981 = 3.2*t5864*t5980;
  t5985 = 3.2*t5846*t5984;
  t5986 = 3.2*t5846*t5927;
  t5995 = 3.2*t5846*t5994;
  t5996 = t5961 + t5962 + t5968 + t5969 + t5981 + t5985 + t5986 + t5995;
  t6090 = 3.2*t5967*t5678;
  t6091 = 3.2*t5916*t5678;
  t6093 = 3.2*t5797*t5980;
  t6094 = 3.2*t5806*t5984;
  t6095 = 3.2*t5806*t5927;
  t6096 = 3.2*t5806*t5994;
  t6097 = t6089 + t6090 + t6091 + t6092 + t6093 + t6094 + t6095 + t6096;
  t6009 = 6.4*t5916*t5876;
  t6013 = 3.2*t5864*t6012;
  t6014 = 6.4*t5846*t5927;
  t6018 = 3.2*t5846*t6017;
  t6019 = t5961 + t5962 + t6009 + t6013 + t6014 + t6018;
  t6107 = 6.4*t5916*t5678;
  t6108 = 3.2*t5797*t6012;
  t6109 = 6.4*t5806*t5927;
  t6110 = 3.2*t5806*t6017;
  t6111 = t6089 + t6107 + t6092 + t6108 + t6109 + t6110;
  t6038 = -0.5*var2[4]*t6037;
  t6117 = -0.5*var2[4]*t5929;
  t6169 = 3.2*t5757*t5899;
  t6170 = 3.2*t5820*t5921;
  t6171 = 3.2*t5837*t5916;
  t6172 = 3.2*t5803*t5927;
  t6173 = t6169 + t6170 + t6171 + t6172;
  t6165 = 6.4*t5921*t5916;
  t6166 = 6.4*t5899*t5927;
  t6167 = t6165 + t6166;
  t6052 = 3.2*t5803*t5861;
  t6053 = 3.2*t5820*t5861;
  t6054 = 3.2*t5757*t5855;
  t6055 = 3.2*t5837*t5870;
  t6056 = t6052 + t6053 + t6054 + t6055;
  t6074 = 3.2*t5757*t5806;
  t6076 = 3.2*t5820*t5678;
  t6078 = t6074 + t6075 + t6076 + t6077;
  t5936 = 3.2*t5757*t5846;
  t5939 = 3.2*t5820*t5876;
  t5940 = t5936 + t5937 + t5938 + t5939;
  t6128 = 3.2*t5820*t5967;
  t6129 = 3.2*t5803*t5980;
  t6130 = 3.2*t5757*t5984;
  t6131 = 3.2*t5837*t5994;
  t6132 = t6128 + t6129 + t6130 + t6131;
  t6101 = 3.2*t5820*t5797;
  t6102 = 6.4*t5757*t5806;
  t6103 = 3.2*t6003*t5806;
  t6104 = 6.4*t5820*t5678;
  t6105 = t6101 + t6102 + t6103 + t6075 + t6104 + t6077;
  t6000 = 6.4*t5757*t5846;
  t6004 = 3.2*t6003*t5846;
  t6005 = 3.2*t5820*t5864;
  t6006 = 6.4*t5820*t5876;
  t6007 = t6000 + t6004 + t6005 + t5937 + t5938 + t6006;
  t6145 = 3.2*t5820*t5899;
  t6146 = 3.2*t6003*t5921;
  t6147 = 6.4*t5820*t5916;
  t6148 = 3.2*t5803*t6012;
  t6149 = 6.4*t5757*t5927;
  t6150 = 3.2*t5837*t6017;
  t6151 = t6145 + t6146 + t6147 + t6148 + t6149 + t6150;
  t6044 = -0.5*var2[4]*t6043;
  t6118 = -0.5*var2[4]*t5839;
  t6174 = -0.5*var2[4]*t6173;
  t6204 = 6.4*t5757*t5803;
  t6205 = 6.4*t5820*t5837;
  t6206 = t6204 + t6205;
  t6218 = -0.384*var2[0]*t5934;
  t6219 = -0.384*var2[1]*t5947;
  t5707 = -0.384*var2[4]*t5678;
  p_output1[0]=(t5707 + t5843 + t5930 - 0.5*(6.4*t5678*t5846 + 6.4*t5797*t5846 + 6.4*t5806*t5864 + 6.4*t5806*t5876)*var2[0] - 0.5*t5878*var2[1])*var2[4];
  p_output1[1]=(t5935 + t5952 + t5960 - 0.5*t5996*var2[2] - 0.5*t5940*var2[3])*var2[4];
  p_output1[2]=(t5935 + t5952 + t5960 - 0.5*t6019*var2[2] - 0.5*t6007*var2[3])*var2[4];
  p_output1[3]=-0.5*t6025*var2[4];
  p_output1[4]=t6032;
  p_output1[5]=t6038;
  p_output1[6]=t6044;
  p_output1[7]=-0.5*t6025*var2[0] - 0.5*t6031*var2[1] - 0.5*t6037*var2[2] - 0.5*t6043*var2[3] - 0.768*t5876*var2[4];
  p_output1[8]=var2[4]*(-0.5*t5878*var2[0] - 0.5*(6.4*t5806*t5855 + 6.4*t5678*t5861 + 6.4*t5797*t5861 + 6.4*t5806*t5870)*var2[1] - 0.5*t6069*var2[2] - 0.5*t6056*var2[3] - 0.384*t5870*var2[4]);
  p_output1[9]=(t6073 + t6087 + t6088 - 0.5*t6097*var2[2] - 0.5*t6078*var2[3])*var2[4];
  p_output1[10]=(t6073 + t6087 + t6088 - 0.5*t6111*var2[2] - 0.5*t6105*var2[3])*var2[4];
  p_output1[11]=t6032;
  p_output1[12]=-0.5*t6115*var2[4];
  p_output1[13]=t6117;
  p_output1[14]=t6118;
  p_output1[15]=t5843 + t5930 - 0.5*t6031*var2[0] - 0.5*t6115*var2[1] - 0.768*t5678*var2[4];
  p_output1[16]=(-0.5*t5929*var2[0] - 0.5*t6069*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t5996*var2[0] - 0.5*t6097*var2[1] - 0.5*(6.4*t5916*t5967 + 6.4*t5899*t5980 + 6.4*t5927*t5984 + 6.4*t5921*t5994)*var2[2] - 0.5*t6132*var2[3] - 0.384*t5994*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t6019*var2[0] - 0.5*t6111*var2[1] - 0.5*(6.4*Power(t5916,2) + 6.4*Power(t5927,2) + 6.4*t5899*t6012 + 6.4*t5921*t6017)*var2[2] - 0.5*t6151*var2[3] - 0.384*t6017*var2[4]);
  p_output1[19]=t6038;
  p_output1[20]=t6117;
  p_output1[21]=-0.5*t6167*var2[4];
  p_output1[22]=t6174;
  p_output1[23]=-0.5*t6037*var2[0] - 0.5*t5929*var2[1] - 0.5*t6167*var2[2] - 0.5*t6173*var2[3] - 0.768*t5916*var2[4];
  p_output1[24]=(-0.5*t5839*var2[0] - 0.5*t6056*var2[1])*var2[4];
  p_output1[25]=(-0.5*t5940*var2[0] - 0.5*t6078*var2[1] - 0.5*t6132*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t6007*var2[0] - 0.5*t6105*var2[1] - 0.5*t6151*var2[2] - 0.5*(6.4*Power(t5757,2) + 6.4*t5803*t5820 + 6.4*Power(t5820,2) + 6.4*t5837*t6003)*var2[3] - 0.384*t6003*var2[4]);
  p_output1[27]=t6044;
  p_output1[28]=t6118;
  p_output1[29]=t6174;
  p_output1[30]=-0.5*t6206*var2[4];
  p_output1[31]=-0.5*t6043*var2[0] - 0.5*t5839*var2[1] - 0.5*t6173*var2[2] - 0.5*t6206*var2[3] - 0.768*t5820*var2[4];
  p_output1[32]=(-0.384*t5678*var2[0] - 0.384*t5870*var2[1])*var2[4];
  p_output1[33]=(t6218 + t6219 - 0.384*t5994*var2[2])*var2[4];
  p_output1[34]=(t6218 + t6219 - 0.384*t6017*var2[2] - 0.384*t6003*var2[3])*var2[4];
  p_output1[35]=-0.384*t5876*var2[4];
  p_output1[36]=t5707;
  p_output1[37]=-0.384*t5916*var2[4];
  p_output1[38]=-0.384*t5820*var2[4];
  p_output1[39]=-0.384*t5876*var2[0] - 0.384*t5678*var2[1] - 0.384*t5916*var2[2] - 0.384*t5820*var2[3];
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

#include "J_Ce2_vec5_five_link_walker.hh"

namespace LeftStance
{

void J_Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
