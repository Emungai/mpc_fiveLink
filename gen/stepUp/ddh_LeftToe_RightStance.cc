/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:48 GMT-05:00
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
  double t9104;
  double t9100;
  double t9102;
  double t9106;
  double t8535;
  double t9103;
  double t9112;
  double t9113;
  double t9154;
  double t9156;
  double t9465;
  double t9470;
  double t9087;
  double t9099;
  double t11496;
  double t11497;
  double t11498;
  double t11495;
  double t11506;
  double t11507;
  double t11508;
  double t11509;
  double t11510;
  double t11511;
  double t11533;
  double t11534;
  double t11535;
  double t11536;
  double t11537;
  double t11538;
  double t11541;
  double t11542;
  double t11543;
  double t11544;
  double t11545;
  double t11546;
  double t11547;
  double t11560;
  double t11561;
  double t11562;
  double t11559;
  double t11563;
  double t11564;
  double t11565;
  double t11566;
  double t11567;
  double t11558;
  double t11568;
  double t11569;
  double t11570;
  double t11580;
  double t11582;
  double t11587;
  double t11588;
  double t11589;
  double t11590;
  double t11591;
  double t11597;
  double t11598;
  double t11599;
  double t11600;
  double t11601;
  double t11602;
  double t11596;
  double t11603;
  double t11604;
  double t11605;
  t9104 = Cos(var1[2]);
  t9100 = Cos(var1[5]);
  t9102 = Sin(var1[2]);
  t9106 = Sin(var1[5]);
  t8535 = Cos(var1[6]);
  t9103 = t9100*t9102;
  t9112 = t9104*t9106;
  t9113 = t9103 + t9112;
  t9154 = t9104*t9100;
  t9156 = -1.*t9102*t9106;
  t9465 = t9154 + t9156;
  t9470 = Sin(var1[6]);
  t9087 = -1.*t8535;
  t9099 = 1. + t9087;
  t11496 = -1.*t9100*t9102;
  t11497 = -1.*t9104*t9106;
  t11498 = t11496 + t11497;
  t11495 = 0.4*t9099*t9465;
  t11506 = -0.4*t11498*t9470;
  t11507 = t8535*t9465;
  t11508 = t11498*t9470;
  t11509 = t11507 + t11508;
  t11510 = 0.8*t11509;
  t11511 = t11495 + t11506 + t11510;
  t11533 = -0.4*t8535*t9465;
  t11534 = 0.4*t9113*t9470;
  t11535 = -1.*t9113*t9470;
  t11536 = t11507 + t11535;
  t11537 = 0.8*t11536;
  t11538 = t11533 + t11534 + t11537;
  t11541 = -0.4*t8535*t11498;
  t11542 = 0.4*t9465*t9470;
  t11543 = t8535*t11498;
  t11544 = -1.*t9465*t9470;
  t11545 = t11543 + t11544;
  t11546 = 0.8*t11545;
  t11547 = t11541 + t11542 + t11546;
  t11560 = -1.*t9104*t9100;
  t11561 = t9102*t9106;
  t11562 = t11560 + t11561;
  t11559 = 0.4*t9099*t11498;
  t11563 = -0.4*t11562*t9470;
  t11564 = t11562*t9470;
  t11565 = t11543 + t11564;
  t11566 = 0.8*t11565;
  t11567 = t11559 + t11563 + t11566;
  t11558 = var2[6]*t11547;
  t11568 = var2[2]*t11567;
  t11569 = var2[5]*t11567;
  t11570 = t11558 + t11568 + t11569;
  t11580 = 0.4*t11498*t9470;
  t11582 = -1.*t11498*t9470;
  t11587 = -0.4*t8535*t11562;
  t11588 = t8535*t11562;
  t11589 = t11588 + t11582;
  t11590 = 0.8*t11589;
  t11591 = t11587 + t11580 + t11590;
  t11597 = 0.4*t9099*t11562;
  t11598 = -0.4*t9113*t9470;
  t11599 = t9113*t9470;
  t11600 = t11588 + t11599;
  t11601 = 0.8*t11600;
  t11602 = t11597 + t11598 + t11601;
  t11596 = var2[6]*t11591;
  t11603 = var2[2]*t11602;
  t11604 = var2[5]*t11602;
  t11605 = t11596 + t11603 + t11604;
  p_output1[0]=0.4*t9099*t9113 - 0.4*t9465*t9470 + 0.8*(t8535*t9113 + t9465*t9470) + var1[0] + var2[0] + t11511*var2[2] + t11570*var2[2] + t11511*var2[5] + t11570*var2[5] + t11538*var2[6] + var2[6]*(t11547*var2[2] + t11547*var2[5] + (t11542 + 0.4*t8535*t9113 + 0.8*(t11544 - 1.*t8535*t9113))*var2[6]) + var3[0] + t11511*var3[2] + t11511*var3[5] + t11538*var3[6] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t11495 + t11506 + t11510 + t11558 + t11568 + t11569 + var1[1] + var2[1] + t11605*var2[2] + t11605*var2[5] + var2[6]*(t11591*var2[2] + t11591*var2[5] + (t11580 + 0.4*t8535*t9465 + 0.8*(t11582 - 1.*t8535*t9465))*var2[6]) + var3[1] + t11567*var3[2] + t11567*var3[5] + t11547*var3[6] - 1.*var4[2];
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

#include "ddh_LeftToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void ddh_LeftToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
