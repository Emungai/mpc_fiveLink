/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:25 GMT-05:00
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
  double t4269;
  double t4218;
  double t4246;
  double t4198;
  double t4332;
  double t4100;
  double t4319;
  double t4320;
  double t4324;
  double t4326;
  double t4327;
  double t4381;
  double t4389;
  double t4390;
  double t4199;
  double t4249;
  double t4267;
  double t4268;
  double t4415;
  double t4417;
  double t4418;
  double t4339;
  double t4344;
  double t4358;
  double t4429;
  double t4331;
  double t4336;
  double t4337;
  double t4338;
  double t4378;
  double t4422;
  double t4423;
  double t4427;
  double t4446;
  double t4447;
  double t4448;
  double t4453;
  double t4454;
  double t4455;
  double t4456;
  double t4462;
  double t4466;
  double t4467;
  double t4469;
  double t4470;
  double t4471;
  double t4488;
  double t4512;
  double t4516;
  double t4517;
  double t4518;
  double t4519;
  double t4521;
  double t4491;
  double t4492;
  double t4493;
  double t4484;
  double t4489;
  double t4490;
  double t4498;
  double t4499;
  double t4526;
  double t4527;
  double t4528;
  double t4536;
  double t4537;
  double t4567;
  double t4568;
  double t4569;
  double t4570;
  double t4571;
  double t4572;
  double t4573;
  double t4576;
  double t4548;
  double t4549;
  double t4551;
  double t4577;
  double t4580;
  double t4581;
  double t4582;
  double t4391;
  double t4586;
  double t4587;
  double t4588;
  double t4594;
  double t4413;
  double t4597;
  double t4602;
  double t4428;
  double t4430;
  double t4603;
  double t4604;
  double t4605;
  double t4606;
  double t4615;
  double t4621;
  double t4622;
  double t4608;
  double t4609;
  double t4610;
  double t4625;
  double t4626;
  double t4627;
  double t4544;
  double t4545;
  double t4546;
  double t4414;
  double t4431;
  double t4441;
  double t4445;
  double t4501;
  double t4679;
  double t4680;
  double t4681;
  double t4664;
  double t4665;
  double t4666;
  double t4689;
  double t4690;
  double t4691;
  double t4684;
  double t4685;
  double t4686;
  double t4683;
  double t4719;
  double t4720;
  double t4692;
  double t4704;
  double t4730;
  double t4731;
  double t4744;
  double t4745;
  double t4708;
  double t4713;
  double t4714;
  double t4715;
  double t4716;
  double t4717;
  double t4718;
  double t4724;
  double t4729;
  double t4743;
  double t4746;
  double t4747;
  double t4748;
  double t4749;
  double t4750;
  double t4751;
  double t4752;
  double t4753;
  double t4754;
  double t4755;
  double t4756;
  double t4757;
  double t4758;
  double t4759;
  double t4763;
  double t4769;
  double t4770;
  double t4771;
  double t4772;
  double t4773;
  double t4778;
  double t4779;
  double t4781;
  double t4782;
  double t4784;
  double t4785;
  double t4786;
  double t4792;
  double t4793;
  double t4794;
  double t4808;
  double t4809;
  double t4810;
  double t4811;
  double t4812;
  double t4824;
  double t4825;
  double t4826;
  t4269 = Cos(var1[4]);
  t4218 = Sin(var1[2]);
  t4246 = Sin(var1[3]);
  t4198 = Cos(var1[3]);
  t4332 = Sin(var1[4]);
  t4100 = Cos(var1[2]);
  t4319 = -1.*t4269;
  t4320 = 1. + t4319;
  t4324 = 0.4*t4320;
  t4326 = 0.64*t4269;
  t4327 = t4324 + t4326;
  t4381 = t4198*t4269;
  t4389 = -1.*t4246*t4332;
  t4390 = t4381 + t4389;
  t4199 = -1.*t4100*t4198;
  t4249 = t4218*t4246;
  t4267 = t4199 + t4249;
  t4268 = 0.748*t4267;
  t4415 = t4327*t4332;
  t4417 = -0.24*t4269*t4332;
  t4418 = t4415 + t4417;
  t4339 = -1.*t4269*t4246;
  t4344 = -1.*t4198*t4332;
  t4358 = t4339 + t4344;
  t4429 = -1.*t4218*t4390;
  t4331 = t4327*t4269;
  t4336 = Power(t4332,2);
  t4337 = 0.24*t4336;
  t4338 = t4331 + t4337;
  t4378 = -1.*t4218*t4358;
  t4422 = t4269*t4246;
  t4423 = t4198*t4332;
  t4427 = t4422 + t4423;
  t4446 = t4100*t4358;
  t4447 = t4446 + t4429;
  t4448 = 3.2*t4418*t4447;
  t4453 = -1.*t4198*t4269;
  t4454 = t4246*t4332;
  t4455 = t4453 + t4454;
  t4456 = t4100*t4455;
  t4462 = t4378 + t4456;
  t4466 = 3.2*t4338*t4462;
  t4467 = t4268 + t4448 + t4466;
  t4469 = Power(t4269,2);
  t4470 = -0.24*t4469;
  t4471 = t4331 + t4470;
  t4488 = t4100*t4390;
  t4512 = t4218*t4427;
  t4516 = t4512 + t4456;
  t4517 = 3.2*t4338*t4516;
  t4518 = t4218*t4455;
  t4519 = t4446 + t4518;
  t4521 = 3.2*t4418*t4519;
  t4491 = -1.*t4327*t4332;
  t4492 = 0.24*t4269*t4332;
  t4493 = t4491 + t4492;
  t4484 = -1.*t4218*t4427;
  t4489 = t4484 + t4488;
  t4490 = 3.2*t4471*t4489;
  t4498 = 3.2*t4493*t4447;
  t4499 = t4490 + t4448 + t4498 + t4466;
  t4526 = t4218*t4358;
  t4527 = t4526 + t4488;
  t4528 = 3.2*t4471*t4527;
  t4536 = 3.2*t4493*t4519;
  t4537 = t4528 + t4517 + t4521 + t4536;
  t4567 = -1.*t4198*t4218;
  t4568 = -1.*t4100*t4246;
  t4569 = t4567 + t4568;
  t4570 = 0.748*t4569;
  t4571 = 3.2*t4418*t4489;
  t4572 = 3.2*t4338*t4447;
  t4573 = t4570 + t4571 + t4572;
  t4576 = 3.2*t4418*t4527;
  t4548 = t4100*t4427;
  t4549 = t4218*t4390;
  t4551 = t4548 + t4549;
  t4577 = 3.2*t4338*t4519;
  t4580 = 3.2*t4493*t4527;
  t4581 = 3.2*t4471*t4551;
  t4582 = t4576 + t4580 + t4581 + t4577;
  t4391 = -1.*t4100*t4390;
  t4586 = t4198*t4218;
  t4587 = t4100*t4246;
  t4588 = t4586 + t4587;
  t4594 = 0.748*t4588;
  t4413 = t4378 + t4391;
  t4597 = -1.*t4100*t4358;
  t4602 = 3.2*t4418*t4413;
  t4428 = -1.*t4100*t4427;
  t4430 = t4428 + t4429;
  t4603 = -1.*t4218*t4455;
  t4604 = t4597 + t4603;
  t4605 = 3.2*t4338*t4604;
  t4606 = t4594 + t4602 + t4605;
  t4615 = 3.2*t4418*t4462;
  t4621 = t4548 + t4603;
  t4622 = 3.2*t4338*t4621;
  t4608 = 3.2*t4493*t4413;
  t4609 = 3.2*t4471*t4430;
  t4610 = t4602 + t4608 + t4609 + t4605;
  t4625 = 3.2*t4471*t4447;
  t4626 = 3.2*t4493*t4462;
  t4627 = t4625 + t4615 + t4626 + t4622;
  t4544 = -1.*t4327*t4269;
  t4545 = 0.24*t4469;
  t4546 = t4544 + t4545;
  t4414 = 3.2*t4338*t4413;
  t4431 = 3.2*t4418*t4430;
  t4441 = t4268 + t4414 + t4431;
  t4445 = -0.5*var2[2]*t4441;
  t4501 = -0.5*var2[4]*t4499;
  t4679 = t4198*t4327;
  t4680 = -0.24*t4246*t4332;
  t4681 = t4679 + t4680;
  t4664 = -1.*t4327*t4246;
  t4665 = -0.24*t4198*t4332;
  t4666 = t4664 + t4665;
  t4689 = t4327*t4246;
  t4690 = 0.24*t4198*t4332;
  t4691 = t4689 + t4690;
  t4684 = -1.*t4198*t4327;
  t4685 = 0.24*t4246*t4332;
  t4686 = t4684 + t4685;
  t4683 = -1.*t4427*t4681;
  t4719 = -0.24*t4269*t4246;
  t4720 = t4719 + t4665;
  t4692 = -1.*t4691*t4455;
  t4704 = t4358*t4691;
  t4730 = 0.24*t4198*t4269;
  t4731 = t4730 + t4680;
  t4744 = -0.24*t4198*t4269;
  t4745 = t4744 + t4685;
  t4708 = t4681*t4455;
  t4713 = t4666*t4390;
  t4714 = t4691*t4390;
  t4715 = t4358*t4681;
  t4716 = t4427*t4681;
  t4717 = t4713 + t4714 + t4715 + t4716;
  t4718 = 3.2*t4493*t4717;
  t4724 = -1.*t4720*t4390;
  t4729 = -1.*t4358*t4681;
  t4743 = -1.*t4358*t4731;
  t4746 = -1.*t4358*t4745;
  t4747 = -1.*t4666*t4455;
  t4748 = -1.*t4720*t4455;
  t4749 = t4724 + t4729 + t4683 + t4743 + t4746 + t4747 + t4748 + t4692;
  t4750 = 3.2*t4418*t4749;
  t4751 = -1.*t4358*t4666;
  t4752 = -1.*t4358*t4691;
  t4753 = -1.*t4390*t4681;
  t4754 = -1.*t4681*t4455;
  t4755 = t4751 + t4752 + t4753 + t4754;
  t4756 = 3.2*t4471*t4755;
  t4757 = t4358*t4666;
  t4758 = t4358*t4720;
  t4759 = t4720*t4427;
  t4763 = t4390*t4681;
  t4769 = t4390*t4731;
  t4770 = t4390*t4745;
  t4771 = t4757 + t4758 + t4704 + t4759 + t4763 + t4769 + t4770 + t4708;
  t4772 = 3.2*t4338*t4771;
  t4773 = t4718 + t4750 + t4756 + t4772;
  t4778 = -1.*t4691*t4390;
  t4779 = t4778 + t4729;
  t4781 = t4691*t4427;
  t4782 = t4781 + t4763;
  t4784 = t4720*t4390;
  t4785 = t4427*t4731;
  t4786 = t4784 + t4714 + t4715 + t4785;
  t4792 = -1.*t4358*t4720;
  t4793 = -1.*t4390*t4731;
  t4794 = t4792 + t4752 + t4793 + t4754;
  t4808 = 3.2*t4471*t4779;
  t4809 = 3.2*t4493*t4782;
  t4810 = 3.2*t4338*t4786;
  t4811 = 3.2*t4418*t4794;
  t4812 = t4808 + t4809 + t4810 + t4811;
  t4824 = 6.4*t4471*t4418;
  t4825 = 6.4*t4493*t4338;
  t4826 = t4824 + t4825;
  p_output1[0]=var2[3]*(t4445 + t4501 - 0.5*t4467*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t4467*var2[2] - 0.5*(t4268 + t4517 + t4521)*var2[3] - 0.5*t4537*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t4499*var2[2] - 0.5*t4537*var2[3] - 0.5*(t4517 + 6.4*t4493*t4519 + t4521 + 6.4*t4471*t4527 + 3.2*t4527*t4546 + 3.2*t4493*t4551)*var2[4]);
  p_output1[3]=-0.5*t4573*var2[3];
  p_output1[4]=-0.5*t4573*var2[2] - 1.*(t4570 + t4576 + t4577)*var2[3] - 0.5*t4582*var2[4];
  p_output1[5]=-0.5*t4582*var2[3];
  p_output1[6]=var2[3]*(-0.5*(3.2*t4418*(t4391 + t4512) + t4594 + 3.2*t4338*(t4549 + t4597))*var2[2] - 0.5*t4606*var2[3] - 0.5*t4610*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t4606*var2[2] - 0.5*(t4594 + t4615 + t4622)*var2[3] - 0.5*t4627*var2[4]);
  p_output1[8]=var2[3]*(-0.5*t4610*var2[2] - 0.5*t4627*var2[3] - 0.5*(6.4*t4447*t4471 + 6.4*t4462*t4493 + 3.2*t4489*t4493 + 3.2*t4447*t4546 + t4615 + t4622)*var2[4]);
  p_output1[9]=-0.5*t4441*var2[3];
  p_output1[10]=t4445 + t4501 - 1.*t4467*var2[3];
  p_output1[11]=-0.5*t4499*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.2*t4418*(-1.*t4390*t4666 - 2.*t4455*t4666 - 2.*t4358*t4681 + t4683 - 1.*t4358*t4686 + t4692) + 3.2*t4338*(2.*t4358*t4666 + t4427*t4666 + 2.*t4390*t4681 + t4390*t4686 + t4704 + t4708))*var2[3] - 0.5*t4773*var2[4]);
  p_output1[13]=var2[3]*(-0.5*t4773*var2[3] - 0.5*(3.2*t4418*(t4683 + t4692 - 2.*t4455*t4720 + t4724 - 2.*t4358*t4731 + t4746) + 3.2*t4338*(t4704 + t4708 + 2.*t4358*t4720 + 2.*t4390*t4731 + t4759 + t4770) + 3.2*t4493*t4779 + 3.2*t4546*t4782 + 6.4*t4493*t4786 + 6.4*t4471*t4794)*var2[4]);
  p_output1[14]=-1.*(3.2*t4338*t4717 + 3.2*t4418*t4755)*var2[3] - 0.5*t4812*var2[4];
  p_output1[15]=-0.5*t4812*var2[3];
  p_output1[16]=-0.5*(6.4*Power(t4471,2) + 6.4*t4418*t4493 + 6.4*Power(t4493,2) + 6.4*t4338*t4546)*var2[3]*var2[4];
  p_output1[17]=-0.5*t4826*var2[4];
  p_output1[18]=-0.5*t4826*var2[3];
  p_output1[19]=-0.384*t4546*var2[3]*var2[4];
  p_output1[20]=-0.384*t4493*var2[4];
  p_output1[21]=-0.384*t4493*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec4_five_link_walker.hh"

namespace LeftStance
{

void J_Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
