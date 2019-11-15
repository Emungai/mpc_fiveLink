/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:40:13 GMT-05:00
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
  double t5621;
  double t5610;
  double t5615;
  double t5622;
  double t5597;
  double t5691;
  double t5753;
  double t5755;
  double t5756;
  double t5757;
  double t5789;
  double t5620;
  double t5628;
  double t5683;
  double t5824;
  double t5826;
  double t5831;
  double t5840;
  double t5847;
  double t5848;
  double t5790;
  double t5684;
  double t5700;
  double t5711;
  double t5712;
  double t5741;
  double t5742;
  double t5820;
  double t5821;
  double t5822;
  double t5823;
  double t5834;
  double t5835;
  double t5888;
  double t5889;
  double t5896;
  double t5897;
  double t5898;
  double t5900;
  double t5901;
  double t5911;
  double t5912;
  double t5927;
  double t5928;
  double t5929;
  double t5931;
  double t5932;
  double t5933;
  double t5937;
  double t5941;
  double t5942;
  double t5949;
  double t5950;
  double t5791;
  double t5797;
  double t5815;
  double t5871;
  double t5872;
  double t5873;
  double t5969;
  double t5970;
  double t5837;
  double t5838;
  double t5839;
  double t5854;
  double t5861;
  double t5862;
  double t5908;
  double t5955;
  double t5956;
  double t5957;
  double t5930;
  double t5934;
  double t5935;
  double t5947;
  double t5948;
  double t5946;
  double t5952;
  double t5953;
  double t5999;
  double t6000;
  double t5960;
  double t5962;
  double t5959;
  double t5961;
  double t5963;
  double t6009;
  double t6010;
  double t6011;
  double t5971;
  double t5973;
  double t5974;
  double t5980;
  double t5981;
  double t5982;
  double t5983;
  double t5984;
  double t5985;
  double t5986;
  double t5987;
  double t5988;
  double t5989;
  double t5990;
  double t5991;
  double t5992;
  double t5993;
  double t5994;
  double t5995;
  double t5996;
  double t5997;
  double t5998;
  double t6006;
  double t6007;
  double t6012;
  double t6015;
  double t6025;
  double t6026;
  double t6028;
  double t6029;
  double t6075;
  double t6076;
  double t6077;
  double t6078;
  double t6079;
  double t6059;
  double t6060;
  double t6061;
  double t6063;
  double t6064;
  double t6065;
  double t6066;
  double t6067;
  double t6069;
  double t6070;
  double t6071;
  double t6072;
  double t6073;
  double t5904;
  double t5909;
  double t5890;
  double t5893;
  double t5880;
  double t5895;
  double t5902;
  double t5903;
  double t5910;
  double t5913;
  double t5914;
  double t6001;
  double t6002;
  double t6003;
  double t6008;
  double t6013;
  double t6014;
  double t6016;
  double t6018;
  double t6019;
  double t6020;
  double t6023;
  double t6024;
  double t6027;
  double t6030;
  double t6109;
  double t6037;
  double t6038;
  double t6039;
  double t6111;
  double t6113;
  double t6116;
  double t6117;
  double t6118;
  double t6119;
  double t6120;
  double t6121;
  double t6122;
  double t6123;
  double t6124;
  double t6125;
  double t6128;
  double t6046;
  double t6047;
  double t6048;
  double t6051;
  double t6052;
  double t6053;
  double t6068;
  double t5936;
  double t5954;
  double t5958;
  double t5964;
  double t5965;
  double t5836;
  double t5849;
  double t5863;
  double t5877;
  double t5878;
  double t5879;
  double t6151;
  double t5966;
  double t6101;
  double t6102;
  double t6103;
  double t6104;
  double t6105;
  double t6004;
  double t6005;
  double t6017;
  double t6021;
  double t6022;
  double t6031;
  double t6032;
  double t6126;
  double t6127;
  double t6129;
  double t6130;
  double t6131;
  double t6132;
  double t6133;
  double t6045;
  double t6049;
  double t6050;
  double t6054;
  double t6055;
  double t6143;
  double t6144;
  double t6145;
  double t6146;
  double t6147;
  double t6074;
  double t6153;
  double t6205;
  double t6206;
  double t6207;
  double t6208;
  double t6209;
  double t6201;
  double t6202;
  double t6203;
  double t6088;
  double t6089;
  double t6090;
  double t6091;
  double t6092;
  double t6110;
  double t6112;
  double t6114;
  double t5972;
  double t5975;
  double t5978;
  double t6164;
  double t6165;
  double t6166;
  double t6167;
  double t6168;
  double t6137;
  double t6138;
  double t6139;
  double t6140;
  double t6141;
  double t6036;
  double t6040;
  double t6041;
  double t6042;
  double t6043;
  double t6181;
  double t6182;
  double t6183;
  double t6184;
  double t6185;
  double t6186;
  double t6187;
  double t6080;
  double t6154;
  double t6210;
  double t6240;
  double t6241;
  double t6242;
  double t6254;
  double t6255;
  double t5743;
  t5621 = Cos(var1[3]);
  t5610 = Cos(var1[4]);
  t5615 = Sin(var1[3]);
  t5622 = Sin(var1[4]);
  t5597 = Sin(var1[2]);
  t5691 = Cos(var1[2]);
  t5753 = -1.*t5610;
  t5755 = 1. + t5753;
  t5756 = 0.4*t5755;
  t5757 = 0.64*t5610;
  t5789 = t5756 + t5757;
  t5620 = -1.*t5610*t5615;
  t5628 = -1.*t5621*t5622;
  t5683 = t5620 + t5628;
  t5824 = t5621*t5610;
  t5826 = -1.*t5615*t5622;
  t5831 = t5824 + t5826;
  t5840 = t5691*t5683;
  t5847 = -1.*t5597*t5831;
  t5848 = t5840 + t5847;
  t5790 = t5789*t5610;
  t5684 = -1.*t5597*t5683;
  t5700 = -1.*t5621*t5610;
  t5711 = t5615*t5622;
  t5712 = t5700 + t5711;
  t5741 = t5691*t5712;
  t5742 = t5684 + t5741;
  t5820 = t5610*t5615;
  t5821 = t5621*t5622;
  t5822 = t5820 + t5821;
  t5823 = -1.*t5597*t5822;
  t5834 = t5691*t5831;
  t5835 = t5823 + t5834;
  t5888 = t5597*t5683;
  t5889 = t5888 + t5834;
  t5896 = -1.*t5691*t5831;
  t5897 = t5684 + t5896;
  t5898 = t5691*t5822;
  t5900 = t5597*t5831;
  t5901 = t5898 + t5900;
  t5911 = t5597*t5712;
  t5912 = t5840 + t5911;
  t5927 = t5789*t5615;
  t5928 = 0.24*t5621*t5622;
  t5929 = t5927 + t5928;
  t5931 = t5621*t5789;
  t5932 = -0.24*t5615*t5622;
  t5933 = t5931 + t5932;
  t5937 = -0.24*t5610*t5615;
  t5941 = -0.24*t5621*t5622;
  t5942 = t5937 + t5941;
  t5949 = 0.24*t5621*t5610;
  t5950 = t5949 + t5932;
  t5791 = Power(t5610,2);
  t5797 = -0.24*t5791;
  t5815 = t5790 + t5797;
  t5871 = Power(t5622,2);
  t5872 = 0.24*t5871;
  t5873 = t5790 + t5872;
  t5969 = t5597*t5822;
  t5970 = t5969 + t5741;
  t5837 = t5789*t5622;
  t5838 = -0.24*t5610*t5622;
  t5839 = t5837 + t5838;
  t5854 = -1.*t5789*t5622;
  t5861 = 0.24*t5610*t5622;
  t5862 = t5854 + t5861;
  t5908 = -1.*t5597*t5712;
  t5955 = t5929*t5822;
  t5956 = t5831*t5933;
  t5957 = t5955 + t5956;
  t5930 = -1.*t5929*t5831;
  t5934 = -1.*t5683*t5933;
  t5935 = t5930 + t5934;
  t5947 = t5929*t5831;
  t5948 = t5683*t5933;
  t5946 = t5942*t5831;
  t5952 = t5822*t5950;
  t5953 = t5946 + t5947 + t5948 + t5952;
  t5999 = -1.*t5789*t5615;
  t6000 = t5999 + t5941;
  t5960 = -1.*t5683*t5929;
  t5962 = -1.*t5933*t5712;
  t5959 = -1.*t5683*t5942;
  t5961 = -1.*t5831*t5950;
  t5963 = t5959 + t5960 + t5961 + t5962;
  t6009 = -0.24*t5621*t5610;
  t6010 = 0.24*t5615*t5622;
  t6011 = t6009 + t6010;
  t5971 = -0.384*var2[4]*t5970;
  t5973 = 3.2*t5873*t5970;
  t5974 = 3.2*t5839*t5912;
  t5980 = 6.4*t5889*t5848;
  t5981 = 3.2*t5901*t5742;
  t5982 = 3.2*t5848*t5970;
  t5983 = t5898 + t5908;
  t5984 = 3.2*t5889*t5983;
  t5985 = 3.2*t5835*t5912;
  t5986 = 6.4*t5742*t5912;
  t5987 = t5980 + t5981 + t5982 + t5984 + t5985 + t5986;
  t5988 = -0.5*var2[1]*t5987;
  t5989 = Power(t5889,2);
  t5990 = 6.4*t5989;
  t5991 = 6.4*t5889*t5970;
  t5992 = 6.4*t5901*t5912;
  t5993 = Power(t5912,2);
  t5994 = 6.4*t5993;
  t5995 = t5990 + t5991 + t5992 + t5994;
  t5996 = -0.5*var2[0]*t5995;
  t5997 = 3.2*t5957*t5970;
  t5998 = 3.2*t5935*t5912;
  t6006 = -1.*t5942*t5831;
  t6007 = -1.*t5822*t5933;
  t6012 = -1.*t5683*t6011;
  t6015 = -1.*t5929*t5712;
  t6025 = t5683*t5929;
  t6026 = t5942*t5822;
  t6028 = t5831*t6011;
  t6029 = t5933*t5712;
  t6075 = 3.2*t5839*t5889;
  t6076 = 3.2*t5862*t5889;
  t6077 = 3.2*t5815*t5901;
  t6078 = 3.2*t5873*t5912;
  t6079 = t6075 + t6076 + t6077 + t6078;
  t6059 = 6.4*t5889*t5901;
  t6060 = 6.4*t5889*t5912;
  t6061 = t6059 + t6060;
  t6063 = 3.2*t5889*t5835;
  t6064 = 3.2*t5848*t5901;
  t6065 = 3.2*t5889*t5742;
  t6066 = 3.2*t5848*t5912;
  t6067 = t6063 + t6064 + t6065 + t6066;
  t6069 = 3.2*t5889*t5935;
  t6070 = 3.2*t5889*t5953;
  t6071 = 3.2*t5957*t5912;
  t6072 = 3.2*t5901*t5963;
  t6073 = t6069 + t6070 + t6071 + t6072;
  t5904 = -1.*t5691*t5683;
  t5909 = t5904 + t5908;
  t5890 = -1.*t5691*t5822;
  t5893 = t5890 + t5847;
  t5880 = 6.4*t5835*t5848;
  t5895 = 3.2*t5889*t5893;
  t5902 = 3.2*t5897*t5901;
  t5903 = 6.4*t5848*t5742;
  t5910 = 3.2*t5889*t5909;
  t5913 = 3.2*t5897*t5912;
  t5914 = t5880 + t5895 + t5902 + t5903 + t5910 + t5913;
  t6001 = t6000*t5831;
  t6002 = t5822*t5933;
  t6003 = t6001 + t5947 + t5948 + t6002;
  t6008 = -1.*t5683*t5950;
  t6013 = -1.*t6000*t5712;
  t6014 = -1.*t5942*t5712;
  t6016 = t6006 + t5934 + t6007 + t6008 + t6012 + t6013 + t6014 + t6015;
  t6018 = -1.*t5683*t6000;
  t6019 = -1.*t5831*t5933;
  t6020 = t6018 + t5960 + t6019 + t5962;
  t6023 = t5683*t6000;
  t6024 = t5683*t5942;
  t6027 = t5831*t5950;
  t6030 = t6023 + t6024 + t6025 + t6026 + t5956 + t6027 + t6028 + t6029;
  t6109 = -0.384*var2[4]*t5983;
  t6037 = -1.*t5789*t5610;
  t6038 = 0.24*t5791;
  t6039 = t6037 + t6038;
  t6111 = 3.2*t5839*t5742;
  t6113 = 3.2*t5873*t5983;
  t6116 = Power(t5848,2);
  t6117 = 6.4*t6116;
  t6118 = 6.4*t5835*t5742;
  t6119 = Power(t5742,2);
  t6120 = 6.4*t6119;
  t6121 = 6.4*t5848*t5983;
  t6122 = t6117 + t6118 + t6120 + t6121;
  t6123 = -0.5*var2[1]*t6122;
  t6124 = -0.5*var2[0]*t5987;
  t6125 = 3.2*t5935*t5742;
  t6128 = 3.2*t5957*t5983;
  t6046 = -2.*t5683*t5950;
  t6047 = -2.*t5942*t5712;
  t6048 = t6006 + t6007 + t6046 + t6012 + t6047 + t6015;
  t6051 = 2.*t5683*t5942;
  t6052 = 2.*t5831*t5950;
  t6053 = t6051 + t6025 + t6026 + t6052 + t6028 + t6029;
  t6068 = -0.5*var2[4]*t6067;
  t5936 = 3.2*t5848*t5935;
  t5954 = 3.2*t5848*t5953;
  t5958 = 3.2*t5957*t5742;
  t5964 = 3.2*t5835*t5963;
  t5965 = t5936 + t5954 + t5958 + t5964;
  t5836 = 3.2*t5815*t5835;
  t5849 = 3.2*t5839*t5848;
  t5863 = 3.2*t5862*t5848;
  t5877 = 3.2*t5873*t5742;
  t5878 = t5836 + t5849 + t5863 + t5877;
  t5879 = -0.5*var2[3]*t5878;
  t6151 = t5880 + t5903;
  t5966 = -0.5*var2[2]*t5965;
  t6101 = 3.2*t5897*t5935;
  t6102 = 3.2*t5897*t5953;
  t6103 = 3.2*t5957*t5909;
  t6104 = 3.2*t5893*t5963;
  t6105 = t6101 + t6102 + t6103 + t6104;
  t6004 = 3.2*t6003*t5912;
  t6005 = 3.2*t5953*t5912;
  t6017 = 3.2*t5901*t6016;
  t6021 = 3.2*t5889*t6020;
  t6022 = 3.2*t5889*t5963;
  t6031 = 3.2*t5889*t6030;
  t6032 = t5997 + t5998 + t6004 + t6005 + t6017 + t6021 + t6022 + t6031;
  t6126 = 3.2*t6003*t5742;
  t6127 = 3.2*t5953*t5742;
  t6129 = 3.2*t5835*t6016;
  t6130 = 3.2*t5848*t6020;
  t6131 = 3.2*t5848*t5963;
  t6132 = 3.2*t5848*t6030;
  t6133 = t6125 + t6126 + t6127 + t6128 + t6129 + t6130 + t6131 + t6132;
  t6045 = 6.4*t5953*t5912;
  t6049 = 3.2*t5901*t6048;
  t6050 = 6.4*t5889*t5963;
  t6054 = 3.2*t5889*t6053;
  t6055 = t5997 + t5998 + t6045 + t6049 + t6050 + t6054;
  t6143 = 6.4*t5953*t5742;
  t6144 = 3.2*t5835*t6048;
  t6145 = 6.4*t5848*t5963;
  t6146 = 3.2*t5848*t6053;
  t6147 = t6125 + t6143 + t6128 + t6144 + t6145 + t6146;
  t6074 = -0.5*var2[4]*t6073;
  t6153 = -0.5*var2[4]*t5965;
  t6205 = 3.2*t5815*t5935;
  t6206 = 3.2*t5862*t5957;
  t6207 = 3.2*t5873*t5953;
  t6208 = 3.2*t5839*t5963;
  t6209 = t6205 + t6206 + t6207 + t6208;
  t6201 = 6.4*t5957*t5953;
  t6202 = 6.4*t5935*t5963;
  t6203 = t6201 + t6202;
  t6088 = 3.2*t5839*t5897;
  t6089 = 3.2*t5862*t5897;
  t6090 = 3.2*t5815*t5893;
  t6091 = 3.2*t5873*t5909;
  t6092 = t6088 + t6089 + t6090 + t6091;
  t6110 = 3.2*t5815*t5848;
  t6112 = 3.2*t5862*t5742;
  t6114 = t6110 + t6111 + t6112 + t6113;
  t5972 = 3.2*t5815*t5889;
  t5975 = 3.2*t5862*t5912;
  t5978 = t5972 + t5973 + t5974 + t5975;
  t6164 = 3.2*t5862*t6003;
  t6165 = 3.2*t5839*t6016;
  t6166 = 3.2*t5815*t6020;
  t6167 = 3.2*t5873*t6030;
  t6168 = t6164 + t6165 + t6166 + t6167;
  t6137 = 3.2*t5862*t5835;
  t6138 = 6.4*t5815*t5848;
  t6139 = 3.2*t6039*t5848;
  t6140 = 6.4*t5862*t5742;
  t6141 = t6137 + t6138 + t6139 + t6111 + t6140 + t6113;
  t6036 = 6.4*t5815*t5889;
  t6040 = 3.2*t6039*t5889;
  t6041 = 3.2*t5862*t5901;
  t6042 = 6.4*t5862*t5912;
  t6043 = t6036 + t6040 + t6041 + t5973 + t5974 + t6042;
  t6181 = 3.2*t5862*t5935;
  t6182 = 3.2*t6039*t5957;
  t6183 = 6.4*t5862*t5953;
  t6184 = 3.2*t5839*t6048;
  t6185 = 6.4*t5815*t5963;
  t6186 = 3.2*t5873*t6053;
  t6187 = t6181 + t6182 + t6183 + t6184 + t6185 + t6186;
  t6080 = -0.5*var2[4]*t6079;
  t6154 = -0.5*var2[4]*t5878;
  t6210 = -0.5*var2[4]*t6209;
  t6240 = 6.4*t5815*t5839;
  t6241 = 6.4*t5862*t5873;
  t6242 = t6240 + t6241;
  t6254 = -0.384*var2[0]*t5970;
  t6255 = -0.384*var2[1]*t5983;
  t5743 = -0.384*var2[4]*t5742;
  p_output1[0]=(t5743 + t5879 + t5966 - 0.5*(6.4*t5742*t5889 + 6.4*t5835*t5889 + 6.4*t5848*t5901 + 6.4*t5848*t5912)*var2[0] - 0.5*t5914*var2[1])*var2[4];
  p_output1[1]=(t5971 + t5988 + t5996 - 0.5*t6032*var2[2] - 0.5*t5978*var2[3])*var2[4];
  p_output1[2]=(t5971 + t5988 + t5996 - 0.5*t6055*var2[2] - 0.5*t6043*var2[3])*var2[4];
  p_output1[3]=-0.5*t6061*var2[4];
  p_output1[4]=t6068;
  p_output1[5]=t6074;
  p_output1[6]=t6080;
  p_output1[7]=-0.5*t6061*var2[0] - 0.5*t6067*var2[1] - 0.5*t6073*var2[2] - 0.5*t6079*var2[3] - 0.768*t5912*var2[4];
  p_output1[8]=var2[4]*(-0.5*t5914*var2[0] - 0.5*(6.4*t5848*t5893 + 6.4*t5742*t5897 + 6.4*t5835*t5897 + 6.4*t5848*t5909)*var2[1] - 0.5*t6105*var2[2] - 0.5*t6092*var2[3] - 0.384*t5909*var2[4]);
  p_output1[9]=(t6109 + t6123 + t6124 - 0.5*t6133*var2[2] - 0.5*t6114*var2[3])*var2[4];
  p_output1[10]=(t6109 + t6123 + t6124 - 0.5*t6147*var2[2] - 0.5*t6141*var2[3])*var2[4];
  p_output1[11]=t6068;
  p_output1[12]=-0.5*t6151*var2[4];
  p_output1[13]=t6153;
  p_output1[14]=t6154;
  p_output1[15]=t5879 + t5966 - 0.5*t6067*var2[0] - 0.5*t6151*var2[1] - 0.768*t5742*var2[4];
  p_output1[16]=(-0.5*t5965*var2[0] - 0.5*t6105*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t6032*var2[0] - 0.5*t6133*var2[1] - 0.5*(6.4*t5953*t6003 + 6.4*t5935*t6016 + 6.4*t5963*t6020 + 6.4*t5957*t6030)*var2[2] - 0.5*t6168*var2[3] - 0.384*t6030*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t6055*var2[0] - 0.5*t6147*var2[1] - 0.5*(6.4*Power(t5953,2) + 6.4*Power(t5963,2) + 6.4*t5935*t6048 + 6.4*t5957*t6053)*var2[2] - 0.5*t6187*var2[3] - 0.384*t6053*var2[4]);
  p_output1[19]=t6074;
  p_output1[20]=t6153;
  p_output1[21]=-0.5*t6203*var2[4];
  p_output1[22]=t6210;
  p_output1[23]=-0.5*t6073*var2[0] - 0.5*t5965*var2[1] - 0.5*t6203*var2[2] - 0.5*t6209*var2[3] - 0.768*t5953*var2[4];
  p_output1[24]=(-0.5*t5878*var2[0] - 0.5*t6092*var2[1])*var2[4];
  p_output1[25]=(-0.5*t5978*var2[0] - 0.5*t6114*var2[1] - 0.5*t6168*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t6043*var2[0] - 0.5*t6141*var2[1] - 0.5*t6187*var2[2] - 0.5*(6.4*Power(t5815,2) + 6.4*t5839*t5862 + 6.4*Power(t5862,2) + 6.4*t5873*t6039)*var2[3] - 0.384*t6039*var2[4]);
  p_output1[27]=t6080;
  p_output1[28]=t6154;
  p_output1[29]=t6210;
  p_output1[30]=-0.5*t6242*var2[4];
  p_output1[31]=-0.5*t6079*var2[0] - 0.5*t5878*var2[1] - 0.5*t6209*var2[2] - 0.5*t6242*var2[3] - 0.768*t5862*var2[4];
  p_output1[32]=(-0.384*t5742*var2[0] - 0.384*t5909*var2[1])*var2[4];
  p_output1[33]=(t6254 + t6255 - 0.384*t6030*var2[2])*var2[4];
  p_output1[34]=(t6254 + t6255 - 0.384*t6053*var2[2] - 0.384*t6039*var2[3])*var2[4];
  p_output1[35]=-0.384*t5912*var2[4];
  p_output1[36]=t5743;
  p_output1[37]=-0.384*t5953*var2[4];
  p_output1[38]=-0.384*t5862*var2[4];
  p_output1[39]=-0.384*t5912*var2[0] - 0.384*t5742*var2[1] - 0.384*t5953*var2[2] - 0.384*t5862*var2[3];
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

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
