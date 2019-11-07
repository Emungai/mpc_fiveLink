/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:41 GMT-05:00
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
  double t5078;
  double t2816;
  double t2943;
  double t5102;
  double t91;
  double t2960;
  double t5115;
  double t7584;
  double t8022;
  double t8140;
  double t9016;
  double t9017;
  double t2458;
  double t2517;
  double t9027;
  double t9035;
  double t9036;
  double t9026;
  double t9037;
  double t9038;
  double t9039;
  double t9040;
  double t9068;
  double t9069;
  double t9074;
  double t9075;
  double t9076;
  double t9077;
  double t9078;
  double t9079;
  double t9082;
  double t9083;
  double t9084;
  double t9085;
  double t9086;
  double t9087;
  double t9088;
  double t9101;
  double t9102;
  double t9103;
  double t9100;
  double t9117;
  double t9118;
  double t9119;
  double t9120;
  double t9158;
  double t9099;
  double t9159;
  double t9171;
  double t9182;
  double t9241;
  double t9274;
  double t9282;
  double t9318;
  double t9320;
  double t9334;
  double t9335;
  double t9391;
  double t9396;
  double t9401;
  double t9402;
  double t9403;
  double t9407;
  double t9360;
  double t9412;
  double t9416;
  double t9420;
  t5078 = Cos(var1[2]);
  t2816 = Cos(var1[5]);
  t2943 = Sin(var1[2]);
  t5102 = Sin(var1[5]);
  t91 = Cos(var1[6]);
  t2960 = t2816*t2943;
  t5115 = t5078*t5102;
  t7584 = t2960 + t5115;
  t8022 = t5078*t2816;
  t8140 = -1.*t2943*t5102;
  t9016 = t8022 + t8140;
  t9017 = Sin(var1[6]);
  t2458 = -1.*t91;
  t2517 = 1. + t2458;
  t9027 = -1.*t2816*t2943;
  t9035 = -1.*t5078*t5102;
  t9036 = t9027 + t9035;
  t9026 = 0.4*t2517*t9016;
  t9037 = -0.4*t9036*t9017;
  t9038 = t91*t9016;
  t9039 = t9036*t9017;
  t9040 = t9038 + t9039;
  t9068 = 0.8*t9040;
  t9069 = t9026 + t9037 + t9068;
  t9074 = -0.4*t91*t9016;
  t9075 = 0.4*t7584*t9017;
  t9076 = -1.*t7584*t9017;
  t9077 = t9038 + t9076;
  t9078 = 0.8*t9077;
  t9079 = t9074 + t9075 + t9078;
  t9082 = -0.4*t91*t9036;
  t9083 = 0.4*t9016*t9017;
  t9084 = t91*t9036;
  t9085 = -1.*t9016*t9017;
  t9086 = t9084 + t9085;
  t9087 = 0.8*t9086;
  t9088 = t9082 + t9083 + t9087;
  t9101 = -1.*t5078*t2816;
  t9102 = t2943*t5102;
  t9103 = t9101 + t9102;
  t9100 = 0.4*t2517*t9036;
  t9117 = -0.4*t9103*t9017;
  t9118 = t9103*t9017;
  t9119 = t9084 + t9118;
  t9120 = 0.8*t9119;
  t9158 = t9100 + t9117 + t9120;
  t9099 = var2[6]*t9088;
  t9159 = var2[2]*t9158;
  t9171 = var2[5]*t9158;
  t9182 = t9099 + t9159 + t9171;
  t9241 = 0.4*t9036*t9017;
  t9274 = -1.*t9036*t9017;
  t9282 = -0.4*t91*t9103;
  t9318 = t91*t9103;
  t9320 = t9318 + t9274;
  t9334 = 0.8*t9320;
  t9335 = t9282 + t9241 + t9334;
  t9391 = 0.4*t2517*t9103;
  t9396 = -0.4*t7584*t9017;
  t9401 = t7584*t9017;
  t9402 = t9318 + t9401;
  t9403 = 0.8*t9402;
  t9407 = t9391 + t9396 + t9403;
  t9360 = var2[6]*t9335;
  t9412 = var2[2]*t9407;
  t9416 = var2[5]*t9407;
  t9420 = t9360 + t9412 + t9416;
  p_output1[0]=0.4*t2517*t7584 - 0.4*t9016*t9017 + 0.8*(t9016*t9017 + t7584*t91) + var1[0] + var2[0] + t9069*var2[2] + t9182*var2[2] + t9069*var2[5] + t9182*var2[5] + t9079*var2[6] + var2[6]*(t9088*var2[2] + t9088*var2[5] + (t9083 + 0.4*t7584*t91 + 0.8*(t9085 - 1.*t7584*t91))*var2[6]) + var3[0] + t9069*var3[2] + t9069*var3[5] + t9079*var3[6] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t9026 + t9037 + t9068 + t9099 + t9159 + t9171 + var1[1] + var2[1] + t9420*var2[2] + t9420*var2[5] + var2[6]*(t9335*var2[2] + t9335*var2[5] + (0.4*t9016*t91 + t9241 + 0.8*(-1.*t9016*t91 + t9274))*var2[6]) + var3[1] + t9158*var3[2] + t9158*var3[5] + t9088*var3[6] - 1.*var4[2];
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

#include "ddh_LeftToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void ddh_LeftToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
