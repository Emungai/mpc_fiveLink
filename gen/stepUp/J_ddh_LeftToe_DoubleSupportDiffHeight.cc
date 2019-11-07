/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:43 GMT-05:00
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
  double t509;
  double t513;
  double t506;
  double t514;
  double t90;
  double t512;
  double t515;
  double t516;
  double t600;
  double t606;
  double t607;
  double t611;
  double t643;
  double t644;
  double t645;
  double t646;
  double t647;
  double t650;
  double t651;
  double t446;
  double t447;
  double t657;
  double t660;
  double t661;
  double t656;
  double t662;
  double t663;
  double t666;
  double t667;
  double t668;
  double t700;
  double t706;
  double t713;
  double t719;
  double t720;
  double t721;
  double t722;
  double t729;
  double t730;
  double t751;
  double t728;
  double t755;
  double t756;
  double t757;
  double t762;
  double t765;
  double t727;
  double t771;
  double t773;
  double t774;
  double t519;
  double t612;
  double t626;
  double t627;
  double t630;
  double t642;
  double t654;
  double t655;
  double t669;
  double t670;
  double t671;
  double t696;
  double t699;
  double t701;
  double t708;
  double t710;
  double t711;
  double t712;
  double t723;
  double t724;
  double t725;
  double t726;
  double t775;
  double t776;
  double t779;
  double t808;
  double t809;
  double t810;
  double t811;
  double t812;
  double t831;
  double t835;
  double t836;
  double t837;
  double t782;
  double t784;
  double t785;
  double t786;
  double t791;
  double t844;
  double t850;
  double t852;
  double t858;
  double t859;
  double t860;
  double t861;
  double t862;
  double t870;
  double t871;
  double t872;
  double t873;
  double t874;
  double t875;
  double t876;
  double t878;
  double t879;
  double t880;
  double t846;
  double t847;
  double t848;
  double t849;
  double t851;
  double t853;
  double t854;
  double t855;
  double t857;
  double t866;
  double t867;
  double t868;
  double t869;
  double t881;
  double t882;
  double t883;
  double t901;
  double t903;
  double t904;
  double t905;
  t509 = Cos(var1[5]);
  t513 = Sin(var1[2]);
  t506 = Cos(var1[2]);
  t514 = Sin(var1[5]);
  t90 = Cos(var1[6]);
  t512 = t506*t509;
  t515 = -1.*t513*t514;
  t516 = t512 + t515;
  t600 = -1.*t509*t513;
  t606 = -1.*t506*t514;
  t607 = t600 + t606;
  t611 = Sin(var1[6]);
  t643 = -0.4*t90*t607;
  t644 = 0.4*t516*t611;
  t645 = t90*t607;
  t646 = -1.*t516*t611;
  t647 = t645 + t646;
  t650 = 0.8*t647;
  t651 = t643 + t644 + t650;
  t446 = -1.*t90;
  t447 = 1. + t446;
  t657 = -1.*t506*t509;
  t660 = t513*t514;
  t661 = t657 + t660;
  t656 = 0.4*t447*t607;
  t662 = -0.4*t661*t611;
  t663 = t661*t611;
  t666 = t645 + t663;
  t667 = 0.8*t666;
  t668 = t656 + t662 + t667;
  t700 = 0.4*t607*t611;
  t706 = -1.*t607*t611;
  t713 = -0.4*t90*t661;
  t719 = t90*t661;
  t720 = t719 + t706;
  t721 = 0.8*t720;
  t722 = t713 + t700 + t721;
  t729 = t509*t513;
  t730 = t506*t514;
  t751 = t729 + t730;
  t728 = 0.4*t447*t661;
  t755 = -0.4*t751*t611;
  t756 = t751*t611;
  t757 = t719 + t756;
  t762 = 0.8*t757;
  t765 = t728 + t755 + t762;
  t727 = var2[6]*t722;
  t771 = var2[2]*t765;
  t773 = var2[5]*t765;
  t774 = t727 + t771 + t773;
  t519 = 0.4*t447*t516;
  t612 = -0.4*t607*t611;
  t626 = t90*t516;
  t627 = t607*t611;
  t630 = t626 + t627;
  t642 = 0.8*t630;
  t654 = var3[6]*t651;
  t655 = var2[6]*t651;
  t669 = var3[2]*t668;
  t670 = var3[5]*t668;
  t671 = var2[2]*t668;
  t696 = var2[5]*t668;
  t699 = 0.4*t90*t516;
  t701 = -1.*t90*t516;
  t708 = t701 + t706;
  t710 = 0.8*t708;
  t711 = t699 + t700 + t710;
  t712 = var2[6]*t711;
  t723 = var2[2]*t722;
  t724 = var2[5]*t722;
  t725 = t712 + t723 + t724;
  t726 = var2[6]*t725;
  t775 = var2[2]*t774;
  t776 = var2[5]*t774;
  t779 = t519 + t612 + t642 + t654 + t655 + t669 + t670 + t671 + t696 + t726 + t775 + t776;
  t808 = 0.4*t90*t751;
  t809 = -1.*t90*t751;
  t810 = t809 + t646;
  t811 = 0.8*t810;
  t812 = t808 + t644 + t811;
  t831 = 2.*var2[6]*t651;
  t835 = 2.*var2[2]*t668;
  t836 = 2.*var2[5]*t668;
  t837 = t519 + t612 + t642 + t831 + t835 + t836;
  t782 = -0.4*t90*t516;
  t784 = 0.4*t751*t611;
  t785 = -1.*t751*t611;
  t786 = t626 + t785;
  t791 = 0.8*t786;
  t844 = t519 + t612 + t642;
  t850 = 0.4*t661*t611;
  t852 = -1.*t661*t611;
  t858 = -0.4*t90*t751;
  t859 = t90*t751;
  t860 = t859 + t852;
  t861 = 0.8*t860;
  t862 = t858 + t850 + t861;
  t870 = 0.4*t447*t751;
  t871 = -0.4*t516*t611;
  t872 = t516*t611;
  t873 = t859 + t872;
  t874 = 0.8*t873;
  t875 = t870 + t871 + t874;
  t876 = var2[2]*t875;
  t878 = var2[5]*t875;
  t879 = var2[6]*t862;
  t880 = t876 + t878 + t879;
  t846 = var3[6]*t722;
  t847 = var3[2]*t765;
  t848 = var3[5]*t765;
  t849 = 0.4*t90*t607;
  t851 = -1.*t90*t607;
  t853 = t851 + t852;
  t854 = 0.8*t853;
  t855 = t849 + t850 + t854;
  t857 = var2[6]*t855;
  t866 = var2[2]*t862;
  t867 = var2[5]*t862;
  t868 = t857 + t866 + t867;
  t869 = var2[6]*t868;
  t881 = var2[2]*t880;
  t882 = var2[5]*t880;
  t883 = t656 + t662 + t667 + t846 + t727 + t847 + t848 + t771 + t773 + t869 + t881 + t882;
  t901 = 2.*var2[6]*t722;
  t903 = 2.*var2[2]*t765;
  t904 = 2.*var2[5]*t765;
  t905 = t656 + t662 + t667 + t901 + t903 + t904;
  p_output1[0]=1.;
  p_output1[1]=t779;
  p_output1[2]=t779;
  p_output1[3]=t782 + t784 + t791 + t651*var2[2] + t725*var2[2] + t651*var2[5] + t725*var2[5] + t812*var2[6] + var2[6]*(t711*var2[2] + t711*var2[5] + (t699 + t755 + 0.8*(t701 + t756))*var2[6]) + t651*var3[2] + t651*var3[5] + t812*var3[6];
  p_output1[4]=1.;
  p_output1[5]=t837;
  p_output1[6]=t837;
  p_output1[7]=t782 + t784 + t791 + 2.*t651*var2[2] + 2.*t651*var2[5] + 2.*t812*var2[6];
  p_output1[8]=1.;
  p_output1[9]=t844;
  p_output1[10]=t844;
  p_output1[11]=t782 + t784 + t791;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t883;
  p_output1[16]=t883;
  p_output1[17]=t643 + t644 + t650 + t712 + t723 + t724 + t868*var2[2] + t868*var2[5] + var2[6]*(t855*var2[2] + t855*var2[5] + (t849 + t871 + 0.8*(t851 + t872))*var2[6]) + t722*var3[2] + t722*var3[5] + t711*var3[6];
  p_output1[18]=1.;
  p_output1[19]=t905;
  p_output1[20]=t905;
  p_output1[21]=t643 + t644 + t650 + 2.*t722*var2[2] + 2.*t722*var2[5] + 2.*t711*var2[6];
  p_output1[22]=1.;
  p_output1[23]=t668;
  p_output1[24]=t668;
  p_output1[25]=t651;
  p_output1[26]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_LeftToe_DoubleSupportDiffHeight.hh"

namespace DoubleSupportDiffHeight
{

void J_ddh_LeftToe_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
