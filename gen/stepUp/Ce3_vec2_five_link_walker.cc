/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:25 GMT-05:00
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
  double t7613;
  double t3014;
  double t3097;
  double t7626;
  double t7951;
  double t2803;
  double t7066;
  double t7728;
  double t7904;
  double t7905;
  double t8016;
  double t8018;
  double t8029;
  double t8959;
  double t8960;
  double t11057;
  double t11141;
  double t12848;
  double t12914;
  double t12919;
  double t13011;
  double t13008;
  double t13009;
  double t13012;
  double t13010;
  double t13013;
  double t13024;
  double t13025;
  double t13026;
  double t13027;
  double t13028;
  double t13029;
  double t13030;
  double t13036;
  double t13052;
  double t13056;
  double t13072;
  double t13076;
  double t13119;
  double t13120;
  double t13121;
  double t9181;
  double t10223;
  double t10228;
  double t12993;
  double t12976;
  double t12987;
  double t12991;
  double t12992;
  double t13004;
  double t13134;
  double t13135;
  double t13136;
  double t13032;
  double t13033;
  double t13034;
  double t13111;
  double t13101;
  double t13102;
  double t13107;
  double t13110;
  double t13112;
  double t13122;
  double t13123;
  double t13124;
  double t13131;
  double t13130;
  double t13132;
  double t13127;
  double t13128;
  double t13137;
  double t13140;
  double t13143;
  double t13150;
  double t13149;
  double t13151;
  double t13146;
  double t13147;
  double t13233;
  double t13234;
  double t13235;
  double t13237;
  double t13238;
  double t13239;
  double t13253;
  double t13254;
  double t13255;
  double t13257;
  double t13258;
  double t13259;
  double t10734;
  double t12960;
  double t12961;
  double t12972;
  double t12920;
  double t12921;
  double t12935;
  double t12954;
  double t13271;
  double t13272;
  double t13273;
  double t13274;
  double t13275;
  double t13125;
  double t13126;
  double t13163;
  double t13166;
  double t13167;
  double t13174;
  double t13175;
  double t13180;
  double t13183;
  double t13184;
  double t13185;
  double t13187;
  double t13189;
  double t13196;
  double t13197;
  double t13198;
  double t13227;
  double t13228;
  double t13229;
  double t13230;
  double t13231;
  double t13232;
  double t13236;
  double t13240;
  double t13241;
  double t13243;
  double t13244;
  double t13245;
  double t13294;
  double t13295;
  double t13296;
  double t13276;
  double t13277;
  double t13278;
  double t13281;
  double t13282;
  double t13285;
  double t13286;
  double t13287;
  double t13288;
  double t13289;
  double t13290;
  double t13293;
  double t13298;
  double t13299;
  double t13303;
  double t13328;
  double t13329;
  double t13305;
  double t13331;
  double t13332;
  double t13307;
  double t13035;
  double t13090;
  double t13093;
  double t13094;
  double t13077;
  double t13078;
  double t13079;
  double t13080;
  double t13344;
  double t13345;
  double t13346;
  double t13347;
  double t13348;
  double t13144;
  double t13145;
  double t13200;
  double t13201;
  double t13202;
  double t13203;
  double t13204;
  double t13205;
  double t13206;
  double t13207;
  double t13208;
  double t13209;
  double t13210;
  double t13220;
  double t13221;
  double t13222;
  double t13247;
  double t13248;
  double t13249;
  double t13250;
  double t13251;
  double t13252;
  double t13256;
  double t13260;
  double t13261;
  double t13263;
  double t13264;
  double t13265;
  double t13367;
  double t13368;
  double t13369;
  double t13349;
  double t13350;
  double t13351;
  double t13354;
  double t13355;
  double t13358;
  double t13359;
  double t13360;
  double t13361;
  double t13362;
  double t13363;
  double t13366;
  double t13371;
  double t13372;
  double t13376;
  double t13401;
  double t13402;
  double t13378;
  double t13404;
  double t13405;
  double t13380;
  t7613 = Cos(var1[3]);
  t3014 = Cos(var1[4]);
  t3097 = Sin(var1[3]);
  t7626 = Sin(var1[4]);
  t7951 = Cos(var1[2]);
  t2803 = Sin(var1[2]);
  t7066 = -1.*t3014*t3097;
  t7728 = -1.*t7613*t7626;
  t7904 = t7066 + t7728;
  t7905 = -1.*t2803*t7904;
  t8016 = t7613*t3014;
  t8018 = -1.*t3097*t7626;
  t8029 = t8016 + t8018;
  t8959 = -1.*t7951*t8029;
  t8960 = t7905 + t8959;
  t11057 = -1.*t3014;
  t11141 = 1. + t11057;
  t12848 = 0.4*t11141;
  t12914 = 0.64*t3014;
  t12919 = t12848 + t12914;
  t13011 = Cos(var1[5]);
  t13008 = Cos(var1[6]);
  t13009 = Sin(var1[5]);
  t13012 = Sin(var1[6]);
  t13010 = -1.*t13008*t13009;
  t13013 = -1.*t13011*t13012;
  t13024 = t13010 + t13013;
  t13025 = -1.*t2803*t13024;
  t13026 = t13011*t13008;
  t13027 = -1.*t13009*t13012;
  t13028 = t13026 + t13027;
  t13029 = -1.*t7951*t13028;
  t13030 = t13025 + t13029;
  t13036 = -1.*t13008;
  t13052 = 1. + t13036;
  t13056 = 0.4*t13052;
  t13072 = 0.64*t13008;
  t13076 = t13056 + t13072;
  t13119 = -1.*t7613*t2803;
  t13120 = -1.*t7951*t3097;
  t13121 = t13119 + t13120;
  t9181 = -1.*t7951*t7613;
  t10223 = t2803*t3097;
  t10228 = t9181 + t10223;
  t12993 = -1.*t2803*t8029;
  t12976 = t3014*t3097;
  t12987 = t7613*t7626;
  t12991 = t12976 + t12987;
  t12992 = -1.*t7951*t12991;
  t13004 = t12992 + t12993;
  t13134 = -1.*t13011*t2803;
  t13135 = -1.*t7951*t13009;
  t13136 = t13134 + t13135;
  t13032 = -1.*t7951*t13011;
  t13033 = t2803*t13009;
  t13034 = t13032 + t13033;
  t13111 = -1.*t2803*t13028;
  t13101 = t13008*t13009;
  t13102 = t13011*t13012;
  t13107 = t13101 + t13102;
  t13110 = -1.*t7951*t13107;
  t13112 = t13110 + t13111;
  t13122 = t7951*t7613;
  t13123 = -1.*t2803*t3097;
  t13124 = t13122 + t13123;
  t13131 = t7951*t8029;
  t13130 = -1.*t2803*t12991;
  t13132 = t13130 + t13131;
  t13127 = t7951*t7904;
  t13128 = t13127 + t12993;
  t13137 = t7951*t13011;
  t13140 = -1.*t2803*t13009;
  t13143 = t13137 + t13140;
  t13150 = t7951*t13028;
  t13149 = -1.*t2803*t13107;
  t13151 = t13149 + t13150;
  t13146 = t7951*t13024;
  t13147 = t13146 + t13111;
  t13233 = t12919*t3097;
  t13234 = 0.24*t7613*t7626;
  t13235 = t13233 + t13234;
  t13237 = t7613*t12919;
  t13238 = -0.24*t3097*t7626;
  t13239 = t13237 + t13238;
  t13253 = t13076*t13009;
  t13254 = 0.24*t13011*t13012;
  t13255 = t13253 + t13254;
  t13257 = t13011*t13076;
  t13258 = -0.24*t13009*t13012;
  t13259 = t13257 + t13258;
  t10734 = -0.748*t10228;
  t12960 = t12919*t7626;
  t12961 = -0.24*t3014*t7626;
  t12972 = t12960 + t12961;
  t12920 = t12919*t3014;
  t12921 = Power(t7626,2);
  t12935 = 0.24*t12921;
  t12954 = t12920 + t12935;
  t13271 = -1.*t7613*t3014;
  t13272 = t3097*t7626;
  t13273 = t13271 + t13272;
  t13274 = t7951*t13273;
  t13275 = t7905 + t13274;
  t13125 = -13.6*t13121*t13124;
  t13126 = -13.6*t13121*t10228;
  t13163 = Power(t13121,2);
  t13166 = -6.8*t13163;
  t13167 = t7613*t2803;
  t13174 = t7951*t3097;
  t13175 = t13167 + t13174;
  t13180 = -6.8*t13121*t13175;
  t13183 = Power(t13124,2);
  t13184 = -6.8*t13183;
  t13185 = -6.8*t13124*t10228;
  t13187 = t2803*t7904;
  t13189 = t13187 + t13131;
  t13196 = t7951*t12991;
  t13197 = t2803*t8029;
  t13198 = t13196 + t13197;
  t13227 = Power(t7613,2);
  t13228 = 0.11*t13227;
  t13229 = Power(t3097,2);
  t13230 = 0.11*t13229;
  t13231 = t13228 + t13230;
  t13232 = -6.8*t10228*t13231;
  t13236 = -1.*t13235*t8029;
  t13240 = -1.*t7904*t13239;
  t13241 = t13236 + t13240;
  t13243 = t13235*t12991;
  t13244 = t8029*t13239;
  t13245 = t13243 + t13244;
  t13294 = -1.*t12919*t3097;
  t13295 = -0.24*t7613*t7626;
  t13296 = t13294 + t13295;
  t13276 = 0.384*var2[4]*t13275;
  t13277 = -3.2*t12972*t13128;
  t13278 = -3.2*t12954*t13275;
  t13281 = -6.4*t13132*t13128;
  t13282 = -6.4*t13128*t13275;
  t13285 = -3.2*t13189*t13132;
  t13286 = -3.2*t13128*t13198;
  t13287 = -3.2*t13189*t13275;
  t13288 = t2803*t13273;
  t13289 = t13127 + t13288;
  t13290 = -3.2*t13128*t13289;
  t13293 = -3.2*t13128*t13241;
  t13298 = t13235*t8029;
  t13299 = t7904*t13239;
  t13303 = -3.2*t13245*t13275;
  t13328 = -0.24*t3014*t3097;
  t13329 = t13328 + t13295;
  t13305 = -1.*t7904*t13235;
  t13331 = 0.24*t7613*t3014;
  t13332 = t13331 + t13238;
  t13307 = -1.*t13239*t13273;
  t13035 = -0.748*t13034;
  t13090 = t13076*t13012;
  t13093 = -0.24*t13008*t13012;
  t13094 = t13090 + t13093;
  t13077 = t13076*t13008;
  t13078 = Power(t13012,2);
  t13079 = 0.24*t13078;
  t13080 = t13077 + t13079;
  t13344 = -1.*t13011*t13008;
  t13345 = t13009*t13012;
  t13346 = t13344 + t13345;
  t13347 = t7951*t13346;
  t13348 = t13025 + t13347;
  t13144 = -13.6*t13136*t13143;
  t13145 = -13.6*t13136*t13034;
  t13200 = Power(t13136,2);
  t13201 = -6.8*t13200;
  t13202 = t13011*t2803;
  t13203 = t7951*t13009;
  t13204 = t13202 + t13203;
  t13205 = -6.8*t13136*t13204;
  t13206 = Power(t13143,2);
  t13207 = -6.8*t13206;
  t13208 = -6.8*t13143*t13034;
  t13209 = t2803*t13024;
  t13210 = t13209 + t13150;
  t13220 = t7951*t13107;
  t13221 = t2803*t13028;
  t13222 = t13220 + t13221;
  t13247 = Power(t13011,2);
  t13248 = 0.11*t13247;
  t13249 = Power(t13009,2);
  t13250 = 0.11*t13249;
  t13251 = t13248 + t13250;
  t13252 = -6.8*t13034*t13251;
  t13256 = -1.*t13255*t13028;
  t13260 = -1.*t13024*t13259;
  t13261 = t13256 + t13260;
  t13263 = t13255*t13107;
  t13264 = t13028*t13259;
  t13265 = t13263 + t13264;
  t13367 = -1.*t13076*t13009;
  t13368 = -0.24*t13011*t13012;
  t13369 = t13367 + t13368;
  t13349 = 0.384*var2[6]*t13348;
  t13350 = -3.2*t13094*t13147;
  t13351 = -3.2*t13080*t13348;
  t13354 = -6.4*t13151*t13147;
  t13355 = -6.4*t13147*t13348;
  t13358 = -3.2*t13210*t13151;
  t13359 = -3.2*t13147*t13222;
  t13360 = -3.2*t13210*t13348;
  t13361 = t2803*t13346;
  t13362 = t13146 + t13361;
  t13363 = -3.2*t13147*t13362;
  t13366 = -3.2*t13147*t13261;
  t13371 = t13255*t13028;
  t13372 = t13024*t13259;
  t13376 = -3.2*t13265*t13348;
  t13401 = -0.24*t13008*t13009;
  t13402 = t13401 + t13368;
  t13378 = -1.*t13024*t13255;
  t13404 = 0.24*t13011*t13008;
  t13405 = t13404 + t13258;
  t13380 = -1.*t13259*t13346;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(-0.5*(-3.2*Power(t13128,2) - 3.2*Power(t13132,2) - 3.2*Power(t13147,2) - 3.2*Power(t13151,2) + t13166 + t13180 + t13184 + t13185 - 3.2*t13004*t13198 + t13201 + t13205 + t13207 + t13208 - 3.2*t13030*t13210 - 3.2*t13112*t13222 - 3.2*t13189*t8960)*var2[0] - 0.5*(t13125 + t13126 - 6.4*t13004*t13132 + t13144 + t13145 - 6.4*t13030*t13147 - 6.4*t13112*t13151 - 6.4*t13128*t8960)*var2[1] - 0.5*(t13232 - 3.2*t13004*t13241 + t13252 - 3.2*t13112*t13261 - 3.2*t13030*t13265 + 2.88*t7951 - 3.2*t13245*t8960)*var2[2] - 0.5*(t10734 - 3.2*t12972*t13004 - 3.2*t12954*t8960)*var2[3] + 0.384*t8960*var2[4] - 0.5*(t13035 - 3.2*t13030*t13080 - 3.2*t13094*t13112)*var2[5] + 0.384*t13030*var2[6]);
  p_output1[3]=var2[1]*(t13276 - 0.5*(t13166 + t13180 + t13184 + t13185 + t13285 + t13286 + t13287 + t13290)*var2[0] - 0.5*(t13125 + t13126 + t13281 + t13282)*var2[1] - 0.5*(t13232 + t13293 + t13303 - 3.2*t13132*(t13305 + t13307 - 1.*t13296*t7904 - 1.*t13239*t8029) - 3.2*t13128*(t12991*t13239 + t13298 + t13299 + t13296*t8029))*var2[2] - 0.5*(t10734 + t13277 + t13278)*var2[3]);
  p_output1[4]=var2[1]*(t13276 - 0.5*(t13285 + t13286 + t13287 + t13290)*var2[0] - 0.5*(t13281 + t13282)*var2[1] - 0.5*(t13293 + t13303 - 3.2*t13128*(t13298 + t13299 + t12991*t13332 + t13329*t8029) - 3.2*t13132*(t13305 + t13307 - 1.*t13329*t7904 - 1.*t13332*t8029))*var2[2] - 0.5*(t13277 + t13278 - 3.2*t13132*(t12920 - 0.24*Power(t3014,2)) - 3.2*t13128*(-1.*t12919*t7626 + 0.24*t3014*t7626))*var2[3]);
  p_output1[5]=var2[1]*(t13349 - 0.5*(t13201 + t13205 + t13207 + t13208 + t13358 + t13359 + t13360 + t13363)*var2[0] - 0.5*(t13144 + t13145 + t13354 + t13355)*var2[1] - 0.5*(t13252 + t13366 - 3.2*t13147*(t13107*t13259 + t13028*t13369 + t13371 + t13372) + t13376 - 3.2*t13151*(-1.*t13028*t13259 - 1.*t13024*t13369 + t13378 + t13380))*var2[2] - 0.5*(t13035 + t13350 + t13351)*var2[5]);
  p_output1[6]=var2[1]*(t13349 - 0.5*(t13358 + t13359 + t13360 + t13363)*var2[0] - 0.5*(t13354 + t13355)*var2[1] - 0.5*(t13366 + t13376 - 3.2*t13151*(t13378 + t13380 - 1.*t13024*t13402 - 1.*t13028*t13405) - 3.2*t13147*(t13371 + t13372 + t13028*t13402 + t13107*t13405))*var2[2] - 0.5*(-3.2*(0.24*t13008*t13012 - 1.*t13012*t13076)*t13147 - 3.2*(-0.24*Power(t13008,2) + t13077)*t13151 + t13350 + t13351)*var2[5]);
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

#include "Ce3_vec2_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce3_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
