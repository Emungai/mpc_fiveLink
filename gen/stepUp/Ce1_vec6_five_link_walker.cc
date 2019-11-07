/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:06 GMT-05:00
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
  double t12087;
  double t12172;
  double t7789;
  double t7910;
  double t7606;
  double t7856;
  double t12099;
  double t12163;
  double t12164;
  double t12165;
  double t12166;
  double t12202;
  double t12206;
  double t12235;
  double t7831;
  double t8310;
  double t8852;
  double t12086;
  double t12179;
  double t12181;
  double t12187;
  double t12254;
  double t12255;
  double t12256;
  double t12236;
  double t12239;
  double t12240;
  double t12250;
  double t12253;
  double t12257;
  double t12263;
  double t12264;
  double t12265;
  double t12188;
  double t12189;
  double t12190;
  double t12266;
  double t12267;
  double t12268;
  double t12269;
  double t12270;
  double t12271;
  double t12258;
  double t12289;
  double t12290;
  double t12291;
  double t12292;
  double t12259;
  double t12293;
  double t12278;
  double t12279;
  double t12280;
  double t12200;
  double t12237;
  double t12302;
  double t12274;
  double t12275;
  double t12276;
  double t12303;
  double t12304;
  double t12305;
  double t12322;
  double t12323;
  double t12324;
  double t12314;
  double t12315;
  double t12316;
  double t12318;
  double t12319;
  double t12320;
  double t12321;
  double t12325;
  double t12345;
  double t12346;
  double t12330;
  double t12348;
  double t12349;
  double t12332;
  t12087 = Cos(var1[6]);
  t12172 = Sin(var1[6]);
  t7789 = Sin(var1[2]);
  t7910 = Sin(var1[5]);
  t7606 = Cos(var1[5]);
  t7856 = Cos(var1[2]);
  t12099 = -1.*t12087;
  t12163 = 1. + t12099;
  t12164 = 0.4*t12163;
  t12165 = 0.64*t12087;
  t12166 = t12164 + t12165;
  t12202 = t7606*t12087;
  t12206 = -1.*t7910*t12172;
  t12235 = t12202 + t12206;
  t7831 = -1.*t7606*t7789;
  t8310 = -1.*t7856*t7910;
  t8852 = t7831 + t8310;
  t12086 = 0.748*t8852;
  t12179 = t12166*t12172;
  t12181 = -0.24*t12087*t12172;
  t12187 = t12179 + t12181;
  t12254 = -1.*t12087*t7910;
  t12255 = -1.*t7606*t12172;
  t12256 = t12254 + t12255;
  t12236 = t7856*t12235;
  t12239 = t12166*t12087;
  t12240 = Power(t12172,2);
  t12250 = 0.24*t12240;
  t12253 = t12239 + t12250;
  t12257 = t7856*t12256;
  t12263 = t7789*t12256;
  t12264 = t12263 + t12236;
  t12265 = 3.2*t12187*t12264;
  t12188 = t12087*t7910;
  t12189 = t7606*t12172;
  t12190 = t12188 + t12189;
  t12266 = -1.*t7606*t12087;
  t12267 = t7910*t12172;
  t12268 = t12266 + t12267;
  t12269 = t7789*t12268;
  t12270 = t12257 + t12269;
  t12271 = 3.2*t12253*t12270;
  t12258 = -1.*t7789*t12235;
  t12289 = -1.*t7856*t7606;
  t12290 = t7789*t7910;
  t12291 = t12289 + t12290;
  t12292 = 0.748*t12291;
  t12259 = t12257 + t12258;
  t12293 = -1.*t7789*t12256;
  t12278 = Power(t12087,2);
  t12279 = -0.24*t12278;
  t12280 = t12239 + t12279;
  t12200 = -1.*t7789*t12190;
  t12237 = t12200 + t12236;
  t12302 = 3.2*t12187*t12259;
  t12274 = -1.*t12166*t12172;
  t12275 = 0.24*t12087*t12172;
  t12276 = t12274 + t12275;
  t12303 = t7856*t12268;
  t12304 = t12293 + t12303;
  t12305 = 3.2*t12253*t12304;
  t12322 = t7606*t12166;
  t12323 = -0.24*t7910*t12172;
  t12324 = t12322 + t12323;
  t12314 = -1.*t12166*t7910;
  t12315 = -0.24*t7606*t12172;
  t12316 = t12314 + t12315;
  t12318 = t12166*t7910;
  t12319 = 0.24*t7606*t12172;
  t12320 = t12318 + t12319;
  t12321 = t12320*t12235;
  t12325 = t12256*t12324;
  t12345 = -0.24*t12087*t7910;
  t12346 = t12345 + t12315;
  t12330 = -1.*t12256*t12320;
  t12348 = 0.24*t7606*t12087;
  t12349 = t12348 + t12323;
  t12332 = -1.*t12324*t12268;
  p_output1[0]=var2[5]*(-0.5*(t12086 + 3.2*t12187*t12237 + 3.2*t12253*t12259)*var2[2] - 0.5*(t12086 + t12265 + t12271)*var2[5] - 0.5*(t12265 + t12271 + 3.2*t12264*t12276 + 3.2*t12280*(t12235*t7789 + t12190*t7856))*var2[6]);
  p_output1[1]=var2[5]*(-0.5*(t12292 + 3.2*t12187*(t12258 - 1.*t12190*t7856) + 3.2*t12253*(t12293 - 1.*t12235*t7856))*var2[2] - 0.5*(t12292 + t12302 + t12305)*var2[5] - 0.5*(3.2*t12259*t12276 + 3.2*t12237*t12280 + t12302 + t12305)*var2[6]);
  p_output1[2]=var2[5]*(-0.5*(3.2*t12253*(t12235*t12316 + t12321 + t12190*t12324 + t12325) + 3.2*t12187*(-1.*t12256*t12316 - 1.*t12235*t12324 + t12330 + t12332))*var2[5] - 0.5*(3.2*t12276*(t12190*t12320 + t12235*t12324) + 3.2*t12280*(-1.*t12235*t12320 - 1.*t12256*t12324) + 3.2*t12253*(t12321 + t12325 + t12235*t12346 + t12190*t12349) + 3.2*t12187*(t12330 + t12332 - 1.*t12256*t12346 - 1.*t12235*t12349))*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=-0.5*(6.4*t12253*t12276 + 6.4*t12187*t12280)*var2[5]*var2[6];
  p_output1[6]=-0.384*t12276*var2[5]*var2[6];
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

#include "Ce1_vec6_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
