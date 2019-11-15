/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:39:45 GMT-05:00
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
  double t4678;
  double t4666;
  double t4667;
  double t4620;
  double t4741;
  double t4619;
  double t4682;
  double t4686;
  double t4689;
  double t4690;
  double t4691;
  double t4837;
  double t4839;
  double t4840;
  double t4660;
  double t4668;
  double t4669;
  double t4670;
  double t4865;
  double t4866;
  double t4867;
  double t4826;
  double t4833;
  double t4834;
  double t4877;
  double t4695;
  double t4742;
  double t4743;
  double t4816;
  double t4836;
  double t4868;
  double t4869;
  double t4870;
  double t4882;
  double t4883;
  double t4884;
  double t4885;
  double t4886;
  double t4887;
  double t4888;
  double t4889;
  double t4890;
  double t4891;
  double t4893;
  double t4894;
  double t4895;
  double t4897;
  double t4909;
  double t4910;
  double t4911;
  double t4912;
  double t4913;
  double t4914;
  double t4900;
  double t4901;
  double t4902;
  double t4896;
  double t4898;
  double t4899;
  double t4903;
  double t4904;
  double t4917;
  double t4918;
  double t4919;
  double t4920;
  double t4921;
  double t4941;
  double t4942;
  double t4943;
  double t4944;
  double t4945;
  double t4946;
  double t4947;
  double t4950;
  double t4932;
  double t4933;
  double t4934;
  double t4951;
  double t4954;
  double t4955;
  double t4956;
  double t4859;
  double t4960;
  double t4961;
  double t4962;
  double t4963;
  double t4863;
  double t4966;
  double t4971;
  double t4871;
  double t4878;
  double t4972;
  double t4973;
  double t4974;
  double t4975;
  double t4984;
  double t4985;
  double t4986;
  double t4977;
  double t4978;
  double t4979;
  double t4989;
  double t4990;
  double t4991;
  double t4928;
  double t4929;
  double t4930;
  double t4864;
  double t4879;
  double t4880;
  double t4881;
  double t4905;
  double t5013;
  double t5014;
  double t5015;
  double t5009;
  double t5010;
  double t5011;
  double t5023;
  double t5024;
  double t5025;
  double t5018;
  double t5019;
  double t5020;
  double t5017;
  double t5045;
  double t5046;
  double t5026;
  double t5030;
  double t5049;
  double t5050;
  double t5052;
  double t5053;
  double t5034;
  double t5039;
  double t5040;
  double t5041;
  double t5042;
  double t5043;
  double t5044;
  double t5047;
  double t5048;
  double t5051;
  double t5054;
  double t5055;
  double t5056;
  double t5057;
  double t5058;
  double t5059;
  double t5060;
  double t5061;
  double t5062;
  double t5063;
  double t5064;
  double t5065;
  double t5066;
  double t5067;
  double t5068;
  double t5069;
  double t5070;
  double t5071;
  double t5072;
  double t5073;
  double t5078;
  double t5079;
  double t5081;
  double t5082;
  double t5084;
  double t5085;
  double t5086;
  double t5092;
  double t5093;
  double t5094;
  double t5108;
  double t5109;
  double t5110;
  double t5111;
  double t5112;
  double t5124;
  double t5125;
  double t5126;
  t4678 = Cos(var1[6]);
  t4666 = Sin(var1[2]);
  t4667 = Sin(var1[5]);
  t4620 = Cos(var1[5]);
  t4741 = Sin(var1[6]);
  t4619 = Cos(var1[2]);
  t4682 = -1.*t4678;
  t4686 = 1. + t4682;
  t4689 = 0.4*t4686;
  t4690 = 0.64*t4678;
  t4691 = t4689 + t4690;
  t4837 = t4620*t4678;
  t4839 = -1.*t4667*t4741;
  t4840 = t4837 + t4839;
  t4660 = -1.*t4619*t4620;
  t4668 = t4666*t4667;
  t4669 = t4660 + t4668;
  t4670 = 0.748*t4669;
  t4865 = t4691*t4741;
  t4866 = -0.24*t4678*t4741;
  t4867 = t4865 + t4866;
  t4826 = -1.*t4678*t4667;
  t4833 = -1.*t4620*t4741;
  t4834 = t4826 + t4833;
  t4877 = -1.*t4666*t4840;
  t4695 = t4691*t4678;
  t4742 = Power(t4741,2);
  t4743 = 0.24*t4742;
  t4816 = t4695 + t4743;
  t4836 = -1.*t4666*t4834;
  t4868 = t4678*t4667;
  t4869 = t4620*t4741;
  t4870 = t4868 + t4869;
  t4882 = t4619*t4834;
  t4883 = t4882 + t4877;
  t4884 = 3.2*t4867*t4883;
  t4885 = -1.*t4620*t4678;
  t4886 = t4667*t4741;
  t4887 = t4885 + t4886;
  t4888 = t4619*t4887;
  t4889 = t4836 + t4888;
  t4890 = 3.2*t4816*t4889;
  t4891 = t4670 + t4884 + t4890;
  t4893 = Power(t4678,2);
  t4894 = -0.24*t4893;
  t4895 = t4695 + t4894;
  t4897 = t4619*t4840;
  t4909 = t4666*t4870;
  t4910 = t4909 + t4888;
  t4911 = 3.2*t4816*t4910;
  t4912 = t4666*t4887;
  t4913 = t4882 + t4912;
  t4914 = 3.2*t4867*t4913;
  t4900 = -1.*t4691*t4741;
  t4901 = 0.24*t4678*t4741;
  t4902 = t4900 + t4901;
  t4896 = -1.*t4666*t4870;
  t4898 = t4896 + t4897;
  t4899 = 3.2*t4895*t4898;
  t4903 = 3.2*t4902*t4883;
  t4904 = t4899 + t4884 + t4903 + t4890;
  t4917 = t4666*t4834;
  t4918 = t4917 + t4897;
  t4919 = 3.2*t4895*t4918;
  t4920 = 3.2*t4902*t4913;
  t4921 = t4919 + t4911 + t4914 + t4920;
  t4941 = -1.*t4620*t4666;
  t4942 = -1.*t4619*t4667;
  t4943 = t4941 + t4942;
  t4944 = 0.748*t4943;
  t4945 = 3.2*t4867*t4898;
  t4946 = 3.2*t4816*t4883;
  t4947 = t4944 + t4945 + t4946;
  t4950 = 3.2*t4867*t4918;
  t4932 = t4619*t4870;
  t4933 = t4666*t4840;
  t4934 = t4932 + t4933;
  t4951 = 3.2*t4816*t4913;
  t4954 = 3.2*t4902*t4918;
  t4955 = 3.2*t4895*t4934;
  t4956 = t4950 + t4954 + t4955 + t4951;
  t4859 = -1.*t4619*t4840;
  t4960 = t4620*t4666;
  t4961 = t4619*t4667;
  t4962 = t4960 + t4961;
  t4963 = 0.748*t4962;
  t4863 = t4836 + t4859;
  t4966 = -1.*t4619*t4834;
  t4971 = 3.2*t4867*t4863;
  t4871 = -1.*t4619*t4870;
  t4878 = t4871 + t4877;
  t4972 = -1.*t4666*t4887;
  t4973 = t4966 + t4972;
  t4974 = 3.2*t4816*t4973;
  t4975 = t4963 + t4971 + t4974;
  t4984 = 3.2*t4867*t4889;
  t4985 = t4932 + t4972;
  t4986 = 3.2*t4816*t4985;
  t4977 = 3.2*t4902*t4863;
  t4978 = 3.2*t4895*t4878;
  t4979 = t4971 + t4977 + t4978 + t4974;
  t4989 = 3.2*t4895*t4883;
  t4990 = 3.2*t4902*t4889;
  t4991 = t4989 + t4984 + t4990 + t4986;
  t4928 = -1.*t4691*t4678;
  t4929 = 0.24*t4893;
  t4930 = t4928 + t4929;
  t4864 = 3.2*t4816*t4863;
  t4879 = 3.2*t4867*t4878;
  t4880 = t4670 + t4864 + t4879;
  t4881 = -0.5*var2[2]*t4880;
  t4905 = -0.5*var2[6]*t4904;
  t5013 = t4620*t4691;
  t5014 = -0.24*t4667*t4741;
  t5015 = t5013 + t5014;
  t5009 = -1.*t4691*t4667;
  t5010 = -0.24*t4620*t4741;
  t5011 = t5009 + t5010;
  t5023 = t4691*t4667;
  t5024 = 0.24*t4620*t4741;
  t5025 = t5023 + t5024;
  t5018 = -1.*t4620*t4691;
  t5019 = 0.24*t4667*t4741;
  t5020 = t5018 + t5019;
  t5017 = -1.*t4870*t5015;
  t5045 = -0.24*t4678*t4667;
  t5046 = t5045 + t5010;
  t5026 = -1.*t5025*t4887;
  t5030 = t4834*t5025;
  t5049 = 0.24*t4620*t4678;
  t5050 = t5049 + t5014;
  t5052 = -0.24*t4620*t4678;
  t5053 = t5052 + t5019;
  t5034 = t5015*t4887;
  t5039 = t5011*t4840;
  t5040 = t5025*t4840;
  t5041 = t4834*t5015;
  t5042 = t4870*t5015;
  t5043 = t5039 + t5040 + t5041 + t5042;
  t5044 = 3.2*t4902*t5043;
  t5047 = -1.*t5046*t4840;
  t5048 = -1.*t4834*t5015;
  t5051 = -1.*t4834*t5050;
  t5054 = -1.*t4834*t5053;
  t5055 = -1.*t5011*t4887;
  t5056 = -1.*t5046*t4887;
  t5057 = t5047 + t5048 + t5017 + t5051 + t5054 + t5055 + t5056 + t5026;
  t5058 = 3.2*t4867*t5057;
  t5059 = -1.*t4834*t5011;
  t5060 = -1.*t4834*t5025;
  t5061 = -1.*t4840*t5015;
  t5062 = -1.*t5015*t4887;
  t5063 = t5059 + t5060 + t5061 + t5062;
  t5064 = 3.2*t4895*t5063;
  t5065 = t4834*t5011;
  t5066 = t4834*t5046;
  t5067 = t5046*t4870;
  t5068 = t4840*t5015;
  t5069 = t4840*t5050;
  t5070 = t4840*t5053;
  t5071 = t5065 + t5066 + t5030 + t5067 + t5068 + t5069 + t5070 + t5034;
  t5072 = 3.2*t4816*t5071;
  t5073 = t5044 + t5058 + t5064 + t5072;
  t5078 = -1.*t5025*t4840;
  t5079 = t5078 + t5048;
  t5081 = t5025*t4870;
  t5082 = t5081 + t5068;
  t5084 = t5046*t4840;
  t5085 = t4870*t5050;
  t5086 = t5084 + t5040 + t5041 + t5085;
  t5092 = -1.*t4834*t5046;
  t5093 = -1.*t4840*t5050;
  t5094 = t5092 + t5060 + t5093 + t5062;
  t5108 = 3.2*t4895*t5079;
  t5109 = 3.2*t4902*t5082;
  t5110 = 3.2*t4816*t5086;
  t5111 = 3.2*t4867*t5094;
  t5112 = t5108 + t5109 + t5110 + t5111;
  t5124 = 6.4*t4895*t4867;
  t5125 = 6.4*t4902*t4816;
  t5126 = t5124 + t5125;
  p_output1[0]=var2[5]*(t4881 + t4905 - 0.5*t4891*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t4891*var2[2] - 0.5*(t4670 + t4911 + t4914)*var2[5] - 0.5*t4921*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t4904*var2[2] - 0.5*t4921*var2[5] - 0.5*(t4911 + 6.4*t4902*t4913 + t4914 + 6.4*t4895*t4918 + 3.2*t4918*t4930 + 3.2*t4902*t4934)*var2[6]);
  p_output1[3]=-0.5*t4947*var2[5];
  p_output1[4]=-0.5*t4947*var2[2] - 1.*(t4944 + t4950 + t4951)*var2[5] - 0.5*t4956*var2[6];
  p_output1[5]=-0.5*t4956*var2[5];
  p_output1[6]=var2[5]*(-0.5*(3.2*t4867*(t4859 + t4909) + t4963 + 3.2*t4816*(t4933 + t4966))*var2[2] - 0.5*t4975*var2[5] - 0.5*t4979*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t4975*var2[2] - 0.5*(t4963 + t4984 + t4986)*var2[5] - 0.5*t4991*var2[6]);
  p_output1[8]=var2[5]*(-0.5*t4979*var2[2] - 0.5*t4991*var2[5] - 0.5*(6.4*t4883*t4895 + 6.4*t4889*t4902 + 3.2*t4898*t4902 + 3.2*t4883*t4930 + t4984 + t4986)*var2[6]);
  p_output1[9]=-0.5*t4880*var2[5];
  p_output1[10]=t4881 + t4905 - 1.*t4891*var2[5];
  p_output1[11]=-0.5*t4904*var2[5];
  p_output1[12]=var2[5]*(-0.5*(3.2*t4867*(-1.*t4840*t5011 - 2.*t4887*t5011 - 2.*t4834*t5015 + t5017 - 1.*t4834*t5020 + t5026) + 3.2*t4816*(2.*t4834*t5011 + t4870*t5011 + 2.*t4840*t5015 + t4840*t5020 + t5030 + t5034))*var2[5] - 0.5*t5073*var2[6]);
  p_output1[13]=var2[5]*(-0.5*t5073*var2[5] - 0.5*(3.2*t4867*(t5017 + t5026 - 2.*t4887*t5046 + t5047 - 2.*t4834*t5050 + t5054) + 3.2*t4816*(t5030 + t5034 + 2.*t4834*t5046 + 2.*t4840*t5050 + t5067 + t5070) + 3.2*t4902*t5079 + 3.2*t4930*t5082 + 6.4*t4902*t5086 + 6.4*t4895*t5094)*var2[6]);
  p_output1[14]=-1.*(3.2*t4816*t5043 + 3.2*t4867*t5063)*var2[5] - 0.5*t5112*var2[6];
  p_output1[15]=-0.5*t5112*var2[5];
  p_output1[16]=-0.5*(6.4*Power(t4895,2) + 6.4*t4867*t4902 + 6.4*Power(t4902,2) + 6.4*t4816*t4930)*var2[5]*var2[6];
  p_output1[17]=-0.5*t5126*var2[6];
  p_output1[18]=-0.5*t5126*var2[5];
  p_output1[19]=-0.384*t4930*var2[5]*var2[6];
  p_output1[20]=-0.384*t4902*var2[6];
  p_output1[21]=-0.384*t4902*var2[5];
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

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
