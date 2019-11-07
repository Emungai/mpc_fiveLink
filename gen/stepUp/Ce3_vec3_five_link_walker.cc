/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:28 GMT-05:00
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
  double t1043;
  double t2543;
  double t3015;
  double t2628;
  double t6024;
  double t9158;
  double t9518;
  double t9525;
  double t9526;
  double t9531;
  double t9532;
  double t10640;
  double t10646;
  double t10732;
  double t11135;
  double t11144;
  double t11145;
  double t10913;
  double t11015;
  double t11032;
  double t6051;
  double t9159;
  double t9171;
  double t11187;
  double t11238;
  double t11240;
  double t13006;
  double t13031;
  double t13153;
  double t13191;
  double t13195;
  double t13199;
  double t13213;
  double t13218;
  double t13219;
  double t13223;
  double t13224;
  double t13225;
  double t13266;
  double t13267;
  double t13268;
  double t13226;
  double t13242;
  double t13246;
  double t13162;
  double t13192;
  double t13193;
  double t13269;
  double t13270;
  double t13279;
  double t5118;
  double t5915;
  double t5934;
  double t5955;
  double t6009;
  double t11044;
  double t11245;
  double t11246;
  double t9528;
  double t11312;
  double t11313;
  double t12959;
  double t13116;
  double t13118;
  double t13129;
  double t13133;
  double t13148;
  double t13262;
  double t13280;
  double t13283;
  double t13216;
  double t13300;
  double t13301;
  double t13302;
  double t13340;
  double t13341;
  double t13342;
  double t13343;
  double t13352;
  double t13353;
  double t13356;
  double t13357;
  double t2545;
  double t3063;
  double t4950;
  double t6017;
  double t13318;
  double t13319;
  double t11305;
  double t13385;
  double t13386;
  double t13387;
  double t13314;
  double t13315;
  double t13316;
  double t13382;
  double t13383;
  double t13384;
  double t13388;
  double t13389;
  double t13310;
  double t13311;
  double t13312;
  double t13313;
  double t13403;
  double t13406;
  double t13365;
  double t13370;
  double t13373;
  double t13374;
  double t13424;
  double t13425;
  double t13426;
  double t13427;
  double t13428;
  double t13429;
  double t13430;
  double t13377;
  double t13379;
  double t13381;
  double t13393;
  double t13395;
  double t13396;
  double t13397;
  double t13441;
  double t13442;
  double t13443;
  double t13407;
  double t13409;
  double t13410;
  double t13411;
  double t13412;
  double t13413;
  double t13414;
  double t13461;
  double t13462;
  double t13463;
  double t13464;
  double t13465;
  double t13466;
  double t13467;
  double t13468;
  double t13007;
  double t13089;
  double t13114;
  double t13152;
  double t13333;
  double t13334;
  double t13291;
  double t13481;
  double t13482;
  double t13483;
  double t13325;
  double t13326;
  double t13327;
  double t13478;
  double t13479;
  double t13480;
  double t13484;
  double t13485;
  double t13321;
  double t13322;
  double t13323;
  double t13324;
  double t13497;
  double t13498;
  double t13470;
  double t13471;
  double t13472;
  double t13473;
  double t13516;
  double t13517;
  double t13518;
  double t13519;
  double t13520;
  double t13521;
  double t13522;
  double t13475;
  double t13476;
  double t13477;
  double t13489;
  double t13491;
  double t13492;
  double t13493;
  double t13533;
  double t13534;
  double t13535;
  double t13499;
  double t13501;
  double t13502;
  double t13503;
  double t13504;
  double t13505;
  double t13506;
  t1043 = Cos(var1[2]);
  t2543 = Cos(var1[3]);
  t3015 = Sin(var1[3]);
  t2628 = Sin(var1[2]);
  t6024 = Cos(var1[4]);
  t9158 = Sin(var1[4]);
  t9518 = t2543*t6024;
  t9525 = -1.*t3015*t9158;
  t9526 = t9518 + t9525;
  t9531 = -1.*t6024;
  t9532 = 1. + t9531;
  t10640 = 0.4*t9532;
  t10646 = 0.64*t6024;
  t10732 = t10640 + t10646;
  t11135 = -1.*t6024*t3015;
  t11144 = -1.*t2543*t9158;
  t11145 = t11135 + t11144;
  t10913 = t10732*t3015;
  t11015 = 0.24*t2543*t9158;
  t11032 = t10913 + t11015;
  t6051 = t6024*t3015;
  t9159 = t2543*t9158;
  t9171 = t6051 + t9159;
  t11187 = t2543*t10732;
  t11238 = -0.24*t3015*t9158;
  t11240 = t11187 + t11238;
  t13006 = Cos(var1[5]);
  t13031 = Sin(var1[5]);
  t13153 = Cos(var1[6]);
  t13191 = Sin(var1[6]);
  t13195 = t13006*t13153;
  t13199 = -1.*t13031*t13191;
  t13213 = t13195 + t13199;
  t13218 = -1.*t13153;
  t13219 = 1. + t13218;
  t13223 = 0.4*t13219;
  t13224 = 0.64*t13153;
  t13225 = t13223 + t13224;
  t13266 = -1.*t13153*t13031;
  t13267 = -1.*t13006*t13191;
  t13268 = t13266 + t13267;
  t13226 = t13225*t13031;
  t13242 = 0.24*t13006*t13191;
  t13246 = t13226 + t13242;
  t13162 = t13153*t13031;
  t13192 = t13006*t13191;
  t13193 = t13162 + t13192;
  t13269 = t13006*t13225;
  t13270 = -0.24*t13031*t13191;
  t13279 = t13269 + t13270;
  t5118 = Power(t2543,2);
  t5915 = 0.11*t5118;
  t5934 = Power(t3015,2);
  t5955 = 0.11*t5934;
  t6009 = t5915 + t5955;
  t11044 = -1.*t11032*t9526;
  t11245 = -1.*t11145*t11240;
  t11246 = t11044 + t11245;
  t9528 = -1.*t2628*t9526;
  t11312 = t11032*t9171;
  t11313 = t9526*t11240;
  t12959 = t11312 + t11313;
  t13116 = Power(t13006,2);
  t13118 = 0.11*t13116;
  t13129 = Power(t13031,2);
  t13133 = 0.11*t13129;
  t13148 = t13118 + t13133;
  t13262 = -1.*t13246*t13213;
  t13280 = -1.*t13268*t13279;
  t13283 = t13262 + t13280;
  t13216 = -1.*t2628*t13213;
  t13300 = t13246*t13193;
  t13301 = t13213*t13279;
  t13302 = t13300 + t13301;
  t13340 = -1.*t10732*t3015;
  t13341 = -0.24*t2543*t9158;
  t13342 = t13340 + t13341;
  t13343 = t13342*t9526;
  t13352 = t11032*t9526;
  t13353 = t11145*t11240;
  t13356 = t9171*t11240;
  t13357 = t13343 + t13352 + t13353 + t13356;
  t2545 = -1.*t1043*t2543;
  t3063 = t2628*t3015;
  t4950 = t2545 + t3063;
  t6017 = -6.8*t4950*t6009;
  t13318 = t1043*t11145;
  t13319 = t13318 + t9528;
  t11305 = -1.*t2628*t11145;
  t13385 = -1.*t2543*t6024;
  t13386 = t3015*t9158;
  t13387 = t13385 + t13386;
  t13314 = -1.*t2628*t9171;
  t13315 = t1043*t9526;
  t13316 = t13314 + t13315;
  t13382 = -1.*t11145*t13342;
  t13383 = -1.*t11145*t11032;
  t13384 = -1.*t9526*t11240;
  t13388 = -1.*t11240*t13387;
  t13389 = t13382 + t13383 + t13384 + t13388;
  t13310 = -1.*t2543*t2628;
  t13311 = -1.*t1043*t3015;
  t13312 = t13310 + t13311;
  t13313 = -6.8*t13312*t6009;
  t13403 = t2628*t11145;
  t13406 = t13403 + t13315;
  t13365 = t10732*t6024;
  t13370 = Power(t9158,2);
  t13373 = 0.24*t13370;
  t13374 = t13365 + t13373;
  t13424 = -0.24*t6024*t3015;
  t13425 = t13424 + t13341;
  t13426 = t13425*t9526;
  t13427 = 0.24*t2543*t6024;
  t13428 = t13427 + t11238;
  t13429 = t9171*t13428;
  t13430 = t13426 + t13352 + t13353 + t13429;
  t13377 = t10732*t9158;
  t13379 = -0.24*t6024*t9158;
  t13381 = t13377 + t13379;
  t13393 = -3.2*t13319*t11246;
  t13395 = t1043*t13387;
  t13396 = t11305 + t13395;
  t13397 = -3.2*t12959*t13396;
  t13441 = -1.*t11145*t13425;
  t13442 = -1.*t9526*t13428;
  t13443 = t13441 + t13383 + t13442 + t13388;
  t13407 = -3.2*t13406*t11246;
  t13409 = t2628*t13387;
  t13410 = t13318 + t13409;
  t13411 = -3.2*t12959*t13410;
  t13412 = t1043*t9171;
  t13413 = t2628*t9526;
  t13414 = t13412 + t13413;
  t13461 = -1.*t13225*t13031;
  t13462 = -0.24*t13006*t13191;
  t13463 = t13461 + t13462;
  t13464 = t13463*t13213;
  t13465 = t13246*t13213;
  t13466 = t13268*t13279;
  t13467 = t13193*t13279;
  t13468 = t13464 + t13465 + t13466 + t13467;
  t13007 = -1.*t1043*t13006;
  t13089 = t2628*t13031;
  t13114 = t13007 + t13089;
  t13152 = -6.8*t13114*t13148;
  t13333 = t1043*t13268;
  t13334 = t13333 + t13216;
  t13291 = -1.*t2628*t13268;
  t13481 = -1.*t13006*t13153;
  t13482 = t13031*t13191;
  t13483 = t13481 + t13482;
  t13325 = -1.*t2628*t13193;
  t13326 = t1043*t13213;
  t13327 = t13325 + t13326;
  t13478 = -1.*t13268*t13463;
  t13479 = -1.*t13268*t13246;
  t13480 = -1.*t13213*t13279;
  t13484 = -1.*t13279*t13483;
  t13485 = t13478 + t13479 + t13480 + t13484;
  t13321 = -1.*t13006*t2628;
  t13322 = -1.*t1043*t13031;
  t13323 = t13321 + t13322;
  t13324 = -6.8*t13323*t13148;
  t13497 = t2628*t13268;
  t13498 = t13497 + t13326;
  t13470 = t13225*t13153;
  t13471 = Power(t13191,2);
  t13472 = 0.24*t13471;
  t13473 = t13470 + t13472;
  t13516 = -0.24*t13153*t13031;
  t13517 = t13516 + t13462;
  t13518 = t13517*t13213;
  t13519 = 0.24*t13006*t13153;
  t13520 = t13519 + t13270;
  t13521 = t13193*t13520;
  t13522 = t13518 + t13465 + t13466 + t13521;
  t13475 = t13225*t13191;
  t13476 = -0.24*t13153*t13191;
  t13477 = t13475 + t13476;
  t13489 = -3.2*t13334*t13283;
  t13491 = t1043*t13483;
  t13492 = t13291 + t13491;
  t13493 = -3.2*t13302*t13492;
  t13533 = -1.*t13268*t13517;
  t13534 = -1.*t13213*t13520;
  t13535 = t13533 + t13479 + t13534 + t13484;
  t13499 = -3.2*t13498*t13283;
  t13501 = t2628*t13483;
  t13502 = t13333 + t13501;
  t13503 = -3.2*t13302*t13502;
  t13504 = t1043*t13193;
  t13505 = t2628*t13213;
  t13506 = t13504 + t13505;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t13313 - 3.2*t11246*t13316 - 3.2*t12959*t13319 + t13324 - 3.2*t13283*t13327 - 3.2*t13302*t13334 + 2.88*t2628)*var2[0] - 0.5*(2.88*t1043 + t13152 - 3.2*(-1.*t1043*t13193 + t13216)*t13283 - 3.2*(-1.*t1043*t13213 + t13291)*t13302 + t6017 - 3.2*t12959*(t11305 - 1.*t1043*t9526) - 3.2*t11246*(-1.*t1043*t9171 + t9528))*var2[1])*var2[2];
  p_output1[3]=var2[2]*(-0.5*(t13313 - 3.2*t13357*t13406 + t13407 + t13411 - 3.2*t13389*t13414)*var2[0] - 0.5*(-3.2*t13319*t13357 - 3.2*t13316*t13389 + t13393 + t13397 + t6017)*var2[1] - 0.5*(-6.4*t12959*t13357 - 6.4*t11246*t13389)*var2[2] - 0.5*(-3.2*t13357*t13374 - 3.2*t13381*t13389)*var2[3] + 0.384*t13357*var2[4]);
  p_output1[4]=var2[2]*(-0.5*(t13407 + t13411 - 3.2*t13406*t13430 - 3.2*t13414*t13443)*var2[0] - 0.5*(t13393 + t13397 - 3.2*t13319*t13430 - 3.2*t13316*t13443)*var2[1] - 0.5*(-6.4*t12959*t13430 - 6.4*t11246*t13443)*var2[2] - 0.5*(-3.2*t13374*t13430 - 3.2*t13381*t13443 - 3.2*t11246*(t13365 - 0.24*Power(t6024,2)) - 3.2*t12959*(-1.*t10732*t9158 + 0.24*t6024*t9158))*var2[3] + 0.384*t13430*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(t13324 - 3.2*t13468*t13498 + t13499 + t13503 - 3.2*t13485*t13506)*var2[0] - 0.5*(t13152 - 3.2*t13334*t13468 - 3.2*t13327*t13485 + t13489 + t13493)*var2[1] - 0.5*(-6.4*t13302*t13468 - 6.4*t13283*t13485)*var2[2] - 0.5*(-3.2*t13468*t13473 - 3.2*t13477*t13485)*var2[5] + 0.384*t13468*var2[6]);
  p_output1[6]=var2[2]*(-0.5*(t13499 + t13503 - 3.2*t13498*t13522 - 3.2*t13506*t13535)*var2[0] - 0.5*(t13489 + t13493 - 3.2*t13334*t13522 - 3.2*t13327*t13535)*var2[1] - 0.5*(-6.4*t13302*t13522 - 6.4*t13283*t13535)*var2[2] - 0.5*(-3.2*(0.24*t13153*t13191 - 1.*t13191*t13225)*t13302 - 3.2*t13283*(-0.24*Power(t13153,2) + t13470) - 3.2*t13473*t13522 - 3.2*t13477*t13535)*var2[5] + 0.384*t13522*var2[6]);
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

#include "Ce3_vec3_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
