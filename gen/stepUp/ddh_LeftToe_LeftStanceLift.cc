/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:24:24 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4036;
  double t4033;
  double t4034;
  double t4038;
  double t4027;
  double t4035;
  double t4046;
  double t4047;
  double t4049;
  double t4050;
  double t4055;
  double t4073;
  double t4031;
  double t4032;
  double t4084;
  double t4085;
  double t4086;
  double t4083;
  double t4087;
  double t4088;
  double t4089;
  double t4090;
  double t4091;
  double t4092;
  double t4097;
  double t4098;
  double t4099;
  double t4101;
  double t4102;
  double t4103;
  double t4106;
  double t4107;
  double t4108;
  double t4109;
  double t4110;
  double t4111;
  double t4112;
  double t4145;
  double t4146;
  double t4147;
  double t4144;
  double t4148;
  double t4149;
  double t4150;
  double t4151;
  double t4152;
  double t4143;
  double t4153;
  double t4154;
  double t4155;
  double t4186;
  double t4190;
  double t4204;
  double t4209;
  double t4210;
  double t4211;
  double t4212;
  double t4218;
  double t4219;
  double t4220;
  double t4221;
  double t4222;
  double t4223;
  double t4217;
  double t4224;
  double t4225;
  double t4226;
  t4036 = Cos(var1[2]);
  t4033 = Cos(var1[5]);
  t4034 = Sin(var1[2]);
  t4038 = Sin(var1[5]);
  t4027 = Cos(var1[6]);
  t4035 = t4033*t4034;
  t4046 = t4036*t4038;
  t4047 = t4035 + t4046;
  t4049 = t4036*t4033;
  t4050 = -1.*t4034*t4038;
  t4055 = t4049 + t4050;
  t4073 = Sin(var1[6]);
  t4031 = -1.*t4027;
  t4032 = 1. + t4031;
  t4084 = -1.*t4033*t4034;
  t4085 = -1.*t4036*t4038;
  t4086 = t4084 + t4085;
  t4083 = 0.4*t4032*t4055;
  t4087 = -0.4*t4086*t4073;
  t4088 = t4027*t4055;
  t4089 = t4086*t4073;
  t4090 = t4088 + t4089;
  t4091 = 0.8*t4090;
  t4092 = t4083 + t4087 + t4091;
  t4097 = -0.4*t4027*t4055;
  t4098 = 0.4*t4047*t4073;
  t4099 = -1.*t4047*t4073;
  t4101 = t4088 + t4099;
  t4102 = 0.8*t4101;
  t4103 = t4097 + t4098 + t4102;
  t4106 = -0.4*t4027*t4086;
  t4107 = 0.4*t4055*t4073;
  t4108 = t4027*t4086;
  t4109 = -1.*t4055*t4073;
  t4110 = t4108 + t4109;
  t4111 = 0.8*t4110;
  t4112 = t4106 + t4107 + t4111;
  t4145 = -1.*t4036*t4033;
  t4146 = t4034*t4038;
  t4147 = t4145 + t4146;
  t4144 = 0.4*t4032*t4086;
  t4148 = -0.4*t4147*t4073;
  t4149 = t4147*t4073;
  t4150 = t4108 + t4149;
  t4151 = 0.8*t4150;
  t4152 = t4144 + t4148 + t4151;
  t4143 = var2[6]*t4112;
  t4153 = var2[2]*t4152;
  t4154 = var2[5]*t4152;
  t4155 = t4143 + t4153 + t4154;
  t4186 = 0.4*t4086*t4073;
  t4190 = -1.*t4086*t4073;
  t4204 = -0.4*t4027*t4147;
  t4209 = t4027*t4147;
  t4210 = t4209 + t4190;
  t4211 = 0.8*t4210;
  t4212 = t4204 + t4186 + t4211;
  t4218 = 0.4*t4032*t4147;
  t4219 = -0.4*t4047*t4073;
  t4220 = t4047*t4073;
  t4221 = t4209 + t4220;
  t4222 = 0.8*t4221;
  t4223 = t4218 + t4219 + t4222;
  t4217 = var2[6]*t4212;
  t4224 = var2[2]*t4223;
  t4225 = var2[5]*t4223;
  t4226 = t4217 + t4224 + t4225;
  p_output1[0]=0.4*t4032*t4047 - 0.4*t4055*t4073 + 0.8*(t4027*t4047 + t4055*t4073) + var1[0] + var2[0] + t4092*var2[2] + t4155*var2[2] + t4092*var2[5] + t4155*var2[5] + t4103*var2[6] + var2[6]*(t4112*var2[2] + t4112*var2[5] + (0.4*t4027*t4047 + t4107 + 0.8*(-1.*t4027*t4047 + t4109))*var2[6]) + var3[0] + t4092*var3[2] + t4092*var3[5] + t4103*var3[6] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t4083 + t4087 + t4091 + t4143 + t4153 + t4154 + var1[1] + var2[1] + t4226*var2[2] + t4226*var2[5] + var2[6]*(t4212*var2[2] + t4212*var2[5] + (0.4*t4027*t4055 + t4186 + 0.8*(-1.*t4027*t4055 + t4190))*var2[6]) + var3[1] + t4152*var3[2] + t4152*var3[5] + t4112*var3[6] - 1.*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "ddh_LeftToe_LeftStanceLift.hh"

namespace LeftStanceLift
{

void ddh_LeftToe_LeftStanceLift_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
