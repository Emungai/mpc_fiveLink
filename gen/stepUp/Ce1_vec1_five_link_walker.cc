/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:18:56 GMT-05:00
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
  double t5979;
  double t2493;
  double t5767;
  double t5987;
  double t6153;
  double t2457;
  double t6172;
  double t6174;
  double t7578;
  double t5862;
  double t5988;
  double t6026;
  double t6120;
  double t7636;
  double t7921;
  double t9402;
  double t11454;
  double t11486;
  double t7929;
  double t8023;
  double t8122;
  double t8158;
  double t8166;
  double t8169;
  double t8177;
  double t8180;
  double t8216;
  double t8270;
  double t8280;
  double t8317;
  double t8920;
  double t8935;
  double t8985;
  double t9227;
  double t9228;
  double t11505;
  double t11509;
  double t11510;
  double t11528;
  double t11531;
  double t11565;
  double t11568;
  double t11582;
  double t11585;
  double t11586;
  double t11602;
  double t11614;
  double t11613;
  double t11617;
  double t11625;
  double t11631;
  double t11634;
  double t11635;
  double t11636;
  double t11644;
  double t11645;
  double t11646;
  double t11630;
  double t11637;
  double t11659;
  double t11665;
  double t11666;
  double t11638;
  double t11567;
  double t11576;
  double t11577;
  double t11588;
  double t11589;
  double t11593;
  double t11598;
  double t11599;
  double t11686;
  double t11690;
  double t11691;
  double t11692;
  double t11697;
  double t11698;
  double t11703;
  double t11553;
  double t11561;
  double t11546;
  double t11548;
  double t11710;
  double t11711;
  double t11712;
  double t11713;
  double t11714;
  double t11715;
  double t11716;
  double t11727;
  double t11728;
  double t11731;
  double t11736;
  double t11739;
  double t11744;
  double t11745;
  double t11746;
  double t11747;
  double t11647;
  double t11655;
  double t11639;
  double t11642;
  double t11771;
  double t11760;
  double t11761;
  double t11764;
  double t11765;
  double t11766;
  double t11767;
  double t11768;
  double t11769;
  double t11770;
  double t11786;
  double t11787;
  double t11788;
  double t11789;
  double t11790;
  double t11791;
  double t11804;
  double t11805;
  double t11806;
  double t11807;
  double t11808;
  double t11809;
  double t11810;
  double t11811;
  double t11813;
  double t11814;
  double t11815;
  double t11819;
  double t11820;
  double t11821;
  double t11812;
  double t11816;
  double t11817;
  double t11818;
  double t11823;
  double t11824;
  double t11828;
  double t11829;
  double t11830;
  double t11831;
  double t11840;
  double t11841;
  double t11833;
  double t11843;
  double t11844;
  double t11835;
  double t11798;
  double t11799;
  double t11800;
  double t11801;
  double t11802;
  double t11803;
  double t11863;
  double t11864;
  double t11865;
  double t11866;
  double t11867;
  double t11868;
  double t11869;
  double t11870;
  double t11872;
  double t11873;
  double t11874;
  double t11857;
  double t11858;
  double t11859;
  double t11860;
  double t11861;
  double t11862;
  double t11871;
  double t11875;
  double t11876;
  double t11878;
  double t11879;
  double t11880;
  double t11885;
  double t11886;
  double t11887;
  double t11884;
  double t11889;
  double t11890;
  double t11894;
  double t11903;
  double t11904;
  double t11896;
  double t11906;
  double t11907;
  double t11898;
  double t11919;
  double t11920;
  double t11921;
  double t11922;
  double t11924;
  double t11925;
  double t11926;
  double t11927;
  double t11931;
  double t11932;
  double t11952;
  double t11953;
  double t11954;
  double t11955;
  double t11957;
  double t11958;
  double t11959;
  double t11960;
  double t11964;
  double t11965;
  t5979 = Cos(var1[3]);
  t2493 = Cos(var1[4]);
  t5767 = Sin(var1[3]);
  t5987 = Sin(var1[4]);
  t6153 = Cos(var1[2]);
  t2457 = Sin(var1[2]);
  t6172 = t5979*t2493;
  t6174 = -1.*t5767*t5987;
  t7578 = t6172 + t6174;
  t5862 = -1.*t2493*t5767;
  t5988 = -1.*t5979*t5987;
  t6026 = t5862 + t5988;
  t6120 = t2457*t6026;
  t7636 = t6153*t7578;
  t7921 = t6120 + t7636;
  t9402 = t6153*t5979;
  t11454 = -1.*t2457*t5767;
  t11486 = t9402 + t11454;
  t7929 = t2493*t5767;
  t8023 = t5979*t5987;
  t8122 = t7929 + t8023;
  t8158 = t6153*t8122;
  t8166 = t2457*t7578;
  t8169 = t8158 + t8166;
  t8177 = 6.4*t7921*t8169;
  t8180 = t6153*t6026;
  t8216 = -1.*t5979*t2493;
  t8270 = t5767*t5987;
  t8280 = t8216 + t8270;
  t8317 = t2457*t8280;
  t8920 = t8180 + t8317;
  t8935 = 6.4*t7921*t8920;
  t8985 = -1.*t5979*t2457;
  t9227 = -1.*t6153*t5767;
  t9228 = t8985 + t9227;
  t11505 = 13.6*t9228*t11486;
  t11509 = t5979*t2457;
  t11510 = t6153*t5767;
  t11528 = t11509 + t11510;
  t11531 = 13.6*t11528*t11486;
  t11565 = Cos(var1[5]);
  t11568 = Sin(var1[5]);
  t11582 = t6153*t11565;
  t11585 = -1.*t2457*t11568;
  t11586 = t11582 + t11585;
  t11602 = Cos(var1[6]);
  t11614 = Sin(var1[6]);
  t11613 = -1.*t11602*t11568;
  t11617 = -1.*t11565*t11614;
  t11625 = t11613 + t11617;
  t11631 = t11565*t11602;
  t11634 = -1.*t11568*t11614;
  t11635 = t11631 + t11634;
  t11636 = t6153*t11635;
  t11644 = t11602*t11568;
  t11645 = t11565*t11614;
  t11646 = t11644 + t11645;
  t11630 = t2457*t11625;
  t11637 = t11630 + t11636;
  t11659 = t6153*t11646;
  t11665 = t2457*t11635;
  t11666 = t11659 + t11665;
  t11638 = t6153*t11625;
  t11567 = -1.*t11565*t2457;
  t11576 = -1.*t6153*t11568;
  t11577 = t11567 + t11576;
  t11588 = 13.6*t11577*t11586;
  t11589 = t11565*t2457;
  t11593 = t6153*t11568;
  t11598 = t11589 + t11593;
  t11599 = 13.6*t11598*t11586;
  t11686 = 6.4*t11637*t11666;
  t11690 = -1.*t11565*t11602;
  t11691 = t11568*t11614;
  t11692 = t11690 + t11691;
  t11697 = t2457*t11692;
  t11698 = t11638 + t11697;
  t11703 = 6.4*t11637*t11698;
  t11553 = -1.*t2457*t8122;
  t11561 = t11553 + t7636;
  t11546 = -1.*t2457*t7578;
  t11548 = t8180 + t11546;
  t11710 = 3.2*t7921*t11561;
  t11711 = 3.2*t11548*t8169;
  t11712 = -1.*t2457*t6026;
  t11713 = t6153*t8280;
  t11714 = t11712 + t11713;
  t11715 = 3.2*t7921*t11714;
  t11716 = 3.2*t11548*t8920;
  t11727 = Power(t9228,2);
  t11728 = 6.8*t11727;
  t11731 = 6.8*t9228*t11528;
  t11736 = Power(t11486,2);
  t11739 = 6.8*t11736;
  t11744 = -1.*t6153*t5979;
  t11745 = t2457*t5767;
  t11746 = t11744 + t11745;
  t11747 = 6.8*t11486*t11746;
  t11647 = -1.*t2457*t11646;
  t11655 = t11647 + t11636;
  t11639 = -1.*t2457*t11635;
  t11642 = t11638 + t11639;
  t11771 = -1.*t2457*t11625;
  t11760 = Power(t11577,2);
  t11761 = 6.8*t11760;
  t11764 = 6.8*t11577*t11598;
  t11765 = Power(t11586,2);
  t11766 = 6.8*t11765;
  t11767 = -1.*t6153*t11565;
  t11768 = t2457*t11568;
  t11769 = t11767 + t11768;
  t11770 = 6.8*t11586*t11769;
  t11786 = 3.2*t11637*t11655;
  t11787 = 3.2*t11642*t11666;
  t11788 = t6153*t11692;
  t11789 = t11771 + t11788;
  t11790 = 3.2*t11637*t11789;
  t11791 = 3.2*t11642*t11698;
  t11804 = -1.*t2493;
  t11805 = 1. + t11804;
  t11806 = 0.4*t11805;
  t11807 = 0.64*t2493;
  t11808 = t11806 + t11807;
  t11809 = t11808*t5767;
  t11810 = 0.24*t5979*t5987;
  t11811 = t11809 + t11810;
  t11813 = t5979*t11808;
  t11814 = -0.24*t5767*t5987;
  t11815 = t11813 + t11814;
  t11819 = -1.*t11808*t5767;
  t11820 = -0.24*t5979*t5987;
  t11821 = t11819 + t11820;
  t11812 = -1.*t11811*t7578;
  t11816 = -1.*t6026*t11815;
  t11817 = t11812 + t11816;
  t11818 = 3.2*t7921*t11817;
  t11823 = t11811*t7578;
  t11824 = t6026*t11815;
  t11828 = t11811*t8122;
  t11829 = t7578*t11815;
  t11830 = t11828 + t11829;
  t11831 = 3.2*t11830*t8920;
  t11840 = -0.24*t2493*t5767;
  t11841 = t11840 + t11820;
  t11833 = -1.*t6026*t11811;
  t11843 = 0.24*t5979*t2493;
  t11844 = t11843 + t11814;
  t11835 = -1.*t11815*t8280;
  t11798 = Power(t5979,2);
  t11799 = 0.11*t11798;
  t11800 = Power(t5767,2);
  t11801 = 0.11*t11800;
  t11802 = t11799 + t11801;
  t11803 = 6.8*t9228*t11802;
  t11863 = -1.*t11602;
  t11864 = 1. + t11863;
  t11865 = 0.4*t11864;
  t11866 = 0.64*t11602;
  t11867 = t11865 + t11866;
  t11868 = t11867*t11568;
  t11869 = 0.24*t11565*t11614;
  t11870 = t11868 + t11869;
  t11872 = t11565*t11867;
  t11873 = -0.24*t11568*t11614;
  t11874 = t11872 + t11873;
  t11857 = Power(t11565,2);
  t11858 = 0.11*t11857;
  t11859 = Power(t11568,2);
  t11860 = 0.11*t11859;
  t11861 = t11858 + t11860;
  t11862 = 6.8*t11577*t11861;
  t11871 = -1.*t11870*t11635;
  t11875 = -1.*t11625*t11874;
  t11876 = t11871 + t11875;
  t11878 = t11870*t11646;
  t11879 = t11635*t11874;
  t11880 = t11878 + t11879;
  t11885 = -1.*t11867*t11568;
  t11886 = -0.24*t11565*t11614;
  t11887 = t11885 + t11886;
  t11884 = 3.2*t11637*t11876;
  t11889 = t11870*t11635;
  t11890 = t11625*t11874;
  t11894 = 3.2*t11880*t11698;
  t11903 = -0.24*t11602*t11568;
  t11904 = t11903 + t11886;
  t11896 = -1.*t11625*t11870;
  t11906 = 0.24*t11565*t11602;
  t11907 = t11906 + t11873;
  t11898 = -1.*t11874*t11692;
  t11919 = 0.748*t9228;
  t11920 = t11808*t5987;
  t11921 = -0.24*t2493*t5987;
  t11922 = t11920 + t11921;
  t11924 = t11808*t2493;
  t11925 = Power(t5987,2);
  t11926 = 0.24*t11925;
  t11927 = t11924 + t11926;
  t11931 = 3.2*t11922*t7921;
  t11932 = 3.2*t11927*t8920;
  t11952 = 0.748*t11577;
  t11953 = t11867*t11614;
  t11954 = -0.24*t11602*t11614;
  t11955 = t11953 + t11954;
  t11957 = t11867*t11602;
  t11958 = Power(t11614,2);
  t11959 = 0.24*t11958;
  t11960 = t11957 + t11959;
  t11964 = 3.2*t11955*t11637;
  t11965 = 3.2*t11960*t11698;
  p_output1[0]=var2[0]*(-0.5*(t11505 + t11531 + t11588 + t11599 + 6.4*t11637*t11642 + 6.4*t11655*t11666 + 6.4*t11548*t7921 + 6.4*t11561*t8169)*var2[2] - 0.5*(t11505 + t11531 + t8177 + t8935)*var2[3] - 0.5*(t8177 + t8935)*var2[4] - 0.5*(t11588 + t11599 + t11686 + t11703)*var2[5] - 0.5*(t11686 + t11703)*var2[6]);
  p_output1[1]=var2[0]*(-0.5*(3.2*Power(t11548,2) + 3.2*Power(t11561,2) + 3.2*Power(t11642,2) + 3.2*Power(t11655,2) + t11728 + t11731 + t11739 + t11747 + t11761 + t11764 + t11766 + t11770 + 3.2*t11637*(t11771 - 1.*t11635*t6153) + 3.2*t11666*(t11639 - 1.*t11646*t6153) + 3.2*(t11712 - 1.*t6153*t7578)*t7921 + 3.2*(t11546 - 1.*t6153*t8122)*t8169)*var2[2] - 0.5*(t11710 + t11711 + t11715 + t11716 + t11728 + t11731 + t11739 + t11747)*var2[3] - 0.5*(t11710 + t11711 + t11715 + t11716)*var2[4] - 0.5*(t11761 + t11764 + t11766 + t11770 + t11786 + t11787 + t11790 + t11791)*var2[5] - 0.5*(t11786 + t11787 + t11790 + t11791)*var2[6]);
  p_output1[2]=var2[0]*(-0.5*(t11803 + 3.2*t11561*t11817 + 3.2*t11548*t11830 + t11862 + 3.2*t11655*t11876 + 3.2*t11642*t11880 - 2.88*t2457)*var2[2] - 0.5*(t11803 + t11818 + t11831 + 3.2*t7921*(t11823 + t11824 + t11821*t7578 + t11815*t8122) + 3.2*(t11833 + t11835 - 1.*t11821*t6026 - 1.*t11815*t7578)*t8169)*var2[3] - 0.5*(t11818 + t11831 + 3.2*t7921*(t11823 + t11824 + t11841*t7578 + t11844*t8122) + 3.2*(t11833 + t11835 - 1.*t11841*t6026 - 1.*t11844*t7578)*t8169)*var2[4] - 0.5*(t11862 + t11884 + 3.2*t11637*(t11646*t11874 + t11635*t11887 + t11889 + t11890) + t11894 + 3.2*t11666*(-1.*t11635*t11874 - 1.*t11625*t11887 + t11896 + t11898))*var2[5] - 0.5*(t11884 + t11894 + 3.2*t11666*(t11896 + t11898 - 1.*t11625*t11904 - 1.*t11635*t11907) + 3.2*t11637*(t11889 + t11890 + t11635*t11904 + t11646*t11907))*var2[6]);
  p_output1[3]=var2[0]*(-0.5*(t11919 + 3.2*t11561*t11922 + 3.2*t11548*t11927)*var2[2] - 0.5*(t11919 + t11931 + t11932)*var2[3] - 0.5*(t11931 + t11932 + 3.2*(-1.*t11808*t5987 + 0.24*t2493*t5987)*t7921 + 3.2*(t11924 - 0.24*Power(t2493,2))*t8169)*var2[4]);
  p_output1[4]=var2[0]*(-0.384*t11548*var2[2] - 0.384*t8920*var2[3] - 0.384*t8920*var2[4]);
  p_output1[5]=var2[0]*(-0.5*(t11952 + 3.2*t11655*t11955 + 3.2*t11642*t11960)*var2[2] - 0.5*(t11952 + t11964 + t11965)*var2[5] - 0.5*(3.2*t11637*(0.24*t11602*t11614 - 1.*t11614*t11867) + 3.2*t11666*(-0.24*Power(t11602,2) + t11957) + t11964 + t11965)*var2[6]);
  p_output1[6]=var2[0]*(-0.384*t11642*var2[2] - 0.384*t11698*var2[5] - 0.384*t11698*var2[6]);
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

#include "Ce1_vec1_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce1_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
