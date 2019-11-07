/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:58 GMT-05:00
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
  double t3023;
  double t594;
  double t613;
  double t573;
  double t10919;
  double t66;
  double t6150;
  double t7918;
  double t9521;
  double t9933;
  double t10197;
  double t11267;
  double t11272;
  double t11300;
  double t11897;
  double t11902;
  double t11995;
  double t12004;
  double t12167;
  double t12817;
  double t11579;
  double t10877;
  double t10923;
  double t11001;
  double t11014;
  double t11063;
  double t11071;
  double t11106;
  double t575;
  double t634;
  double t695;
  double t732;
  double t12909;
  double t11126;
  double t13758;
  double t13770;
  double t13798;
  double t13812;
  double t11597;
  double t13842;
  double t13985;
  double t14061;
  double t14063;
  double t13930;
  double t13933;
  double t13936;
  double t14082;
  double t14151;
  double t14152;
  double t14189;
  double t17003;
  double t17004;
  double t17026;
  double t16964;
  double t16966;
  double t16967;
  double t12869;
  double t13542;
  double t14321;
  double t14345;
  double t14347;
  double t16968;
  double t16979;
  double t16994;
  double t11700;
  double t13644;
  double t13685;
  double t17052;
  double t17053;
  double t17091;
  double t17096;
  double t17097;
  double t17098;
  double t17099;
  double t14157;
  double t14163;
  double t14391;
  double t14476;
  double t14482;
  double t16963;
  double t13835;
  double t17197;
  double t17198;
  double t17199;
  double t17193;
  double t17194;
  double t17195;
  double t17210;
  double t17211;
  double t17212;
  double t17205;
  double t17206;
  double t17207;
  double t17174;
  double t17175;
  double t17176;
  double t17180;
  double t17183;
  double t17184;
  double t17185;
  double t17186;
  double t17187;
  double t17204;
  double t17272;
  double t17277;
  double t17213;
  double t17217;
  double t17285;
  double t17288;
  double t17292;
  double t17293;
  double t17221;
  double t17235;
  double t17241;
  double t17246;
  double t17247;
  double t17248;
  double t17249;
  double t17250;
  double t17302;
  double t17303;
  double t17304;
  double t17305;
  double t17306;
  double t17379;
  double t17380;
  double t17381;
  double t17384;
  double t17385;
  double t17389;
  double t17002;
  double t17031;
  double t17039;
  double t17040;
  double t17041;
  double t17042;
  double t17045;
  double t17049;
  double t17050;
  double t17051;
  double t17228;
  double t17229;
  double t17233;
  double t17234;
  double t17242;
  double t17243;
  double t17244;
  double t17245;
  double t17261;
  double t17278;
  double t17279;
  double t17291;
  double t17294;
  double t17296;
  double t17299;
  double t17300;
  double t17301;
  double t17307;
  double t17308;
  double t17309;
  double t17310;
  double t17311;
  double t17312;
  double t17313;
  double t17370;
  double t17371;
  double t17372;
  double t17376;
  double t17377;
  double t17378;
  double t17395;
  double t17399;
  double t17400;
  double t13860;
  double t17418;
  double t17423;
  double t17424;
  double t17429;
  double t17430;
  double t17437;
  double t17438;
  double t17439;
  double t17445;
  double t17446;
  double t17447;
  double t17457;
  double t17458;
  double t17459;
  double t17462;
  double t17463;
  double t17464;
  double t17465;
  double t17466;
  t3023 = Cos(var1[4]);
  t594 = Sin(var1[2]);
  t613 = Sin(var1[3]);
  t573 = Cos(var1[3]);
  t10919 = Sin(var1[4]);
  t66 = Cos(var1[2]);
  t6150 = -1.*t3023;
  t7918 = 1. + t6150;
  t9521 = 0.4*t7918;
  t9933 = 0.64*t3023;
  t10197 = t9521 + t9933;
  t11267 = t573*t3023;
  t11272 = -1.*t613*t10919;
  t11300 = t11267 + t11272;
  t11897 = t10197*t10919;
  t11902 = -0.24*t3023*t10919;
  t11995 = t11897 + t11902;
  t12004 = t3023*t613;
  t12167 = t573*t10919;
  t12817 = t12004 + t12167;
  t11579 = -1.*t66*t11300;
  t10877 = t10197*t3023;
  t10923 = Power(t10919,2);
  t11001 = 0.24*t10923;
  t11014 = t10877 + t11001;
  t11063 = -1.*t3023*t613;
  t11071 = -1.*t573*t10919;
  t11106 = t11063 + t11071;
  t575 = -1.*t66*t573;
  t634 = t594*t613;
  t695 = t575 + t634;
  t732 = -0.748*t695;
  t12909 = -1.*t594*t11300;
  t11126 = -1.*t594*t11106;
  t13758 = t573*t594;
  t13770 = t66*t613;
  t13798 = t13758 + t13770;
  t13812 = -0.748*t13798;
  t11597 = t11126 + t11579;
  t13842 = -1.*t66*t11106;
  t13985 = -1.*t573*t3023;
  t14061 = t613*t10919;
  t14063 = t13985 + t14061;
  t13930 = t66*t11106;
  t13933 = t13930 + t12909;
  t13936 = -3.2*t11995*t13933;
  t14082 = t66*t14063;
  t14151 = t11126 + t14082;
  t14152 = -3.2*t11014*t14151;
  t14189 = -3.2*t11995*t11597;
  t17003 = -1.*t10197*t10919;
  t17004 = 0.24*t3023*t10919;
  t17026 = t17003 + t17004;
  t16964 = Power(t3023,2);
  t16966 = -0.24*t16964;
  t16967 = t10877 + t16966;
  t12869 = -1.*t66*t12817;
  t13542 = t12869 + t12909;
  t14321 = -1.*t594*t14063;
  t14345 = t13842 + t14321;
  t14347 = -3.2*t11014*t14345;
  t16968 = -1.*t594*t12817;
  t16979 = t66*t11300;
  t16994 = t16968 + t16979;
  t11700 = -3.2*t11014*t11597;
  t13644 = -3.2*t11995*t13542;
  t13685 = t732 + t11700 + t13644;
  t17052 = -1.*t573*t594;
  t17053 = -1.*t66*t613;
  t17091 = t17052 + t17053;
  t17096 = -0.748*t17091;
  t17097 = -3.2*t11995*t16994;
  t17098 = -3.2*t11014*t13933;
  t17099 = t17096 + t17097 + t17098;
  t14157 = t732 + t13936 + t14152;
  t14163 = -0.5*var2[0]*t14157;
  t14391 = t13812 + t14189 + t14347;
  t14476 = -0.5*var2[1]*t14391;
  t14482 = t14163 + t14476;
  t16963 = var2[3]*t14482;
  t13835 = t594*t12817;
  t17197 = t573*t10197;
  t17198 = -0.24*t613*t10919;
  t17199 = t17197 + t17198;
  t17193 = -1.*t10197*t613;
  t17194 = -0.24*t573*t10919;
  t17195 = t17193 + t17194;
  t17210 = t10197*t613;
  t17211 = 0.24*t573*t10919;
  t17212 = t17210 + t17211;
  t17205 = -1.*t573*t10197;
  t17206 = 0.24*t613*t10919;
  t17207 = t17205 + t17206;
  t17174 = -3.2*t11995*t14151;
  t17175 = t66*t12817;
  t17176 = t17175 + t14321;
  t17180 = -3.2*t11014*t17176;
  t17183 = t13835 + t14082;
  t17184 = -3.2*t11014*t17183;
  t17185 = t594*t14063;
  t17186 = t13930 + t17185;
  t17187 = -3.2*t11995*t17186;
  t17204 = -1.*t12817*t17199;
  t17272 = -0.24*t3023*t613;
  t17277 = t17272 + t17194;
  t17213 = -1.*t17212*t14063;
  t17217 = t11106*t17212;
  t17285 = 0.24*t573*t3023;
  t17288 = t17285 + t17198;
  t17292 = -0.24*t573*t3023;
  t17293 = t17292 + t17206;
  t17221 = t17199*t14063;
  t17235 = t594*t11106;
  t17241 = t17235 + t16979;
  t17246 = t17195*t11300;
  t17247 = t17212*t11300;
  t17248 = t11106*t17199;
  t17249 = t12817*t17199;
  t17250 = t17246 + t17247 + t17248 + t17249;
  t17302 = -1.*t11106*t17195;
  t17303 = -1.*t11106*t17212;
  t17304 = -1.*t11300*t17199;
  t17305 = -1.*t17199*t14063;
  t17306 = t17302 + t17303 + t17304 + t17305;
  t17379 = -3.2*t11995*t17241;
  t17380 = -3.2*t11014*t17186;
  t17381 = t17096 + t17379 + t17380;
  t17384 = -3.2*t11014*t17250;
  t17385 = -3.2*t11995*t17306;
  t17389 = t17384 + t17385;
  t17002 = -3.2*t16967*t16994;
  t17031 = -3.2*t17026*t13933;
  t17039 = t17002 + t13936 + t17031 + t14152;
  t17040 = -0.5*var2[0]*t17039;
  t17041 = -3.2*t17026*t11597;
  t17042 = -3.2*t16967*t13542;
  t17045 = t14189 + t17041 + t17042 + t14347;
  t17049 = -0.5*var2[1]*t17045;
  t17050 = t17040 + t17049;
  t17051 = var2[3]*t17050;
  t17228 = -3.2*t16967*t13933;
  t17229 = -3.2*t17026*t14151;
  t17233 = t17228 + t17174 + t17229 + t17180;
  t17234 = -0.5*var2[1]*t17233;
  t17242 = -3.2*t16967*t17241;
  t17243 = -3.2*t17026*t17186;
  t17244 = t17242 + t17184 + t17187 + t17243;
  t17245 = -0.5*var2[0]*t17244;
  t17261 = -3.2*t17026*t17250;
  t17278 = -1.*t17277*t11300;
  t17279 = -1.*t11106*t17199;
  t17291 = -1.*t11106*t17288;
  t17294 = -1.*t11106*t17293;
  t17296 = -1.*t17195*t14063;
  t17299 = -1.*t17277*t14063;
  t17300 = t17278 + t17279 + t17204 + t17291 + t17294 + t17296 + t17299 + t17213;
  t17301 = -3.2*t11995*t17300;
  t17307 = -3.2*t16967*t17306;
  t17308 = t11106*t17195;
  t17309 = t11106*t17277;
  t17310 = t17277*t12817;
  t17311 = t11300*t17199;
  t17312 = t11300*t17288;
  t17313 = t11300*t17293;
  t17370 = t17308 + t17309 + t17217 + t17310 + t17311 + t17312 + t17313 + t17221;
  t17371 = -3.2*t11014*t17370;
  t17372 = t17261 + t17301 + t17307 + t17371;
  t17376 = -0.5*var2[2]*t17372;
  t17377 = t17234 + t17245 + t17376;
  t17378 = var2[3]*t17377;
  t17395 = -1.*t10197*t3023;
  t17399 = 0.24*t16964;
  t17400 = t17395 + t17399;
  t13860 = t594*t11300;
  t17418 = t17175 + t13860;
  t17423 = -1.*t17212*t11300;
  t17424 = t17423 + t17279;
  t17429 = t17212*t12817;
  t17430 = t17429 + t17311;
  t17437 = t17277*t11300;
  t17438 = t12817*t17288;
  t17439 = t17437 + t17247 + t17248 + t17438;
  t17445 = -1.*t11106*t17277;
  t17446 = -1.*t11300*t17288;
  t17447 = t17445 + t17303 + t17446 + t17305;
  t17457 = -3.2*t17026*t17241;
  t17458 = -3.2*t16967*t17418;
  t17459 = t17379 + t17457 + t17458 + t17380;
  t17462 = -3.2*t16967*t17424;
  t17463 = -3.2*t17026*t17430;
  t17464 = -3.2*t11014*t17439;
  t17465 = -3.2*t11995*t17447;
  t17466 = t17462 + t17463 + t17464 + t17465;
  p_output1[0]=(-0.5*t13685*var2[0] - 0.5*(t13812 - 3.2*t11995*(t11579 + t13835) - 3.2*t11014*(t13842 + t13860))*var2[1])*var2[3];
  p_output1[1]=t16963;
  p_output1[2]=t17051;
  p_output1[3]=-0.5*t17099*var2[3];
  p_output1[4]=-0.5*t13685*var2[3];
  p_output1[5]=-0.5*t17099*var2[0] - 0.5*t13685*var2[1];
  p_output1[6]=t16963;
  p_output1[7]=(-0.5*(t17184 + t17187 + t732)*var2[0] - 0.5*(t13812 + t17174 + t17180)*var2[1] - 0.5*(-3.2*t11995*(-1.*t11300*t17195 - 2.*t14063*t17195 - 2.*t11106*t17199 + t17204 - 1.*t11106*t17207 + t17213) - 3.2*t11014*(2.*t11106*t17195 + t12817*t17195 + 2.*t11300*t17199 + t11300*t17207 + t17217 + t17221))*var2[2])*var2[3];
  p_output1[8]=t17378;
  p_output1[9]=-0.5*t17381*var2[3];
  p_output1[10]=-0.5*t14157*var2[3];
  p_output1[11]=-0.5*t17389*var2[3];
  p_output1[12]=-0.5*t17381*var2[0] - 0.5*t14157*var2[1] - 0.5*t17389*var2[2];
  p_output1[13]=t17051;
  p_output1[14]=t17378;
  p_output1[15]=var2[3]*(-0.5*(t17184 - 6.4*t17026*t17186 + t17187 - 6.4*t16967*t17241 - 3.2*t17241*t17400 - 3.2*t17026*t17418)*var2[0] - 0.5*(-6.4*t13933*t16967 - 6.4*t14151*t17026 - 3.2*t16994*t17026 + t17174 + t17180 - 3.2*t13933*t17400)*var2[1] - 0.5*(-3.2*t11995*(t17204 + t17213 - 2.*t14063*t17277 + t17278 - 2.*t11106*t17288 + t17294) - 3.2*t11014*(t17217 + t17221 + 2.*t11106*t17277 + 2.*t11300*t17288 + t17310 + t17313) - 3.2*t17026*t17424 - 3.2*t17400*t17430 - 6.4*t17026*t17439 - 6.4*t16967*t17447)*var2[2] - 0.5*(-6.4*Power(t16967,2) - 6.4*t11995*t17026 - 6.4*Power(t17026,2) - 6.4*t11014*t17400)*var2[3] + 0.384*t17400*var2[4]);
  p_output1[16]=-0.5*t17459*var2[3];
  p_output1[17]=-0.5*t17039*var2[3];
  p_output1[18]=-0.5*t17466*var2[3];
  p_output1[19]=-0.5*t17459*var2[0] - 0.5*t17039*var2[1] - 0.5*t17466*var2[2] - 1.*(-6.4*t11995*t16967 - 6.4*t11014*t17026)*var2[3] + 0.384*t17026*var2[4];
  p_output1[20]=0.384*t17026*var2[3];
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

#include "J_Ce3_vec4_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
