/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:21:21 GMT-05:00
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
  double t4450;
  double t4297;
  double t4298;
  double t4274;
  double t7801;
  double t4059;
  double t4457;
  double t4472;
  double t4564;
  double t4619;
  double t7564;
  double t7946;
  double t7947;
  double t7950;
  double t7954;
  double t7955;
  double t7956;
  double t7957;
  double t7958;
  double t7959;
  double t7951;
  double t7787;
  double t7812;
  double t7818;
  double t7819;
  double t7828;
  double t7831;
  double t7833;
  double t4285;
  double t4299;
  double t4437;
  double t4443;
  double t7961;
  double t7834;
  double t7980;
  double t7981;
  double t7982;
  double t7983;
  double t7952;
  double t7997;
  double t8032;
  double t8035;
  double t8036;
  double t8028;
  double t8029;
  double t8030;
  double t8037;
  double t8038;
  double t8039;
  double t8042;
  double t8116;
  double t8117;
  double t8118;
  double t8106;
  double t8107;
  double t8108;
  double t7960;
  double t7965;
  double t8043;
  double t8044;
  double t8045;
  double t8112;
  double t8113;
  double t8114;
  double t7953;
  double t7977;
  double t7978;
  double t8131;
  double t8135;
  double t8136;
  double t8137;
  double t8138;
  double t8139;
  double t8140;
  double t8040;
  double t8041;
  double t8046;
  double t8047;
  double t8048;
  double t8049;
  double t7984;
  double t8166;
  double t8167;
  double t8173;
  double t8159;
  double t8160;
  double t8161;
  double t8181;
  double t8182;
  double t8183;
  double t8176;
  double t8177;
  double t8178;
  double t8146;
  double t8147;
  double t8148;
  double t8149;
  double t8152;
  double t8153;
  double t8154;
  double t8155;
  double t8156;
  double t8175;
  double t8215;
  double t8216;
  double t8184;
  double t8188;
  double t8219;
  double t8220;
  double t8222;
  double t8223;
  double t8192;
  double t8203;
  double t8204;
  double t8209;
  double t8210;
  double t8211;
  double t8212;
  double t8213;
  double t8229;
  double t8230;
  double t8231;
  double t8232;
  double t8233;
  double t8247;
  double t8248;
  double t8249;
  double t8252;
  double t8253;
  double t8254;
  double t8115;
  double t8119;
  double t8120;
  double t8121;
  double t8125;
  double t8126;
  double t8127;
  double t8128;
  double t8129;
  double t8130;
  double t8199;
  double t8200;
  double t8201;
  double t8202;
  double t8205;
  double t8206;
  double t8207;
  double t8208;
  double t8214;
  double t8217;
  double t8218;
  double t8221;
  double t8224;
  double t8225;
  double t8226;
  double t8227;
  double t8228;
  double t8234;
  double t8235;
  double t8236;
  double t8237;
  double t8238;
  double t8239;
  double t8240;
  double t8241;
  double t8242;
  double t8243;
  double t8244;
  double t8245;
  double t8246;
  double t8260;
  double t8261;
  double t8262;
  double t8008;
  double t8280;
  double t8285;
  double t8286;
  double t8288;
  double t8289;
  double t8291;
  double t8292;
  double t8293;
  double t8299;
  double t8300;
  double t8301;
  double t8311;
  double t8312;
  double t8313;
  double t8316;
  double t8317;
  double t8318;
  double t8319;
  double t8320;
  t4450 = Cos(var1[6]);
  t4297 = Sin(var1[2]);
  t4298 = Sin(var1[5]);
  t4274 = Cos(var1[5]);
  t7801 = Sin(var1[6]);
  t4059 = Cos(var1[2]);
  t4457 = -1.*t4450;
  t4472 = 1. + t4457;
  t4564 = 0.4*t4472;
  t4619 = 0.64*t4450;
  t7564 = t4564 + t4619;
  t7946 = t4274*t4450;
  t7947 = -1.*t4298*t7801;
  t7950 = t7946 + t7947;
  t7954 = t7564*t7801;
  t7955 = -0.24*t4450*t7801;
  t7956 = t7954 + t7955;
  t7957 = t4450*t4298;
  t7958 = t4274*t7801;
  t7959 = t7957 + t7958;
  t7951 = -1.*t4059*t7950;
  t7787 = t7564*t4450;
  t7812 = Power(t7801,2);
  t7818 = 0.24*t7812;
  t7819 = t7787 + t7818;
  t7828 = -1.*t4450*t4298;
  t7831 = -1.*t4274*t7801;
  t7833 = t7828 + t7831;
  t4285 = -1.*t4059*t4274;
  t4299 = t4297*t4298;
  t4437 = t4285 + t4299;
  t4443 = -0.748*t4437;
  t7961 = -1.*t4297*t7950;
  t7834 = -1.*t4297*t7833;
  t7980 = t4274*t4297;
  t7981 = t4059*t4298;
  t7982 = t7980 + t7981;
  t7983 = -0.748*t7982;
  t7952 = t7834 + t7951;
  t7997 = -1.*t4059*t7833;
  t8032 = -1.*t4274*t4450;
  t8035 = t4298*t7801;
  t8036 = t8032 + t8035;
  t8028 = t4059*t7833;
  t8029 = t8028 + t7961;
  t8030 = -3.2*t7956*t8029;
  t8037 = t4059*t8036;
  t8038 = t7834 + t8037;
  t8039 = -3.2*t7819*t8038;
  t8042 = -3.2*t7956*t7952;
  t8116 = -1.*t7564*t7801;
  t8117 = 0.24*t4450*t7801;
  t8118 = t8116 + t8117;
  t8106 = Power(t4450,2);
  t8107 = -0.24*t8106;
  t8108 = t7787 + t8107;
  t7960 = -1.*t4059*t7959;
  t7965 = t7960 + t7961;
  t8043 = -1.*t4297*t8036;
  t8044 = t7997 + t8043;
  t8045 = -3.2*t7819*t8044;
  t8112 = -1.*t4297*t7959;
  t8113 = t4059*t7950;
  t8114 = t8112 + t8113;
  t7953 = -3.2*t7819*t7952;
  t7977 = -3.2*t7956*t7965;
  t7978 = t4443 + t7953 + t7977;
  t8131 = -1.*t4274*t4297;
  t8135 = -1.*t4059*t4298;
  t8136 = t8131 + t8135;
  t8137 = -0.748*t8136;
  t8138 = -3.2*t7956*t8114;
  t8139 = -3.2*t7819*t8029;
  t8140 = t8137 + t8138 + t8139;
  t8040 = t4443 + t8030 + t8039;
  t8041 = -0.5*var2[0]*t8040;
  t8046 = t7983 + t8042 + t8045;
  t8047 = -0.5*var2[1]*t8046;
  t8048 = t8041 + t8047;
  t8049 = var2[5]*t8048;
  t7984 = t4297*t7959;
  t8166 = t4274*t7564;
  t8167 = -0.24*t4298*t7801;
  t8173 = t8166 + t8167;
  t8159 = -1.*t7564*t4298;
  t8160 = -0.24*t4274*t7801;
  t8161 = t8159 + t8160;
  t8181 = t7564*t4298;
  t8182 = 0.24*t4274*t7801;
  t8183 = t8181 + t8182;
  t8176 = -1.*t4274*t7564;
  t8177 = 0.24*t4298*t7801;
  t8178 = t8176 + t8177;
  t8146 = -3.2*t7956*t8038;
  t8147 = t4059*t7959;
  t8148 = t8147 + t8043;
  t8149 = -3.2*t7819*t8148;
  t8152 = t7984 + t8037;
  t8153 = -3.2*t7819*t8152;
  t8154 = t4297*t8036;
  t8155 = t8028 + t8154;
  t8156 = -3.2*t7956*t8155;
  t8175 = -1.*t7959*t8173;
  t8215 = -0.24*t4450*t4298;
  t8216 = t8215 + t8160;
  t8184 = -1.*t8183*t8036;
  t8188 = t7833*t8183;
  t8219 = 0.24*t4274*t4450;
  t8220 = t8219 + t8167;
  t8222 = -0.24*t4274*t4450;
  t8223 = t8222 + t8177;
  t8192 = t8173*t8036;
  t8203 = t4297*t7833;
  t8204 = t8203 + t8113;
  t8209 = t8161*t7950;
  t8210 = t8183*t7950;
  t8211 = t7833*t8173;
  t8212 = t7959*t8173;
  t8213 = t8209 + t8210 + t8211 + t8212;
  t8229 = -1.*t7833*t8161;
  t8230 = -1.*t7833*t8183;
  t8231 = -1.*t7950*t8173;
  t8232 = -1.*t8173*t8036;
  t8233 = t8229 + t8230 + t8231 + t8232;
  t8247 = -3.2*t7956*t8204;
  t8248 = -3.2*t7819*t8155;
  t8249 = t8137 + t8247 + t8248;
  t8252 = -3.2*t7819*t8213;
  t8253 = -3.2*t7956*t8233;
  t8254 = t8252 + t8253;
  t8115 = -3.2*t8108*t8114;
  t8119 = -3.2*t8118*t8029;
  t8120 = t8115 + t8030 + t8119 + t8039;
  t8121 = -0.5*var2[0]*t8120;
  t8125 = -3.2*t8118*t7952;
  t8126 = -3.2*t8108*t7965;
  t8127 = t8042 + t8125 + t8126 + t8045;
  t8128 = -0.5*var2[1]*t8127;
  t8129 = t8121 + t8128;
  t8130 = var2[5]*t8129;
  t8199 = -3.2*t8108*t8029;
  t8200 = -3.2*t8118*t8038;
  t8201 = t8199 + t8146 + t8200 + t8149;
  t8202 = -0.5*var2[1]*t8201;
  t8205 = -3.2*t8108*t8204;
  t8206 = -3.2*t8118*t8155;
  t8207 = t8205 + t8153 + t8156 + t8206;
  t8208 = -0.5*var2[0]*t8207;
  t8214 = -3.2*t8118*t8213;
  t8217 = -1.*t8216*t7950;
  t8218 = -1.*t7833*t8173;
  t8221 = -1.*t7833*t8220;
  t8224 = -1.*t7833*t8223;
  t8225 = -1.*t8161*t8036;
  t8226 = -1.*t8216*t8036;
  t8227 = t8217 + t8218 + t8175 + t8221 + t8224 + t8225 + t8226 + t8184;
  t8228 = -3.2*t7956*t8227;
  t8234 = -3.2*t8108*t8233;
  t8235 = t7833*t8161;
  t8236 = t7833*t8216;
  t8237 = t8216*t7959;
  t8238 = t7950*t8173;
  t8239 = t7950*t8220;
  t8240 = t7950*t8223;
  t8241 = t8235 + t8236 + t8188 + t8237 + t8238 + t8239 + t8240 + t8192;
  t8242 = -3.2*t7819*t8241;
  t8243 = t8214 + t8228 + t8234 + t8242;
  t8244 = -0.5*var2[2]*t8243;
  t8245 = t8202 + t8208 + t8244;
  t8246 = var2[5]*t8245;
  t8260 = -1.*t7564*t4450;
  t8261 = 0.24*t8106;
  t8262 = t8260 + t8261;
  t8008 = t4297*t7950;
  t8280 = t8147 + t8008;
  t8285 = -1.*t8183*t7950;
  t8286 = t8285 + t8218;
  t8288 = t8183*t7959;
  t8289 = t8288 + t8238;
  t8291 = t8216*t7950;
  t8292 = t7959*t8220;
  t8293 = t8291 + t8210 + t8211 + t8292;
  t8299 = -1.*t7833*t8216;
  t8300 = -1.*t7950*t8220;
  t8301 = t8299 + t8230 + t8300 + t8232;
  t8311 = -3.2*t8118*t8204;
  t8312 = -3.2*t8108*t8280;
  t8313 = t8247 + t8311 + t8312 + t8248;
  t8316 = -3.2*t8108*t8286;
  t8317 = -3.2*t8118*t8289;
  t8318 = -3.2*t7819*t8293;
  t8319 = -3.2*t7956*t8301;
  t8320 = t8316 + t8317 + t8318 + t8319;
  p_output1[0]=(-0.5*t7978*var2[0] - 0.5*(t7983 - 3.2*t7956*(t7951 + t7984) - 3.2*t7819*(t7997 + t8008))*var2[1])*var2[5];
  p_output1[1]=t8049;
  p_output1[2]=t8130;
  p_output1[3]=-0.5*t8140*var2[5];
  p_output1[4]=-0.5*t7978*var2[5];
  p_output1[5]=-0.5*t8140*var2[0] - 0.5*t7978*var2[1];
  p_output1[6]=t8049;
  p_output1[7]=(-0.5*(t4443 + t8153 + t8156)*var2[0] - 0.5*(t7983 + t8146 + t8149)*var2[1] - 0.5*(-3.2*t7956*(-1.*t7950*t8161 - 2.*t8036*t8161 - 2.*t7833*t8173 + t8175 - 1.*t7833*t8178 + t8184) - 3.2*t7819*(2.*t7833*t8161 + t7959*t8161 + 2.*t7950*t8173 + t7950*t8178 + t8188 + t8192))*var2[2])*var2[5];
  p_output1[8]=t8246;
  p_output1[9]=-0.5*t8249*var2[5];
  p_output1[10]=-0.5*t8040*var2[5];
  p_output1[11]=-0.5*t8254*var2[5];
  p_output1[12]=-0.5*t8249*var2[0] - 0.5*t8040*var2[1] - 0.5*t8254*var2[2];
  p_output1[13]=t8130;
  p_output1[14]=t8246;
  p_output1[15]=var2[5]*(-0.5*(t8153 - 6.4*t8118*t8155 + t8156 - 6.4*t8108*t8204 - 3.2*t8204*t8262 - 3.2*t8118*t8280)*var2[0] - 0.5*(-6.4*t8029*t8108 - 6.4*t8038*t8118 - 3.2*t8114*t8118 + t8146 + t8149 - 3.2*t8029*t8262)*var2[1] - 0.5*(-3.2*t7956*(t8175 + t8184 - 2.*t8036*t8216 + t8217 - 2.*t7833*t8220 + t8224) - 3.2*t7819*(t8188 + t8192 + 2.*t7833*t8216 + 2.*t7950*t8220 + t8237 + t8240) - 3.2*t8118*t8286 - 3.2*t8262*t8289 - 6.4*t8118*t8293 - 6.4*t8108*t8301)*var2[2] - 0.5*(-6.4*Power(t8108,2) - 6.4*t7956*t8118 - 6.4*Power(t8118,2) - 6.4*t7819*t8262)*var2[5] + 0.384*t8262*var2[6]);
  p_output1[16]=-0.5*t8313*var2[5];
  p_output1[17]=-0.5*t8120*var2[5];
  p_output1[18]=-0.5*t8320*var2[5];
  p_output1[19]=-0.5*t8313*var2[0] - 0.5*t8120*var2[1] - 0.5*t8320*var2[2] - 1.*(-6.4*t7956*t8108 - 6.4*t7819*t8118)*var2[5] + 0.384*t8118*var2[6];
  p_output1[20]=0.384*t8118*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec6_five_link_walker.hh"

namespace LeftStance
{

void J_Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
