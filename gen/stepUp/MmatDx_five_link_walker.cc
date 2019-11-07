/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:18:54 GMT-05:00
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
  double t8914;
  double t6211;
  double t8869;
  double t8929;
  double t11483;
  double t5941;
  double t8875;
  double t8954;
  double t11453;
  double t11454;
  double t11486;
  double t11496;
  double t11497;
  double t11505;
  double t11506;
  double t11518;
  double t11523;
  double t11524;
  double t11527;
  double t11528;
  double t11557;
  double t11554;
  double t11555;
  double t11558;
  double t11556;
  double t11559;
  double t11560;
  double t11561;
  double t11562;
  double t11563;
  double t11564;
  double t11565;
  double t11566;
  double t11572;
  double t11573;
  double t11574;
  double t11575;
  double t11576;
  double t11510;
  double t11513;
  double t11514;
  double t11545;
  double t11546;
  double t11547;
  double t11548;
  double t11549;
  double t11550;
  double t11568;
  double t11569;
  double t11570;
  double t11585;
  double t11586;
  double t11587;
  double t11588;
  double t11589;
  double t11590;
  double t11598;
  double t11599;
  double t11600;
  double t11613;
  double t11614;
  double t11615;
  double t11655;
  double t11656;
  double t11657;
  double t11659;
  double t11660;
  double t11661;
  double t11675;
  double t11676;
  double t11677;
  double t11679;
  double t11680;
  double t11681;
  double t11602;
  double t11603;
  double t11604;
  double t11594;
  double t11595;
  double t11596;
  double t11540;
  double t11543;
  double t11544;
  double t11606;
  double t11607;
  double t11531;
  double t11532;
  double t11535;
  double t11536;
  double t11617;
  double t11618;
  double t11619;
  double t11609;
  double t11610;
  double t11611;
  double t11582;
  double t11583;
  double t11584;
  double t11621;
  double t11622;
  double t11577;
  double t11578;
  double t11579;
  double t11580;
  double t11626;
  double t11627;
  double t11628;
  double t11629;
  double t11632;
  double t11633;
  double t11640;
  double t11641;
  double t11597;
  double t11601;
  double t11605;
  double t11608;
  double t11612;
  double t11616;
  double t11620;
  double t11623;
  double t11624;
  double t11649;
  double t11650;
  double t11651;
  double t11652;
  double t11653;
  double t11658;
  double t11662;
  double t11663;
  double t11665;
  double t11666;
  double t11667;
  double t11669;
  double t11670;
  double t11671;
  double t11672;
  double t11673;
  double t11678;
  double t11682;
  double t11683;
  double t11685;
  double t11686;
  double t11687;
  double t11648;
  double t11654;
  double t11664;
  double t11668;
  double t11674;
  double t11684;
  double t11688;
  double t11689;
  double t11719;
  double t11720;
  double t11721;
  double t11722;
  double t11723;
  double t11724;
  double t11725;
  double t11726;
  double t11693;
  double t11694;
  double t11695;
  double t11696;
  double t11517;
  double t11539;
  double t11551;
  double t11552;
  double t11732;
  double t11733;
  double t11734;
  double t11735;
  double t11762;
  double t11763;
  double t11729;
  double t11730;
  double t11699;
  double t11700;
  double t11701;
  double t11702;
  double t11571;
  double t11581;
  double t11591;
  double t11592;
  double t11740;
  double t11741;
  double t11742;
  double t11743;
  double t11781;
  double t11782;
  double t11737;
  double t11738;
  t8914 = Cos(var1[3]);
  t6211 = Cos(var1[4]);
  t8869 = Sin(var1[3]);
  t8929 = Sin(var1[4]);
  t11483 = Cos(var1[2]);
  t5941 = Sin(var1[2]);
  t8875 = -1.*t6211*t8869;
  t8954 = -1.*t8914*t8929;
  t11453 = t8875 + t8954;
  t11454 = t5941*t11453;
  t11486 = t8914*t6211;
  t11496 = -1.*t8869*t8929;
  t11497 = t11486 + t11496;
  t11505 = t11483*t11497;
  t11506 = t11454 + t11505;
  t11518 = -1.*t6211;
  t11523 = 1. + t11518;
  t11524 = 0.4*t11523;
  t11527 = 0.64*t6211;
  t11528 = t11524 + t11527;
  t11557 = Cos(var1[5]);
  t11554 = Cos(var1[6]);
  t11555 = Sin(var1[5]);
  t11558 = Sin(var1[6]);
  t11556 = -1.*t11554*t11555;
  t11559 = -1.*t11557*t11558;
  t11560 = t11556 + t11559;
  t11561 = t5941*t11560;
  t11562 = t11557*t11554;
  t11563 = -1.*t11555*t11558;
  t11564 = t11562 + t11563;
  t11565 = t11483*t11564;
  t11566 = t11561 + t11565;
  t11572 = -1.*t11554;
  t11573 = 1. + t11572;
  t11574 = 0.4*t11573;
  t11575 = 0.64*t11554;
  t11576 = t11574 + t11575;
  t11510 = t11483*t8914;
  t11513 = -1.*t5941*t8869;
  t11514 = t11510 + t11513;
  t11545 = t6211*t8869;
  t11546 = t8914*t8929;
  t11547 = t11545 + t11546;
  t11548 = t11483*t11547;
  t11549 = t5941*t11497;
  t11550 = t11548 + t11549;
  t11568 = t11483*t11557;
  t11569 = -1.*t5941*t11555;
  t11570 = t11568 + t11569;
  t11585 = t11554*t11555;
  t11586 = t11557*t11558;
  t11587 = t11585 + t11586;
  t11588 = t11483*t11587;
  t11589 = t5941*t11564;
  t11590 = t11588 + t11589;
  t11598 = t8914*t5941;
  t11599 = t11483*t8869;
  t11600 = t11598 + t11599;
  t11613 = t11557*t5941;
  t11614 = t11483*t11555;
  t11615 = t11613 + t11614;
  t11655 = t11528*t8869;
  t11656 = 0.24*t8914*t8929;
  t11657 = t11655 + t11656;
  t11659 = t8914*t11528;
  t11660 = -0.24*t8869*t8929;
  t11661 = t11659 + t11660;
  t11675 = t11576*t11555;
  t11676 = 0.24*t11557*t11558;
  t11677 = t11675 + t11676;
  t11679 = t11557*t11576;
  t11680 = -0.24*t11555*t11558;
  t11681 = t11679 + t11680;
  t11602 = t11483*t11453;
  t11603 = -1.*t5941*t11497;
  t11604 = t11602 + t11603;
  t11594 = -1.*t8914*t5941;
  t11595 = -1.*t11483*t8869;
  t11596 = t11594 + t11595;
  t11540 = t11528*t8929;
  t11543 = -0.24*t6211*t8929;
  t11544 = t11540 + t11543;
  t11606 = -1.*t5941*t11547;
  t11607 = t11606 + t11505;
  t11531 = t11528*t6211;
  t11532 = Power(t8929,2);
  t11535 = 0.24*t11532;
  t11536 = t11531 + t11535;
  t11617 = t11483*t11560;
  t11618 = -1.*t5941*t11564;
  t11619 = t11617 + t11618;
  t11609 = -1.*t11557*t5941;
  t11610 = -1.*t11483*t11555;
  t11611 = t11609 + t11610;
  t11582 = t11576*t11558;
  t11583 = -0.24*t11554*t11558;
  t11584 = t11582 + t11583;
  t11621 = -1.*t5941*t11587;
  t11622 = t11621 + t11565;
  t11577 = t11576*t11554;
  t11578 = Power(t11558,2);
  t11579 = 0.24*t11578;
  t11580 = t11577 + t11579;
  t11626 = Power(t11483,2);
  t11627 = -12.*t11626;
  t11628 = Power(t5941,2);
  t11629 = -12.*t11628;
  t11632 = Power(t11514,2);
  t11633 = -6.8*t11632;
  t11640 = Power(t11570,2);
  t11641 = -6.8*t11640;
  t11597 = -6.8*t11596*t11514;
  t11601 = -6.8*t11600*t11514;
  t11605 = -3.2*t11506*t11604;
  t11608 = -3.2*t11607*t11550;
  t11612 = -6.8*t11611*t11570;
  t11616 = -6.8*t11615*t11570;
  t11620 = -3.2*t11566*t11619;
  t11623 = -3.2*t11622*t11590;
  t11624 = t11597 + t11601 + t11605 + t11608 + t11612 + t11616 + t11620 + t11623;
  t11649 = Power(t8914,2);
  t11650 = 0.11*t11649;
  t11651 = Power(t8869,2);
  t11652 = 0.11*t11651;
  t11653 = t11650 + t11652;
  t11658 = -1.*t11657*t11497;
  t11662 = -1.*t11453*t11661;
  t11663 = t11658 + t11662;
  t11665 = t11657*t11547;
  t11666 = t11497*t11661;
  t11667 = t11665 + t11666;
  t11669 = Power(t11557,2);
  t11670 = 0.11*t11669;
  t11671 = Power(t11555,2);
  t11672 = 0.11*t11671;
  t11673 = t11670 + t11672;
  t11678 = -1.*t11677*t11564;
  t11682 = -1.*t11560*t11681;
  t11683 = t11678 + t11682;
  t11685 = t11677*t11587;
  t11686 = t11564*t11681;
  t11687 = t11685 + t11686;
  t11648 = -2.88*t11483;
  t11654 = -6.8*t11514*t11653;
  t11664 = -3.2*t11550*t11663;
  t11668 = -3.2*t11506*t11667;
  t11674 = -6.8*t11570*t11673;
  t11684 = -3.2*t11590*t11683;
  t11688 = -3.2*t11566*t11687;
  t11689 = t11648 + t11654 + t11664 + t11668 + t11674 + t11684 + t11688;
  t11719 = 2.88*t5941;
  t11720 = -6.8*t11596*t11653;
  t11721 = -3.2*t11607*t11663;
  t11722 = -3.2*t11604*t11667;
  t11723 = -6.8*t11611*t11673;
  t11724 = -3.2*t11622*t11683;
  t11725 = -3.2*t11619*t11687;
  t11726 = t11719 + t11720 + t11721 + t11722 + t11723 + t11724 + t11725;
  t11693 = -0.748*t11596;
  t11694 = -3.2*t11544*t11607;
  t11695 = -3.2*t11536*t11604;
  t11696 = t11693 + t11694 + t11695;
  t11517 = -0.748*t11514;
  t11539 = -3.2*t11536*t11506;
  t11551 = -3.2*t11544*t11550;
  t11552 = t11517 + t11539 + t11551;
  t11732 = -0.748*t11653;
  t11733 = -3.2*t11544*t11663;
  t11734 = -3.2*t11536*t11667;
  t11735 = -0.67 + t11732 + t11733 + t11734;
  t11762 = -0.768*t11536;
  t11763 = -0.2 + t11762;
  t11729 = -0.768*t11667;
  t11730 = -0.2 + t11729;
  t11699 = -0.748*t11611;
  t11700 = -3.2*t11584*t11622;
  t11701 = -3.2*t11580*t11619;
  t11702 = t11699 + t11700 + t11701;
  t11571 = -0.748*t11570;
  t11581 = -3.2*t11580*t11566;
  t11591 = -3.2*t11584*t11590;
  t11592 = t11571 + t11581 + t11591;
  t11740 = -0.748*t11673;
  t11741 = -3.2*t11584*t11683;
  t11742 = -3.2*t11580*t11687;
  t11743 = -0.67 + t11740 + t11741 + t11742;
  t11781 = -0.768*t11580;
  t11782 = -0.2 + t11781;
  t11737 = -0.768*t11687;
  t11738 = -0.2 + t11737;
  p_output1[0]=(-3.2*Power(t11506,2) - 3.2*Power(t11550,2) - 3.2*Power(t11566,2) - 3.2*Power(t11590,2) - 6.8*Power(t11600,2) - 6.8*Power(t11615,2) + t11627 + t11629 + t11633 + t11641)*var2[0] + t11624*var2[1] + t11689*var2[2] + t11552*var2[3] - 0.768*t11506*var2[4] + t11592*var2[5] - 0.768*t11566*var2[6];
  p_output1[1]=t11624*var2[0] + (-6.8*Power(t11596,2) - 3.2*Power(t11604,2) - 3.2*Power(t11607,2) - 6.8*Power(t11611,2) - 3.2*Power(t11619,2) - 3.2*Power(t11622,2) + t11627 + t11629 + t11633 + t11641)*var2[1] + t11726*var2[2] + t11696*var2[3] - 0.768*t11604*var2[4] + t11702*var2[5] - 0.768*t11619*var2[6];
  p_output1[2]=t11689*var2[0] + t11726*var2[1] + (-3.3612 - 6.8*Power(t11653,2) - 3.2*Power(t11663,2) - 3.2*Power(t11667,2) - 6.8*Power(t11673,2) - 3.2*Power(t11683,2) - 3.2*Power(t11687,2))*var2[2] + t11735*var2[3] + t11730*var2[4] + t11743*var2[5] + t11738*var2[6];
  p_output1[3]=t11552*var2[0] + t11696*var2[1] + t11735*var2[2] + (-1.58228 - 3.2*Power(t11536,2) - 3.2*Power(t11544,2))*var2[3] + t11763*var2[4];
  p_output1[4]=-0.768*t11506*var2[0] - 0.768*t11604*var2[1] + t11730*var2[2] + t11763*var2[3] - 1.2143199999999998*var2[4];
  p_output1[5]=t11592*var2[0] + t11702*var2[1] + t11743*var2[2] + (-1.58228 - 3.2*Power(t11580,2) - 3.2*Power(t11584,2))*var2[5] + t11782*var2[6];
  p_output1[6]=-0.768*t11566*var2[0] - 0.768*t11619*var2[1] + t11738*var2[2] + t11782*var2[5] - 1.2143199999999998*var2[6];
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

#include "MmatDx_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
