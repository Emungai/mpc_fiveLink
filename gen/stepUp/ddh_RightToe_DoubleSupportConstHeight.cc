/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:35 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t9188;
  double t9185;
  double t9186;
  double t9189;
  double t9179;
  double t9187;
  double t9197;
  double t9198;
  double t9200;
  double t9201;
  double t9202;
  double t9220;
  double t9183;
  double t9184;
  double t9227;
  double t9228;
  double t9229;
  double t9226;
  double t9230;
  double t9231;
  double t9232;
  double t9233;
  double t9234;
  double t9235;
  double t9240;
  double t9241;
  double t9242;
  double t9243;
  double t9244;
  double t9245;
  double t9248;
  double t9249;
  double t9250;
  double t9251;
  double t9252;
  double t9253;
  double t9254;
  double t9267;
  double t9268;
  double t9269;
  double t9266;
  double t9270;
  double t9271;
  double t9272;
  double t9273;
  double t9274;
  double t9265;
  double t9275;
  double t9276;
  double t9277;
  double t9287;
  double t9289;
  double t9294;
  double t9295;
  double t9296;
  double t9297;
  double t9298;
  double t9304;
  double t9305;
  double t9306;
  double t9307;
  double t9308;
  double t9309;
  double t9303;
  double t9310;
  double t9311;
  double t9312;
  t9188 = Cos(var1[2]);
  t9185 = Cos(var1[3]);
  t9186 = Sin(var1[2]);
  t9189 = Sin(var1[3]);
  t9179 = Cos(var1[4]);
  t9187 = t9185*t9186;
  t9197 = t9188*t9189;
  t9198 = t9187 + t9197;
  t9200 = t9188*t9185;
  t9201 = -1.*t9186*t9189;
  t9202 = t9200 + t9201;
  t9220 = Sin(var1[4]);
  t9183 = -1.*t9179;
  t9184 = 1. + t9183;
  t9227 = -1.*t9185*t9186;
  t9228 = -1.*t9188*t9189;
  t9229 = t9227 + t9228;
  t9226 = 0.4*t9184*t9202;
  t9230 = -0.4*t9229*t9220;
  t9231 = t9179*t9202;
  t9232 = t9229*t9220;
  t9233 = t9231 + t9232;
  t9234 = 0.8*t9233;
  t9235 = t9226 + t9230 + t9234;
  t9240 = -0.4*t9179*t9202;
  t9241 = 0.4*t9198*t9220;
  t9242 = -1.*t9198*t9220;
  t9243 = t9231 + t9242;
  t9244 = 0.8*t9243;
  t9245 = t9240 + t9241 + t9244;
  t9248 = -0.4*t9179*t9229;
  t9249 = 0.4*t9202*t9220;
  t9250 = t9179*t9229;
  t9251 = -1.*t9202*t9220;
  t9252 = t9250 + t9251;
  t9253 = 0.8*t9252;
  t9254 = t9248 + t9249 + t9253;
  t9267 = -1.*t9188*t9185;
  t9268 = t9186*t9189;
  t9269 = t9267 + t9268;
  t9266 = 0.4*t9184*t9229;
  t9270 = -0.4*t9269*t9220;
  t9271 = t9269*t9220;
  t9272 = t9250 + t9271;
  t9273 = 0.8*t9272;
  t9274 = t9266 + t9270 + t9273;
  t9265 = var2[4]*t9254;
  t9275 = var2[2]*t9274;
  t9276 = var2[3]*t9274;
  t9277 = t9265 + t9275 + t9276;
  t9287 = 0.4*t9229*t9220;
  t9289 = -1.*t9229*t9220;
  t9294 = -0.4*t9179*t9269;
  t9295 = t9179*t9269;
  t9296 = t9295 + t9289;
  t9297 = 0.8*t9296;
  t9298 = t9294 + t9287 + t9297;
  t9304 = 0.4*t9184*t9269;
  t9305 = -0.4*t9198*t9220;
  t9306 = t9198*t9220;
  t9307 = t9295 + t9306;
  t9308 = 0.8*t9307;
  t9309 = t9304 + t9305 + t9308;
  t9303 = var2[4]*t9298;
  t9310 = var2[2]*t9309;
  t9311 = var2[3]*t9309;
  t9312 = t9303 + t9310 + t9311;
  p_output1[0]=0.4*t9184*t9198 - 0.4*t9202*t9220 + 0.8*(t9179*t9198 + t9202*t9220) + var1[0] + var2[0] + t9235*var2[2] + t9277*var2[2] + t9235*var2[3] + t9277*var2[3] + t9245*var2[4] + var2[4]*(t9254*var2[2] + t9254*var2[3] + (0.4*t9179*t9198 + t9249 + 0.8*(-1.*t9179*t9198 + t9251))*var2[4]) + var3[0] + t9235*var3[2] + t9235*var3[3] + t9245*var3[4] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t9226 + t9230 + t9234 + t9265 + t9275 + t9276 + var1[1] + var2[1] + t9312*var2[2] + t9312*var2[3] + var2[4]*(t9298*var2[2] + t9298*var2[3] + (0.4*t9179*t9202 + t9287 + 0.8*(-1.*t9179*t9202 + t9289))*var2[4]) + var3[1] + t9274*var3[2] + t9274*var3[3] + t9254*var3[4] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_RightToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void ddh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
