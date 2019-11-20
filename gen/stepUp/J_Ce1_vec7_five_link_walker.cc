/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:35 GMT-05:00
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
  double t4879;
  double t4870;
  double t4871;
  double t4880;
  double t4856;
  double t4872;
  double t4886;
  double t4887;
  double t4888;
  double t4889;
  double t4902;
  double t4903;
  double t4904;
  double t4912;
  double t4913;
  double t4928;
  double t4929;
  double t4931;
  double t4932;
  double t4933;
  double t4923;
  double t4934;
  double t4940;
  double t4944;
  double t4945;
  double t4890;
  double t4891;
  double t4895;
  double t4946;
  double t4947;
  double t4951;
  double t4956;
  double t4957;
  double t4963;
  double t4967;
  double t4968;
  double t4980;
  double t4985;
  double t4976;
  double t4986;
  double t4991;
  double t4992;
  double t4993;
  double t4899;
  double t4900;
  double t4917;
  double t4901;
  double t4916;
  double t4999;
  double t5000;
  double t5001;
  double t5002;
  double t5038;
  double t5039;
  double t5040;
  double t5041;
  double t5055;
  double t5059;
  double t5060;
  double t5047;
  double t5051;
  double t5052;
  double t5053;
  double t5070;
  double t5071;
  double t5063;
  double t5066;
  double t5069;
  double t5077;
  double t5078;
  double t5079;
  double t5080;
  double t5081;
  double t5082;
  double t5083;
  double t5084;
  double t5085;
  double t5086;
  double t5100;
  double t5101;
  double t5102;
  double t5103;
  double t5104;
  t4879 = Cos(var1[5]);
  t4870 = Cos(var1[6]);
  t4871 = Sin(var1[5]);
  t4880 = Sin(var1[6]);
  t4856 = Sin(var1[2]);
  t4872 = -1.*t4870*t4871;
  t4886 = -1.*t4879*t4880;
  t4887 = t4872 + t4886;
  t4888 = -1.*t4856*t4887;
  t4889 = Cos(var1[2]);
  t4902 = -1.*t4879*t4870;
  t4903 = t4871*t4880;
  t4904 = t4902 + t4903;
  t4912 = t4889*t4904;
  t4913 = t4888 + t4912;
  t4928 = t4870*t4871;
  t4929 = t4879*t4880;
  t4931 = t4928 + t4929;
  t4932 = t4856*t4931;
  t4933 = t4932 + t4912;
  t4923 = -0.384*var2[2]*t4913;
  t4934 = -0.384*var2[5]*t4933;
  t4940 = -0.384*var2[6]*t4933;
  t4944 = t4923 + t4934 + t4940;
  t4945 = var2[6]*t4944;
  t4890 = t4879*t4870;
  t4891 = -1.*t4871*t4880;
  t4895 = t4890 + t4891;
  t4946 = t4889*t4887;
  t4947 = -1.*t4856*t4895;
  t4951 = t4946 + t4947;
  t4956 = t4856*t4904;
  t4957 = t4946 + t4956;
  t4963 = -1.*t4889*t4887;
  t4967 = -1.*t4856*t4904;
  t4968 = t4963 + t4967;
  t4980 = t4889*t4931;
  t4985 = t4980 + t4967;
  t4976 = -0.384*var2[2]*t4968;
  t4986 = -0.384*var2[5]*t4985;
  t4991 = -0.384*var2[6]*t4985;
  t4992 = t4976 + t4986 + t4991;
  t4993 = var2[6]*t4992;
  t4899 = -1.*t4889*t4895;
  t4900 = t4888 + t4899;
  t4917 = -0.384*var2[6]*t4913;
  t4901 = -0.384*var2[2]*t4900;
  t4916 = -0.384*var2[5]*t4913;
  t4999 = -1.*t4870;
  t5000 = 1. + t4999;
  t5001 = 0.4*t5000;
  t5002 = 0.64*t4870;
  t5038 = t5001 + t5002;
  t5039 = -1.*t5038*t4871;
  t5040 = -0.24*t4879*t4880;
  t5041 = t5039 + t5040;
  t5055 = t4879*t5038;
  t5059 = -0.24*t4871*t4880;
  t5060 = t5055 + t5059;
  t5047 = t5038*t4871;
  t5051 = 0.24*t4879*t4880;
  t5052 = t5047 + t5051;
  t5053 = t4887*t5052;
  t5070 = -0.24*t4870*t4871;
  t5071 = t5070 + t5040;
  t5063 = 0.24*t4871*t4880;
  t5066 = t5060*t4904;
  t5069 = t4887*t5041;
  t5077 = t4887*t5071;
  t5078 = t5071*t4931;
  t5079 = t4895*t5060;
  t5080 = 0.24*t4879*t4870;
  t5081 = t5080 + t5059;
  t5082 = t4895*t5081;
  t5083 = -0.24*t4879*t4870;
  t5084 = t5083 + t5063;
  t5085 = t4895*t5084;
  t5086 = t5069 + t5077 + t5053 + t5078 + t5079 + t5082 + t5085 + t5066;
  t5100 = t5041*t4895;
  t5101 = t5052*t4895;
  t5102 = t4887*t5060;
  t5103 = t4931*t5060;
  t5104 = t5100 + t5101 + t5102 + t5103;
  p_output1[0]=(t4901 + t4916 + t4917)*var2[6];
  p_output1[1]=t4945;
  p_output1[2]=t4945;
  p_output1[3]=-0.384*t4951*var2[6];
  p_output1[4]=-0.384*t4957*var2[6];
  p_output1[5]=-0.384*t4951*var2[2] - 0.384*t4957*var2[5] - 0.768*t4957*var2[6];
  p_output1[6]=var2[6]*(-0.384*(t4856*t4895 + t4963)*var2[2] - 0.384*t4968*var2[5] - 0.384*t4968*var2[6]);
  p_output1[7]=t4993;
  p_output1[8]=t4993;
  p_output1[9]=-0.384*t4900*var2[6];
  p_output1[10]=t4917;
  p_output1[11]=t4901 + t4916 - 0.768*t4913*var2[6];
  p_output1[12]=var2[6]*(-0.384*(2.*t4887*t5041 + t4931*t5041 + t5053 + 2.*t4895*t5060 + t4895*(-1.*t4879*t5038 + t5063) + t5066)*var2[5] - 0.384*t5086*var2[6]);
  p_output1[13]=var2[6]*(-0.384*t5086*var2[5] - 0.384*(t5053 + t5066 + 2.*t4887*t5071 + t5078 + 2.*t4895*t5081 + t5085)*var2[6]);
  p_output1[14]=-0.384*t5104*var2[6];
  p_output1[15]=-0.384*t5104*var2[5] - 0.768*(t4895*t5071 + t4931*t5081 + t5101 + t5102)*var2[6];
  p_output1[16]=-0.384*(0.24*Power(t4870,2) - 1.*t4870*t5038)*Power(var2[6],2);
  p_output1[17]=-0.768*(0.24*t4870*t4880 - 1.*t4880*t5038)*var2[6];
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

#include "J_Ce1_vec7_five_link_walker.hh"

namespace LeftStance
{

void J_Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
