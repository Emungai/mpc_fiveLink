/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:26:30 GMT-05:00
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
  double t6458;
  double t6455;
  double t6456;
  double t6466;
  double t2768;
  double t6457;
  double t6467;
  double t6468;
  double t6515;
  double t6531;
  double t6587;
  double t6589;
  double t3028;
  double t3151;
  double t6636;
  double t6637;
  double t6638;
  double t6635;
  double t6639;
  double t6640;
  double t6641;
  double t6648;
  double t6649;
  double t6650;
  double t6660;
  double t6661;
  double t6689;
  double t6690;
  double t6696;
  double t6702;
  double t6706;
  double t6709;
  double t6710;
  double t6711;
  double t6712;
  double t6713;
  double t6714;
  double t6733;
  double t6742;
  double t6743;
  double t6732;
  double t6744;
  double t6745;
  double t6746;
  double t6747;
  double t6748;
  double t6731;
  double t6749;
  double t6750;
  double t6754;
  double t6773;
  double t6775;
  double t6781;
  double t6783;
  double t6784;
  double t6785;
  double t6786;
  double t6799;
  double t6800;
  double t6801;
  double t6802;
  double t6803;
  double t6804;
  double t6798;
  double t6805;
  double t6806;
  double t6807;
  t6458 = Cos(var1[2]);
  t6455 = Cos(var1[5]);
  t6456 = Sin(var1[2]);
  t6466 = Sin(var1[5]);
  t2768 = Cos(var1[6]);
  t6457 = t6455*t6456;
  t6467 = t6458*t6466;
  t6468 = t6457 + t6467;
  t6515 = t6458*t6455;
  t6531 = -1.*t6456*t6466;
  t6587 = t6515 + t6531;
  t6589 = Sin(var1[6]);
  t3028 = -1.*t2768;
  t3151 = 1. + t3028;
  t6636 = -1.*t6455*t6456;
  t6637 = -1.*t6458*t6466;
  t6638 = t6636 + t6637;
  t6635 = 0.4*t3151*t6587;
  t6639 = -0.4*t6638*t6589;
  t6640 = t2768*t6587;
  t6641 = t6638*t6589;
  t6648 = t6640 + t6641;
  t6649 = 0.8*t6648;
  t6650 = t6635 + t6639 + t6649;
  t6660 = -0.4*t2768*t6587;
  t6661 = 0.4*t6468*t6589;
  t6689 = -1.*t6468*t6589;
  t6690 = t6640 + t6689;
  t6696 = 0.8*t6690;
  t6702 = t6660 + t6661 + t6696;
  t6706 = -0.4*t2768*t6638;
  t6709 = 0.4*t6587*t6589;
  t6710 = t2768*t6638;
  t6711 = -1.*t6587*t6589;
  t6712 = t6710 + t6711;
  t6713 = 0.8*t6712;
  t6714 = t6706 + t6709 + t6713;
  t6733 = -1.*t6458*t6455;
  t6742 = t6456*t6466;
  t6743 = t6733 + t6742;
  t6732 = 0.4*t3151*t6638;
  t6744 = -0.4*t6743*t6589;
  t6745 = t6743*t6589;
  t6746 = t6710 + t6745;
  t6747 = 0.8*t6746;
  t6748 = t6732 + t6744 + t6747;
  t6731 = var2[6]*t6714;
  t6749 = var2[2]*t6748;
  t6750 = var2[5]*t6748;
  t6754 = t6731 + t6749 + t6750;
  t6773 = 0.4*t6638*t6589;
  t6775 = -1.*t6638*t6589;
  t6781 = -0.4*t2768*t6743;
  t6783 = t2768*t6743;
  t6784 = t6783 + t6775;
  t6785 = 0.8*t6784;
  t6786 = t6781 + t6773 + t6785;
  t6799 = 0.4*t3151*t6743;
  t6800 = -0.4*t6468*t6589;
  t6801 = t6468*t6589;
  t6802 = t6783 + t6801;
  t6803 = 0.8*t6802;
  t6804 = t6799 + t6800 + t6803;
  t6798 = var2[6]*t6786;
  t6805 = var2[2]*t6804;
  t6806 = var2[5]*t6804;
  t6807 = t6798 + t6805 + t6806;
  p_output1[0]=0.4*t3151*t6468 - 0.4*t6587*t6589 + 0.8*(t2768*t6468 + t6587*t6589) + var1[0] + var2[0] + t6650*var2[2] + t6754*var2[2] + t6650*var2[5] + t6754*var2[5] + t6702*var2[6] + var2[6]*(t6714*var2[2] + t6714*var2[5] + (0.4*t2768*t6468 + t6709 + 0.8*(-1.*t2768*t6468 + t6711))*var2[6]) + var3[0] + t6650*var3[2] + t6650*var3[5] + t6702*var3[6] - 1.*var4[0];
  p_output1[1]=-1.*var4[1];
  p_output1[2]=t6635 + t6639 + t6649 + t6731 + t6749 + t6750 + var1[1] + var2[1] + t6807*var2[2] + t6807*var2[5] + var2[6]*(t6786*var2[2] + t6786*var2[5] + (0.4*t2768*t6587 + t6773 + 0.8*(-1.*t2768*t6587 + t6775))*var2[6]) + var3[1] + t6748*var3[2] + t6748*var3[5] + t6714*var3[6] - 1.*var4[2];
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

#include "ddh_LeftToe_LeftStanceLand.hh"

namespace LeftStanceLand
{

void ddh_LeftToe_LeftStanceLand_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
