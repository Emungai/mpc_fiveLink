/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:40:58 GMT-05:00
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
  double t120;
  double t94;
  double t98;
  double t127;
  double t134;
  double t103;
  double t130;
  double t131;
  double t85;
  double t138;
  double t146;
  double t147;
  double t133;
  double t161;
  double t178;
  double t183;
  double t184;
  double t187;
  double t202;
  double t210;
  double t216;
  double t219;
  double t220;
  double t221;
  double t222;
  double t150;
  double t152;
  double t223;
  double t224;
  double t227;
  double t271;
  double t275;
  double t276;
  double t292;
  double t293;
  double t294;
  double t296;
  double t297;
  double t298;
  double t299;
  double t300;
  double t330;
  double t331;
  double t332;
  double t277;
  double t282;
  double t283;
  double t288;
  double t289;
  double t290;
  double t303;
  double t316;
  double t321;
  double t324;
  double t357;
  double t358;
  double t339;
  double t342;
  double t392;
  double t393;
  double t406;
  double t407;
  double t408;
  double t388;
  double t389;
  double t356;
  double t361;
  double t362;
  double t363;
  double t364;
  double t365;
  double t368;
  double t369;
  double t370;
  double t371;
  double t384;
  double t385;
  double t386;
  double t387;
  double t390;
  double t391;
  double t438;
  double t439;
  double t440;
  double t434;
  double t435;
  double t436;
  double t418;
  double t419;
  t120 = Cos(var1[5]);
  t94 = Cos(var1[6]);
  t98 = Sin(var1[5]);
  t127 = Sin(var1[6]);
  t134 = Cos(var1[2]);
  t103 = -1.*t94*t98;
  t130 = -1.*t120*t127;
  t131 = t103 + t130;
  t85 = Sin(var1[2]);
  t138 = t120*t94;
  t146 = -1.*t98*t127;
  t147 = t138 + t146;
  t133 = -1.*t85*t131;
  t161 = -1.*t134*t131;
  t178 = -1.*t120*t94;
  t183 = t98*t127;
  t184 = t178 + t183;
  t187 = t134*t184;
  t202 = t133 + t187;
  t210 = 0.384*var2[0]*t202;
  t216 = -1.*t85*t184;
  t219 = t161 + t216;
  t220 = 0.384*var2[1]*t219;
  t221 = t210 + t220;
  t222 = var2[6]*t221;
  t150 = -1.*t134*t147;
  t152 = t133 + t150;
  t223 = t134*t131;
  t224 = -1.*t85*t147;
  t227 = t223 + t224;
  t271 = t94*t98;
  t275 = t120*t127;
  t276 = t271 + t275;
  t292 = -1.*t94;
  t293 = 1. + t292;
  t294 = 0.4*t293;
  t296 = 0.64*t94;
  t297 = t294 + t296;
  t298 = -1.*t297*t98;
  t299 = -0.24*t120*t127;
  t300 = t298 + t299;
  t330 = t120*t297;
  t331 = -0.24*t98*t127;
  t332 = t330 + t331;
  t277 = t85*t276;
  t282 = t277 + t187;
  t283 = 0.384*var2[0]*t282;
  t288 = t134*t276;
  t289 = t288 + t216;
  t290 = 0.384*var2[1]*t289;
  t303 = t297*t98;
  t316 = 0.24*t120*t127;
  t321 = t303 + t316;
  t324 = t131*t321;
  t357 = -0.24*t94*t98;
  t358 = t357 + t299;
  t339 = 0.24*t98*t127;
  t342 = t332*t184;
  t392 = t300*t147;
  t393 = t321*t147;
  t406 = t131*t332;
  t407 = t276*t332;
  t408 = t392 + t393 + t406 + t407;
  t388 = t85*t184;
  t389 = t223 + t388;
  t356 = t131*t300;
  t361 = t131*t358;
  t362 = t358*t276;
  t363 = t147*t332;
  t364 = 0.24*t120*t94;
  t365 = t364 + t331;
  t368 = t147*t365;
  t369 = -0.24*t120*t94;
  t370 = t369 + t339;
  t371 = t147*t370;
  t384 = t356 + t361 + t324 + t362 + t363 + t368 + t371 + t342;
  t385 = 0.384*var2[2]*t384;
  t386 = t283 + t290 + t385;
  t387 = var2[6]*t386;
  t390 = 0.384*var2[6]*t389;
  t391 = 0.384*var2[6]*t202;
  t438 = -1.*t297*t127;
  t439 = 0.24*t94*t127;
  t440 = t438 + t439;
  t434 = t358*t147;
  t435 = t276*t365;
  t436 = t434 + t393 + t406 + t435;
  t418 = 0.384*var2[1]*t202;
  t419 = 0.384*var2[0]*t389;
  p_output1[0]=(0.384*t152*var2[0] + 0.384*(t161 + t147*t85)*var2[1])*var2[6];
  p_output1[1]=t222;
  p_output1[2]=t222;
  p_output1[3]=0.384*t227*var2[6];
  p_output1[4]=0.384*t152*var2[6];
  p_output1[5]=0.384*t227*var2[0] + 0.384*t152*var2[1];
  p_output1[6]=t222;
  p_output1[7]=(t283 + t290 + 0.384*(2.*t131*t300 + t276*t300 + t324 + 2.*t147*t332 + t147*(-1.*t120*t297 + t339) + t342)*var2[2])*var2[6];
  p_output1[8]=t387;
  p_output1[9]=t390;
  p_output1[10]=t391;
  p_output1[11]=0.384*t408*var2[6];
  p_output1[12]=t418 + t419 + 0.384*t408*var2[2];
  p_output1[13]=t222;
  p_output1[14]=t387;
  p_output1[15]=(t283 + t290 + 0.384*(t324 + t342 + 2.*t131*t358 + t362 + 2.*t147*t365 + t371)*var2[2] + 0.384*(-1.*t297*t94 + 0.24*Power(t94,2))*var2[5])*var2[6];
  p_output1[16]=t390;
  p_output1[17]=t391;
  p_output1[18]=0.384*t436*var2[6];
  p_output1[19]=0.384*t440*var2[6];
  p_output1[20]=t418 + t419 + 0.384*t436*var2[2] + 0.384*t440*var2[5];
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

#include "J_Ce3_vec7_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
