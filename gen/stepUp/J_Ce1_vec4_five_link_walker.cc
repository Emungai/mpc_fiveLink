/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:39:34 GMT-05:00
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
  double t4305;
  double t4251;
  double t4282;
  double t4234;
  double t4368;
  double t4136;
  double t4353;
  double t4356;
  double t4357;
  double t4362;
  double t4363;
  double t4417;
  double t4425;
  double t4426;
  double t4235;
  double t4285;
  double t4300;
  double t4304;
  double t4451;
  double t4453;
  double t4454;
  double t4375;
  double t4376;
  double t4394;
  double t4465;
  double t4367;
  double t4372;
  double t4373;
  double t4374;
  double t4414;
  double t4458;
  double t4459;
  double t4463;
  double t4482;
  double t4483;
  double t4484;
  double t4489;
  double t4490;
  double t4491;
  double t4492;
  double t4498;
  double t4502;
  double t4503;
  double t4505;
  double t4506;
  double t4507;
  double t4524;
  double t4548;
  double t4552;
  double t4553;
  double t4554;
  double t4555;
  double t4557;
  double t4527;
  double t4528;
  double t4529;
  double t4520;
  double t4525;
  double t4526;
  double t4534;
  double t4535;
  double t4562;
  double t4563;
  double t4564;
  double t4572;
  double t4573;
  double t4603;
  double t4604;
  double t4605;
  double t4606;
  double t4607;
  double t4608;
  double t4609;
  double t4612;
  double t4584;
  double t4585;
  double t4587;
  double t4613;
  double t4616;
  double t4617;
  double t4618;
  double t4427;
  double t4622;
  double t4623;
  double t4624;
  double t4630;
  double t4449;
  double t4633;
  double t4638;
  double t4464;
  double t4466;
  double t4639;
  double t4640;
  double t4641;
  double t4642;
  double t4651;
  double t4657;
  double t4658;
  double t4644;
  double t4645;
  double t4646;
  double t4661;
  double t4662;
  double t4663;
  double t4580;
  double t4581;
  double t4582;
  double t4450;
  double t4467;
  double t4477;
  double t4481;
  double t4537;
  double t4715;
  double t4716;
  double t4717;
  double t4700;
  double t4701;
  double t4702;
  double t4725;
  double t4726;
  double t4727;
  double t4720;
  double t4721;
  double t4722;
  double t4719;
  double t4755;
  double t4756;
  double t4728;
  double t4740;
  double t4766;
  double t4767;
  double t4780;
  double t4781;
  double t4744;
  double t4749;
  double t4750;
  double t4751;
  double t4752;
  double t4753;
  double t4754;
  double t4760;
  double t4765;
  double t4779;
  double t4782;
  double t4783;
  double t4784;
  double t4785;
  double t4786;
  double t4787;
  double t4788;
  double t4789;
  double t4790;
  double t4791;
  double t4792;
  double t4793;
  double t4794;
  double t4795;
  double t4799;
  double t4805;
  double t4806;
  double t4807;
  double t4808;
  double t4809;
  double t4814;
  double t4815;
  double t4817;
  double t4818;
  double t4820;
  double t4821;
  double t4822;
  double t4828;
  double t4829;
  double t4830;
  double t4844;
  double t4845;
  double t4846;
  double t4847;
  double t4848;
  double t4860;
  double t4861;
  double t4862;
  t4305 = Cos(var1[4]);
  t4251 = Sin(var1[2]);
  t4282 = Sin(var1[3]);
  t4234 = Cos(var1[3]);
  t4368 = Sin(var1[4]);
  t4136 = Cos(var1[2]);
  t4353 = -1.*t4305;
  t4356 = 1. + t4353;
  t4357 = 0.4*t4356;
  t4362 = 0.64*t4305;
  t4363 = t4357 + t4362;
  t4417 = t4234*t4305;
  t4425 = -1.*t4282*t4368;
  t4426 = t4417 + t4425;
  t4235 = -1.*t4136*t4234;
  t4285 = t4251*t4282;
  t4300 = t4235 + t4285;
  t4304 = 0.748*t4300;
  t4451 = t4363*t4368;
  t4453 = -0.24*t4305*t4368;
  t4454 = t4451 + t4453;
  t4375 = -1.*t4305*t4282;
  t4376 = -1.*t4234*t4368;
  t4394 = t4375 + t4376;
  t4465 = -1.*t4251*t4426;
  t4367 = t4363*t4305;
  t4372 = Power(t4368,2);
  t4373 = 0.24*t4372;
  t4374 = t4367 + t4373;
  t4414 = -1.*t4251*t4394;
  t4458 = t4305*t4282;
  t4459 = t4234*t4368;
  t4463 = t4458 + t4459;
  t4482 = t4136*t4394;
  t4483 = t4482 + t4465;
  t4484 = 3.2*t4454*t4483;
  t4489 = -1.*t4234*t4305;
  t4490 = t4282*t4368;
  t4491 = t4489 + t4490;
  t4492 = t4136*t4491;
  t4498 = t4414 + t4492;
  t4502 = 3.2*t4374*t4498;
  t4503 = t4304 + t4484 + t4502;
  t4505 = Power(t4305,2);
  t4506 = -0.24*t4505;
  t4507 = t4367 + t4506;
  t4524 = t4136*t4426;
  t4548 = t4251*t4463;
  t4552 = t4548 + t4492;
  t4553 = 3.2*t4374*t4552;
  t4554 = t4251*t4491;
  t4555 = t4482 + t4554;
  t4557 = 3.2*t4454*t4555;
  t4527 = -1.*t4363*t4368;
  t4528 = 0.24*t4305*t4368;
  t4529 = t4527 + t4528;
  t4520 = -1.*t4251*t4463;
  t4525 = t4520 + t4524;
  t4526 = 3.2*t4507*t4525;
  t4534 = 3.2*t4529*t4483;
  t4535 = t4526 + t4484 + t4534 + t4502;
  t4562 = t4251*t4394;
  t4563 = t4562 + t4524;
  t4564 = 3.2*t4507*t4563;
  t4572 = 3.2*t4529*t4555;
  t4573 = t4564 + t4553 + t4557 + t4572;
  t4603 = -1.*t4234*t4251;
  t4604 = -1.*t4136*t4282;
  t4605 = t4603 + t4604;
  t4606 = 0.748*t4605;
  t4607 = 3.2*t4454*t4525;
  t4608 = 3.2*t4374*t4483;
  t4609 = t4606 + t4607 + t4608;
  t4612 = 3.2*t4454*t4563;
  t4584 = t4136*t4463;
  t4585 = t4251*t4426;
  t4587 = t4584 + t4585;
  t4613 = 3.2*t4374*t4555;
  t4616 = 3.2*t4529*t4563;
  t4617 = 3.2*t4507*t4587;
  t4618 = t4612 + t4616 + t4617 + t4613;
  t4427 = -1.*t4136*t4426;
  t4622 = t4234*t4251;
  t4623 = t4136*t4282;
  t4624 = t4622 + t4623;
  t4630 = 0.748*t4624;
  t4449 = t4414 + t4427;
  t4633 = -1.*t4136*t4394;
  t4638 = 3.2*t4454*t4449;
  t4464 = -1.*t4136*t4463;
  t4466 = t4464 + t4465;
  t4639 = -1.*t4251*t4491;
  t4640 = t4633 + t4639;
  t4641 = 3.2*t4374*t4640;
  t4642 = t4630 + t4638 + t4641;
  t4651 = 3.2*t4454*t4498;
  t4657 = t4584 + t4639;
  t4658 = 3.2*t4374*t4657;
  t4644 = 3.2*t4529*t4449;
  t4645 = 3.2*t4507*t4466;
  t4646 = t4638 + t4644 + t4645 + t4641;
  t4661 = 3.2*t4507*t4483;
  t4662 = 3.2*t4529*t4498;
  t4663 = t4661 + t4651 + t4662 + t4658;
  t4580 = -1.*t4363*t4305;
  t4581 = 0.24*t4505;
  t4582 = t4580 + t4581;
  t4450 = 3.2*t4374*t4449;
  t4467 = 3.2*t4454*t4466;
  t4477 = t4304 + t4450 + t4467;
  t4481 = -0.5*var2[2]*t4477;
  t4537 = -0.5*var2[4]*t4535;
  t4715 = t4234*t4363;
  t4716 = -0.24*t4282*t4368;
  t4717 = t4715 + t4716;
  t4700 = -1.*t4363*t4282;
  t4701 = -0.24*t4234*t4368;
  t4702 = t4700 + t4701;
  t4725 = t4363*t4282;
  t4726 = 0.24*t4234*t4368;
  t4727 = t4725 + t4726;
  t4720 = -1.*t4234*t4363;
  t4721 = 0.24*t4282*t4368;
  t4722 = t4720 + t4721;
  t4719 = -1.*t4463*t4717;
  t4755 = -0.24*t4305*t4282;
  t4756 = t4755 + t4701;
  t4728 = -1.*t4727*t4491;
  t4740 = t4394*t4727;
  t4766 = 0.24*t4234*t4305;
  t4767 = t4766 + t4716;
  t4780 = -0.24*t4234*t4305;
  t4781 = t4780 + t4721;
  t4744 = t4717*t4491;
  t4749 = t4702*t4426;
  t4750 = t4727*t4426;
  t4751 = t4394*t4717;
  t4752 = t4463*t4717;
  t4753 = t4749 + t4750 + t4751 + t4752;
  t4754 = 3.2*t4529*t4753;
  t4760 = -1.*t4756*t4426;
  t4765 = -1.*t4394*t4717;
  t4779 = -1.*t4394*t4767;
  t4782 = -1.*t4394*t4781;
  t4783 = -1.*t4702*t4491;
  t4784 = -1.*t4756*t4491;
  t4785 = t4760 + t4765 + t4719 + t4779 + t4782 + t4783 + t4784 + t4728;
  t4786 = 3.2*t4454*t4785;
  t4787 = -1.*t4394*t4702;
  t4788 = -1.*t4394*t4727;
  t4789 = -1.*t4426*t4717;
  t4790 = -1.*t4717*t4491;
  t4791 = t4787 + t4788 + t4789 + t4790;
  t4792 = 3.2*t4507*t4791;
  t4793 = t4394*t4702;
  t4794 = t4394*t4756;
  t4795 = t4756*t4463;
  t4799 = t4426*t4717;
  t4805 = t4426*t4767;
  t4806 = t4426*t4781;
  t4807 = t4793 + t4794 + t4740 + t4795 + t4799 + t4805 + t4806 + t4744;
  t4808 = 3.2*t4374*t4807;
  t4809 = t4754 + t4786 + t4792 + t4808;
  t4814 = -1.*t4727*t4426;
  t4815 = t4814 + t4765;
  t4817 = t4727*t4463;
  t4818 = t4817 + t4799;
  t4820 = t4756*t4426;
  t4821 = t4463*t4767;
  t4822 = t4820 + t4750 + t4751 + t4821;
  t4828 = -1.*t4394*t4756;
  t4829 = -1.*t4426*t4767;
  t4830 = t4828 + t4788 + t4829 + t4790;
  t4844 = 3.2*t4507*t4815;
  t4845 = 3.2*t4529*t4818;
  t4846 = 3.2*t4374*t4822;
  t4847 = 3.2*t4454*t4830;
  t4848 = t4844 + t4845 + t4846 + t4847;
  t4860 = 6.4*t4507*t4454;
  t4861 = 6.4*t4529*t4374;
  t4862 = t4860 + t4861;
  p_output1[0]=var2[3]*(t4481 + t4537 - 0.5*t4503*var2[3]);
  p_output1[1]=var2[3]*(-0.5*t4503*var2[2] - 0.5*(t4304 + t4553 + t4557)*var2[3] - 0.5*t4573*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t4535*var2[2] - 0.5*t4573*var2[3] - 0.5*(t4553 + 6.4*t4529*t4555 + t4557 + 6.4*t4507*t4563 + 3.2*t4563*t4582 + 3.2*t4529*t4587)*var2[4]);
  p_output1[3]=-0.5*t4609*var2[3];
  p_output1[4]=-0.5*t4609*var2[2] - 1.*(t4606 + t4612 + t4613)*var2[3] - 0.5*t4618*var2[4];
  p_output1[5]=-0.5*t4618*var2[3];
  p_output1[6]=var2[3]*(-0.5*(3.2*t4454*(t4427 + t4548) + t4630 + 3.2*t4374*(t4585 + t4633))*var2[2] - 0.5*t4642*var2[3] - 0.5*t4646*var2[4]);
  p_output1[7]=var2[3]*(-0.5*t4642*var2[2] - 0.5*(t4630 + t4651 + t4658)*var2[3] - 0.5*t4663*var2[4]);
  p_output1[8]=var2[3]*(-0.5*t4646*var2[2] - 0.5*t4663*var2[3] - 0.5*(6.4*t4483*t4507 + 6.4*t4498*t4529 + 3.2*t4525*t4529 + 3.2*t4483*t4582 + t4651 + t4658)*var2[4]);
  p_output1[9]=-0.5*t4477*var2[3];
  p_output1[10]=t4481 + t4537 - 1.*t4503*var2[3];
  p_output1[11]=-0.5*t4535*var2[3];
  p_output1[12]=var2[3]*(-0.5*(3.2*t4454*(-1.*t4426*t4702 - 2.*t4491*t4702 - 2.*t4394*t4717 + t4719 - 1.*t4394*t4722 + t4728) + 3.2*t4374*(2.*t4394*t4702 + t4463*t4702 + 2.*t4426*t4717 + t4426*t4722 + t4740 + t4744))*var2[3] - 0.5*t4809*var2[4]);
  p_output1[13]=var2[3]*(-0.5*t4809*var2[3] - 0.5*(3.2*t4454*(t4719 + t4728 - 2.*t4491*t4756 + t4760 - 2.*t4394*t4767 + t4782) + 3.2*t4374*(t4740 + t4744 + 2.*t4394*t4756 + 2.*t4426*t4767 + t4795 + t4806) + 3.2*t4529*t4815 + 3.2*t4582*t4818 + 6.4*t4529*t4822 + 6.4*t4507*t4830)*var2[4]);
  p_output1[14]=-1.*(3.2*t4374*t4753 + 3.2*t4454*t4791)*var2[3] - 0.5*t4848*var2[4];
  p_output1[15]=-0.5*t4848*var2[3];
  p_output1[16]=-0.5*(6.4*Power(t4507,2) + 6.4*t4454*t4529 + 6.4*Power(t4529,2) + 6.4*t4374*t4582)*var2[3]*var2[4];
  p_output1[17]=-0.5*t4862*var2[4];
  p_output1[18]=-0.5*t4862*var2[3];
  p_output1[19]=-0.384*t4582*var2[3]*var2[4];
  p_output1[20]=-0.384*t4529*var2[4];
  p_output1[21]=-0.384*t4529*var2[3];
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

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce1_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
