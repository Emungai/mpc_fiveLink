/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:24 GMT-05:00
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
  double t8995;
  double t2914;
  double t6119;
  double t9153;
  double t9336;
  double t127;
  double t12818;
  double t12819;
  double t12820;
  double t12890;
  double t12891;
  double t12892;
  double t12893;
  double t12894;
  double t8994;
  double t9164;
  double t9240;
  double t9255;
  double t12825;
  double t12826;
  double t12925;
  double t12922;
  double t12923;
  double t12926;
  double t12930;
  double t12931;
  double t12932;
  double t12940;
  double t12941;
  double t12942;
  double t12943;
  double t12944;
  double t12924;
  double t12927;
  double t12928;
  double t12929;
  double t12933;
  double t12934;
  double t12881;
  double t12882;
  double t12883;
  double t12962;
  double t12963;
  double t12964;
  double t12912;
  double t12903;
  double t12904;
  double t12910;
  double t12911;
  double t12913;
  double t12936;
  double t12937;
  double t12938;
  double t12977;
  double t12978;
  double t12979;
  double t12952;
  double t12948;
  double t12949;
  double t12950;
  double t12951;
  double t12953;
  double t12966;
  double t12967;
  double t12968;
  double t12970;
  double t12971;
  double t12973;
  double t12974;
  double t12975;
  double t12981;
  double t12982;
  double t12983;
  double t12985;
  double t12986;
  double t12988;
  double t12989;
  double t12990;
  double t13043;
  double t13044;
  double t13045;
  double t13047;
  double t13048;
  double t13049;
  double t13063;
  double t13064;
  double t13065;
  double t13067;
  double t13068;
  double t13069;
  double t12884;
  double t12895;
  double t12901;
  double t12902;
  double t12915;
  double t12916;
  double t12917;
  double t12918;
  double t13081;
  double t13082;
  double t13083;
  double t13084;
  double t13085;
  double t12965;
  double t12969;
  double t12994;
  double t12995;
  double t12996;
  double t12997;
  double t12998;
  double t12999;
  double t13000;
  double t13001;
  double t13002;
  double t13003;
  double t13037;
  double t13038;
  double t13039;
  double t13040;
  double t13041;
  double t13042;
  double t13046;
  double t13050;
  double t13051;
  double t13053;
  double t13054;
  double t13055;
  double t13104;
  double t13105;
  double t13106;
  double t13086;
  double t13087;
  double t13088;
  double t13091;
  double t13092;
  double t13095;
  double t13096;
  double t13097;
  double t13098;
  double t13099;
  double t13100;
  double t13103;
  double t13108;
  double t13109;
  double t13113;
  double t13138;
  double t13139;
  double t13115;
  double t13141;
  double t13142;
  double t13117;
  double t12939;
  double t12945;
  double t12946;
  double t12947;
  double t12955;
  double t12956;
  double t12957;
  double t12958;
  double t13154;
  double t13155;
  double t13156;
  double t13157;
  double t13158;
  double t12980;
  double t12984;
  double t13014;
  double t13015;
  double t13016;
  double t13017;
  double t13018;
  double t13019;
  double t13020;
  double t13021;
  double t13022;
  double t13023;
  double t13057;
  double t13058;
  double t13059;
  double t13060;
  double t13061;
  double t13062;
  double t13066;
  double t13070;
  double t13071;
  double t13073;
  double t13074;
  double t13075;
  double t13177;
  double t13178;
  double t13179;
  double t13159;
  double t13160;
  double t13161;
  double t13164;
  double t13165;
  double t13168;
  double t13169;
  double t13170;
  double t13171;
  double t13172;
  double t13173;
  double t13176;
  double t13181;
  double t13182;
  double t13186;
  double t13211;
  double t13212;
  double t13188;
  double t13214;
  double t13215;
  double t13190;
  t8995 = Cos(var1[3]);
  t2914 = Cos(var1[4]);
  t6119 = Sin(var1[3]);
  t9153 = Sin(var1[4]);
  t9336 = Sin(var1[2]);
  t127 = Cos(var1[2]);
  t12818 = t8995*t2914;
  t12819 = -1.*t6119*t9153;
  t12820 = t12818 + t12819;
  t12890 = -1.*t2914;
  t12891 = 1. + t12890;
  t12892 = 0.4*t12891;
  t12893 = 0.64*t2914;
  t12894 = t12892 + t12893;
  t8994 = -1.*t2914*t6119;
  t9164 = -1.*t8995*t9153;
  t9240 = t8994 + t9164;
  t9255 = t127*t9240;
  t12825 = -1.*t9336*t12820;
  t12826 = t9255 + t12825;
  t12925 = Cos(var1[5]);
  t12922 = Cos(var1[6]);
  t12923 = Sin(var1[5]);
  t12926 = Sin(var1[6]);
  t12930 = t12925*t12922;
  t12931 = -1.*t12923*t12926;
  t12932 = t12930 + t12931;
  t12940 = -1.*t12922;
  t12941 = 1. + t12940;
  t12942 = 0.4*t12941;
  t12943 = 0.64*t12922;
  t12944 = t12942 + t12943;
  t12924 = -1.*t12922*t12923;
  t12927 = -1.*t12925*t12926;
  t12928 = t12924 + t12927;
  t12929 = t127*t12928;
  t12933 = -1.*t9336*t12932;
  t12934 = t12929 + t12933;
  t12881 = -1.*t8995*t9336;
  t12882 = -1.*t127*t6119;
  t12883 = t12881 + t12882;
  t12962 = t127*t8995;
  t12963 = -1.*t9336*t6119;
  t12964 = t12962 + t12963;
  t12912 = t127*t12820;
  t12903 = t2914*t6119;
  t12904 = t8995*t9153;
  t12910 = t12903 + t12904;
  t12911 = -1.*t9336*t12910;
  t12913 = t12911 + t12912;
  t12936 = -1.*t12925*t9336;
  t12937 = -1.*t127*t12923;
  t12938 = t12936 + t12937;
  t12977 = t127*t12925;
  t12978 = -1.*t9336*t12923;
  t12979 = t12977 + t12978;
  t12952 = t127*t12932;
  t12948 = t12922*t12923;
  t12949 = t12925*t12926;
  t12950 = t12948 + t12949;
  t12951 = -1.*t9336*t12950;
  t12953 = t12951 + t12952;
  t12966 = t8995*t9336;
  t12967 = t127*t6119;
  t12968 = t12966 + t12967;
  t12970 = t9336*t9240;
  t12971 = t12970 + t12912;
  t12973 = t127*t12910;
  t12974 = t9336*t12820;
  t12975 = t12973 + t12974;
  t12981 = t12925*t9336;
  t12982 = t127*t12923;
  t12983 = t12981 + t12982;
  t12985 = t9336*t12928;
  t12986 = t12985 + t12952;
  t12988 = t127*t12950;
  t12989 = t9336*t12932;
  t12990 = t12988 + t12989;
  t13043 = t12894*t6119;
  t13044 = 0.24*t8995*t9153;
  t13045 = t13043 + t13044;
  t13047 = t8995*t12894;
  t13048 = -0.24*t6119*t9153;
  t13049 = t13047 + t13048;
  t13063 = t12944*t12923;
  t13064 = 0.24*t12925*t12926;
  t13065 = t13063 + t13064;
  t13067 = t12925*t12944;
  t13068 = -0.24*t12923*t12926;
  t13069 = t13067 + t13068;
  t12884 = -0.748*t12883;
  t12895 = t12894*t9153;
  t12901 = -0.24*t2914*t9153;
  t12902 = t12895 + t12901;
  t12915 = t12894*t2914;
  t12916 = Power(t9153,2);
  t12917 = 0.24*t12916;
  t12918 = t12915 + t12917;
  t13081 = -1.*t8995*t2914;
  t13082 = t6119*t9153;
  t13083 = t13081 + t13082;
  t13084 = t9336*t13083;
  t13085 = t9255 + t13084;
  t12965 = -13.6*t12883*t12964;
  t12969 = -13.6*t12968*t12964;
  t12994 = Power(t12883,2);
  t12995 = -6.8*t12994;
  t12996 = -6.8*t12883*t12968;
  t12997 = Power(t12964,2);
  t12998 = -6.8*t12997;
  t12999 = -1.*t127*t8995;
  t13000 = t9336*t6119;
  t13001 = t12999 + t13000;
  t13002 = -6.8*t12964*t13001;
  t13003 = -1.*t9336*t9240;
  t13037 = Power(t8995,2);
  t13038 = 0.11*t13037;
  t13039 = Power(t6119,2);
  t13040 = 0.11*t13039;
  t13041 = t13038 + t13040;
  t13042 = -6.8*t12883*t13041;
  t13046 = -1.*t13045*t12820;
  t13050 = -1.*t9240*t13049;
  t13051 = t13046 + t13050;
  t13053 = t13045*t12910;
  t13054 = t12820*t13049;
  t13055 = t13053 + t13054;
  t13104 = -1.*t12894*t6119;
  t13105 = -0.24*t8995*t9153;
  t13106 = t13104 + t13105;
  t13086 = 0.384*var2[4]*t13085;
  t13087 = -3.2*t12902*t12971;
  t13088 = -3.2*t12918*t13085;
  t13091 = -6.4*t12971*t12975;
  t13092 = -6.4*t12971*t13085;
  t13095 = -3.2*t12971*t12913;
  t13096 = -3.2*t12826*t12975;
  t13097 = t127*t13083;
  t13098 = t13003 + t13097;
  t13099 = -3.2*t12971*t13098;
  t13100 = -3.2*t12826*t13085;
  t13103 = -3.2*t12971*t13051;
  t13108 = t13045*t12820;
  t13109 = t9240*t13049;
  t13113 = -3.2*t13055*t13085;
  t13138 = -0.24*t2914*t6119;
  t13139 = t13138 + t13105;
  t13115 = -1.*t9240*t13045;
  t13141 = 0.24*t8995*t2914;
  t13142 = t13141 + t13048;
  t13117 = -1.*t13049*t13083;
  t12939 = -0.748*t12938;
  t12945 = t12944*t12926;
  t12946 = -0.24*t12922*t12926;
  t12947 = t12945 + t12946;
  t12955 = t12944*t12922;
  t12956 = Power(t12926,2);
  t12957 = 0.24*t12956;
  t12958 = t12955 + t12957;
  t13154 = -1.*t12925*t12922;
  t13155 = t12923*t12926;
  t13156 = t13154 + t13155;
  t13157 = t9336*t13156;
  t13158 = t12929 + t13157;
  t12980 = -13.6*t12938*t12979;
  t12984 = -13.6*t12983*t12979;
  t13014 = Power(t12938,2);
  t13015 = -6.8*t13014;
  t13016 = -6.8*t12938*t12983;
  t13017 = Power(t12979,2);
  t13018 = -6.8*t13017;
  t13019 = -1.*t127*t12925;
  t13020 = t9336*t12923;
  t13021 = t13019 + t13020;
  t13022 = -6.8*t12979*t13021;
  t13023 = -1.*t9336*t12928;
  t13057 = Power(t12925,2);
  t13058 = 0.11*t13057;
  t13059 = Power(t12923,2);
  t13060 = 0.11*t13059;
  t13061 = t13058 + t13060;
  t13062 = -6.8*t12938*t13061;
  t13066 = -1.*t13065*t12932;
  t13070 = -1.*t12928*t13069;
  t13071 = t13066 + t13070;
  t13073 = t13065*t12950;
  t13074 = t12932*t13069;
  t13075 = t13073 + t13074;
  t13177 = -1.*t12944*t12923;
  t13178 = -0.24*t12925*t12926;
  t13179 = t13177 + t13178;
  t13159 = 0.384*var2[6]*t13158;
  t13160 = -3.2*t12947*t12986;
  t13161 = -3.2*t12958*t13158;
  t13164 = -6.4*t12986*t12990;
  t13165 = -6.4*t12986*t13158;
  t13168 = -3.2*t12986*t12953;
  t13169 = -3.2*t12934*t12990;
  t13170 = t127*t13156;
  t13171 = t13023 + t13170;
  t13172 = -3.2*t12986*t13171;
  t13173 = -3.2*t12934*t13158;
  t13176 = -3.2*t12986*t13071;
  t13181 = t13065*t12932;
  t13182 = t12928*t13069;
  t13186 = -3.2*t13075*t13158;
  t13211 = -0.24*t12922*t12923;
  t13212 = t13211 + t13178;
  t13188 = -1.*t12928*t13065;
  t13214 = 0.24*t12925*t12922;
  t13215 = t13214 + t13068;
  t13190 = -1.*t13069*t13156;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(t12965 + t12969 - 6.4*t12826*t12971 - 6.4*t12913*t12975 + t12980 + t12984 - 6.4*t12934*t12986 - 6.4*t12953*t12990)*var2[0] - 0.5*(-3.2*Power(t12826,2) - 3.2*Power(t12913,2) - 3.2*Power(t12934,2) - 3.2*Power(t12953,2) - 3.2*(t12825 - 1.*t127*t12910)*t12975 - 3.2*(t12933 - 1.*t127*t12950)*t12990 + t12995 + t12996 + t12998 + t13002 - 3.2*t12971*(-1.*t127*t12820 + t13003) + t13015 + t13016 + t13018 + t13022 - 3.2*t12986*(-1.*t127*t12932 + t13023))*var2[1] - 0.5*(t13042 - 3.2*t12913*t13051 - 3.2*t12826*t13055 + t13062 - 3.2*t12953*t13071 - 3.2*t12934*t13075 + 2.88*t9336)*var2[2] - 0.5*(t12884 - 3.2*t12902*t12913 - 3.2*t12826*t12918)*var2[3] + 0.384*t12826*var2[4] - 0.5*(t12939 - 3.2*t12947*t12953 - 3.2*t12934*t12958)*var2[5] + 0.384*t12934*var2[6]);
  p_output1[3]=var2[0]*(t13086 - 0.5*(t12965 + t12969 + t13091 + t13092)*var2[0] - 0.5*(t12995 + t12996 + t12998 + t13002 + t13095 + t13096 + t13099 + t13100)*var2[1] - 0.5*(t13042 + t13103 - 3.2*t12971*(t12910*t13049 + t12820*t13106 + t13108 + t13109) + t13113 - 3.2*t12975*(-1.*t12820*t13049 + t13115 + t13117 - 1.*t13106*t9240))*var2[2] - 0.5*(t12884 + t13087 + t13088)*var2[3]);
  p_output1[4]=var2[0]*(t13086 - 0.5*(t13091 + t13092)*var2[0] - 0.5*(t13095 + t13096 + t13099 + t13100)*var2[1] - 0.5*(t13103 + t13113 - 3.2*t12971*(t13108 + t13109 + t12820*t13139 + t12910*t13142) - 3.2*t12975*(t13115 + t13117 - 1.*t12820*t13142 - 1.*t13139*t9240))*var2[2] - 0.5*(t13087 + t13088 - 3.2*t12975*(t12915 - 0.24*Power(t2914,2)) - 3.2*t12971*(-1.*t12894*t9153 + 0.24*t2914*t9153))*var2[3]);
  p_output1[5]=var2[0]*(t13159 - 0.5*(t12980 + t12984 + t13164 + t13165)*var2[0] - 0.5*(t13015 + t13016 + t13018 + t13022 + t13168 + t13169 + t13172 + t13173)*var2[1] - 0.5*(t13062 + t13176 - 3.2*t12986*(t12950*t13069 + t12932*t13179 + t13181 + t13182) + t13186 - 3.2*t12990*(-1.*t12932*t13069 - 1.*t12928*t13179 + t13188 + t13190))*var2[2] - 0.5*(t12939 + t13160 + t13161)*var2[5]);
  p_output1[6]=var2[0]*(t13159 - 0.5*(t13164 + t13165)*var2[0] - 0.5*(t13168 + t13169 + t13172 + t13173)*var2[1] - 0.5*(t13176 + t13186 - 3.2*t12990*(t13188 + t13190 - 1.*t12928*t13212 - 1.*t12932*t13215) - 3.2*t12986*(t13181 + t13182 + t12932*t13212 + t12950*t13215))*var2[2] - 0.5*(-3.2*(0.24*t12922*t12926 - 1.*t12926*t12944)*t12986 - 3.2*(-0.24*Power(t12922,2) + t12955)*t12990 + t13160 + t13161)*var2[5]);
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

#include "Ce3_vec1_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
