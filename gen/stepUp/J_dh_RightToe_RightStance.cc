/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:28 GMT-05:00
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
  double t11116;
  double t9335;
  double t9337;
  double t11117;
  double t5745;
  double t9352;
  double t11118;
  double t11122;
  double t11124;
  double t11125;
  double t11126;
  double t11127;
  double t11129;
  double t11148;
  double t11149;
  double t11150;
  double t11136;
  double t11146;
  double t11147;
  double t11151;
  double t11152;
  double t11153;
  double t11154;
  double t11155;
  double t11123;
  double t11128;
  double t11130;
  double t11132;
  double t11133;
  double t11134;
  double t11135;
  double t11156;
  double t11157;
  double t11158;
  double t11161;
  double t11162;
  double t11163;
  double t11171;
  double t11172;
  double t11173;
  double t11174;
  double t11175;
  double t11176;
  double t11177;
  double t11186;
  double t11192;
  double t11193;
  double t11194;
  double t11195;
  double t11196;
  double t11197;
  double t11184;
  double t11185;
  double t11187;
  double t11188;
  double t11189;
  double t11190;
  double t11191;
  double t11198;
  double t11199;
  double t11200;
  t11116 = Cos(var1[2]);
  t9335 = Cos(var1[3]);
  t9337 = Sin(var1[2]);
  t11117 = Sin(var1[3]);
  t5745 = Cos(var1[4]);
  t9352 = -1.*t9335*t9337;
  t11118 = -1.*t11116*t11117;
  t11122 = t9352 + t11118;
  t11124 = t11116*t9335;
  t11125 = -1.*t9337*t11117;
  t11126 = t11124 + t11125;
  t11127 = Sin(var1[4]);
  t11129 = t5745*t11122;
  t11148 = -1.*t11116*t9335;
  t11149 = t9337*t11117;
  t11150 = t11148 + t11149;
  t11136 = -1.*t5745;
  t11146 = 1. + t11136;
  t11147 = 0.4*t11146*t11122;
  t11151 = -0.4*t11150*t11127;
  t11152 = t11150*t11127;
  t11153 = t11129 + t11152;
  t11154 = 0.8*t11153;
  t11155 = t11147 + t11151 + t11154;
  t11123 = -0.4*t5745*t11122;
  t11128 = 0.4*t11126*t11127;
  t11130 = -1.*t11126*t11127;
  t11132 = t11129 + t11130;
  t11133 = 0.8*t11132;
  t11134 = t11123 + t11128 + t11133;
  t11135 = var2[4]*t11134;
  t11156 = var2[2]*t11155;
  t11157 = var2[3]*t11155;
  t11158 = t11135 + t11156 + t11157;
  t11161 = t9335*t9337;
  t11162 = t11116*t11117;
  t11163 = t11161 + t11162;
  t11171 = 0.4*t11146*t11126;
  t11172 = -0.4*t11122*t11127;
  t11173 = t5745*t11126;
  t11174 = t11122*t11127;
  t11175 = t11173 + t11174;
  t11176 = 0.8*t11175;
  t11177 = t11171 + t11172 + t11176;
  t11186 = t5745*t11150;
  t11192 = 0.4*t11146*t11150;
  t11193 = -0.4*t11163*t11127;
  t11194 = t11163*t11127;
  t11195 = t11186 + t11194;
  t11196 = 0.8*t11195;
  t11197 = t11192 + t11193 + t11196;
  t11184 = -0.4*t5745*t11150;
  t11185 = 0.4*t11122*t11127;
  t11187 = -1.*t11122*t11127;
  t11188 = t11186 + t11187;
  t11189 = 0.8*t11188;
  t11190 = t11184 + t11185 + t11189;
  t11191 = var2[4]*t11190;
  t11198 = var2[2]*t11197;
  t11199 = var2[3]*t11197;
  t11200 = t11191 + t11198 + t11199;
  p_output1[0]=t11158;
  p_output1[1]=t11158;
  p_output1[2]=t11134*var2[2] + t11134*var2[3] + (t11128 + 0.4*t11163*t5745 + 0.8*(t11130 - 1.*t11163*t5745))*var2[4];
  p_output1[3]=1.;
  p_output1[4]=t11177;
  p_output1[5]=t11177;
  p_output1[6]=0.4*t11127*t11163 + 0.8*(-1.*t11127*t11163 + t11173) - 0.4*t11126*t5745;
  p_output1[7]=t11200;
  p_output1[8]=t11200;
  p_output1[9]=t11190*var2[2] + t11190*var2[3] + (t11185 + 0.4*t11126*t5745 + 0.8*(t11187 - 1.*t11126*t5745))*var2[4];
  p_output1[10]=1.;
  p_output1[11]=t11155;
  p_output1[12]=t11155;
  p_output1[13]=t11134;
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

#include "J_dh_RightToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_dh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
