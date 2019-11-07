/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:06 GMT-05:00
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
  double t1013;
  double t961;
  double t1007;
  double t1028;
  double t14;
  double t1008;
  double t1041;
  double t1353;
  double t1373;
  double t2413;
  double t4688;
  double t4689;
  double t4691;
  double t4692;
  double t4693;
  double t4885;
  double t4886;
  double t4890;
  double t4895;
  double t4901;
  double t4863;
  double t4903;
  double t4904;
  double t4905;
  double t4906;
  double t2558;
  double t2677;
  double t2846;
  double t4912;
  double t4916;
  double t4917;
  double t4919;
  double t4923;
  double t4935;
  double t4941;
  double t4942;
  double t4955;
  double t4956;
  double t4953;
  double t4966;
  double t4970;
  double t4979;
  double t4983;
  double t3022;
  double t3177;
  double t4850;
  double t4676;
  double t4701;
  double t4998;
  double t5000;
  double t5001;
  double t5007;
  double t5008;
  double t5009;
  double t5012;
  double t5077;
  double t5091;
  double t5092;
  double t5093;
  double t5079;
  double t5080;
  double t5083;
  double t5086;
  double t5117;
  double t5124;
  double t5104;
  double t5108;
  double t5116;
  double t5131;
  double t5132;
  double t5133;
  double t5141;
  double t5142;
  double t5159;
  double t5160;
  double t5161;
  double t5722;
  double t5917;
  double t7900;
  double t7927;
  double t8232;
  double t8234;
  double t8237;
  t1013 = Cos(var1[3]);
  t961 = Cos(var1[4]);
  t1007 = Sin(var1[3]);
  t1028 = Sin(var1[4]);
  t14 = Sin(var1[2]);
  t1008 = -1.*t961*t1007;
  t1041 = -1.*t1013*t1028;
  t1353 = t1008 + t1041;
  t1373 = -1.*t14*t1353;
  t2413 = Cos(var1[2]);
  t4688 = -1.*t1013*t961;
  t4689 = t1007*t1028;
  t4691 = t4688 + t4689;
  t4692 = t2413*t4691;
  t4693 = t1373 + t4692;
  t4885 = t961*t1007;
  t4886 = t1013*t1028;
  t4890 = t4885 + t4886;
  t4895 = t14*t4890;
  t4901 = t4895 + t4692;
  t4863 = -0.384*var2[2]*t4693;
  t4903 = -0.384*var2[3]*t4901;
  t4904 = -0.384*var2[4]*t4901;
  t4905 = t4863 + t4903 + t4904;
  t4906 = var2[4]*t4905;
  t2558 = t1013*t961;
  t2677 = -1.*t1007*t1028;
  t2846 = t2558 + t2677;
  t4912 = t2413*t1353;
  t4916 = -1.*t14*t2846;
  t4917 = t4912 + t4916;
  t4919 = t14*t4691;
  t4923 = t4912 + t4919;
  t4935 = -1.*t2413*t1353;
  t4941 = -1.*t14*t4691;
  t4942 = t4935 + t4941;
  t4955 = t2413*t4890;
  t4956 = t4955 + t4941;
  t4953 = -0.384*var2[2]*t4942;
  t4966 = -0.384*var2[3]*t4956;
  t4970 = -0.384*var2[4]*t4956;
  t4979 = t4953 + t4966 + t4970;
  t4983 = var2[4]*t4979;
  t3022 = -1.*t2413*t2846;
  t3177 = t1373 + t3022;
  t4850 = -0.384*var2[4]*t4693;
  t4676 = -0.384*var2[2]*t3177;
  t4701 = -0.384*var2[3]*t4693;
  t4998 = -1.*t961;
  t5000 = 1. + t4998;
  t5001 = 0.4*t5000;
  t5007 = 0.64*t961;
  t5008 = t5001 + t5007;
  t5009 = -1.*t5008*t1007;
  t5012 = -0.24*t1013*t1028;
  t5077 = t5009 + t5012;
  t5091 = t1013*t5008;
  t5092 = -0.24*t1007*t1028;
  t5093 = t5091 + t5092;
  t5079 = t5008*t1007;
  t5080 = 0.24*t1013*t1028;
  t5083 = t5079 + t5080;
  t5086 = t1353*t5083;
  t5117 = -0.24*t961*t1007;
  t5124 = t5117 + t5012;
  t5104 = 0.24*t1007*t1028;
  t5108 = t5093*t4691;
  t5116 = t1353*t5077;
  t5131 = t1353*t5124;
  t5132 = t5124*t4890;
  t5133 = t2846*t5093;
  t5141 = 0.24*t1013*t961;
  t5142 = t5141 + t5092;
  t5159 = t2846*t5142;
  t5160 = -0.24*t1013*t961;
  t5161 = t5160 + t5104;
  t5722 = t2846*t5161;
  t5917 = t5116 + t5131 + t5086 + t5132 + t5133 + t5159 + t5722 + t5108;
  t7900 = t5077*t2846;
  t7927 = t5083*t2846;
  t8232 = t1353*t5093;
  t8234 = t4890*t5093;
  t8237 = t7900 + t7927 + t8232 + t8234;
  p_output1[0]=(t4676 + t4701 + t4850)*var2[4];
  p_output1[1]=t4906;
  p_output1[2]=t4906;
  p_output1[3]=-0.384*t4917*var2[4];
  p_output1[4]=-0.384*t4923*var2[4];
  p_output1[5]=-0.384*t4917*var2[2] - 0.384*t4923*var2[3] - 0.768*t4923*var2[4];
  p_output1[6]=var2[4]*(-0.384*(t14*t2846 + t4935)*var2[2] - 0.384*t4942*var2[3] - 0.384*t4942*var2[4]);
  p_output1[7]=t4983;
  p_output1[8]=t4983;
  p_output1[9]=-0.384*t3177*var2[4];
  p_output1[10]=t4850;
  p_output1[11]=t4676 + t4701 - 0.768*t4693*var2[4];
  p_output1[12]=var2[4]*(-0.384*(2.*t1353*t5077 + t4890*t5077 + t5086 + 2.*t2846*t5093 + t2846*(-1.*t1013*t5008 + t5104) + t5108)*var2[3] - 0.384*t5917*var2[4]);
  p_output1[13]=var2[4]*(-0.384*t5917*var2[3] - 0.384*(t5086 + t5108 + 2.*t1353*t5124 + t5132 + 2.*t2846*t5142 + t5722)*var2[4]);
  p_output1[14]=-0.384*t8237*var2[4];
  p_output1[15]=-0.384*t8237*var2[3] - 0.768*(t2846*t5124 + t4890*t5142 + t7927 + t8232)*var2[4];
  p_output1[16]=-0.384*(-1.*t5008*t961 + 0.24*Power(t961,2))*Power(var2[4],2);
  p_output1[17]=-0.768*(-1.*t1028*t5008 + 0.24*t1028*t961)*var2[4];
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

namespace DoubleSupportConstHeight
{

void J_Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
