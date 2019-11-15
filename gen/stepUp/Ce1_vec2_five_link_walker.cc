/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:38:13 GMT-05:00
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
  double t232;
  double t199;
  double t228;
  double t250;
  double t198;
  double t336;
  double t344;
  double t345;
  double t346;
  double t349;
  double t229;
  double t313;
  double t334;
  double t351;
  double t359;
  double t360;
  double t335;
  double t350;
  double t375;
  double t376;
  double t377;
  double t383;
  double t394;
  double t395;
  double t404;
  double t405;
  double t412;
  double t445;
  double t446;
  double t447;
  double t372;
  double t373;
  double t374;
  double t378;
  double t379;
  double t380;
  double t381;
  double t382;
  double t396;
  double t397;
  double t398;
  double t399;
  double t400;
  double t401;
  double t413;
  double t414;
  double t415;
  double t416;
  double t417;
  double t442;
  double t452;
  double t454;
  double t456;
  double t457;
  double t458;
  double t459;
  double t476;
  double t497;
  double t501;
  double t502;
  double t503;
  double t519;
  double t520;
  double t521;
  double t532;
  double t534;
  double t533;
  double t535;
  double t536;
  double t538;
  double t543;
  double t548;
  double t554;
  double t557;
  double t558;
  double t559;
  double t565;
  double t553;
  double t555;
  double t560;
  double t561;
  double t564;
  double t566;
  double t571;
  double t576;
  double t581;
  double t537;
  double t589;
  double t590;
  double t591;
  double t508;
  double t511;
  double t512;
  double t513;
  double t515;
  double t517;
  double t522;
  double t525;
  double t528;
  double t529;
  double t530;
  double t531;
  double t587;
  double t588;
  double t592;
  double t593;
  double t594;
  double t595;
  double t596;
  double t597;
  double t604;
  double t605;
  double t608;
  double t609;
  double t466;
  double t467;
  double t473;
  double t474;
  double t549;
  double t550;
  double t569;
  double t570;
  double t614;
  double t615;
  double t620;
  double t621;
  double t634;
  double t635;
  double t636;
  double t637;
  double t638;
  double t639;
  double t640;
  double t641;
  double t643;
  double t644;
  double t645;
  double t649;
  double t650;
  double t651;
  double t642;
  double t646;
  double t647;
  double t648;
  double t653;
  double t654;
  double t658;
  double t659;
  double t660;
  double t661;
  double t670;
  double t671;
  double t663;
  double t673;
  double t674;
  double t665;
  double t628;
  double t629;
  double t630;
  double t631;
  double t632;
  double t633;
  double t693;
  double t694;
  double t695;
  double t696;
  double t697;
  double t698;
  double t699;
  double t700;
  double t702;
  double t703;
  double t704;
  double t687;
  double t688;
  double t689;
  double t690;
  double t691;
  double t692;
  double t701;
  double t705;
  double t706;
  double t708;
  double t709;
  double t710;
  double t715;
  double t716;
  double t717;
  double t714;
  double t719;
  double t720;
  double t724;
  double t733;
  double t734;
  double t726;
  double t736;
  double t737;
  double t728;
  double t749;
  double t755;
  double t756;
  double t757;
  double t750;
  double t751;
  double t752;
  double t753;
  double t761;
  double t762;
  double t782;
  double t788;
  double t789;
  double t790;
  double t783;
  double t784;
  double t785;
  double t786;
  double t794;
  double t795;
  t232 = Cos(var1[3]);
  t199 = Cos(var1[4]);
  t228 = Sin(var1[3]);
  t250 = Sin(var1[4]);
  t198 = Sin(var1[2]);
  t336 = Cos(var1[2]);
  t344 = t232*t199;
  t345 = -1.*t228*t250;
  t346 = t344 + t345;
  t349 = t336*t346;
  t229 = -1.*t199*t228;
  t313 = -1.*t232*t250;
  t334 = t229 + t313;
  t351 = t199*t228;
  t359 = t232*t250;
  t360 = t351 + t359;
  t335 = t198*t334;
  t350 = t335 + t349;
  t375 = t336*t334;
  t376 = -1.*t198*t346;
  t377 = t375 + t376;
  t383 = -1.*t232*t199;
  t394 = t228*t250;
  t395 = t383 + t394;
  t404 = -1.*t232*t198;
  t405 = -1.*t336*t228;
  t412 = t404 + t405;
  t445 = t336*t232;
  t446 = -1.*t198*t228;
  t447 = t445 + t446;
  t372 = -1.*t198*t360;
  t373 = t372 + t349;
  t374 = 3.2*t350*t373;
  t378 = t336*t360;
  t379 = t198*t346;
  t380 = t378 + t379;
  t381 = 3.2*t377*t380;
  t382 = -1.*t198*t334;
  t396 = t336*t395;
  t397 = t382 + t396;
  t398 = 3.2*t350*t397;
  t399 = t198*t395;
  t400 = t375 + t399;
  t401 = 3.2*t377*t400;
  t413 = Power(t412,2);
  t414 = 6.8*t413;
  t415 = t232*t198;
  t416 = t336*t228;
  t417 = t415 + t416;
  t442 = 6.8*t412*t417;
  t452 = Power(t447,2);
  t454 = 6.8*t452;
  t456 = -1.*t336*t232;
  t457 = t198*t228;
  t458 = t456 + t457;
  t459 = 6.8*t447*t458;
  t476 = Cos(var1[5]);
  t497 = -1.*t476*t198;
  t501 = Sin(var1[5]);
  t502 = -1.*t336*t501;
  t503 = t497 + t502;
  t519 = t336*t476;
  t520 = -1.*t198*t501;
  t521 = t519 + t520;
  t532 = Cos(var1[6]);
  t534 = Sin(var1[6]);
  t533 = -1.*t532*t501;
  t535 = -1.*t476*t534;
  t536 = t533 + t535;
  t538 = t476*t532;
  t543 = -1.*t501*t534;
  t548 = t538 + t543;
  t554 = t336*t548;
  t557 = t532*t501;
  t558 = t476*t534;
  t559 = t557 + t558;
  t565 = -1.*t198*t548;
  t553 = t198*t536;
  t555 = t553 + t554;
  t560 = -1.*t198*t559;
  t561 = t560 + t554;
  t564 = t336*t536;
  t566 = t564 + t565;
  t571 = t336*t559;
  t576 = t198*t548;
  t581 = t571 + t576;
  t537 = -1.*t198*t536;
  t589 = -1.*t476*t532;
  t590 = t501*t534;
  t591 = t589 + t590;
  t508 = Power(t503,2);
  t511 = 6.8*t508;
  t512 = t476*t198;
  t513 = t336*t501;
  t515 = t512 + t513;
  t517 = 6.8*t503*t515;
  t522 = Power(t521,2);
  t525 = 6.8*t522;
  t528 = -1.*t336*t476;
  t529 = t198*t501;
  t530 = t528 + t529;
  t531 = 6.8*t521*t530;
  t587 = 3.2*t555*t561;
  t588 = 3.2*t566*t581;
  t592 = t336*t591;
  t593 = t537 + t592;
  t594 = 3.2*t555*t593;
  t595 = t198*t591;
  t596 = t564 + t595;
  t597 = 3.2*t566*t596;
  t604 = 6.4*t373*t377;
  t605 = 6.4*t377*t397;
  t608 = 13.6*t412*t447;
  t609 = 13.6*t412*t458;
  t466 = -1.*t336*t346;
  t467 = t382 + t466;
  t473 = -1.*t336*t360;
  t474 = t473 + t376;
  t549 = -1.*t336*t548;
  t550 = t537 + t549;
  t569 = -1.*t336*t559;
  t570 = t569 + t565;
  t614 = 13.6*t503*t521;
  t615 = 13.6*t503*t530;
  t620 = 6.4*t561*t566;
  t621 = 6.4*t566*t593;
  t634 = -1.*t199;
  t635 = 1. + t634;
  t636 = 0.4*t635;
  t637 = 0.64*t199;
  t638 = t636 + t637;
  t639 = t638*t228;
  t640 = 0.24*t232*t250;
  t641 = t639 + t640;
  t643 = t232*t638;
  t644 = -0.24*t228*t250;
  t645 = t643 + t644;
  t649 = -1.*t638*t228;
  t650 = -0.24*t232*t250;
  t651 = t649 + t650;
  t642 = -1.*t641*t346;
  t646 = -1.*t334*t645;
  t647 = t642 + t646;
  t648 = 3.2*t377*t647;
  t653 = t641*t346;
  t654 = t334*t645;
  t658 = t641*t360;
  t659 = t346*t645;
  t660 = t658 + t659;
  t661 = 3.2*t660*t397;
  t670 = -0.24*t199*t228;
  t671 = t670 + t650;
  t663 = -1.*t334*t641;
  t673 = 0.24*t232*t199;
  t674 = t673 + t644;
  t665 = -1.*t645*t395;
  t628 = Power(t232,2);
  t629 = 0.11*t628;
  t630 = Power(t228,2);
  t631 = 0.11*t630;
  t632 = t629 + t631;
  t633 = 6.8*t458*t632;
  t693 = -1.*t532;
  t694 = 1. + t693;
  t695 = 0.4*t694;
  t696 = 0.64*t532;
  t697 = t695 + t696;
  t698 = t697*t501;
  t699 = 0.24*t476*t534;
  t700 = t698 + t699;
  t702 = t476*t697;
  t703 = -0.24*t501*t534;
  t704 = t702 + t703;
  t687 = Power(t476,2);
  t688 = 0.11*t687;
  t689 = Power(t501,2);
  t690 = 0.11*t689;
  t691 = t688 + t690;
  t692 = 6.8*t530*t691;
  t701 = -1.*t700*t548;
  t705 = -1.*t536*t704;
  t706 = t701 + t705;
  t708 = t700*t559;
  t709 = t548*t704;
  t710 = t708 + t709;
  t715 = -1.*t697*t501;
  t716 = -0.24*t476*t534;
  t717 = t715 + t716;
  t714 = 3.2*t566*t706;
  t719 = t700*t548;
  t720 = t536*t704;
  t724 = 3.2*t710*t593;
  t733 = -0.24*t532*t501;
  t734 = t733 + t716;
  t726 = -1.*t536*t700;
  t736 = 0.24*t476*t532;
  t737 = t736 + t703;
  t728 = -1.*t704*t591;
  t749 = 0.748*t458;
  t755 = t638*t250;
  t756 = -0.24*t199*t250;
  t757 = t755 + t756;
  t750 = t638*t199;
  t751 = Power(t250,2);
  t752 = 0.24*t751;
  t753 = t750 + t752;
  t761 = 3.2*t757*t377;
  t762 = 3.2*t753*t397;
  t782 = 0.748*t530;
  t788 = t697*t534;
  t789 = -0.24*t532*t534;
  t790 = t788 + t789;
  t783 = t697*t532;
  t784 = Power(t534,2);
  t785 = 0.24*t784;
  t786 = t783 + t785;
  t794 = 3.2*t790*t566;
  t795 = 3.2*t786*t593;
  p_output1[0]=var2[1]*(-0.5*(3.2*Power(t373,2) + 3.2*Power(t377,2) + t414 + t442 + t454 + t459 + 3.2*t350*t467 + 3.2*t380*t474 + t511 + t517 + t525 + t531 + 3.2*t550*t555 + 3.2*Power(t561,2) + 3.2*Power(t566,2) + 3.2*t570*t581)*var2[2] - 0.5*(t374 + t381 + t398 + t401 + t414 + t442 + t454 + t459)*var2[3] - 0.5*(t374 + t381 + t398 + t401)*var2[4] - 0.5*(t511 + t517 + t525 + t531 + t587 + t588 + t594 + t597)*var2[5] - 0.5*(t587 + t588 + t594 + t597)*var2[6]);
  p_output1[1]=var2[1]*(-0.5*(6.4*t377*t467 + 6.4*t373*t474 + 6.4*t550*t566 + 6.4*t561*t570 + t608 + t609 + t614 + t615)*var2[2] - 0.5*(t604 + t605 + t608 + t609)*var2[3] - 0.5*(t604 + t605)*var2[4] - 0.5*(t614 + t615 + t620 + t621)*var2[5] - 0.5*(t620 + t621)*var2[6]);
  p_output1[2]=var2[1]*(-0.5*(-2.88*t336 + t633 + 3.2*t474*t647 + 3.2*t467*t660 + t692 + 3.2*t570*t706 + 3.2*t550*t710)*var2[2] - 0.5*(t633 + t648 + 3.2*t377*(t360*t645 + t346*t651 + t653 + t654) + t661 + 3.2*t373*(-1.*t346*t645 - 1.*t334*t651 + t663 + t665))*var2[3] - 0.5*(t648 + t661 + 3.2*t373*(t663 + t665 - 1.*t334*t671 - 1.*t346*t674) + 3.2*t377*(t653 + t654 + t346*t671 + t360*t674))*var2[4] - 0.5*(t692 + t714 + 3.2*t566*(t559*t704 + t548*t717 + t719 + t720) + t724 + 3.2*t561*(-1.*t548*t704 - 1.*t536*t717 + t726 + t728))*var2[5] - 0.5*(t714 + t724 + 3.2*t561*(t726 + t728 - 1.*t536*t734 - 1.*t548*t737) + 3.2*t566*(t719 + t720 + t548*t734 + t559*t737))*var2[6]);
  p_output1[3]=var2[1]*(-0.5*(t749 + 3.2*t467*t753 + 3.2*t474*t757)*var2[2] - 0.5*(t749 + t761 + t762)*var2[3] - 0.5*(3.2*t377*(0.24*t199*t250 - 1.*t250*t638) + 3.2*t373*(-0.24*Power(t199,2) + t750) + t761 + t762)*var2[4]);
  p_output1[4]=var2[1]*(-0.384*t467*var2[2] - 0.384*t397*var2[3] - 0.384*t397*var2[4]);
  p_output1[5]=var2[1]*(-0.5*(t782 + 3.2*t550*t786 + 3.2*t570*t790)*var2[2] - 0.5*(t782 + t794 + t795)*var2[5] - 0.5*(3.2*t566*(0.24*t532*t534 - 1.*t534*t697) + 3.2*t561*(-0.24*Power(t532,2) + t783) + t794 + t795)*var2[6]);
  p_output1[6]=var2[1]*(-0.384*t550*var2[2] - 0.384*t593*var2[5] - 0.384*t593*var2[6]);
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

#include "Ce1_vec2_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void Ce1_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
