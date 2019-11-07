/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:27:47 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  double t6961;
  double t6955;
  double t6956;
  double t6964;
  double t6969;
  double t6945;
  double t6960;
  double t6965;
  double t6967;
  double t6968;
  double t6970;
  double t6980;
  double t6981;
  double t6982;
  double t6983;
  double t6991;
  double t6992;
  double t6993;
  double t6996;
  double t6997;
  double t7020;
  double t7017;
  double t7018;
  double t7021;
  double t7019;
  double t7022;
  double t7023;
  double t7024;
  double t7025;
  double t7026;
  double t7027;
  double t7028;
  double t7029;
  double t7037;
  double t7038;
  double t7039;
  double t7040;
  double t7041;
  double t6987;
  double t6988;
  double t6989;
  double t7006;
  double t7007;
  double t7008;
  double t7009;
  double t7010;
  double t7011;
  double t7033;
  double t7034;
  double t7035;
  double t7050;
  double t7051;
  double t7052;
  double t7053;
  double t7054;
  double t7055;
  double t7068;
  double t7069;
  double t7070;
  double t7088;
  double t7089;
  double t7090;
  double t7167;
  double t7168;
  double t7169;
  double t7171;
  double t7172;
  double t7173;
  double t7187;
  double t7188;
  double t7189;
  double t7191;
  double t7192;
  double t7193;
  double t3261;
  double t6941;
  double t7073;
  double t7074;
  double t7075;
  double t6985;
  double t6986;
  double t7062;
  double t7063;
  double t7064;
  double t7003;
  double t7004;
  double t7005;
  double t7078;
  double t7079;
  double t6998;
  double t6999;
  double t7000;
  double t7001;
  double t7015;
  double t7016;
  double t7092;
  double t7093;
  double t7094;
  double t7031;
  double t7032;
  double t7084;
  double t7085;
  double t7086;
  double t7047;
  double t7048;
  double t7049;
  double t7096;
  double t7097;
  double t7042;
  double t7043;
  double t7044;
  double t7045;
  double t7059;
  double t7060;
  double t7104;
  double t7105;
  double t7106;
  double t7107;
  double t7118;
  double t7119;
  double t7128;
  double t7131;
  double t7102;
  double t7103;
  double t7065;
  double t7071;
  double t7077;
  double t7083;
  double t7087;
  double t7091;
  double t7095;
  double t7098;
  double t7099;
  double t7140;
  double t7144;
  double t7146;
  double t7147;
  double t7150;
  double t7155;
  double t7159;
  double t7170;
  double t7174;
  double t7175;
  double t7177;
  double t7178;
  double t7179;
  double t7181;
  double t7182;
  double t7183;
  double t7184;
  double t7185;
  double t7190;
  double t7194;
  double t7195;
  double t7197;
  double t7198;
  double t7199;
  double t7317;
  double t7318;
  double t7319;
  double t7344;
  double t7345;
  double t7346;
  double t7145;
  double t7166;
  double t7176;
  double t7180;
  double t7186;
  double t7196;
  double t7200;
  double t7201;
  double t7278;
  double t7279;
  double t7280;
  double t7281;
  double t7282;
  double t7285;
  double t7286;
  double t7290;
  double t7293;
  double t7296;
  double t7301;
  double t7305;
  double t7312;
  double t7313;
  double t7314;
  double t7315;
  double t7316;
  double t7320;
  double t7321;
  double t7322;
  double t7323;
  double t7324;
  double t7325;
  double t7326;
  double t7210;
  double t7211;
  double t7213;
  double t7214;
  double t6990;
  double t7002;
  double t7012;
  double t7013;
  double t7330;
  double t7331;
  double t7332;
  double t7333;
  double t9336;
  double t9515;
  double t7327;
  double t7328;
  double t7335;
  double t7336;
  double t7337;
  double t7338;
  double t7339;
  double t7340;
  double t7341;
  double t7342;
  double t7343;
  double t7347;
  double t7349;
  double t7350;
  double t7353;
  double t7354;
  double t7355;
  double t7356;
  double t7217;
  double t7223;
  double t7247;
  double t7248;
  double t7036;
  double t7046;
  double t7056;
  double t7057;
  double t7361;
  double t7362;
  double t7363;
  double t7369;
  double t12894;
  double t12895;
  double t7357;
  double t7359;
  t6961 = Cos(var2[3]);
  t6955 = Cos(var2[4]);
  t6956 = Sin(var2[3]);
  t6964 = Sin(var2[4]);
  t6969 = Cos(var2[2]);
  t6945 = Sin(var2[2]);
  t6960 = -1.*t6955*t6956;
  t6965 = -1.*t6961*t6964;
  t6967 = t6960 + t6965;
  t6968 = t6945*t6967;
  t6970 = t6961*t6955;
  t6980 = -1.*t6956*t6964;
  t6981 = t6970 + t6980;
  t6982 = t6969*t6981;
  t6983 = t6968 + t6982;
  t6991 = -1.*t6955;
  t6992 = 1. + t6991;
  t6993 = 0.4*t6992;
  t6996 = 0.64*t6955;
  t6997 = t6993 + t6996;
  t7020 = Cos(var2[5]);
  t7017 = Cos(var2[6]);
  t7018 = Sin(var2[5]);
  t7021 = Sin(var2[6]);
  t7019 = -1.*t7017*t7018;
  t7022 = -1.*t7020*t7021;
  t7023 = t7019 + t7022;
  t7024 = t6945*t7023;
  t7025 = t7020*t7017;
  t7026 = -1.*t7018*t7021;
  t7027 = t7025 + t7026;
  t7028 = t6969*t7027;
  t7029 = t7024 + t7028;
  t7037 = -1.*t7017;
  t7038 = 1. + t7037;
  t7039 = 0.4*t7038;
  t7040 = 0.64*t7017;
  t7041 = t7039 + t7040;
  t6987 = t6969*t6961;
  t6988 = -1.*t6945*t6956;
  t6989 = t6987 + t6988;
  t7006 = t6955*t6956;
  t7007 = t6961*t6964;
  t7008 = t7006 + t7007;
  t7009 = t6969*t7008;
  t7010 = t6945*t6981;
  t7011 = t7009 + t7010;
  t7033 = t6969*t7020;
  t7034 = -1.*t6945*t7018;
  t7035 = t7033 + t7034;
  t7050 = t7017*t7018;
  t7051 = t7020*t7021;
  t7052 = t7050 + t7051;
  t7053 = t6969*t7052;
  t7054 = t6945*t7027;
  t7055 = t7053 + t7054;
  t7068 = t6961*t6945;
  t7069 = t6969*t6956;
  t7070 = t7068 + t7069;
  t7088 = t7020*t6945;
  t7089 = t6969*t7018;
  t7090 = t7088 + t7089;
  t7167 = t6997*t6956;
  t7168 = 0.24*t6961*t6964;
  t7169 = t7167 + t7168;
  t7171 = t6961*t6997;
  t7172 = -0.24*t6956*t6964;
  t7173 = t7171 + t7172;
  t7187 = t7041*t7018;
  t7188 = 0.24*t7020*t7021;
  t7189 = t7187 + t7188;
  t7191 = t7020*t7041;
  t7192 = -0.24*t7018*t7021;
  t7193 = t7191 + t7192;
  t3261 = -1.*var1[4];
  t6941 = var3[4] + t3261;
  t7073 = t6969*t6967;
  t7074 = -1.*t6945*t6981;
  t7075 = t7073 + t7074;
  t6985 = -1.*var1[3];
  t6986 = var3[3] + t6985;
  t7062 = -1.*t6961*t6945;
  t7063 = -1.*t6969*t6956;
  t7064 = t7062 + t7063;
  t7003 = t6997*t6964;
  t7004 = -0.24*t6955*t6964;
  t7005 = t7003 + t7004;
  t7078 = -1.*t6945*t7008;
  t7079 = t7078 + t6982;
  t6998 = t6997*t6955;
  t6999 = Power(t6964,2);
  t7000 = 0.24*t6999;
  t7001 = t6998 + t7000;
  t7015 = -1.*var1[6];
  t7016 = var3[6] + t7015;
  t7092 = t6969*t7023;
  t7093 = -1.*t6945*t7027;
  t7094 = t7092 + t7093;
  t7031 = -1.*var1[5];
  t7032 = var3[5] + t7031;
  t7084 = -1.*t7020*t6945;
  t7085 = -1.*t6969*t7018;
  t7086 = t7084 + t7085;
  t7047 = t7041*t7021;
  t7048 = -0.24*t7017*t7021;
  t7049 = t7047 + t7048;
  t7096 = -1.*t6945*t7052;
  t7097 = t7096 + t7028;
  t7042 = t7041*t7017;
  t7043 = Power(t7021,2);
  t7044 = 0.24*t7043;
  t7045 = t7042 + t7044;
  t7059 = -1.*var1[1];
  t7060 = var3[1] + t7059;
  t7104 = Power(t6969,2);
  t7105 = 12.*t7104;
  t7106 = Power(t6945,2);
  t7107 = 12.*t7106;
  t7118 = Power(t6989,2);
  t7119 = 6.8*t7118;
  t7128 = Power(t7035,2);
  t7131 = 6.8*t7128;
  t7102 = -1.*var1[0];
  t7103 = var3[0] + t7102;
  t7065 = 6.8*t7064*t6989;
  t7071 = 6.8*t7070*t6989;
  t7077 = 3.2*t6983*t7075;
  t7083 = 3.2*t7079*t7011;
  t7087 = 6.8*t7086*t7035;
  t7091 = 6.8*t7090*t7035;
  t7095 = 3.2*t7029*t7094;
  t7098 = 3.2*t7097*t7055;
  t7099 = t7065 + t7071 + t7077 + t7083 + t7087 + t7091 + t7095 + t7098;
  t7140 = -1.*var1[2];
  t7144 = var3[2] + t7140;
  t7146 = Power(t6961,2);
  t7147 = 0.11*t7146;
  t7150 = Power(t6956,2);
  t7155 = 0.11*t7150;
  t7159 = t7147 + t7155;
  t7170 = -1.*t7169*t6981;
  t7174 = -1.*t6967*t7173;
  t7175 = t7170 + t7174;
  t7177 = t7169*t7008;
  t7178 = t6981*t7173;
  t7179 = t7177 + t7178;
  t7181 = Power(t7020,2);
  t7182 = 0.11*t7181;
  t7183 = Power(t7018,2);
  t7184 = 0.11*t7183;
  t7185 = t7182 + t7184;
  t7190 = -1.*t7189*t7027;
  t7194 = -1.*t7023*t7193;
  t7195 = t7190 + t7194;
  t7197 = t7189*t7052;
  t7198 = t7027*t7193;
  t7199 = t7197 + t7198;
  t7317 = -1.*t6969*t6961;
  t7318 = t6945*t6956;
  t7319 = t7317 + t7318;
  t7344 = -1.*t6969*t7020;
  t7345 = t6945*t7018;
  t7346 = t7344 + t7345;
  t7145 = 2.88*t6969;
  t7166 = 6.8*t6989*t7159;
  t7176 = 3.2*t7011*t7175;
  t7180 = 3.2*t6983*t7179;
  t7186 = 6.8*t7035*t7185;
  t7196 = 3.2*t7055*t7195;
  t7200 = 3.2*t7029*t7199;
  t7201 = t7145 + t7166 + t7176 + t7180 + t7186 + t7196 + t7200;
  t7278 = -2.88*t6945;
  t7279 = 6.8*t7064*t7159;
  t7280 = 3.2*t7079*t7175;
  t7281 = 3.2*t7075*t7179;
  t7282 = 6.8*t7086*t7185;
  t7285 = 3.2*t7097*t7195;
  t7286 = 3.2*t7094*t7199;
  t7290 = t7278 + t7279 + t7280 + t7281 + t7282 + t7285 + t7286;
  t7293 = 0.4*t6992*t6989;
  t7296 = -0.4*t7064*t6964;
  t7301 = t6955*t6989;
  t7305 = t7064*t6964;
  t7312 = t7301 + t7305;
  t7313 = 0.8*t7312;
  t7314 = t7293 + t7296 + t7313;
  t7315 = -1.*var4[0]*t7314;
  t7316 = 0.4*t6992*t7064;
  t7320 = -0.4*t7319*t6964;
  t7321 = t6955*t7064;
  t7322 = t7319*t6964;
  t7323 = t7321 + t7322;
  t7324 = 0.8*t7323;
  t7325 = t7316 + t7320 + t7324;
  t7326 = -1.*var4[2]*t7325;
  t7210 = 0.748*t7064;
  t7211 = 3.2*t7005*t7079;
  t7213 = 3.2*t7001*t7075;
  t7214 = t7210 + t7211 + t7213;
  t6990 = 0.748*t6989;
  t7002 = 3.2*t7001*t6983;
  t7012 = 3.2*t7005*t7011;
  t7013 = t6990 + t7002 + t7012;
  t7330 = 0.748*t7159;
  t7331 = 3.2*t7005*t7175;
  t7332 = 3.2*t7001*t7179;
  t7333 = 0.67 + t7330 + t7331 + t7332;
  t9336 = 0.768*t7001;
  t9515 = 0.2 + t9336;
  t7327 = 0.768*t7179;
  t7328 = 0.2 + t7327;
  t7335 = 0.4*t7038*t7035;
  t7336 = -0.4*t7086*t7021;
  t7337 = t7017*t7035;
  t7338 = t7086*t7021;
  t7339 = t7337 + t7338;
  t7340 = 0.8*t7339;
  t7341 = t7335 + t7336 + t7340;
  t7342 = -1.*var5[0]*t7341;
  t7343 = 0.4*t7038*t7086;
  t7347 = -0.4*t7346*t7021;
  t7349 = t7017*t7086;
  t7350 = t7346*t7021;
  t7353 = t7349 + t7350;
  t7354 = 0.8*t7353;
  t7355 = t7343 + t7347 + t7354;
  t7356 = -1.*var5[2]*t7355;
  t7217 = 0.748*t7086;
  t7223 = 3.2*t7049*t7097;
  t7247 = 3.2*t7045*t7094;
  t7248 = t7217 + t7223 + t7247;
  t7036 = 0.748*t7035;
  t7046 = 3.2*t7045*t7029;
  t7056 = 3.2*t7049*t7055;
  t7057 = t7036 + t7046 + t7056;
  t7361 = 0.748*t7185;
  t7362 = 3.2*t7049*t7195;
  t7363 = 3.2*t7045*t7199;
  t7369 = 0.67 + t7361 + t7362 + t7363;
  t12894 = 0.768*t7045;
  t12895 = 0.2 + t12894;
  t7357 = 0.768*t7199;
  t7359 = 0.2 + t7357;
  p_output1[0]=0.768*t6941*t6983 + t6986*t7013 + 0.768*t7016*t7029 + t7032*t7057 + t7060*t7099 + t7103*(3.2*Power(t6983,2) + 3.2*Power(t7011,2) + 3.2*Power(t7029,2) + 3.2*Power(t7055,2) + 6.8*Power(t7070,2) + 6.8*Power(t7090,2) + t7105 + t7107 + t7119 + t7131) + t7144*t7201 - 1.*var4[0] - 1.*var5[0];
  p_output1[1]=0.768*t6941*t7075 + 0.768*t7016*t7094 + t7099*t7103 + t7060*(6.8*Power(t7064,2) + 3.2*Power(t7075,2) + 3.2*Power(t7079,2) + 6.8*Power(t7086,2) + 3.2*Power(t7094,2) + 3.2*Power(t7097,2) + t7105 + t7107 + t7119 + t7131) + t6986*t7214 + t7032*t7248 + t7144*t7290 - 1.*var4[2] - 1.*var5[2];
  p_output1[2]=t7144*(3.3612 + 6.8*Power(t7159,2) + 3.2*Power(t7175,2) + 3.2*Power(t7179,2) + 6.8*Power(t7185,2) + 3.2*Power(t7195,2) + 3.2*Power(t7199,2)) + t7103*t7201 + t7060*t7290 + t7315 + t7326 + t6941*t7328 + t6986*t7333 + t7342 + t7356 + t7016*t7359 + t7032*t7369;
  p_output1[3]=t6986*(1.58228 + 3.2*Power(t7001,2) + 3.2*Power(t7005,2)) + t7013*t7103 + t7060*t7214 + t7315 + t7326 + t7144*t7333 + t6941*t9515;
  p_output1[4]=1.2143199999999998*t6941 + 0.768*t7060*t7075 + 0.768*t6983*t7103 + t7144*t7328 + t6986*t9515 - 1.*(-0.4*t6955*t6989 + 0.4*t6964*t7070 + 0.8*(-1.*t6964*t7070 + t7301))*var4[0] - 1.*(0.4*t6964*t6989 - 0.4*t6955*t7064 + 0.8*(-1.*t6964*t6989 + t7321))*var4[2];
  p_output1[5]=t12895*t7016 + t7032*(1.58228 + 3.2*Power(t7045,2) + 3.2*Power(t7049,2)) + t7057*t7103 + t7060*t7248 + t7342 + t7356 + t7144*t7369;
  p_output1[6]=1.2143199999999998*t7016 + t12895*t7032 + 0.768*t7060*t7094 + 0.768*t7029*t7103 + t7144*t7359 - 1.*(-0.4*t7017*t7035 + 0.4*t7021*t7090 + 0.8*(-1.*t7021*t7090 + t7337))*var5[0] - 1.*(0.4*t7021*t7035 - 0.4*t7017*t7086 + 0.8*(-1.*t7021*t7035 + t7349))*var5[2];
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

  double *var1,*var2,*var3,*var4,*var5;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 5)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Five input(s) required (var1,var2,var3,var4,var5).");
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
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapLSland_DS2.hh"

namespace Pattern[LSland, Blank[DS2]]
{

void dxDiscreteMapLSland_DS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5);

}

}

#endif // MATLAB_MEX_FILE
