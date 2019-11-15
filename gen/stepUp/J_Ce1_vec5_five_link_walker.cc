/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:39:39 GMT-05:00
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
  double t4560;
  double t4538;
  double t4539;
  double t4561;
  double t4504;
  double t4540;
  double t4574;
  double t4575;
  double t4576;
  double t4577;
  double t4593;
  double t4594;
  double t4602;
  double t4610;
  double t4611;
  double t4631;
  double t4632;
  double t4634;
  double t4635;
  double t4636;
  double t4621;
  double t4637;
  double t4643;
  double t4647;
  double t4648;
  double t4578;
  double t4579;
  double t4583;
  double t4649;
  double t4650;
  double t4659;
  double t4664;
  double t4665;
  double t4674;
  double t4687;
  double t4688;
  double t4718;
  double t4723;
  double t4714;
  double t4724;
  double t4729;
  double t4730;
  double t4734;
  double t4590;
  double t4591;
  double t4615;
  double t4592;
  double t4614;
  double t4745;
  double t4746;
  double t4747;
  double t4748;
  double t4810;
  double t4811;
  double t4812;
  double t4813;
  double t4827;
  double t4831;
  double t4832;
  double t4819;
  double t4823;
  double t4824;
  double t4825;
  double t4842;
  double t4843;
  double t4835;
  double t4838;
  double t4841;
  double t4849;
  double t4850;
  double t4851;
  double t4852;
  double t4853;
  double t4854;
  double t4855;
  double t4856;
  double t4857;
  double t4858;
  double t4872;
  double t4873;
  double t4874;
  double t4875;
  double t4876;
  t4560 = Cos(var1[3]);
  t4538 = Cos(var1[4]);
  t4539 = Sin(var1[3]);
  t4561 = Sin(var1[4]);
  t4504 = Sin(var1[2]);
  t4540 = -1.*t4538*t4539;
  t4574 = -1.*t4560*t4561;
  t4575 = t4540 + t4574;
  t4576 = -1.*t4504*t4575;
  t4577 = Cos(var1[2]);
  t4593 = -1.*t4560*t4538;
  t4594 = t4539*t4561;
  t4602 = t4593 + t4594;
  t4610 = t4577*t4602;
  t4611 = t4576 + t4610;
  t4631 = t4538*t4539;
  t4632 = t4560*t4561;
  t4634 = t4631 + t4632;
  t4635 = t4504*t4634;
  t4636 = t4635 + t4610;
  t4621 = -0.384*var2[2]*t4611;
  t4637 = -0.384*var2[3]*t4636;
  t4643 = -0.384*var2[4]*t4636;
  t4647 = t4621 + t4637 + t4643;
  t4648 = var2[4]*t4647;
  t4578 = t4560*t4538;
  t4579 = -1.*t4539*t4561;
  t4583 = t4578 + t4579;
  t4649 = t4577*t4575;
  t4650 = -1.*t4504*t4583;
  t4659 = t4649 + t4650;
  t4664 = t4504*t4602;
  t4665 = t4649 + t4664;
  t4674 = -1.*t4577*t4575;
  t4687 = -1.*t4504*t4602;
  t4688 = t4674 + t4687;
  t4718 = t4577*t4634;
  t4723 = t4718 + t4687;
  t4714 = -0.384*var2[2]*t4688;
  t4724 = -0.384*var2[3]*t4723;
  t4729 = -0.384*var2[4]*t4723;
  t4730 = t4714 + t4724 + t4729;
  t4734 = var2[4]*t4730;
  t4590 = -1.*t4577*t4583;
  t4591 = t4576 + t4590;
  t4615 = -0.384*var2[4]*t4611;
  t4592 = -0.384*var2[2]*t4591;
  t4614 = -0.384*var2[3]*t4611;
  t4745 = -1.*t4538;
  t4746 = 1. + t4745;
  t4747 = 0.4*t4746;
  t4748 = 0.64*t4538;
  t4810 = t4747 + t4748;
  t4811 = -1.*t4810*t4539;
  t4812 = -0.24*t4560*t4561;
  t4813 = t4811 + t4812;
  t4827 = t4560*t4810;
  t4831 = -0.24*t4539*t4561;
  t4832 = t4827 + t4831;
  t4819 = t4810*t4539;
  t4823 = 0.24*t4560*t4561;
  t4824 = t4819 + t4823;
  t4825 = t4575*t4824;
  t4842 = -0.24*t4538*t4539;
  t4843 = t4842 + t4812;
  t4835 = 0.24*t4539*t4561;
  t4838 = t4832*t4602;
  t4841 = t4575*t4813;
  t4849 = t4575*t4843;
  t4850 = t4843*t4634;
  t4851 = t4583*t4832;
  t4852 = 0.24*t4560*t4538;
  t4853 = t4852 + t4831;
  t4854 = t4583*t4853;
  t4855 = -0.24*t4560*t4538;
  t4856 = t4855 + t4835;
  t4857 = t4583*t4856;
  t4858 = t4841 + t4849 + t4825 + t4850 + t4851 + t4854 + t4857 + t4838;
  t4872 = t4813*t4583;
  t4873 = t4824*t4583;
  t4874 = t4575*t4832;
  t4875 = t4634*t4832;
  t4876 = t4872 + t4873 + t4874 + t4875;
  p_output1[0]=(t4592 + t4614 + t4615)*var2[4];
  p_output1[1]=t4648;
  p_output1[2]=t4648;
  p_output1[3]=-0.384*t4659*var2[4];
  p_output1[4]=-0.384*t4665*var2[4];
  p_output1[5]=-0.384*t4659*var2[2] - 0.384*t4665*var2[3] - 0.768*t4665*var2[4];
  p_output1[6]=var2[4]*(-0.384*(t4504*t4583 + t4674)*var2[2] - 0.384*t4688*var2[3] - 0.384*t4688*var2[4]);
  p_output1[7]=t4734;
  p_output1[8]=t4734;
  p_output1[9]=-0.384*t4591*var2[4];
  p_output1[10]=t4615;
  p_output1[11]=t4592 + t4614 - 0.768*t4611*var2[4];
  p_output1[12]=var2[4]*(-0.384*(2.*t4575*t4813 + t4634*t4813 + t4825 + 2.*t4583*t4832 + t4583*(-1.*t4560*t4810 + t4835) + t4838)*var2[3] - 0.384*t4858*var2[4]);
  p_output1[13]=var2[4]*(-0.384*t4858*var2[3] - 0.384*(t4825 + t4838 + 2.*t4575*t4843 + t4850 + 2.*t4583*t4853 + t4857)*var2[4]);
  p_output1[14]=-0.384*t4876*var2[4];
  p_output1[15]=-0.384*t4876*var2[3] - 0.768*(t4583*t4843 + t4634*t4853 + t4873 + t4874)*var2[4];
  p_output1[16]=-0.384*(0.24*Power(t4538,2) - 1.*t4538*t4810)*Power(var2[4],2);
  p_output1[17]=-0.768*(0.24*t4538*t4561 - 1.*t4561*t4810)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec5_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
