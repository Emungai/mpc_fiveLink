/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:55 GMT-05:00
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
  double t4949;
  double t4938;
  double t4945;
  double t4958;
  double t4930;
  double t4946;
  double t4959;
  double t4960;
  double t4963;
  double t4971;
  double t4975;
  double t4982;
  double t14487;
  double t18159;
  double t18160;
  double t18161;
  double t18156;
  double t18157;
  double t18158;
  double t18162;
  double t18164;
  double t18165;
  double t18166;
  double t18167;
  double t4962;
  double t13576;
  double t18148;
  double t18149;
  double t18150;
  double t18154;
  double t18155;
  double t18168;
  double t18178;
  double t18179;
  double t18182;
  double t18183;
  double t18184;
  double t18192;
  double t18193;
  double t18194;
  double t18195;
  double t18196;
  double t18197;
  double t18198;
  double t18207;
  double t18213;
  double t18214;
  double t18215;
  double t18216;
  double t18217;
  double t18218;
  double t18205;
  double t18206;
  double t18208;
  double t18209;
  double t18210;
  double t18211;
  double t18212;
  double t18219;
  double t18220;
  double t18221;
  t4949 = Cos(var1[2]);
  t4938 = Cos(var1[5]);
  t4945 = Sin(var1[2]);
  t4958 = Sin(var1[5]);
  t4930 = Cos(var1[6]);
  t4946 = -1.*t4938*t4945;
  t4959 = -1.*t4949*t4958;
  t4960 = t4946 + t4959;
  t4963 = t4949*t4938;
  t4971 = -1.*t4945*t4958;
  t4975 = t4963 + t4971;
  t4982 = Sin(var1[6]);
  t14487 = t4930*t4960;
  t18159 = -1.*t4949*t4938;
  t18160 = t4945*t4958;
  t18161 = t18159 + t18160;
  t18156 = -1.*t4930;
  t18157 = 1. + t18156;
  t18158 = 0.4*t18157*t4960;
  t18162 = -0.4*t18161*t4982;
  t18164 = t18161*t4982;
  t18165 = t14487 + t18164;
  t18166 = 0.8*t18165;
  t18167 = t18158 + t18162 + t18166;
  t4962 = -0.4*t4930*t4960;
  t13576 = 0.4*t4975*t4982;
  t18148 = -1.*t4975*t4982;
  t18149 = t14487 + t18148;
  t18150 = 0.8*t18149;
  t18154 = t4962 + t13576 + t18150;
  t18155 = var2[6]*t18154;
  t18168 = var2[2]*t18167;
  t18178 = var2[5]*t18167;
  t18179 = t18155 + t18168 + t18178;
  t18182 = t4938*t4945;
  t18183 = t4949*t4958;
  t18184 = t18182 + t18183;
  t18192 = 0.4*t18157*t4975;
  t18193 = -0.4*t4960*t4982;
  t18194 = t4930*t4975;
  t18195 = t4960*t4982;
  t18196 = t18194 + t18195;
  t18197 = 0.8*t18196;
  t18198 = t18192 + t18193 + t18197;
  t18207 = t4930*t18161;
  t18213 = 0.4*t18157*t18161;
  t18214 = -0.4*t18184*t4982;
  t18215 = t18184*t4982;
  t18216 = t18207 + t18215;
  t18217 = 0.8*t18216;
  t18218 = t18213 + t18214 + t18217;
  t18205 = -0.4*t4930*t18161;
  t18206 = 0.4*t4960*t4982;
  t18208 = -1.*t4960*t4982;
  t18209 = t18207 + t18208;
  t18210 = 0.8*t18209;
  t18211 = t18205 + t18206 + t18210;
  t18212 = var2[6]*t18211;
  t18219 = var2[2]*t18218;
  t18220 = var2[5]*t18218;
  t18221 = t18212 + t18219 + t18220;
  p_output1[0]=t18179;
  p_output1[1]=t18179;
  p_output1[2]=t18154*var2[2] + t18154*var2[5] + (t13576 + 0.4*t18184*t4930 + 0.8*(t18148 - 1.*t18184*t4930))*var2[6];
  p_output1[3]=1.;
  p_output1[4]=t18198;
  p_output1[5]=t18198;
  p_output1[6]=-0.4*t4930*t4975 + 0.4*t18184*t4982 + 0.8*(t18194 - 1.*t18184*t4982);
  p_output1[7]=t18221;
  p_output1[8]=t18221;
  p_output1[9]=t18211*var2[2] + t18211*var2[5] + (t18206 + 0.4*t4930*t4975 + 0.8*(t18208 - 1.*t4930*t4975))*var2[6];
  p_output1[10]=1.;
  p_output1[11]=t18167;
  p_output1[12]=t18167;
  p_output1[13]=t18154;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 14, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_dh_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_dh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
