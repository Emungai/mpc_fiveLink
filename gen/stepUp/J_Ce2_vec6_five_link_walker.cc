/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:38 GMT-05:00
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
  double t7218;
  double t2926;
  double t5848;
  double t7364;
  double t7913;
  double t2907;
  double t5986;
  double t7726;
  double t7838;
  double t8916;
  double t8940;
  double t9224;
  double t9231;
  double t9389;
  double t7881;
  double t8024;
  double t8134;
  double t8249;
  double t8589;
  double t8590;
  double t11988;
  double t11997;
  double t12002;
  double t11971;
  double t11975;
  double t11976;
  double t8592;
  double t8593;
  double t8597;
  double t12078;
  double t12112;
  double t12124;
  double t10219;
  double t10820;
  double t10918;
  double t9720;
  double t10975;
  double t11053;
  double t12155;
  double t12139;
  double t12140;
  double t12141;
  double t12173;
  double t12175;
  double t12203;
  double t12204;
  double t12154;
  double t12158;
  double t12207;
  double t12208;
  double t12211;
  double t13508;
  double t13509;
  double t14397;
  double t14440;
  double t14483;
  double t15461;
  double t15483;
  double t15494;
  double t15576;
  double t15577;
  double t15578;
  double t8598;
  double t11138;
  double t11226;
  double t11227;
  double t11549;
  double t15719;
  double t15720;
  double t9421;
  double t9605;
  double t9690;
  double t12031;
  double t12134;
  double t12135;
  double t12138;
  double t12243;
  double t13946;
  double t14046;
  double t14047;
  double t14096;
  double t14104;
  double t14141;
  double t14317;
  double t14319;
  double t14346;
  double t14368;
  double t14384;
  double t14390;
  double t15623;
  double t15624;
  double t15641;
  double t15441;
  double t15495;
  double t15520;
  double t15584;
  double t15602;
  double t15607;
  double t15608;
  double t15609;
  double t15688;
  double t15689;
  double t15698;
  double t15704;
  double t15705;
  double t15770;
  double t15774;
  double t15781;
  double t15721;
  double t15722;
  double t15723;
  double t15737;
  double t15739;
  double t15740;
  double t15741;
  double t15742;
  double t15743;
  double t15744;
  double t15747;
  double t15748;
  double t15756;
  double t15757;
  double t15758;
  double t15759;
  double t15762;
  double t15765;
  double t15818;
  double t15819;
  double t15769;
  double t15821;
  double t15822;
  double t15784;
  double t15789;
  double t15830;
  double t15831;
  double t15793;
  double t15853;
  double t15854;
  double t15855;
  double t15856;
  double t15857;
  double t15859;
  double t15860;
  double t15861;
  double t15862;
  double t15863;
  double t15864;
  double t15865;
  double t15866;
  double t15867;
  double t15869;
  double t15870;
  double t15871;
  double t15872;
  double t15873;
  double t15874;
  double t12242;
  double t12245;
  double t12183;
  double t12192;
  double t12159;
  double t12193;
  double t12216;
  double t12218;
  double t12251;
  double t13561;
  double t13748;
  double t15888;
  double t15893;
  double t15894;
  double t15745;
  double t15902;
  double t15767;
  double t15768;
  double t15782;
  double t15783;
  double t15785;
  double t15788;
  double t15790;
  double t15791;
  double t15792;
  double t15794;
  double t15911;
  double t15800;
  double t15801;
  double t15802;
  double t15912;
  double t15804;
  double t15805;
  double t15806;
  double t15913;
  double t15916;
  double t15917;
  double t15918;
  double t15919;
  double t15920;
  double t15921;
  double t15813;
  double t15925;
  double t15820;
  double t15823;
  double t15826;
  double t15927;
  double t15828;
  double t15829;
  double t15832;
  double t15833;
  double t15834;
  double t15835;
  double t15838;
  double t15839;
  double t15840;
  double t15842;
  double t15843;
  double t15844;
  double t15845;
  double t15846;
  double t15847;
  double t15868;
  double t15521;
  double t15622;
  double t15687;
  double t15706;
  double t15708;
  double t8591;
  double t11062;
  double t11740;
  double t11911;
  double t15952;
  double t15953;
  double t15716;
  double t15903;
  double t15904;
  double t15905;
  double t15906;
  double t15907;
  double t15766;
  double t15786;
  double t15787;
  double t15795;
  double t15796;
  double t15926;
  double t15928;
  double t15929;
  double t15930;
  double t15931;
  double t15817;
  double t15827;
  double t15836;
  double t15837;
  double t15841;
  double t15848;
  double t15849;
  double t15942;
  double t15943;
  double t15944;
  double t15945;
  double t15946;
  double t15947;
  double t15948;
  double t15875;
  double t15955;
  double t15999;
  double t16000;
  double t16001;
  double t15889;
  double t15890;
  double t15891;
  double t15914;
  double t15724;
  double t15966;
  double t15967;
  double t15968;
  double t15935;
  double t15936;
  double t15937;
  double t15803;
  double t15807;
  double t15808;
  double t15983;
  double t15984;
  double t15985;
  double t15986;
  double t15987;
  double t15877;
  double t15878;
  double t15879;
  double t15880;
  double t11933;
  double t16004;
  double t16005;
  double t16006;
  double t16037;
  double t16038;
  double t15886;
  double t15960;
  double t16012;
  t7218 = Cos(var1[5]);
  t2926 = Cos(var1[6]);
  t5848 = Sin(var1[5]);
  t7364 = Sin(var1[6]);
  t7913 = Cos(var1[2]);
  t2907 = Sin(var1[2]);
  t5986 = -1.*t2926*t5848;
  t7726 = -1.*t7218*t7364;
  t7838 = t5986 + t7726;
  t8916 = -1.*t2926;
  t8940 = 1. + t8916;
  t9224 = 0.4*t8940;
  t9231 = 0.64*t2926;
  t9389 = t9224 + t9231;
  t7881 = -1.*t2907*t7838;
  t8024 = -1.*t7218*t2926;
  t8134 = t5848*t7364;
  t8249 = t8024 + t8134;
  t8589 = t7913*t8249;
  t8590 = t7881 + t8589;
  t11988 = t7913*t7218;
  t11997 = -1.*t2907*t5848;
  t12002 = t11988 + t11997;
  t11971 = -1.*t7218*t2907;
  t11975 = -1.*t7913*t5848;
  t11976 = t11971 + t11975;
  t8592 = -1.*t7913*t7218;
  t8593 = t2907*t5848;
  t8597 = t8592 + t8593;
  t12078 = t7218*t2907;
  t12112 = t7913*t5848;
  t12124 = t12078 + t12112;
  t10219 = t7218*t2926;
  t10820 = -1.*t5848*t7364;
  t10918 = t10219 + t10820;
  t9720 = t7913*t7838;
  t10975 = -1.*t2907*t10918;
  t11053 = t9720 + t10975;
  t12155 = t7913*t10918;
  t12139 = t2926*t5848;
  t12140 = t7218*t7364;
  t12141 = t12139 + t12140;
  t12173 = t2907*t7838;
  t12175 = t12173 + t12155;
  t12203 = -1.*t7913*t10918;
  t12204 = t7881 + t12203;
  t12154 = -1.*t2907*t12141;
  t12158 = t12154 + t12155;
  t12207 = t7913*t12141;
  t12208 = t2907*t10918;
  t12211 = t12207 + t12208;
  t13508 = t2907*t8249;
  t13509 = t9720 + t13508;
  t14397 = t9389*t5848;
  t14440 = 0.24*t7218*t7364;
  t14483 = t14397 + t14440;
  t15461 = t7218*t9389;
  t15483 = -0.24*t5848*t7364;
  t15494 = t15461 + t15483;
  t15576 = -1.*t9389*t5848;
  t15577 = -0.24*t7218*t7364;
  t15578 = t15576 + t15577;
  t8598 = 0.748*t8597;
  t11138 = t9389*t2926;
  t11226 = Power(t7364,2);
  t11227 = 0.24*t11226;
  t11549 = t11138 + t11227;
  t15719 = t2907*t12141;
  t15720 = t15719 + t8589;
  t9421 = t9389*t7364;
  t9605 = -0.24*t2926*t7364;
  t9690 = t9421 + t9605;
  t12031 = 20.4*t11976*t12002;
  t12134 = 6.8*t12124*t12002;
  t12135 = 20.4*t11976*t8597;
  t12138 = 6.8*t12124*t8597;
  t12243 = -1.*t2907*t8249;
  t13946 = Power(t11976,2);
  t14046 = 13.6*t13946;
  t14047 = 13.6*t11976*t12124;
  t14096 = Power(t12002,2);
  t14104 = 13.6*t14096;
  t14141 = 13.6*t12002*t8597;
  t14317 = Power(t7218,2);
  t14319 = 0.11*t14317;
  t14346 = Power(t5848,2);
  t14368 = 0.11*t14346;
  t14384 = t14319 + t14368;
  t14390 = 6.8*t8597*t14384;
  t15623 = t14483*t12141;
  t15624 = t10918*t15494;
  t15641 = t15623 + t15624;
  t15441 = -1.*t14483*t10918;
  t15495 = -1.*t7838*t15494;
  t15520 = t15441 + t15495;
  t15584 = t15578*t10918;
  t15602 = t14483*t10918;
  t15607 = t7838*t15494;
  t15608 = t12141*t15494;
  t15609 = t15584 + t15602 + t15607 + t15608;
  t15688 = -1.*t7838*t15578;
  t15689 = -1.*t7838*t14483;
  t15698 = -1.*t10918*t15494;
  t15704 = -1.*t15494*t8249;
  t15705 = t15688 + t15689 + t15698 + t15704;
  t15770 = -1.*t7218*t9389;
  t15774 = 0.24*t5848*t7364;
  t15781 = t15770 + t15774;
  t15721 = -0.384*var2[6]*t15720;
  t15722 = 3.2*t11549*t15720;
  t15723 = 3.2*t9690*t13509;
  t15737 = 6.4*t12175*t11053;
  t15739 = 3.2*t12211*t8590;
  t15740 = 3.2*t11053*t15720;
  t15741 = t12207 + t12243;
  t15742 = 3.2*t12175*t15741;
  t15743 = 3.2*t12158*t13509;
  t15744 = 6.4*t8590*t13509;
  t15747 = Power(t12175,2);
  t15748 = 6.4*t15747;
  t15756 = 6.4*t12175*t15720;
  t15757 = 6.4*t12211*t13509;
  t15758 = Power(t13509,2);
  t15759 = 6.4*t15758;
  t15762 = 3.2*t15641*t15720;
  t15765 = 3.2*t15520*t13509;
  t15818 = -0.24*t2926*t5848;
  t15819 = t15818 + t15577;
  t15769 = -1.*t12141*t15494;
  t15821 = 0.24*t7218*t2926;
  t15822 = t15821 + t15483;
  t15784 = -1.*t14483*t8249;
  t15789 = t7838*t14483;
  t15830 = -0.24*t7218*t2926;
  t15831 = t15830 + t15774;
  t15793 = t15494*t8249;
  t15853 = 13.6*t11976*t12002;
  t15854 = 13.6*t12124*t12002;
  t15855 = 6.4*t12175*t12211;
  t15856 = 6.4*t12175*t13509;
  t15857 = t15853 + t15854 + t15855 + t15856;
  t15859 = 6.8*t13946;
  t15860 = 6.8*t11976*t12124;
  t15861 = 6.8*t14096;
  t15862 = 6.8*t12002*t8597;
  t15863 = 3.2*t12175*t12158;
  t15864 = 3.2*t11053*t12211;
  t15865 = 3.2*t12175*t8590;
  t15866 = 3.2*t11053*t13509;
  t15867 = t15859 + t15860 + t15861 + t15862 + t15863 + t15864 + t15865 + t15866;
  t15869 = 6.8*t11976*t14384;
  t15870 = 3.2*t12175*t15520;
  t15871 = 3.2*t12175*t15609;
  t15872 = 3.2*t15641*t13509;
  t15873 = 3.2*t12211*t15705;
  t15874 = t15869 + t15870 + t15871 + t15872 + t15873;
  t12242 = -1.*t7913*t7838;
  t12245 = t12242 + t12243;
  t12183 = -1.*t7913*t12141;
  t12192 = t12183 + t10975;
  t12159 = 6.4*t12158*t11053;
  t12193 = 3.2*t12175*t12192;
  t12216 = 3.2*t12204*t12211;
  t12218 = 6.4*t11053*t8590;
  t12251 = 3.2*t12175*t12245;
  t13561 = 3.2*t12204*t13509;
  t13748 = t12031 + t12134 + t12135 + t12138 + t12159 + t12193 + t12216 + t12218 + t12251 + t13561;
  t15888 = 0.748*t12124;
  t15893 = Power(t8597,2);
  t15894 = 13.6*t15893;
  t15745 = t12031 + t12134 + t12135 + t12138 + t15737 + t15739 + t15740 + t15742 + t15743 + t15744;
  t15902 = 6.8*t12124*t14384;
  t15767 = -1.*t15578*t10918;
  t15768 = -2.*t7838*t15494;
  t15782 = -1.*t7838*t15781;
  t15783 = -2.*t15578*t8249;
  t15785 = t15767 + t15768 + t15769 + t15782 + t15783 + t15784;
  t15788 = 2.*t7838*t15578;
  t15790 = t15578*t12141;
  t15791 = 2.*t10918*t15494;
  t15792 = t10918*t15781;
  t15794 = t15788 + t15789 + t15790 + t15791 + t15792 + t15793;
  t15911 = -0.384*var2[6]*t15741;
  t15800 = Power(t2926,2);
  t15801 = -0.24*t15800;
  t15802 = t11138 + t15801;
  t15912 = 3.2*t9690*t8590;
  t15804 = -1.*t9389*t7364;
  t15805 = 0.24*t2926*t7364;
  t15806 = t15804 + t15805;
  t15913 = 3.2*t11549*t15741;
  t15916 = Power(t11053,2);
  t15917 = 6.4*t15916;
  t15918 = 6.4*t12158*t8590;
  t15919 = Power(t8590,2);
  t15920 = 6.4*t15919;
  t15921 = 6.4*t11053*t15741;
  t15813 = t15737 + t15739 + t15740 + t15742 + t15743 + t15744;
  t15925 = 3.2*t15520*t8590;
  t15820 = t15819*t10918;
  t15823 = t12141*t15822;
  t15826 = t15820 + t15602 + t15607 + t15823;
  t15927 = 3.2*t15641*t15741;
  t15828 = -1.*t15819*t10918;
  t15829 = -1.*t7838*t15822;
  t15832 = -1.*t7838*t15831;
  t15833 = -1.*t15578*t8249;
  t15834 = -1.*t15819*t8249;
  t15835 = t15828 + t15495 + t15769 + t15829 + t15832 + t15833 + t15834 + t15784;
  t15838 = -1.*t7838*t15819;
  t15839 = -1.*t10918*t15822;
  t15840 = t15838 + t15689 + t15839 + t15704;
  t15842 = t7838*t15578;
  t15843 = t7838*t15819;
  t15844 = t15819*t12141;
  t15845 = t10918*t15822;
  t15846 = t10918*t15831;
  t15847 = t15842 + t15843 + t15789 + t15844 + t15624 + t15845 + t15846 + t15793;
  t15868 = -0.5*var2[5]*t15867;
  t15521 = 3.2*t11053*t15520;
  t15622 = 3.2*t11053*t15609;
  t15687 = 3.2*t15641*t8590;
  t15706 = 3.2*t12158*t15705;
  t15708 = t14390 + t15521 + t15622 + t15687 + t15706;
  t8591 = -0.384*var2[6]*t8590;
  t11062 = 3.2*t9690*t11053;
  t11740 = 3.2*t11549*t8590;
  t11911 = t8598 + t11062 + t11740;
  t15952 = 13.6*t11976*t8597;
  t15953 = t15853 + t15952 + t12159 + t12218;
  t15716 = -0.5*var2[2]*t15708;
  t15903 = 3.2*t12204*t15520;
  t15904 = 3.2*t12204*t15609;
  t15905 = 3.2*t15641*t12245;
  t15906 = 3.2*t12192*t15705;
  t15907 = t15902 + t15903 + t15904 + t15905 + t15906;
  t15766 = 6.4*t15609*t13509;
  t15786 = 3.2*t12211*t15785;
  t15787 = 6.4*t12175*t15705;
  t15795 = 3.2*t12175*t15794;
  t15796 = t14390 + t15762 + t15765 + t15766 + t15786 + t15787 + t15795;
  t15926 = 6.4*t15609*t8590;
  t15928 = 3.2*t12158*t15785;
  t15929 = 6.4*t11053*t15705;
  t15930 = 3.2*t11053*t15794;
  t15931 = t15902 + t15925 + t15926 + t15927 + t15928 + t15929 + t15930;
  t15817 = 3.2*t15609*t13509;
  t15827 = 3.2*t15826*t13509;
  t15836 = 3.2*t12211*t15835;
  t15837 = 3.2*t12175*t15705;
  t15841 = 3.2*t12175*t15840;
  t15848 = 3.2*t12175*t15847;
  t15849 = t15762 + t15765 + t15817 + t15827 + t15836 + t15837 + t15841 + t15848;
  t15942 = 3.2*t15609*t8590;
  t15943 = 3.2*t15826*t8590;
  t15944 = 3.2*t12158*t15835;
  t15945 = 3.2*t11053*t15705;
  t15946 = 3.2*t11053*t15840;
  t15947 = 3.2*t11053*t15847;
  t15948 = t15925 + t15942 + t15943 + t15927 + t15944 + t15945 + t15946 + t15947;
  t15875 = -0.5*var2[5]*t15874;
  t15955 = -0.5*var2[5]*t15708;
  t15999 = 6.4*t15609*t15641;
  t16000 = 6.4*t15520*t15705;
  t16001 = t15999 + t16000;
  t15889 = 3.2*t9690*t12204;
  t15890 = 3.2*t11549*t12245;
  t15891 = t15888 + t15889 + t15890;
  t15914 = t15888 + t15912 + t15913;
  t15724 = t8598 + t15722 + t15723;
  t15966 = 3.2*t9690*t15785;
  t15967 = 3.2*t11549*t15794;
  t15968 = t15966 + t15967;
  t15935 = 3.2*t15802*t11053;
  t15936 = 3.2*t15806*t8590;
  t15937 = t15935 + t15912 + t15936 + t15913;
  t15803 = 3.2*t15802*t12175;
  t15807 = 3.2*t15806*t13509;
  t15808 = t15803 + t15722 + t15723 + t15807;
  t15983 = 3.2*t15806*t15609;
  t15984 = 3.2*t9690*t15835;
  t15985 = 3.2*t15802*t15705;
  t15986 = 3.2*t11549*t15847;
  t15987 = t15983 + t15984 + t15985 + t15986;
  t15877 = 0.748*t11976;
  t15878 = 3.2*t9690*t12175;
  t15879 = 3.2*t11549*t13509;
  t15880 = t15877 + t15878 + t15879;
  t11933 = -0.5*var2[5]*t11911;
  t16004 = 3.2*t11549*t15609;
  t16005 = 3.2*t9690*t15705;
  t16006 = t16004 + t16005;
  t16037 = -0.384*var2[0]*t15720;
  t16038 = -0.384*var2[1]*t15741;
  t15886 = -0.384*var2[5]*t13509;
  t15960 = -0.384*var2[5]*t8590;
  t16012 = -0.384*var2[5]*t15609;
  p_output1[0]=(t11933 + t15716 + t8591 - 0.5*(6.4*t12158*t12175 + 6.4*t11053*t12211 + 6.4*t11053*t13509 + t14046 + t14047 + t14104 + t14141 + 6.4*t12175*t8590)*var2[0] - 0.5*t13748*var2[1])*var2[5];
  p_output1[1]=var2[5]*(t15721 - 0.5*(t14046 + t14047 + t14104 + t14141 + t15748 + t15756 + t15757 + t15759)*var2[0] - 0.5*t15745*var2[1] - 0.5*t15796*var2[2] - 0.5*t15724*var2[5]);
  p_output1[2]=var2[5]*(t15721 - 0.5*(t15748 + t15756 + t15757 + t15759)*var2[0] - 0.5*t15813*var2[1] - 0.5*t15849*var2[2] - 0.5*t15808*var2[5]);
  p_output1[3]=-0.5*t15857*var2[5];
  p_output1[4]=t15868;
  p_output1[5]=t15875;
  p_output1[6]=-0.5*t15857*var2[0] - 0.5*t15867*var2[1] - 0.5*t15874*var2[2] - 1.*t15880*var2[5] - 0.384*t13509*var2[6];
  p_output1[7]=t15886;
  p_output1[8]=var2[5]*(-0.5*t13748*var2[0] - 0.5*(6.4*t11053*t12192 + 6.4*t12158*t12204 + 6.4*t11053*t12245 + t14046 + t14047 + t14141 + t15894 + 6.4*t12204*t8590)*var2[1] - 0.5*t15907*var2[2] - 0.5*t15891*var2[5] - 0.384*t12245*var2[6]);
  p_output1[9]=var2[5]*(t15911 - 0.5*t15745*var2[0] - 0.5*(t14046 + t14047 + t14141 + t15894 + t15917 + t15918 + t15920 + t15921)*var2[1] - 0.5*t15931*var2[2] - 0.5*t15914*var2[5]);
  p_output1[10]=var2[5]*(t15911 - 0.5*t15813*var2[0] - 0.5*(t15917 + t15918 + t15920 + t15921)*var2[1] - 0.5*t15948*var2[2] - 0.5*t15937*var2[5]);
  p_output1[11]=t15868;
  p_output1[12]=-0.5*t15953*var2[5];
  p_output1[13]=t15955;
  p_output1[14]=t15716 + t8591 - 0.5*t15867*var2[0] - 0.5*t15953*var2[1] - 1.*t11911*var2[5];
  p_output1[15]=t15960;
  p_output1[16]=(-0.5*t15708*var2[0] - 0.5*t15907*var2[1])*var2[5];
  p_output1[17]=var2[5]*(-0.5*t15796*var2[0] - 0.5*t15931*var2[1] - 0.5*(6.4*Power(t15609,2) + 6.4*Power(t15705,2) + 6.4*t15520*t15785 + 6.4*t15641*t15794)*var2[2] - 0.5*t15968*var2[5] - 0.384*t15794*var2[6]);
  p_output1[18]=var2[5]*(-0.5*t15849*var2[0] - 0.5*t15948*var2[1] - 0.5*(6.4*t15609*t15826 + 6.4*t15520*t15835 + 6.4*t15705*t15840 + 6.4*t15641*t15847)*var2[2] - 0.5*t15987*var2[5] - 0.384*t15847*var2[6]);
  p_output1[19]=t15875;
  p_output1[20]=t15955;
  p_output1[21]=-0.5*t16001*var2[5];
  p_output1[22]=-0.5*t15874*var2[0] - 0.5*t15708*var2[1] - 0.5*t16001*var2[2] - 1.*t16006*var2[5] - 0.384*t15609*var2[6];
  p_output1[23]=t16012;
  p_output1[24]=(-0.5*t11911*var2[0] - 0.5*t15891*var2[1])*var2[5];
  p_output1[25]=(-0.5*t15724*var2[0] - 0.5*t15914*var2[1] - 0.5*t15968*var2[2])*var2[5];
  p_output1[26]=(-0.5*t15808*var2[0] - 0.5*t15937*var2[1] - 0.5*t15987*var2[2])*var2[5];
  p_output1[27]=-0.5*t15880*var2[5];
  p_output1[28]=t11933;
  p_output1[29]=-0.5*t16006*var2[5];
  p_output1[30]=-0.5*t15880*var2[0] - 0.5*t11911*var2[1] - 0.5*t16006*var2[2];
  p_output1[31]=(-0.384*t8590*var2[0] - 0.384*t12245*var2[1])*var2[5];
  p_output1[32]=(t16037 + t16038 - 0.384*t15794*var2[2])*var2[5];
  p_output1[33]=(t16037 + t16038 - 0.384*t15847*var2[2])*var2[5];
  p_output1[34]=t15886;
  p_output1[35]=t15960;
  p_output1[36]=t16012;
  p_output1[37]=-0.384*t13509*var2[0] - 0.384*t8590*var2[1] - 0.384*t15609*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 38, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec6_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
