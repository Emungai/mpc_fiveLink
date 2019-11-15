/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:40:48 GMT-05:00
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
  double t2289;
  double t2211;
  double t2218;
  double t2296;
  double t2325;
  double t2288;
  double t2299;
  double t2307;
  double t2131;
  double t2327;
  double t2328;
  double t2343;
  double t2322;
  double t2369;
  double t2412;
  double t2413;
  double t2417;
  double t2420;
  double t2456;
  double t2457;
  double t2461;
  double t2469;
  double t2470;
  double t2493;
  double t2497;
  double t2357;
  double t2359;
  double t2500;
  double t2501;
  double t2526;
  double t2814;
  double t2818;
  double t2821;
  double t2853;
  double t2855;
  double t2858;
  double t2859;
  double t2886;
  double t2913;
  double t2919;
  double t2939;
  double t3015;
  double t3025;
  double t3029;
  double t2828;
  double t2833;
  double t2836;
  double t2840;
  double t2847;
  double t2848;
  double t2947;
  double t2949;
  double t2959;
  double t2962;
  double t3097;
  double t3100;
  double t3043;
  double t3071;
  double t3271;
  double t3275;
  double t3276;
  double t3282;
  double t3307;
  double t3184;
  double t3200;
  double t3096;
  double t3101;
  double t3103;
  double t3105;
  double t3125;
  double t3130;
  double t3143;
  double t3146;
  double t3161;
  double t3166;
  double t3167;
  double t3171;
  double t3178;
  double t3179;
  double t3235;
  double t3262;
  double t3417;
  double t3418;
  double t3419;
  double t3413;
  double t3414;
  double t3415;
  double t3313;
  double t3314;
  t2289 = Cos(var1[3]);
  t2211 = Cos(var1[4]);
  t2218 = Sin(var1[3]);
  t2296 = Sin(var1[4]);
  t2325 = Cos(var1[2]);
  t2288 = -1.*t2211*t2218;
  t2299 = -1.*t2289*t2296;
  t2307 = t2288 + t2299;
  t2131 = Sin(var1[2]);
  t2327 = t2289*t2211;
  t2328 = -1.*t2218*t2296;
  t2343 = t2327 + t2328;
  t2322 = -1.*t2131*t2307;
  t2369 = -1.*t2325*t2307;
  t2412 = -1.*t2289*t2211;
  t2413 = t2218*t2296;
  t2417 = t2412 + t2413;
  t2420 = t2325*t2417;
  t2456 = t2322 + t2420;
  t2457 = 0.384*var2[0]*t2456;
  t2461 = -1.*t2131*t2417;
  t2469 = t2369 + t2461;
  t2470 = 0.384*var2[1]*t2469;
  t2493 = t2457 + t2470;
  t2497 = var2[4]*t2493;
  t2357 = -1.*t2325*t2343;
  t2359 = t2322 + t2357;
  t2500 = t2325*t2307;
  t2501 = -1.*t2131*t2343;
  t2526 = t2500 + t2501;
  t2814 = t2211*t2218;
  t2818 = t2289*t2296;
  t2821 = t2814 + t2818;
  t2853 = -1.*t2211;
  t2855 = 1. + t2853;
  t2858 = 0.4*t2855;
  t2859 = 0.64*t2211;
  t2886 = t2858 + t2859;
  t2913 = -1.*t2886*t2218;
  t2919 = -0.24*t2289*t2296;
  t2939 = t2913 + t2919;
  t3015 = t2289*t2886;
  t3025 = -0.24*t2218*t2296;
  t3029 = t3015 + t3025;
  t2828 = t2131*t2821;
  t2833 = t2828 + t2420;
  t2836 = 0.384*var2[0]*t2833;
  t2840 = t2325*t2821;
  t2847 = t2840 + t2461;
  t2848 = 0.384*var2[1]*t2847;
  t2947 = t2886*t2218;
  t2949 = 0.24*t2289*t2296;
  t2959 = t2947 + t2949;
  t2962 = t2307*t2959;
  t3097 = -0.24*t2211*t2218;
  t3100 = t3097 + t2919;
  t3043 = 0.24*t2218*t2296;
  t3071 = t3029*t2417;
  t3271 = t2939*t2343;
  t3275 = t2959*t2343;
  t3276 = t2307*t3029;
  t3282 = t2821*t3029;
  t3307 = t3271 + t3275 + t3276 + t3282;
  t3184 = t2131*t2417;
  t3200 = t2500 + t3184;
  t3096 = t2307*t2939;
  t3101 = t2307*t3100;
  t3103 = t3100*t2821;
  t3105 = t2343*t3029;
  t3125 = 0.24*t2289*t2211;
  t3130 = t3125 + t3025;
  t3143 = t2343*t3130;
  t3146 = -0.24*t2289*t2211;
  t3161 = t3146 + t3043;
  t3166 = t2343*t3161;
  t3167 = t3096 + t3101 + t2962 + t3103 + t3105 + t3143 + t3166 + t3071;
  t3171 = 0.384*var2[2]*t3167;
  t3178 = t2836 + t2848 + t3171;
  t3179 = var2[4]*t3178;
  t3235 = 0.384*var2[4]*t3200;
  t3262 = 0.384*var2[4]*t2456;
  t3417 = -1.*t2886*t2296;
  t3418 = 0.24*t2211*t2296;
  t3419 = t3417 + t3418;
  t3413 = t3100*t2343;
  t3414 = t2821*t3130;
  t3415 = t3413 + t3275 + t3276 + t3414;
  t3313 = 0.384*var2[1]*t2456;
  t3314 = 0.384*var2[0]*t3200;
  p_output1[0]=(0.384*t2359*var2[0] + 0.384*(t2131*t2343 + t2369)*var2[1])*var2[4];
  p_output1[1]=t2497;
  p_output1[2]=t2497;
  p_output1[3]=0.384*t2526*var2[4];
  p_output1[4]=0.384*t2359*var2[4];
  p_output1[5]=0.384*t2526*var2[0] + 0.384*t2359*var2[1];
  p_output1[6]=t2497;
  p_output1[7]=(t2836 + t2848 + 0.384*(2.*t2307*t2939 + t2821*t2939 + t2962 + 2.*t2343*t3029 + t2343*(-1.*t2289*t2886 + t3043) + t3071)*var2[2])*var2[4];
  p_output1[8]=t3179;
  p_output1[9]=t3235;
  p_output1[10]=t3262;
  p_output1[11]=0.384*t3307*var2[4];
  p_output1[12]=t3313 + t3314 + 0.384*t3307*var2[2];
  p_output1[13]=t2497;
  p_output1[14]=t3179;
  p_output1[15]=(t2836 + t2848 + 0.384*(t2962 + t3071 + 2.*t2307*t3100 + t3103 + 2.*t2343*t3130 + t3166)*var2[2] + 0.384*(0.24*Power(t2211,2) - 1.*t2211*t2886)*var2[3])*var2[4];
  p_output1[16]=t3235;
  p_output1[17]=t3262;
  p_output1[18]=0.384*t3415*var2[4];
  p_output1[19]=0.384*t3419*var2[4];
  p_output1[20]=t3313 + t3314 + 0.384*t3415*var2[2] + 0.384*t3419*var2[3];
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

#include "J_Ce3_vec5_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
