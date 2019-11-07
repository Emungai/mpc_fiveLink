/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:18 GMT-05:00
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
  double t8214;
  double t5626;
  double t5903;
  double t8240;
  double t8936;
  double t6248;
  double t8854;
  double t8859;
  double t2536;
  double t9318;
  double t9320;
  double t9334;
  double t9335;
  double t9341;
  double t9360;
  double t9391;
  double t9396;
  double t9401;
  double t9403;
  double t9407;
  double t11023;
  double t8901;
  double t9189;
  double t9223;
  double t9276;
  double t9277;
  double t9281;
  double t12573;
  double t12574;
  double t12575;
  double t12597;
  double t12634;
  double t12635;
  double t12663;
  double t12664;
  double t12673;
  double t12674;
  double t12675;
  double t12677;
  double t12678;
  double t12679;
  double t12683;
  double t12684;
  double t12685;
  double t12689;
  double t12690;
  double t12666;
  double t12667;
  double t12668;
  double t12549;
  double t12565;
  double t12572;
  double t12657;
  double t12658;
  double t9342;
  double t9343;
  double t9351;
  double t9420;
  double t9430;
  double t9448;
  double t12637;
  double t12642;
  double t12643;
  double t12662;
  double t12665;
  double t12669;
  double t12670;
  double t12671;
  double t12676;
  double t12680;
  double t12681;
  double t12686;
  double t12687;
  double t12688;
  double t12691;
  double t12692;
  double t12694;
  double t12695;
  double t12696;
  double t12698;
  double t12699;
  double t12700;
  double t12701;
  double t12702;
  double t12720;
  double t12721;
  double t12722;
  double t12723;
  double t12724;
  double t12682;
  double t12693;
  double t12697;
  double t12703;
  double t12704;
  double t12709;
  double t12710;
  double t12711;
  double t12712;
  double t12713;
  double t9416;
  double t10250;
  double t12636;
  double t12644;
  double t12645;
  double t12729;
  double t12730;
  double t12731;
  double t12732;
  double t12733;
  t8214 = Cos(var1[3]);
  t5626 = Cos(var1[4]);
  t5903 = Sin(var1[3]);
  t8240 = Sin(var1[4]);
  t8936 = Sin(var1[2]);
  t6248 = -1.*t5626*t5903;
  t8854 = -1.*t8214*t8240;
  t8859 = t6248 + t8854;
  t2536 = Cos(var1[2]);
  t9318 = -1.*t5626;
  t9320 = 1. + t9318;
  t9334 = 0.4*t9320;
  t9335 = 0.64*t5626;
  t9341 = t9334 + t9335;
  t9360 = t8936*t8859;
  t9391 = t8214*t5626;
  t9396 = -1.*t5903*t8240;
  t9401 = t9391 + t9396;
  t9403 = t2536*t9401;
  t9407 = t9360 + t9403;
  t11023 = t9341*t5626;
  t8901 = t2536*t8859;
  t9189 = -1.*t8214*t5626;
  t9223 = t5903*t8240;
  t9276 = t9189 + t9223;
  t9277 = t8936*t9276;
  t9281 = t8901 + t9277;
  t12573 = t5626*t5903;
  t12574 = t8214*t8240;
  t12575 = t12573 + t12574;
  t12597 = t2536*t12575;
  t12634 = t8936*t9401;
  t12635 = t12597 + t12634;
  t12663 = -1.*t8936*t9401;
  t12664 = t8901 + t12663;
  t12673 = t9341*t5903;
  t12674 = 0.24*t8214*t8240;
  t12675 = t12673 + t12674;
  t12677 = t8214*t9341;
  t12678 = -0.24*t5903*t8240;
  t12679 = t12677 + t12678;
  t12683 = -0.24*t5626*t5903;
  t12684 = -0.24*t8214*t8240;
  t12685 = t12683 + t12684;
  t12689 = 0.24*t8214*t5626;
  t12690 = t12689 + t12678;
  t12666 = -1.*t8936*t8859;
  t12667 = t2536*t9276;
  t12668 = t12666 + t12667;
  t12549 = Power(t5626,2);
  t12565 = -0.24*t12549;
  t12572 = t11023 + t12565;
  t12657 = -1.*t8936*t12575;
  t12658 = t12657 + t9403;
  t9342 = t9341*t8240;
  t9343 = -0.24*t5626*t8240;
  t9351 = t9342 + t9343;
  t9420 = -1.*t9341*t8240;
  t9430 = 0.24*t5626*t8240;
  t9448 = t9420 + t9430;
  t12637 = Power(t8240,2);
  t12642 = 0.24*t12637;
  t12643 = t11023 + t12642;
  t12662 = 3.2*t9407*t12658;
  t12665 = 3.2*t12664*t12635;
  t12669 = 3.2*t9407*t12668;
  t12670 = 3.2*t12664*t9281;
  t12671 = t12662 + t12665 + t12669 + t12670;
  t12676 = -1.*t12675*t9401;
  t12680 = -1.*t8859*t12679;
  t12681 = t12676 + t12680;
  t12686 = t12685*t9401;
  t12687 = t12675*t9401;
  t12688 = t8859*t12679;
  t12691 = t12575*t12690;
  t12692 = t12686 + t12687 + t12688 + t12691;
  t12694 = t12675*t12575;
  t12695 = t9401*t12679;
  t12696 = t12694 + t12695;
  t12698 = -1.*t8859*t12685;
  t12699 = -1.*t8859*t12675;
  t12700 = -1.*t9401*t12690;
  t12701 = -1.*t12679*t9276;
  t12702 = t12698 + t12699 + t12700 + t12701;
  t12720 = 3.2*t12664*t12681;
  t12721 = 3.2*t12664*t12692;
  t12722 = 3.2*t12696*t12668;
  t12723 = 3.2*t12658*t12702;
  t12724 = t12720 + t12721 + t12722 + t12723;
  t12682 = 3.2*t9407*t12681;
  t12693 = 3.2*t9407*t12692;
  t12697 = 3.2*t12696*t9281;
  t12703 = 3.2*t12635*t12702;
  t12704 = t12682 + t12693 + t12697 + t12703;
  t12709 = 3.2*t12572*t12658;
  t12710 = 3.2*t9351*t12664;
  t12711 = 3.2*t9448*t12664;
  t12712 = 3.2*t12643*t12668;
  t12713 = t12709 + t12710 + t12711 + t12712;
  t9416 = 3.2*t9351*t9407;
  t10250 = 3.2*t9448*t9407;
  t12636 = 3.2*t12572*t12635;
  t12644 = 3.2*t12643*t9281;
  t12645 = t9416 + t10250 + t12636 + t12644;
  t12729 = 3.2*t12572*t12681;
  t12730 = 3.2*t9448*t12696;
  t12731 = 3.2*t12643*t12692;
  t12732 = 3.2*t9351*t12702;
  t12733 = t12729 + t12730 + t12731 + t12732;
  p_output1[0]=var2[4]*(-0.5*(6.4*t12635*t9407 + 6.4*t9281*t9407)*var2[0] - 0.5*t12671*var2[1] - 0.5*t12704*var2[2] - 0.5*t12645*var2[3] - 0.384*t9281*var2[4]);
  p_output1[1]=var2[4]*(-0.5*t12671*var2[0] - 0.5*(6.4*t12658*t12664 + 6.4*t12664*t12668)*var2[1] - 0.5*t12724*var2[2] - 0.5*t12713*var2[3] - 0.384*t12668*var2[4]);
  p_output1[2]=var2[4]*(-0.5*t12704*var2[0] - 0.5*t12724*var2[1] - 0.5*(6.4*t12692*t12696 + 6.4*t12681*t12702)*var2[2] - 0.5*t12733*var2[3] - 0.384*t12692*var2[4]);
  p_output1[3]=var2[4]*(-0.5*t12645*var2[0] - 0.5*t12713*var2[1] - 0.5*t12733*var2[2] - 0.5*(6.4*t12572*t9351 + 6.4*t12643*t9448)*var2[3] - 0.384*t9448*var2[4]);
  p_output1[4]=(-0.384*t9281*var2[0] - 0.384*t12668*var2[1] - 0.384*t12692*var2[2] - 0.384*t9448*var2[3])*var2[4];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec5_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
