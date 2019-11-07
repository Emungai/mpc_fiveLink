/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:24:25 GMT-05:00
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
  double t4077;
  double t4082;
  double t4076;
  double t4093;
  double t4026;
  double t4078;
  double t4094;
  double t4095;
  double t4104;
  double t4105;
  double t4113;
  double t4118;
  double t4129;
  double t4134;
  double t4138;
  double t4156;
  double t4157;
  double t4158;
  double t4159;
  double t4048;
  double t4074;
  double t4163;
  double t4184;
  double t4189;
  double t4162;
  double t4191;
  double t4192;
  double t4195;
  double t4200;
  double t4213;
  double t4229;
  double t4250;
  double t4256;
  double t4257;
  double t4258;
  double t4260;
  double t4261;
  double t4269;
  double t4270;
  double t4271;
  double t4268;
  double t4272;
  double t4274;
  double t4275;
  double t4276;
  double t4284;
  double t4266;
  double t4285;
  double t4286;
  double t4287;
  double t4096;
  double t4120;
  double t4123;
  double t4124;
  double t4125;
  double t4126;
  double t4160;
  double t4161;
  double t4214;
  double t4215;
  double t4216;
  double t4227;
  double t4228;
  double t4249;
  double t4251;
  double t4252;
  double t4253;
  double t4254;
  double t4262;
  double t4263;
  double t4264;
  double t4265;
  double t4289;
  double t4290;
  double t4291;
  double t4305;
  double t4306;
  double t4307;
  double t4308;
  double t4313;
  double t4347;
  double t4358;
  double t4359;
  double t4360;
  double t4292;
  double t4296;
  double t4297;
  double t4298;
  double t4300;
  double t4370;
  double t4377;
  double t4382;
  double t4388;
  double t4389;
  double t4390;
  double t4391;
  double t4392;
  double t4403;
  double t4404;
  double t4421;
  double t4422;
  double t4423;
  double t4424;
  double t4426;
  double t4427;
  double t4428;
  double t4430;
  double t4372;
  double t4374;
  double t4375;
  double t4376;
  double t4381;
  double t4383;
  double t4385;
  double t4386;
  double t4387;
  double t4393;
  double t4398;
  double t4399;
  double t4402;
  double t4431;
  double t4432;
  double t4443;
  double t5714;
  double t5868;
  double t5875;
  double t6005;
  t4077 = Cos(var1[5]);
  t4082 = Sin(var1[2]);
  t4076 = Cos(var1[2]);
  t4093 = Sin(var1[5]);
  t4026 = Cos(var1[6]);
  t4078 = t4076*t4077;
  t4094 = -1.*t4082*t4093;
  t4095 = t4078 + t4094;
  t4104 = -1.*t4077*t4082;
  t4105 = -1.*t4076*t4093;
  t4113 = t4104 + t4105;
  t4118 = Sin(var1[6]);
  t4129 = -0.4*t4026*t4113;
  t4134 = 0.4*t4095*t4118;
  t4138 = t4026*t4113;
  t4156 = -1.*t4095*t4118;
  t4157 = t4138 + t4156;
  t4158 = 0.8*t4157;
  t4159 = t4129 + t4134 + t4158;
  t4048 = -1.*t4026;
  t4074 = 1. + t4048;
  t4163 = -1.*t4076*t4077;
  t4184 = t4082*t4093;
  t4189 = t4163 + t4184;
  t4162 = 0.4*t4074*t4113;
  t4191 = -0.4*t4189*t4118;
  t4192 = t4189*t4118;
  t4195 = t4138 + t4192;
  t4200 = 0.8*t4195;
  t4213 = t4162 + t4191 + t4200;
  t4229 = 0.4*t4113*t4118;
  t4250 = -1.*t4113*t4118;
  t4256 = -0.4*t4026*t4189;
  t4257 = t4026*t4189;
  t4258 = t4257 + t4250;
  t4260 = 0.8*t4258;
  t4261 = t4256 + t4229 + t4260;
  t4269 = t4077*t4082;
  t4270 = t4076*t4093;
  t4271 = t4269 + t4270;
  t4268 = 0.4*t4074*t4189;
  t4272 = -0.4*t4271*t4118;
  t4274 = t4271*t4118;
  t4275 = t4257 + t4274;
  t4276 = 0.8*t4275;
  t4284 = t4268 + t4272 + t4276;
  t4266 = var2[6]*t4261;
  t4285 = var2[2]*t4284;
  t4286 = var2[5]*t4284;
  t4287 = t4266 + t4285 + t4286;
  t4096 = 0.4*t4074*t4095;
  t4120 = -0.4*t4113*t4118;
  t4123 = t4026*t4095;
  t4124 = t4113*t4118;
  t4125 = t4123 + t4124;
  t4126 = 0.8*t4125;
  t4160 = var3[6]*t4159;
  t4161 = var2[6]*t4159;
  t4214 = var3[2]*t4213;
  t4215 = var3[5]*t4213;
  t4216 = var2[2]*t4213;
  t4227 = var2[5]*t4213;
  t4228 = 0.4*t4026*t4095;
  t4249 = -1.*t4026*t4095;
  t4251 = t4249 + t4250;
  t4252 = 0.8*t4251;
  t4253 = t4228 + t4229 + t4252;
  t4254 = var2[6]*t4253;
  t4262 = var2[2]*t4261;
  t4263 = var2[5]*t4261;
  t4264 = t4254 + t4262 + t4263;
  t4265 = var2[6]*t4264;
  t4289 = var2[2]*t4287;
  t4290 = var2[5]*t4287;
  t4291 = t4096 + t4120 + t4126 + t4160 + t4161 + t4214 + t4215 + t4216 + t4227 + t4265 + t4289 + t4290;
  t4305 = 0.4*t4026*t4271;
  t4306 = -1.*t4026*t4271;
  t4307 = t4306 + t4156;
  t4308 = 0.8*t4307;
  t4313 = t4305 + t4134 + t4308;
  t4347 = 2.*var2[6]*t4159;
  t4358 = 2.*var2[2]*t4213;
  t4359 = 2.*var2[5]*t4213;
  t4360 = t4096 + t4120 + t4126 + t4347 + t4358 + t4359;
  t4292 = -0.4*t4026*t4095;
  t4296 = 0.4*t4271*t4118;
  t4297 = -1.*t4271*t4118;
  t4298 = t4123 + t4297;
  t4300 = 0.8*t4298;
  t4370 = t4096 + t4120 + t4126;
  t4377 = 0.4*t4189*t4118;
  t4382 = -1.*t4189*t4118;
  t4388 = -0.4*t4026*t4271;
  t4389 = t4026*t4271;
  t4390 = t4389 + t4382;
  t4391 = 0.8*t4390;
  t4392 = t4388 + t4377 + t4391;
  t4403 = 0.4*t4074*t4271;
  t4404 = -0.4*t4095*t4118;
  t4421 = t4095*t4118;
  t4422 = t4389 + t4421;
  t4423 = 0.8*t4422;
  t4424 = t4403 + t4404 + t4423;
  t4426 = var2[2]*t4424;
  t4427 = var2[5]*t4424;
  t4428 = var2[6]*t4392;
  t4430 = t4426 + t4427 + t4428;
  t4372 = var3[6]*t4261;
  t4374 = var3[2]*t4284;
  t4375 = var3[5]*t4284;
  t4376 = 0.4*t4026*t4113;
  t4381 = -1.*t4026*t4113;
  t4383 = t4381 + t4382;
  t4385 = 0.8*t4383;
  t4386 = t4376 + t4377 + t4385;
  t4387 = var2[6]*t4386;
  t4393 = var2[2]*t4392;
  t4398 = var2[5]*t4392;
  t4399 = t4387 + t4393 + t4398;
  t4402 = var2[6]*t4399;
  t4431 = var2[2]*t4430;
  t4432 = var2[5]*t4430;
  t4443 = t4162 + t4191 + t4200 + t4372 + t4266 + t4374 + t4375 + t4285 + t4286 + t4402 + t4431 + t4432;
  t5714 = 2.*var2[6]*t4261;
  t5868 = 2.*var2[2]*t4284;
  t5875 = 2.*var2[5]*t4284;
  t6005 = t4162 + t4191 + t4200 + t5714 + t5868 + t5875;
  p_output1[0]=1.;
  p_output1[1]=t4291;
  p_output1[2]=t4291;
  p_output1[3]=t4292 + t4296 + t4300 + t4159*var2[2] + t4264*var2[2] + t4159*var2[5] + t4264*var2[5] + t4313*var2[6] + var2[6]*(t4253*var2[2] + t4253*var2[5] + (t4228 + t4272 + 0.8*(t4249 + t4274))*var2[6]) + t4159*var3[2] + t4159*var3[5] + t4313*var3[6];
  p_output1[4]=1.;
  p_output1[5]=t4360;
  p_output1[6]=t4360;
  p_output1[7]=t4292 + t4296 + t4300 + 2.*t4159*var2[2] + 2.*t4159*var2[5] + 2.*t4313*var2[6];
  p_output1[8]=1.;
  p_output1[9]=t4370;
  p_output1[10]=t4370;
  p_output1[11]=t4292 + t4296 + t4300;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t4443;
  p_output1[16]=t4443;
  p_output1[17]=t4129 + t4134 + t4158 + t4254 + t4262 + t4263 + t4399*var2[2] + t4399*var2[5] + var2[6]*(t4386*var2[2] + t4386*var2[5] + (t4376 + t4404 + 0.8*(t4381 + t4421))*var2[6]) + t4261*var3[2] + t4261*var3[5] + t4253*var3[6];
  p_output1[18]=1.;
  p_output1[19]=t6005;
  p_output1[20]=t6005;
  p_output1[21]=t4129 + t4134 + t4158 + 2.*t4261*var2[2] + 2.*t4261*var2[5] + 2.*t4253*var2[6];
  p_output1[22]=1.;
  p_output1[23]=t4213;
  p_output1[24]=t4213;
  p_output1[25]=t4159;
  p_output1[26]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_LeftToe_LeftStanceLift.hh"

namespace LeftStanceLift
{

void J_ddh_LeftToe_LeftStanceLift_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
