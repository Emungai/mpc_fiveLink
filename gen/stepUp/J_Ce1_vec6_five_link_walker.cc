/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:32 GMT-05:00
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
  double t4642;
  double t4630;
  double t4631;
  double t4584;
  double t4705;
  double t4583;
  double t4646;
  double t4650;
  double t4653;
  double t4654;
  double t4655;
  double t4801;
  double t4803;
  double t4804;
  double t4624;
  double t4632;
  double t4633;
  double t4634;
  double t4829;
  double t4830;
  double t4831;
  double t4790;
  double t4797;
  double t4798;
  double t4841;
  double t4659;
  double t4706;
  double t4707;
  double t4780;
  double t4800;
  double t4832;
  double t4833;
  double t4834;
  double t4846;
  double t4847;
  double t4848;
  double t4849;
  double t4850;
  double t4851;
  double t4852;
  double t4853;
  double t4854;
  double t4855;
  double t4857;
  double t4858;
  double t4859;
  double t4861;
  double t4873;
  double t4874;
  double t4875;
  double t4876;
  double t4877;
  double t4878;
  double t4864;
  double t4865;
  double t4866;
  double t4860;
  double t4862;
  double t4863;
  double t4867;
  double t4868;
  double t4881;
  double t4882;
  double t4883;
  double t4884;
  double t4885;
  double t4905;
  double t4906;
  double t4907;
  double t4908;
  double t4909;
  double t4910;
  double t4911;
  double t4914;
  double t4896;
  double t4897;
  double t4898;
  double t4915;
  double t4918;
  double t4919;
  double t4920;
  double t4823;
  double t4924;
  double t4925;
  double t4926;
  double t4927;
  double t4827;
  double t4930;
  double t4935;
  double t4835;
  double t4842;
  double t4936;
  double t4937;
  double t4938;
  double t4939;
  double t4948;
  double t4949;
  double t4950;
  double t4941;
  double t4942;
  double t4943;
  double t4953;
  double t4954;
  double t4955;
  double t4892;
  double t4893;
  double t4894;
  double t4828;
  double t4843;
  double t4844;
  double t4845;
  double t4869;
  double t4977;
  double t4978;
  double t4979;
  double t4973;
  double t4974;
  double t4975;
  double t4987;
  double t4988;
  double t4989;
  double t4982;
  double t4983;
  double t4984;
  double t4981;
  double t5009;
  double t5010;
  double t4990;
  double t4994;
  double t5013;
  double t5014;
  double t5016;
  double t5017;
  double t4998;
  double t5003;
  double t5004;
  double t5005;
  double t5006;
  double t5007;
  double t5008;
  double t5011;
  double t5012;
  double t5015;
  double t5018;
  double t5019;
  double t5020;
  double t5021;
  double t5022;
  double t5023;
  double t5024;
  double t5025;
  double t5026;
  double t5027;
  double t5028;
  double t5029;
  double t5030;
  double t5031;
  double t5032;
  double t5033;
  double t5034;
  double t5035;
  double t5036;
  double t5037;
  double t5042;
  double t5043;
  double t5045;
  double t5046;
  double t5048;
  double t5049;
  double t5050;
  double t5056;
  double t5057;
  double t5058;
  double t5072;
  double t5073;
  double t5074;
  double t5075;
  double t5076;
  double t5088;
  double t5089;
  double t5090;
  t4642 = Cos(var1[6]);
  t4630 = Sin(var1[2]);
  t4631 = Sin(var1[5]);
  t4584 = Cos(var1[5]);
  t4705 = Sin(var1[6]);
  t4583 = Cos(var1[2]);
  t4646 = -1.*t4642;
  t4650 = 1. + t4646;
  t4653 = 0.4*t4650;
  t4654 = 0.64*t4642;
  t4655 = t4653 + t4654;
  t4801 = t4584*t4642;
  t4803 = -1.*t4631*t4705;
  t4804 = t4801 + t4803;
  t4624 = -1.*t4583*t4584;
  t4632 = t4630*t4631;
  t4633 = t4624 + t4632;
  t4634 = 0.748*t4633;
  t4829 = t4655*t4705;
  t4830 = -0.24*t4642*t4705;
  t4831 = t4829 + t4830;
  t4790 = -1.*t4642*t4631;
  t4797 = -1.*t4584*t4705;
  t4798 = t4790 + t4797;
  t4841 = -1.*t4630*t4804;
  t4659 = t4655*t4642;
  t4706 = Power(t4705,2);
  t4707 = 0.24*t4706;
  t4780 = t4659 + t4707;
  t4800 = -1.*t4630*t4798;
  t4832 = t4642*t4631;
  t4833 = t4584*t4705;
  t4834 = t4832 + t4833;
  t4846 = t4583*t4798;
  t4847 = t4846 + t4841;
  t4848 = 3.2*t4831*t4847;
  t4849 = -1.*t4584*t4642;
  t4850 = t4631*t4705;
  t4851 = t4849 + t4850;
  t4852 = t4583*t4851;
  t4853 = t4800 + t4852;
  t4854 = 3.2*t4780*t4853;
  t4855 = t4634 + t4848 + t4854;
  t4857 = Power(t4642,2);
  t4858 = -0.24*t4857;
  t4859 = t4659 + t4858;
  t4861 = t4583*t4804;
  t4873 = t4630*t4834;
  t4874 = t4873 + t4852;
  t4875 = 3.2*t4780*t4874;
  t4876 = t4630*t4851;
  t4877 = t4846 + t4876;
  t4878 = 3.2*t4831*t4877;
  t4864 = -1.*t4655*t4705;
  t4865 = 0.24*t4642*t4705;
  t4866 = t4864 + t4865;
  t4860 = -1.*t4630*t4834;
  t4862 = t4860 + t4861;
  t4863 = 3.2*t4859*t4862;
  t4867 = 3.2*t4866*t4847;
  t4868 = t4863 + t4848 + t4867 + t4854;
  t4881 = t4630*t4798;
  t4882 = t4881 + t4861;
  t4883 = 3.2*t4859*t4882;
  t4884 = 3.2*t4866*t4877;
  t4885 = t4883 + t4875 + t4878 + t4884;
  t4905 = -1.*t4584*t4630;
  t4906 = -1.*t4583*t4631;
  t4907 = t4905 + t4906;
  t4908 = 0.748*t4907;
  t4909 = 3.2*t4831*t4862;
  t4910 = 3.2*t4780*t4847;
  t4911 = t4908 + t4909 + t4910;
  t4914 = 3.2*t4831*t4882;
  t4896 = t4583*t4834;
  t4897 = t4630*t4804;
  t4898 = t4896 + t4897;
  t4915 = 3.2*t4780*t4877;
  t4918 = 3.2*t4866*t4882;
  t4919 = 3.2*t4859*t4898;
  t4920 = t4914 + t4918 + t4919 + t4915;
  t4823 = -1.*t4583*t4804;
  t4924 = t4584*t4630;
  t4925 = t4583*t4631;
  t4926 = t4924 + t4925;
  t4927 = 0.748*t4926;
  t4827 = t4800 + t4823;
  t4930 = -1.*t4583*t4798;
  t4935 = 3.2*t4831*t4827;
  t4835 = -1.*t4583*t4834;
  t4842 = t4835 + t4841;
  t4936 = -1.*t4630*t4851;
  t4937 = t4930 + t4936;
  t4938 = 3.2*t4780*t4937;
  t4939 = t4927 + t4935 + t4938;
  t4948 = 3.2*t4831*t4853;
  t4949 = t4896 + t4936;
  t4950 = 3.2*t4780*t4949;
  t4941 = 3.2*t4866*t4827;
  t4942 = 3.2*t4859*t4842;
  t4943 = t4935 + t4941 + t4942 + t4938;
  t4953 = 3.2*t4859*t4847;
  t4954 = 3.2*t4866*t4853;
  t4955 = t4953 + t4948 + t4954 + t4950;
  t4892 = -1.*t4655*t4642;
  t4893 = 0.24*t4857;
  t4894 = t4892 + t4893;
  t4828 = 3.2*t4780*t4827;
  t4843 = 3.2*t4831*t4842;
  t4844 = t4634 + t4828 + t4843;
  t4845 = -0.5*var2[2]*t4844;
  t4869 = -0.5*var2[6]*t4868;
  t4977 = t4584*t4655;
  t4978 = -0.24*t4631*t4705;
  t4979 = t4977 + t4978;
  t4973 = -1.*t4655*t4631;
  t4974 = -0.24*t4584*t4705;
  t4975 = t4973 + t4974;
  t4987 = t4655*t4631;
  t4988 = 0.24*t4584*t4705;
  t4989 = t4987 + t4988;
  t4982 = -1.*t4584*t4655;
  t4983 = 0.24*t4631*t4705;
  t4984 = t4982 + t4983;
  t4981 = -1.*t4834*t4979;
  t5009 = -0.24*t4642*t4631;
  t5010 = t5009 + t4974;
  t4990 = -1.*t4989*t4851;
  t4994 = t4798*t4989;
  t5013 = 0.24*t4584*t4642;
  t5014 = t5013 + t4978;
  t5016 = -0.24*t4584*t4642;
  t5017 = t5016 + t4983;
  t4998 = t4979*t4851;
  t5003 = t4975*t4804;
  t5004 = t4989*t4804;
  t5005 = t4798*t4979;
  t5006 = t4834*t4979;
  t5007 = t5003 + t5004 + t5005 + t5006;
  t5008 = 3.2*t4866*t5007;
  t5011 = -1.*t5010*t4804;
  t5012 = -1.*t4798*t4979;
  t5015 = -1.*t4798*t5014;
  t5018 = -1.*t4798*t5017;
  t5019 = -1.*t4975*t4851;
  t5020 = -1.*t5010*t4851;
  t5021 = t5011 + t5012 + t4981 + t5015 + t5018 + t5019 + t5020 + t4990;
  t5022 = 3.2*t4831*t5021;
  t5023 = -1.*t4798*t4975;
  t5024 = -1.*t4798*t4989;
  t5025 = -1.*t4804*t4979;
  t5026 = -1.*t4979*t4851;
  t5027 = t5023 + t5024 + t5025 + t5026;
  t5028 = 3.2*t4859*t5027;
  t5029 = t4798*t4975;
  t5030 = t4798*t5010;
  t5031 = t5010*t4834;
  t5032 = t4804*t4979;
  t5033 = t4804*t5014;
  t5034 = t4804*t5017;
  t5035 = t5029 + t5030 + t4994 + t5031 + t5032 + t5033 + t5034 + t4998;
  t5036 = 3.2*t4780*t5035;
  t5037 = t5008 + t5022 + t5028 + t5036;
  t5042 = -1.*t4989*t4804;
  t5043 = t5042 + t5012;
  t5045 = t4989*t4834;
  t5046 = t5045 + t5032;
  t5048 = t5010*t4804;
  t5049 = t4834*t5014;
  t5050 = t5048 + t5004 + t5005 + t5049;
  t5056 = -1.*t4798*t5010;
  t5057 = -1.*t4804*t5014;
  t5058 = t5056 + t5024 + t5057 + t5026;
  t5072 = 3.2*t4859*t5043;
  t5073 = 3.2*t4866*t5046;
  t5074 = 3.2*t4780*t5050;
  t5075 = 3.2*t4831*t5058;
  t5076 = t5072 + t5073 + t5074 + t5075;
  t5088 = 6.4*t4859*t4831;
  t5089 = 6.4*t4866*t4780;
  t5090 = t5088 + t5089;
  p_output1[0]=var2[5]*(t4845 + t4869 - 0.5*t4855*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t4855*var2[2] - 0.5*(t4634 + t4875 + t4878)*var2[5] - 0.5*t4885*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t4868*var2[2] - 0.5*t4885*var2[5] - 0.5*(t4875 + 6.4*t4866*t4877 + t4878 + 6.4*t4859*t4882 + 3.2*t4882*t4894 + 3.2*t4866*t4898)*var2[6]);
  p_output1[3]=-0.5*t4911*var2[5];
  p_output1[4]=-0.5*t4911*var2[2] - 1.*(t4908 + t4914 + t4915)*var2[5] - 0.5*t4920*var2[6];
  p_output1[5]=-0.5*t4920*var2[5];
  p_output1[6]=var2[5]*(-0.5*(3.2*t4831*(t4823 + t4873) + t4927 + 3.2*t4780*(t4897 + t4930))*var2[2] - 0.5*t4939*var2[5] - 0.5*t4943*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t4939*var2[2] - 0.5*(t4927 + t4948 + t4950)*var2[5] - 0.5*t4955*var2[6]);
  p_output1[8]=var2[5]*(-0.5*t4943*var2[2] - 0.5*t4955*var2[5] - 0.5*(6.4*t4847*t4859 + 6.4*t4853*t4866 + 3.2*t4862*t4866 + 3.2*t4847*t4894 + t4948 + t4950)*var2[6]);
  p_output1[9]=-0.5*t4844*var2[5];
  p_output1[10]=t4845 + t4869 - 1.*t4855*var2[5];
  p_output1[11]=-0.5*t4868*var2[5];
  p_output1[12]=var2[5]*(-0.5*(3.2*t4831*(-1.*t4804*t4975 - 2.*t4851*t4975 - 2.*t4798*t4979 + t4981 - 1.*t4798*t4984 + t4990) + 3.2*t4780*(2.*t4798*t4975 + t4834*t4975 + 2.*t4804*t4979 + t4804*t4984 + t4994 + t4998))*var2[5] - 0.5*t5037*var2[6]);
  p_output1[13]=var2[5]*(-0.5*t5037*var2[5] - 0.5*(3.2*t4831*(t4981 + t4990 - 2.*t4851*t5010 + t5011 - 2.*t4798*t5014 + t5018) + 3.2*t4780*(t4994 + t4998 + 2.*t4798*t5010 + 2.*t4804*t5014 + t5031 + t5034) + 3.2*t4866*t5043 + 3.2*t4894*t5046 + 6.4*t4866*t5050 + 6.4*t4859*t5058)*var2[6]);
  p_output1[14]=-1.*(3.2*t4780*t5007 + 3.2*t4831*t5027)*var2[5] - 0.5*t5076*var2[6];
  p_output1[15]=-0.5*t5076*var2[5];
  p_output1[16]=-0.5*(6.4*Power(t4859,2) + 6.4*t4831*t4866 + 6.4*Power(t4866,2) + 6.4*t4780*t4894)*var2[5]*var2[6];
  p_output1[17]=-0.5*t5090*var2[6];
  p_output1[18]=-0.5*t5090*var2[5];
  p_output1[19]=-0.384*t4894*var2[5]*var2[6];
  p_output1[20]=-0.384*t4866*var2[6];
  p_output1[21]=-0.384*t4866*var2[5];
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

#include "J_Ce1_vec6_five_link_walker.hh"

namespace LeftStance
{

void J_Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
