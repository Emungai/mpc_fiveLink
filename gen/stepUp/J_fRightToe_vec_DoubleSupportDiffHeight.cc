/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:07 GMT-05:00
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
  double t5530;
  double t5536;
  double t5511;
  double t5541;
  double t230;
  double t5535;
  double t5542;
  double t5543;
  double t5553;
  double t5558;
  double t5563;
  double t5564;
  double t5484;
  double t5501;
  double t5580;
  double t5581;
  double t5582;
  double t5552;
  double t5569;
  double t5572;
  double t5573;
  double t5574;
  double t5575;
  double t5576;
  double t5577;
  double t5583;
  double t5584;
  double t5585;
  double t5586;
  double t5587;
  double t5588;
  double t5597;
  double t5599;
  double t5604;
  double t5637;
  double t5642;
  double t5643;
  double t5609;
  double t5610;
  double t5611;
  double t5617;
  double t5626;
  double t5630;
  double t5631;
  double t5632;
  double t5644;
  double t5650;
  double t5651;
  double t5652;
  double t5656;
  double t5657;
  double t5658;
  double t5659;
  double t5663;
  double t5664;
  double t5665;
  double t5673;
  double t5674;
  double t5675;
  t5530 = Cos(var1[3]);
  t5536 = Sin(var1[2]);
  t5511 = Cos(var1[2]);
  t5541 = Sin(var1[3]);
  t230 = Cos(var1[4]);
  t5535 = -1.*t5511*t5530;
  t5542 = t5536*t5541;
  t5543 = t5535 + t5542;
  t5553 = t5530*t5536;
  t5558 = t5511*t5541;
  t5563 = t5553 + t5558;
  t5564 = Sin(var1[4]);
  t5484 = -1.*t230;
  t5501 = 1. + t5484;
  t5580 = -1.*t5530*t5536;
  t5581 = -1.*t5511*t5541;
  t5582 = t5580 + t5581;
  t5552 = 0.4*t5501*t5543;
  t5569 = -0.4*t5563*t5564;
  t5572 = t230*t5543;
  t5573 = t5563*t5564;
  t5574 = t5572 + t5573;
  t5575 = 0.8*t5574;
  t5576 = t5552 + t5569 + t5575;
  t5577 = var2[2]*t5576;
  t5583 = 0.4*t5501*t5582;
  t5584 = -0.4*t5543*t5564;
  t5585 = t230*t5582;
  t5586 = t5543*t5564;
  t5587 = t5585 + t5586;
  t5588 = 0.8*t5587;
  t5597 = t5583 + t5584 + t5588;
  t5599 = var2[0]*t5597;
  t5604 = t5577 + t5599;
  t5637 = t5511*t5530;
  t5642 = -1.*t5536*t5541;
  t5643 = t5637 + t5642;
  t5609 = -0.4*t230*t5543;
  t5610 = 0.4*t5582*t5564;
  t5611 = -1.*t5582*t5564;
  t5617 = t5572 + t5611;
  t5626 = 0.8*t5617;
  t5630 = t5609 + t5610 + t5626;
  t5631 = var2[2]*t5630;
  t5632 = -0.4*t230*t5582;
  t5644 = 0.4*t5643*t5564;
  t5650 = -1.*t5643*t5564;
  t5651 = t5585 + t5650;
  t5652 = 0.8*t5651;
  t5656 = t5632 + t5644 + t5652;
  t5657 = var2[0]*t5656;
  t5658 = t5631 + t5657;
  t5659 = 0.4*t5501*t5643;
  t5663 = -0.4*t5582*t5564;
  t5664 = t230*t5643;
  t5665 = t5582*t5564;
  t5673 = t5664 + t5665;
  t5674 = 0.8*t5673;
  t5675 = t5659 + t5663 + t5674;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t5604;
  p_output1[3]=t5604;
  p_output1[4]=t5658;
  p_output1[5]=t5675;
  p_output1[6]=t5597;
  p_output1[7]=t5604;
  p_output1[8]=t5604;
  p_output1[9]=t5658;
  p_output1[10]=t5675;
  p_output1[11]=t5597;
  p_output1[12]=t5658;
  p_output1[13]=t5658;
  p_output1[14]=(0.4*t230*t5563 + t5644 + 0.8*(-1.*t230*t5563 + t5650))*var2[0] + (t5610 + 0.4*t230*t5643 + 0.8*(t5611 - 1.*t230*t5643))*var2[2];
  p_output1[15]=0.4*t5563*t5564 - 0.4*t230*t5643 + 0.8*(-1.*t5563*t5564 + t5664);
  p_output1[16]=t5656;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fRightToe_vec_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_fRightToe_vec_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
