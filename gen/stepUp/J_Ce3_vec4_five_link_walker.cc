/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:21:14 GMT-05:00
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
  double t3002;
  double t364;
  double t435;
  double t264;
  double t3637;
  double t138;
  double t3083;
  double t3218;
  double t3337;
  double t3343;
  double t3545;
  double t3769;
  double t3770;
  double t3772;
  double t3813;
  double t3815;
  double t3817;
  double t3818;
  double t3819;
  double t3830;
  double t3779;
  double t3572;
  double t3638;
  double t3639;
  double t3672;
  double t3682;
  double t3686;
  double t3755;
  double t298;
  double t440;
  double t453;
  double t455;
  double t3838;
  double t3768;
  double t3875;
  double t3883;
  double t3885;
  double t3887;
  double t3783;
  double t3908;
  double t4083;
  double t4086;
  double t4089;
  double t4055;
  double t4058;
  double t4061;
  double t4095;
  double t4096;
  double t4101;
  double t4107;
  double t4178;
  double t4192;
  double t4212;
  double t4127;
  double t4149;
  double t4150;
  double t3834;
  double t3840;
  double t4113;
  double t4115;
  double t4116;
  double t4152;
  double t4162;
  double t4163;
  double t3801;
  double t3842;
  double t3855;
  double t4254;
  double t4259;
  double t4267;
  double t4271;
  double t4272;
  double t4273;
  double t4283;
  double t4104;
  double t4106;
  double t4117;
  double t4120;
  double t4122;
  double t4125;
  double t3888;
  double t4386;
  double t4387;
  double t4392;
  double t4382;
  double t4383;
  double t4384;
  double t4409;
  double t4417;
  double t4419;
  double t4403;
  double t4405;
  double t4406;
  double t4313;
  double t4315;
  double t4328;
  double t4333;
  double t4359;
  double t4367;
  double t4369;
  double t4370;
  double t4371;
  double t4399;
  double t4592;
  double t4605;
  double t4420;
  double t4442;
  double t4635;
  double t4636;
  double t4656;
  double t4660;
  double t4458;
  double t4505;
  double t4507;
  double t4514;
  double t4530;
  double t4533;
  double t4562;
  double t4568;
  double t4675;
  double t4676;
  double t4680;
  double t4684;
  double t4685;
  double t4761;
  double t4764;
  double t4765;
  double t4811;
  double t7492;
  double t7493;
  double t4165;
  double t4228;
  double t4231;
  double t4239;
  double t4241;
  double t4242;
  double t4247;
  double t4250;
  double t4251;
  double t4252;
  double t4486;
  double t4492;
  double t4494;
  double t4495;
  double t4508;
  double t4509;
  double t4510;
  double t4513;
  double t4589;
  double t4608;
  double t4617;
  double t4643;
  double t4662;
  double t4665;
  double t4667;
  double t4671;
  double t4673;
  double t4695;
  double t4696;
  double t4702;
  double t4721;
  double t4722;
  double t4725;
  double t4732;
  double t4735;
  double t4740;
  double t4741;
  double t4749;
  double t4753;
  double t4756;
  double t7559;
  double t7562;
  double t7563;
  double t3971;
  double t7832;
  double t7840;
  double t7841;
  double t7843;
  double t7844;
  double t7846;
  double t7847;
  double t7848;
  double t7910;
  double t7911;
  double t7912;
  double t7925;
  double t7929;
  double t7930;
  double t7933;
  double t7934;
  double t7935;
  double t7939;
  double t7940;
  t3002 = Cos(var1[4]);
  t364 = Sin(var1[2]);
  t435 = Sin(var1[3]);
  t264 = Cos(var1[3]);
  t3637 = Sin(var1[4]);
  t138 = Cos(var1[2]);
  t3083 = -1.*t3002;
  t3218 = 1. + t3083;
  t3337 = 0.4*t3218;
  t3343 = 0.64*t3002;
  t3545 = t3337 + t3343;
  t3769 = t264*t3002;
  t3770 = -1.*t435*t3637;
  t3772 = t3769 + t3770;
  t3813 = t3545*t3637;
  t3815 = -0.24*t3002*t3637;
  t3817 = t3813 + t3815;
  t3818 = t3002*t435;
  t3819 = t264*t3637;
  t3830 = t3818 + t3819;
  t3779 = -1.*t138*t3772;
  t3572 = t3545*t3002;
  t3638 = Power(t3637,2);
  t3639 = 0.24*t3638;
  t3672 = t3572 + t3639;
  t3682 = -1.*t3002*t435;
  t3686 = -1.*t264*t3637;
  t3755 = t3682 + t3686;
  t298 = -1.*t138*t264;
  t440 = t364*t435;
  t453 = t298 + t440;
  t455 = -0.748*t453;
  t3838 = -1.*t364*t3772;
  t3768 = -1.*t364*t3755;
  t3875 = t264*t364;
  t3883 = t138*t435;
  t3885 = t3875 + t3883;
  t3887 = -0.748*t3885;
  t3783 = t3768 + t3779;
  t3908 = -1.*t138*t3755;
  t4083 = -1.*t264*t3002;
  t4086 = t435*t3637;
  t4089 = t4083 + t4086;
  t4055 = t138*t3755;
  t4058 = t4055 + t3838;
  t4061 = -3.2*t3817*t4058;
  t4095 = t138*t4089;
  t4096 = t3768 + t4095;
  t4101 = -3.2*t3672*t4096;
  t4107 = -3.2*t3817*t3783;
  t4178 = -1.*t3545*t3637;
  t4192 = 0.24*t3002*t3637;
  t4212 = t4178 + t4192;
  t4127 = Power(t3002,2);
  t4149 = -0.24*t4127;
  t4150 = t3572 + t4149;
  t3834 = -1.*t138*t3830;
  t3840 = t3834 + t3838;
  t4113 = -1.*t364*t4089;
  t4115 = t3908 + t4113;
  t4116 = -3.2*t3672*t4115;
  t4152 = -1.*t364*t3830;
  t4162 = t138*t3772;
  t4163 = t4152 + t4162;
  t3801 = -3.2*t3672*t3783;
  t3842 = -3.2*t3817*t3840;
  t3855 = t455 + t3801 + t3842;
  t4254 = -1.*t264*t364;
  t4259 = -1.*t138*t435;
  t4267 = t4254 + t4259;
  t4271 = -0.748*t4267;
  t4272 = -3.2*t3817*t4163;
  t4273 = -3.2*t3672*t4058;
  t4283 = t4271 + t4272 + t4273;
  t4104 = t455 + t4061 + t4101;
  t4106 = -0.5*var2[0]*t4104;
  t4117 = t3887 + t4107 + t4116;
  t4120 = -0.5*var2[1]*t4117;
  t4122 = t4106 + t4120;
  t4125 = var2[3]*t4122;
  t3888 = t364*t3830;
  t4386 = t264*t3545;
  t4387 = -0.24*t435*t3637;
  t4392 = t4386 + t4387;
  t4382 = -1.*t3545*t435;
  t4383 = -0.24*t264*t3637;
  t4384 = t4382 + t4383;
  t4409 = t3545*t435;
  t4417 = 0.24*t264*t3637;
  t4419 = t4409 + t4417;
  t4403 = -1.*t264*t3545;
  t4405 = 0.24*t435*t3637;
  t4406 = t4403 + t4405;
  t4313 = -3.2*t3817*t4096;
  t4315 = t138*t3830;
  t4328 = t4315 + t4113;
  t4333 = -3.2*t3672*t4328;
  t4359 = t3888 + t4095;
  t4367 = -3.2*t3672*t4359;
  t4369 = t364*t4089;
  t4370 = t4055 + t4369;
  t4371 = -3.2*t3817*t4370;
  t4399 = -1.*t3830*t4392;
  t4592 = -0.24*t3002*t435;
  t4605 = t4592 + t4383;
  t4420 = -1.*t4419*t4089;
  t4442 = t3755*t4419;
  t4635 = 0.24*t264*t3002;
  t4636 = t4635 + t4387;
  t4656 = -0.24*t264*t3002;
  t4660 = t4656 + t4405;
  t4458 = t4392*t4089;
  t4505 = t364*t3755;
  t4507 = t4505 + t4162;
  t4514 = t4384*t3772;
  t4530 = t4419*t3772;
  t4533 = t3755*t4392;
  t4562 = t3830*t4392;
  t4568 = t4514 + t4530 + t4533 + t4562;
  t4675 = -1.*t3755*t4384;
  t4676 = -1.*t3755*t4419;
  t4680 = -1.*t3772*t4392;
  t4684 = -1.*t4392*t4089;
  t4685 = t4675 + t4676 + t4680 + t4684;
  t4761 = -3.2*t3817*t4507;
  t4764 = -3.2*t3672*t4370;
  t4765 = t4271 + t4761 + t4764;
  t4811 = -3.2*t3672*t4568;
  t7492 = -3.2*t3817*t4685;
  t7493 = t4811 + t7492;
  t4165 = -3.2*t4150*t4163;
  t4228 = -3.2*t4212*t4058;
  t4231 = t4165 + t4061 + t4228 + t4101;
  t4239 = -0.5*var2[0]*t4231;
  t4241 = -3.2*t4212*t3783;
  t4242 = -3.2*t4150*t3840;
  t4247 = t4107 + t4241 + t4242 + t4116;
  t4250 = -0.5*var2[1]*t4247;
  t4251 = t4239 + t4250;
  t4252 = var2[3]*t4251;
  t4486 = -3.2*t4150*t4058;
  t4492 = -3.2*t4212*t4096;
  t4494 = t4486 + t4313 + t4492 + t4333;
  t4495 = -0.5*var2[1]*t4494;
  t4508 = -3.2*t4150*t4507;
  t4509 = -3.2*t4212*t4370;
  t4510 = t4508 + t4367 + t4371 + t4509;
  t4513 = -0.5*var2[0]*t4510;
  t4589 = -3.2*t4212*t4568;
  t4608 = -1.*t4605*t3772;
  t4617 = -1.*t3755*t4392;
  t4643 = -1.*t3755*t4636;
  t4662 = -1.*t3755*t4660;
  t4665 = -1.*t4384*t4089;
  t4667 = -1.*t4605*t4089;
  t4671 = t4608 + t4617 + t4399 + t4643 + t4662 + t4665 + t4667 + t4420;
  t4673 = -3.2*t3817*t4671;
  t4695 = -3.2*t4150*t4685;
  t4696 = t3755*t4384;
  t4702 = t3755*t4605;
  t4721 = t4605*t3830;
  t4722 = t3772*t4392;
  t4725 = t3772*t4636;
  t4732 = t3772*t4660;
  t4735 = t4696 + t4702 + t4442 + t4721 + t4722 + t4725 + t4732 + t4458;
  t4740 = -3.2*t3672*t4735;
  t4741 = t4589 + t4673 + t4695 + t4740;
  t4749 = -0.5*var2[2]*t4741;
  t4753 = t4495 + t4513 + t4749;
  t4756 = var2[3]*t4753;
  t7559 = -1.*t3545*t3002;
  t7562 = 0.24*t4127;
  t7563 = t7559 + t7562;
  t3971 = t364*t3772;
  t7832 = t4315 + t3971;
  t7840 = -1.*t4419*t3772;
  t7841 = t7840 + t4617;
  t7843 = t4419*t3830;
  t7844 = t7843 + t4722;
  t7846 = t4605*t3772;
  t7847 = t3830*t4636;
  t7848 = t7846 + t4530 + t4533 + t7847;
  t7910 = -1.*t3755*t4605;
  t7911 = -1.*t3772*t4636;
  t7912 = t7910 + t4676 + t7911 + t4684;
  t7925 = -3.2*t4212*t4507;
  t7929 = -3.2*t4150*t7832;
  t7930 = t4761 + t7925 + t7929 + t4764;
  t7933 = -3.2*t4150*t7841;
  t7934 = -3.2*t4212*t7844;
  t7935 = -3.2*t3672*t7848;
  t7939 = -3.2*t3817*t7912;
  t7940 = t7933 + t7934 + t7935 + t7939;
  p_output1[0]=(-0.5*t3855*var2[0] - 0.5*(t3887 - 3.2*t3817*(t3779 + t3888) - 3.2*t3672*(t3908 + t3971))*var2[1])*var2[3];
  p_output1[1]=t4125;
  p_output1[2]=t4252;
  p_output1[3]=-0.5*t4283*var2[3];
  p_output1[4]=-0.5*t3855*var2[3];
  p_output1[5]=-0.5*t4283*var2[0] - 0.5*t3855*var2[1];
  p_output1[6]=t4125;
  p_output1[7]=(-0.5*(t4367 + t4371 + t455)*var2[0] - 0.5*(t3887 + t4313 + t4333)*var2[1] - 0.5*(-3.2*t3817*(-1.*t3772*t4384 - 2.*t4089*t4384 - 2.*t3755*t4392 + t4399 - 1.*t3755*t4406 + t4420) - 3.2*t3672*(2.*t3755*t4384 + t3830*t4384 + 2.*t3772*t4392 + t3772*t4406 + t4442 + t4458))*var2[2])*var2[3];
  p_output1[8]=t4756;
  p_output1[9]=-0.5*t4765*var2[3];
  p_output1[10]=-0.5*t4104*var2[3];
  p_output1[11]=-0.5*t7493*var2[3];
  p_output1[12]=-0.5*t4765*var2[0] - 0.5*t4104*var2[1] - 0.5*t7493*var2[2];
  p_output1[13]=t4252;
  p_output1[14]=t4756;
  p_output1[15]=var2[3]*(-0.5*(t4367 - 6.4*t4212*t4370 + t4371 - 6.4*t4150*t4507 - 3.2*t4507*t7563 - 3.2*t4212*t7832)*var2[0] - 0.5*(-6.4*t4058*t4150 - 6.4*t4096*t4212 - 3.2*t4163*t4212 + t4313 + t4333 - 3.2*t4058*t7563)*var2[1] - 0.5*(-3.2*t3817*(t4399 + t4420 - 2.*t4089*t4605 + t4608 - 2.*t3755*t4636 + t4662) - 3.2*t3672*(t4442 + t4458 + 2.*t3755*t4605 + 2.*t3772*t4636 + t4721 + t4732) - 3.2*t4212*t7841 - 3.2*t7563*t7844 - 6.4*t4212*t7848 - 6.4*t4150*t7912)*var2[2] - 0.5*(-6.4*Power(t4150,2) - 6.4*t3817*t4212 - 6.4*Power(t4212,2) - 6.4*t3672*t7563)*var2[3] + 0.384*t7563*var2[4]);
  p_output1[16]=-0.5*t7930*var2[3];
  p_output1[17]=-0.5*t4231*var2[3];
  p_output1[18]=-0.5*t7940*var2[3];
  p_output1[19]=-0.5*t7930*var2[0] - 0.5*t4231*var2[1] - 0.5*t7940*var2[2] - 1.*(-6.4*t3817*t4150 - 6.4*t3672*t4212)*var2[3] + 0.384*t4212*var2[4];
  p_output1[20]=0.384*t4212*var2[3];
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

namespace LeftStance
{

void J_Ce3_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
