/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:19:33 GMT-05:00
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
  double t402;
  double t468;
  double t403;
  double t465;
  double t567;
  double t582;
  double t599;
  double t600;
  double t601;
  double t568;
  double t583;
  double t586;
  double t606;
  double t607;
  double t610;
  double t611;
  double t612;
  double t598;
  double t602;
  double t603;
  double t613;
  double t616;
  double t617;
  double t619;
  double t622;
  double t623;
  double t664;
  double t666;
  double t667;
  double t627;
  double t652;
  double t655;
  double t679;
  double t680;
  double t681;
  double t618;
  double t624;
  double t625;
  double t626;
  double t657;
  double t662;
  double t675;
  double t676;
  double t677;
  double t678;
  double t682;
  double t683;
  double t684;
  double t685;
  double t686;
  double t707;
  double t727;
  double t729;
  double t712;
  double t731;
  double t732;
  double t718;
  double t462;
  double t469;
  double t470;
  double t471;
  double t472;
  double t475;
  double t556;
  double t562;
  double t563;
  double t763;
  double t765;
  double t774;
  double t776;
  double t780;
  double t781;
  double t787;
  double t793;
  double t796;
  double t797;
  double t798;
  double t799;
  double t804;
  double t805;
  double t806;
  double t800;
  double t801;
  double t802;
  double t775;
  double t777;
  double t778;
  double t807;
  double t808;
  double t809;
  double t764;
  double t766;
  double t767;
  double t768;
  double t769;
  double t770;
  double t771;
  double t772;
  double t773;
  double t791;
  double t803;
  double t810;
  double t811;
  double t822;
  double t823;
  double t816;
  double t817;
  double t818;
  double t813;
  double t825;
  double t826;
  double t827;
  double t834;
  double t835;
  double t836;
  double t824;
  double t829;
  double t830;
  double t837;
  double t838;
  double t839;
  double t840;
  double t841;
  double t842;
  double t851;
  double t852;
  double t844;
  double t854;
  double t855;
  double t846;
  double t758;
  double t759;
  double t656;
  double t668;
  double t669;
  double t747;
  double t748;
  double t711;
  double t713;
  double t721;
  double t871;
  double t730;
  double t735;
  double t738;
  double t873;
  double t874;
  double t875;
  double t876;
  double t740;
  double t741;
  double t742;
  double t867;
  double t868;
  double t869;
  double t870;
  double t814;
  double t891;
  double t892;
  double t893;
  double t894;
  double t815;
  double t828;
  double t831;
  double t832;
  double t898;
  double t779;
  double t792;
  double t843;
  double t845;
  double t847;
  double t904;
  double t853;
  double t856;
  double t857;
  double t906;
  double t907;
  double t908;
  double t859;
  double t860;
  double t861;
  double t936;
  double t937;
  double t938;
  double t939;
  double t941;
  double t942;
  double t943;
  double t965;
  double t966;
  double t967;
  double t968;
  double t970;
  double t971;
  double t972;
  t402 = Cos(var1[3]);
  t468 = Sin(var1[3]);
  t403 = Sin(var1[2]);
  t465 = Cos(var1[2]);
  t567 = Cos(var1[4]);
  t582 = Sin(var1[4]);
  t599 = t402*t567;
  t600 = -1.*t468*t582;
  t601 = t599 + t600;
  t568 = -1.*t567*t468;
  t583 = -1.*t402*t582;
  t586 = t568 + t583;
  t606 = -1.*t567;
  t607 = 1. + t606;
  t610 = 0.4*t607;
  t611 = 0.64*t567;
  t612 = t610 + t611;
  t598 = t403*t586;
  t602 = t465*t601;
  t603 = t598 + t602;
  t613 = t612*t468;
  t616 = 0.24*t402*t582;
  t617 = t613 + t616;
  t619 = t402*t612;
  t622 = -0.24*t468*t582;
  t623 = t619 + t622;
  t664 = t567*t468;
  t666 = t402*t582;
  t667 = t664 + t666;
  t627 = -1.*t612*t468;
  t652 = -0.24*t402*t582;
  t655 = t627 + t652;
  t679 = -1.*t402*t567;
  t680 = t468*t582;
  t681 = t679 + t680;
  t618 = -1.*t617*t601;
  t624 = -1.*t586*t623;
  t625 = t618 + t624;
  t626 = 3.2*t603*t625;
  t657 = t617*t601;
  t662 = t586*t623;
  t675 = t617*t667;
  t676 = t601*t623;
  t677 = t675 + t676;
  t678 = t465*t586;
  t682 = t403*t681;
  t683 = t678 + t682;
  t684 = 3.2*t677*t683;
  t685 = t465*t667;
  t686 = t403*t601;
  t707 = t685 + t686;
  t727 = -0.24*t567*t468;
  t729 = t727 + t652;
  t712 = -1.*t586*t617;
  t731 = 0.24*t402*t567;
  t732 = t731 + t622;
  t718 = -1.*t623*t681;
  t462 = -1.*t402*t403;
  t469 = -1.*t465*t468;
  t470 = t462 + t469;
  t471 = Power(t402,2);
  t472 = 0.11*t471;
  t475 = Power(t468,2);
  t556 = 0.11*t475;
  t562 = t472 + t556;
  t563 = 6.8*t470*t562;
  t763 = Cos(var1[5]);
  t765 = Sin(var1[5]);
  t774 = Cos(var1[6]);
  t776 = Sin(var1[6]);
  t780 = t763*t774;
  t781 = -1.*t765*t776;
  t787 = t780 + t781;
  t793 = -1.*t774;
  t796 = 1. + t793;
  t797 = 0.4*t796;
  t798 = 0.64*t774;
  t799 = t797 + t798;
  t804 = -1.*t774*t765;
  t805 = -1.*t763*t776;
  t806 = t804 + t805;
  t800 = t799*t765;
  t801 = 0.24*t763*t776;
  t802 = t800 + t801;
  t775 = t774*t765;
  t777 = t763*t776;
  t778 = t775 + t777;
  t807 = t763*t799;
  t808 = -0.24*t765*t776;
  t809 = t807 + t808;
  t764 = -1.*t763*t403;
  t766 = -1.*t465*t765;
  t767 = t764 + t766;
  t768 = Power(t763,2);
  t769 = 0.11*t768;
  t770 = Power(t765,2);
  t771 = 0.11*t770;
  t772 = t769 + t771;
  t773 = 6.8*t767*t772;
  t791 = t465*t787;
  t803 = -1.*t802*t787;
  t810 = -1.*t806*t809;
  t811 = t803 + t810;
  t822 = t403*t806;
  t823 = t822 + t791;
  t816 = t802*t778;
  t817 = t787*t809;
  t818 = t816 + t817;
  t813 = t465*t806;
  t825 = -1.*t799*t765;
  t826 = -0.24*t763*t776;
  t827 = t825 + t826;
  t834 = -1.*t763*t774;
  t835 = t765*t776;
  t836 = t834 + t835;
  t824 = 3.2*t823*t811;
  t829 = t802*t787;
  t830 = t806*t809;
  t837 = t403*t836;
  t838 = t813 + t837;
  t839 = 3.2*t818*t838;
  t840 = t465*t778;
  t841 = t403*t787;
  t842 = t840 + t841;
  t851 = -0.24*t774*t765;
  t852 = t851 + t826;
  t844 = -1.*t806*t802;
  t854 = 0.24*t763*t774;
  t855 = t854 + t808;
  t846 = -1.*t809*t836;
  t758 = -1.*t403*t601;
  t759 = t678 + t758;
  t656 = t655*t601;
  t668 = t667*t623;
  t669 = t656 + t657 + t662 + t668;
  t747 = -1.*t403*t667;
  t748 = t747 + t602;
  t711 = -1.*t586*t655;
  t713 = -1.*t601*t623;
  t721 = t711 + t712 + t713 + t718;
  t871 = 3.2*t759*t625;
  t730 = t729*t601;
  t735 = t667*t732;
  t738 = t730 + t657 + t662 + t735;
  t873 = -1.*t403*t586;
  t874 = t465*t681;
  t875 = t873 + t874;
  t876 = 3.2*t677*t875;
  t740 = -1.*t586*t729;
  t741 = -1.*t601*t732;
  t742 = t740 + t712 + t741 + t718;
  t867 = -1.*t465*t402;
  t868 = t403*t468;
  t869 = t867 + t868;
  t870 = 6.8*t869*t562;
  t814 = -1.*t403*t787;
  t891 = -1.*t465*t763;
  t892 = t403*t765;
  t893 = t891 + t892;
  t894 = 6.8*t893*t772;
  t815 = t813 + t814;
  t828 = t827*t787;
  t831 = t778*t809;
  t832 = t828 + t829 + t830 + t831;
  t898 = -1.*t403*t806;
  t779 = -1.*t403*t778;
  t792 = t779 + t791;
  t843 = -1.*t806*t827;
  t845 = -1.*t787*t809;
  t847 = t843 + t844 + t845 + t846;
  t904 = 3.2*t815*t811;
  t853 = t852*t787;
  t856 = t778*t855;
  t857 = t853 + t829 + t830 + t856;
  t906 = t465*t836;
  t907 = t898 + t906;
  t908 = 3.2*t818*t907;
  t859 = -1.*t806*t852;
  t860 = -1.*t787*t855;
  t861 = t859 + t844 + t860 + t846;
  t936 = t612*t567;
  t937 = Power(t582,2);
  t938 = 0.24*t937;
  t939 = t936 + t938;
  t941 = t612*t582;
  t942 = -0.24*t567*t582;
  t943 = t941 + t942;
  t965 = t799*t774;
  t966 = Power(t776,2);
  t967 = 0.24*t966;
  t968 = t965 + t967;
  t970 = t799*t776;
  t971 = -0.24*t774*t776;
  t972 = t970 + t971;
  p_output1[0]=var2[2]*(-0.5*(-2.88*t403 + t563 + 3.2*t625*t748 + 3.2*t677*t759 + t773 + 3.2*t792*t811 + 3.2*t815*t818)*var2[2] - 0.5*(t563 + t626 + 3.2*t603*t669 + t684 + 3.2*t707*t721)*var2[3] - 0.5*(t626 + t684 + 3.2*t603*t738 + 3.2*t707*t742)*var2[4] - 0.5*(t773 + t824 + 3.2*t823*t832 + t839 + 3.2*t842*t847)*var2[5] - 0.5*(t824 + t839 + 3.2*t823*t857 + 3.2*t842*t861)*var2[6]);
  p_output1[1]=var2[2]*(-0.5*(-2.88*t465 + 3.2*t625*(-1.*t465*t667 + t758) + 3.2*t811*(-1.*t465*t778 + t814) + t870 + 3.2*t677*(-1.*t465*t601 + t873) + t894 + 3.2*t818*(-1.*t465*t787 + t898))*var2[2] - 0.5*(3.2*t721*t748 + 3.2*t669*t759 + t870 + t871 + t876)*var2[3] - 0.5*(3.2*t742*t748 + 3.2*t738*t759 + t871 + t876)*var2[4] - 0.5*(3.2*t815*t832 + 3.2*t792*t847 + t894 + t904 + t908)*var2[5] - 0.5*(3.2*t815*t857 + 3.2*t792*t861 + t904 + t908)*var2[6]);
  p_output1[2]=var2[2]*(-0.5*(6.4*t669*t677 + 6.4*t625*t721)*var2[3] - 0.5*(6.4*t677*t738 + 6.4*t625*t742)*var2[4] - 0.5*(6.4*t818*t832 + 6.4*t811*t847)*var2[5] - 0.5*(6.4*t818*t857 + 6.4*t811*t861)*var2[6]);
  p_output1[3]=var2[2]*(-0.5*(3.2*t669*t939 + 3.2*t721*t943)*var2[3] - 0.5*(3.2*(0.24*t567*t582 - 1.*t582*t612)*t677 + 3.2*t625*(-0.24*Power(t567,2) + t936) + 3.2*t738*t939 + 3.2*t742*t943)*var2[4]);
  p_output1[4]=var2[2]*(-0.384*t669*var2[3] - 0.384*t738*var2[4]);
  p_output1[5]=var2[2]*(-0.5*(3.2*t832*t968 + 3.2*t847*t972)*var2[5] - 0.5*(3.2*(0.24*t774*t776 - 1.*t776*t799)*t818 + 3.2*t811*(-0.24*Power(t774,2) + t965) + 3.2*t857*t968 + 3.2*t861*t972)*var2[6]);
  p_output1[6]=var2[2]*(-0.384*t832*var2[5] - 0.384*t857*var2[6]);
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

#include "Ce1_vec3_five_link_walker.hh"

namespace LeftStance
{

void Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
