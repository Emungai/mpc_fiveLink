/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:10 GMT-05:00
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
  double t5677;
  double t5683;
  double t5676;
  double t5684;
  double t154;
  double t5682;
  double t5685;
  double t5686;
  double t5688;
  double t5689;
  double t5690;
  double t5691;
  double t593;
  double t2678;
  double t5701;
  double t5702;
  double t5703;
  double t5687;
  double t5692;
  double t5693;
  double t5694;
  double t5695;
  double t5696;
  double t5699;
  double t5700;
  double t5704;
  double t5706;
  double t5707;
  double t5708;
  double t5709;
  double t5710;
  double t5711;
  double t5712;
  double t5713;
  double t5724;
  double t5729;
  double t5730;
  double t5715;
  double t5716;
  double t5717;
  double t5718;
  double t5719;
  double t5720;
  double t5722;
  double t5723;
  double t5731;
  double t5732;
  double t5733;
  double t5734;
  double t5735;
  double t5736;
  double t5737;
  double t5738;
  double t5739;
  double t5740;
  double t5741;
  double t5742;
  double t5743;
  double t5744;
  t5677 = Cos(var1[5]);
  t5683 = Sin(var1[2]);
  t5676 = Cos(var1[2]);
  t5684 = Sin(var1[5]);
  t154 = Cos(var1[6]);
  t5682 = -1.*t5676*t5677;
  t5685 = t5683*t5684;
  t5686 = t5682 + t5685;
  t5688 = t5677*t5683;
  t5689 = t5676*t5684;
  t5690 = t5688 + t5689;
  t5691 = Sin(var1[6]);
  t593 = -1.*t154;
  t2678 = 1. + t593;
  t5701 = -1.*t5677*t5683;
  t5702 = -1.*t5676*t5684;
  t5703 = t5701 + t5702;
  t5687 = 0.4*t2678*t5686;
  t5692 = -0.4*t5690*t5691;
  t5693 = t154*t5686;
  t5694 = t5690*t5691;
  t5695 = t5693 + t5694;
  t5696 = 0.8*t5695;
  t5699 = t5687 + t5692 + t5696;
  t5700 = var2[2]*t5699;
  t5704 = 0.4*t2678*t5703;
  t5706 = -0.4*t5686*t5691;
  t5707 = t154*t5703;
  t5708 = t5686*t5691;
  t5709 = t5707 + t5708;
  t5710 = 0.8*t5709;
  t5711 = t5704 + t5706 + t5710;
  t5712 = var2[0]*t5711;
  t5713 = t5700 + t5712;
  t5724 = t5676*t5677;
  t5729 = -1.*t5683*t5684;
  t5730 = t5724 + t5729;
  t5715 = -0.4*t154*t5686;
  t5716 = 0.4*t5703*t5691;
  t5717 = -1.*t5703*t5691;
  t5718 = t5693 + t5717;
  t5719 = 0.8*t5718;
  t5720 = t5715 + t5716 + t5719;
  t5722 = var2[2]*t5720;
  t5723 = -0.4*t154*t5703;
  t5731 = 0.4*t5730*t5691;
  t5732 = -1.*t5730*t5691;
  t5733 = t5707 + t5732;
  t5734 = 0.8*t5733;
  t5735 = t5723 + t5731 + t5734;
  t5736 = var2[0]*t5735;
  t5737 = t5722 + t5736;
  t5738 = 0.4*t2678*t5730;
  t5739 = -0.4*t5703*t5691;
  t5740 = t154*t5730;
  t5741 = t5703*t5691;
  t5742 = t5740 + t5741;
  t5743 = 0.8*t5742;
  t5744 = t5738 + t5739 + t5743;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t5713;
  p_output1[3]=t5713;
  p_output1[4]=t5737;
  p_output1[5]=t5744;
  p_output1[6]=t5711;
  p_output1[7]=t5713;
  p_output1[8]=t5713;
  p_output1[9]=t5737;
  p_output1[10]=t5744;
  p_output1[11]=t5711;
  p_output1[12]=t5737;
  p_output1[13]=t5737;
  p_output1[14]=(0.4*t154*t5690 + t5731 + 0.8*(-1.*t154*t5690 + t5732))*var2[0] + (t5716 + 0.4*t154*t5730 + 0.8*(t5717 - 1.*t154*t5730))*var2[2];
  p_output1[15]=0.4*t5690*t5691 - 0.4*t154*t5730 + 0.8*(-1.*t5690*t5691 + t5740);
  p_output1[16]=t5735;
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

#include "J_fLeftToe_vec_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_fLeftToe_vec_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
