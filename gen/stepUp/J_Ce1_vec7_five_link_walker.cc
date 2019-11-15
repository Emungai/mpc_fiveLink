/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:39:50 GMT-05:00
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
  double t4915;
  double t4906;
  double t4907;
  double t4916;
  double t4892;
  double t4908;
  double t4922;
  double t4923;
  double t4924;
  double t4925;
  double t4938;
  double t4939;
  double t4940;
  double t4948;
  double t4949;
  double t4964;
  double t4965;
  double t4967;
  double t4968;
  double t4969;
  double t4959;
  double t4970;
  double t4976;
  double t4980;
  double t4981;
  double t4926;
  double t4927;
  double t4931;
  double t4982;
  double t4983;
  double t4987;
  double t4992;
  double t4993;
  double t4999;
  double t5003;
  double t5004;
  double t5016;
  double t5021;
  double t5012;
  double t5022;
  double t5027;
  double t5028;
  double t5029;
  double t4935;
  double t4936;
  double t4953;
  double t4937;
  double t4952;
  double t5035;
  double t5036;
  double t5037;
  double t5038;
  double t5074;
  double t5075;
  double t5076;
  double t5077;
  double t5091;
  double t5095;
  double t5096;
  double t5083;
  double t5087;
  double t5088;
  double t5089;
  double t5106;
  double t5107;
  double t5099;
  double t5102;
  double t5105;
  double t5113;
  double t5114;
  double t5115;
  double t5116;
  double t5117;
  double t5118;
  double t5119;
  double t5120;
  double t5121;
  double t5122;
  double t5136;
  double t5137;
  double t5138;
  double t5139;
  double t5140;
  t4915 = Cos(var1[5]);
  t4906 = Cos(var1[6]);
  t4907 = Sin(var1[5]);
  t4916 = Sin(var1[6]);
  t4892 = Sin(var1[2]);
  t4908 = -1.*t4906*t4907;
  t4922 = -1.*t4915*t4916;
  t4923 = t4908 + t4922;
  t4924 = -1.*t4892*t4923;
  t4925 = Cos(var1[2]);
  t4938 = -1.*t4915*t4906;
  t4939 = t4907*t4916;
  t4940 = t4938 + t4939;
  t4948 = t4925*t4940;
  t4949 = t4924 + t4948;
  t4964 = t4906*t4907;
  t4965 = t4915*t4916;
  t4967 = t4964 + t4965;
  t4968 = t4892*t4967;
  t4969 = t4968 + t4948;
  t4959 = -0.384*var2[2]*t4949;
  t4970 = -0.384*var2[5]*t4969;
  t4976 = -0.384*var2[6]*t4969;
  t4980 = t4959 + t4970 + t4976;
  t4981 = var2[6]*t4980;
  t4926 = t4915*t4906;
  t4927 = -1.*t4907*t4916;
  t4931 = t4926 + t4927;
  t4982 = t4925*t4923;
  t4983 = -1.*t4892*t4931;
  t4987 = t4982 + t4983;
  t4992 = t4892*t4940;
  t4993 = t4982 + t4992;
  t4999 = -1.*t4925*t4923;
  t5003 = -1.*t4892*t4940;
  t5004 = t4999 + t5003;
  t5016 = t4925*t4967;
  t5021 = t5016 + t5003;
  t5012 = -0.384*var2[2]*t5004;
  t5022 = -0.384*var2[5]*t5021;
  t5027 = -0.384*var2[6]*t5021;
  t5028 = t5012 + t5022 + t5027;
  t5029 = var2[6]*t5028;
  t4935 = -1.*t4925*t4931;
  t4936 = t4924 + t4935;
  t4953 = -0.384*var2[6]*t4949;
  t4937 = -0.384*var2[2]*t4936;
  t4952 = -0.384*var2[5]*t4949;
  t5035 = -1.*t4906;
  t5036 = 1. + t5035;
  t5037 = 0.4*t5036;
  t5038 = 0.64*t4906;
  t5074 = t5037 + t5038;
  t5075 = -1.*t5074*t4907;
  t5076 = -0.24*t4915*t4916;
  t5077 = t5075 + t5076;
  t5091 = t4915*t5074;
  t5095 = -0.24*t4907*t4916;
  t5096 = t5091 + t5095;
  t5083 = t5074*t4907;
  t5087 = 0.24*t4915*t4916;
  t5088 = t5083 + t5087;
  t5089 = t4923*t5088;
  t5106 = -0.24*t4906*t4907;
  t5107 = t5106 + t5076;
  t5099 = 0.24*t4907*t4916;
  t5102 = t5096*t4940;
  t5105 = t4923*t5077;
  t5113 = t4923*t5107;
  t5114 = t5107*t4967;
  t5115 = t4931*t5096;
  t5116 = 0.24*t4915*t4906;
  t5117 = t5116 + t5095;
  t5118 = t4931*t5117;
  t5119 = -0.24*t4915*t4906;
  t5120 = t5119 + t5099;
  t5121 = t4931*t5120;
  t5122 = t5105 + t5113 + t5089 + t5114 + t5115 + t5118 + t5121 + t5102;
  t5136 = t5077*t4931;
  t5137 = t5088*t4931;
  t5138 = t4923*t5096;
  t5139 = t4967*t5096;
  t5140 = t5136 + t5137 + t5138 + t5139;
  p_output1[0]=(t4937 + t4952 + t4953)*var2[6];
  p_output1[1]=t4981;
  p_output1[2]=t4981;
  p_output1[3]=-0.384*t4987*var2[6];
  p_output1[4]=-0.384*t4993*var2[6];
  p_output1[5]=-0.384*t4987*var2[2] - 0.384*t4993*var2[5] - 0.768*t4993*var2[6];
  p_output1[6]=var2[6]*(-0.384*(t4892*t4931 + t4999)*var2[2] - 0.384*t5004*var2[5] - 0.384*t5004*var2[6]);
  p_output1[7]=t5029;
  p_output1[8]=t5029;
  p_output1[9]=-0.384*t4936*var2[6];
  p_output1[10]=t4953;
  p_output1[11]=t4937 + t4952 - 0.768*t4949*var2[6];
  p_output1[12]=var2[6]*(-0.384*(2.*t4923*t5077 + t4967*t5077 + t5089 + 2.*t4931*t5096 + t4931*(-1.*t4915*t5074 + t5099) + t5102)*var2[5] - 0.384*t5122*var2[6]);
  p_output1[13]=var2[6]*(-0.384*t5122*var2[5] - 0.384*(t5089 + t5102 + 2.*t4923*t5107 + t5114 + 2.*t4931*t5117 + t5121)*var2[6]);
  p_output1[14]=-0.384*t5140*var2[6];
  p_output1[15]=-0.384*t5140*var2[5] - 0.768*(t4931*t5107 + t4967*t5117 + t5137 + t5138)*var2[6];
  p_output1[16]=-0.384*(0.24*Power(t4906,2) - 1.*t4906*t5074)*Power(var2[6],2);
  p_output1[17]=-0.768*(0.24*t4906*t4916 - 1.*t4916*t5074)*var2[6];
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

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce1_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
