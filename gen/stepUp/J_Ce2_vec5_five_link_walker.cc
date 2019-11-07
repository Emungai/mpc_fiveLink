/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:35 GMT-05:00
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
  double t2604;
  double t2332;
  double t2452;
  double t2635;
  double t933;
  double t2970;
  double t6134;
  double t7939;
  double t7955;
  double t8114;
  double t8121;
  double t2537;
  double t2754;
  double t2790;
  double t8441;
  double t8442;
  double t8448;
  double t8476;
  double t8477;
  double t8478;
  double t8347;
  double t2969;
  double t5805;
  double t5891;
  double t5933;
  double t5989;
  double t6037;
  double t8433;
  double t8434;
  double t8435;
  double t8436;
  double t8449;
  double t8453;
  double t8548;
  double t8550;
  double t8555;
  double t8556;
  double t8557;
  double t8560;
  double t8564;
  double t8585;
  double t8586;
  double t8604;
  double t8605;
  double t8606;
  double t8608;
  double t8609;
  double t8610;
  double t8628;
  double t8629;
  double t8630;
  double t8831;
  double t8856;
  double t8370;
  double t8386;
  double t8432;
  double t8538;
  double t8539;
  double t8540;
  double t10251;
  double t10258;
  double t8462;
  double t8463;
  double t8474;
  double t8480;
  double t8481;
  double t8533;
  double t8579;
  double t9182;
  double t9212;
  double t9216;
  double t8607;
  double t8611;
  double t8614;
  double t8633;
  double t8634;
  double t8632;
  double t8873;
  double t8890;
  double t13614;
  double t13639;
  double t9472;
  double t9520;
  double t9282;
  double t9519;
  double t9524;
  double t13730;
  double t13737;
  double t13743;
  double t10611;
  double t10619;
  double t10971;
  double t11139;
  double t11162;
  double t11341;
  double t11575;
  double t11651;
  double t11782;
  double t11918;
  double t11935;
  double t12127;
  double t12180;
  double t12184;
  double t12212;
  double t13525;
  double t13551;
  double t13553;
  double t13557;
  double t13577;
  double t13601;
  double t13609;
  double t13697;
  double t13698;
  double t13746;
  double t13886;
  double t14117;
  double t14119;
  double t14121;
  double t14129;
  double t15339;
  double t15344;
  double t15345;
  double t15350;
  double t15351;
  double t14356;
  double t14379;
  double t14381;
  double t14411;
  double t14412;
  double t14452;
  double t14455;
  double t14464;
  double t14515;
  double t14524;
  double t14538;
  double t14540;
  double t15290;
  double t8578;
  double t8580;
  double t8551;
  double t8552;
  double t8547;
  double t8553;
  double t8573;
  double t8577;
  double t8581;
  double t8587;
  double t8588;
  double t13645;
  double t13658;
  double t13659;
  double t13715;
  double t13810;
  double t13864;
  double t13982;
  double t13988;
  double t14101;
  double t14102;
  double t14115;
  double t14116;
  double t14120;
  double t14134;
  double t15625;
  double t14167;
  double t14170;
  double t14171;
  double t15627;
  double t15635;
  double t15648;
  double t15649;
  double t15650;
  double t15658;
  double t15659;
  double t15660;
  double t15664;
  double t15665;
  double t15666;
  double t15667;
  double t15677;
  double t14197;
  double t14200;
  double t14202;
  double t14251;
  double t14253;
  double t14285;
  double t14469;
  double t8615;
  double t8954;
  double t9232;
  double t9552;
  double t9644;
  double t8457;
  double t8479;
  double t8534;
  double t8541;
  double t8542;
  double t8546;
  double t15707;
  double t9665;
  double t15610;
  double t15611;
  double t15613;
  double t15618;
  double t15621;
  double t13667;
  double t13672;
  double t13984;
  double t14105;
  double t14114;
  double t14137;
  double t14139;
  double t15675;
  double t15676;
  double t15680;
  double t15682;
  double t15683;
  double t15684;
  double t15685;
  double t14190;
  double t14249;
  double t14250;
  double t14306;
  double t14316;
  double t15699;
  double t15700;
  double t15701;
  double t15702;
  double t15703;
  double t15320;
  double t15714;
  double t15775;
  double t15776;
  double t15777;
  double t15778;
  double t15779;
  double t15771;
  double t15772;
  double t15773;
  double t15522;
  double t15532;
  double t15538;
  double t15539;
  double t15540;
  double t15626;
  double t15634;
  double t15636;
  double t10616;
  double t11006;
  double t11069;
  double t15728;
  double t15729;
  double t15733;
  double t15734;
  double t15735;
  double t15690;
  double t15691;
  double t15695;
  double t15696;
  double t15697;
  double t14165;
  double t14180;
  double t14181;
  double t14182;
  double t14183;
  double t15749;
  double t15750;
  double t15751;
  double t15752;
  double t15753;
  double t15754;
  double t15755;
  double t15440;
  double t15715;
  double t15780;
  double t15810;
  double t15811;
  double t15812;
  double t15824;
  double t15825;
  double t6076;
  t2604 = Cos(var1[3]);
  t2332 = Cos(var1[4]);
  t2452 = Sin(var1[3]);
  t2635 = Sin(var1[4]);
  t933 = Sin(var1[2]);
  t2970 = Cos(var1[2]);
  t6134 = -1.*t2332;
  t7939 = 1. + t6134;
  t7955 = 0.4*t7939;
  t8114 = 0.64*t2332;
  t8121 = t7955 + t8114;
  t2537 = -1.*t2332*t2452;
  t2754 = -1.*t2604*t2635;
  t2790 = t2537 + t2754;
  t8441 = t2604*t2332;
  t8442 = -1.*t2452*t2635;
  t8448 = t8441 + t8442;
  t8476 = t2970*t2790;
  t8477 = -1.*t933*t8448;
  t8478 = t8476 + t8477;
  t8347 = t8121*t2332;
  t2969 = -1.*t933*t2790;
  t5805 = -1.*t2604*t2332;
  t5891 = t2452*t2635;
  t5933 = t5805 + t5891;
  t5989 = t2970*t5933;
  t6037 = t2969 + t5989;
  t8433 = t2332*t2452;
  t8434 = t2604*t2635;
  t8435 = t8433 + t8434;
  t8436 = -1.*t933*t8435;
  t8449 = t2970*t8448;
  t8453 = t8436 + t8449;
  t8548 = t933*t2790;
  t8550 = t8548 + t8449;
  t8555 = -1.*t2970*t8448;
  t8556 = t2969 + t8555;
  t8557 = t2970*t8435;
  t8560 = t933*t8448;
  t8564 = t8557 + t8560;
  t8585 = t933*t5933;
  t8586 = t8476 + t8585;
  t8604 = t8121*t2452;
  t8605 = 0.24*t2604*t2635;
  t8606 = t8604 + t8605;
  t8608 = t2604*t8121;
  t8609 = -0.24*t2452*t2635;
  t8610 = t8608 + t8609;
  t8628 = -0.24*t2332*t2452;
  t8629 = -0.24*t2604*t2635;
  t8630 = t8628 + t8629;
  t8831 = 0.24*t2604*t2332;
  t8856 = t8831 + t8609;
  t8370 = Power(t2332,2);
  t8386 = -0.24*t8370;
  t8432 = t8347 + t8386;
  t8538 = Power(t2635,2);
  t8539 = 0.24*t8538;
  t8540 = t8347 + t8539;
  t10251 = t933*t8435;
  t10258 = t10251 + t5989;
  t8462 = t8121*t2635;
  t8463 = -0.24*t2332*t2635;
  t8474 = t8462 + t8463;
  t8480 = -1.*t8121*t2635;
  t8481 = 0.24*t2332*t2635;
  t8533 = t8480 + t8481;
  t8579 = -1.*t933*t5933;
  t9182 = t8606*t8435;
  t9212 = t8448*t8610;
  t9216 = t9182 + t9212;
  t8607 = -1.*t8606*t8448;
  t8611 = -1.*t2790*t8610;
  t8614 = t8607 + t8611;
  t8633 = t8606*t8448;
  t8634 = t2790*t8610;
  t8632 = t8630*t8448;
  t8873 = t8435*t8856;
  t8890 = t8632 + t8633 + t8634 + t8873;
  t13614 = -1.*t8121*t2452;
  t13639 = t13614 + t8629;
  t9472 = -1.*t2790*t8606;
  t9520 = -1.*t8610*t5933;
  t9282 = -1.*t2790*t8630;
  t9519 = -1.*t8448*t8856;
  t9524 = t9282 + t9472 + t9519 + t9520;
  t13730 = -0.24*t2604*t2332;
  t13737 = 0.24*t2452*t2635;
  t13743 = t13730 + t13737;
  t10611 = -0.384*var2[4]*t10258;
  t10619 = 3.2*t8540*t10258;
  t10971 = 3.2*t8474*t8586;
  t11139 = 6.4*t8550*t8478;
  t11162 = 3.2*t8564*t6037;
  t11341 = 3.2*t8478*t10258;
  t11575 = t8557 + t8579;
  t11651 = 3.2*t8550*t11575;
  t11782 = 3.2*t8453*t8586;
  t11918 = 6.4*t6037*t8586;
  t11935 = t11139 + t11162 + t11341 + t11651 + t11782 + t11918;
  t12127 = -0.5*var2[1]*t11935;
  t12180 = Power(t8550,2);
  t12184 = 6.4*t12180;
  t12212 = 6.4*t8550*t10258;
  t13525 = 6.4*t8564*t8586;
  t13551 = Power(t8586,2);
  t13553 = 6.4*t13551;
  t13557 = t12184 + t12212 + t13525 + t13553;
  t13577 = -0.5*var2[0]*t13557;
  t13601 = 3.2*t9216*t10258;
  t13609 = 3.2*t8614*t8586;
  t13697 = -1.*t8630*t8448;
  t13698 = -1.*t8435*t8610;
  t13746 = -1.*t2790*t13743;
  t13886 = -1.*t8606*t5933;
  t14117 = t2790*t8606;
  t14119 = t8630*t8435;
  t14121 = t8448*t13743;
  t14129 = t8610*t5933;
  t15339 = 3.2*t8474*t8550;
  t15344 = 3.2*t8533*t8550;
  t15345 = 3.2*t8432*t8564;
  t15350 = 3.2*t8540*t8586;
  t15351 = t15339 + t15344 + t15345 + t15350;
  t14356 = 6.4*t8550*t8564;
  t14379 = 6.4*t8550*t8586;
  t14381 = t14356 + t14379;
  t14411 = 3.2*t8550*t8453;
  t14412 = 3.2*t8478*t8564;
  t14452 = 3.2*t8550*t6037;
  t14455 = 3.2*t8478*t8586;
  t14464 = t14411 + t14412 + t14452 + t14455;
  t14515 = 3.2*t8550*t8614;
  t14524 = 3.2*t8550*t8890;
  t14538 = 3.2*t9216*t8586;
  t14540 = 3.2*t8564*t9524;
  t15290 = t14515 + t14524 + t14538 + t14540;
  t8578 = -1.*t2970*t2790;
  t8580 = t8578 + t8579;
  t8551 = -1.*t2970*t8435;
  t8552 = t8551 + t8477;
  t8547 = 6.4*t8453*t8478;
  t8553 = 3.2*t8550*t8552;
  t8573 = 3.2*t8556*t8564;
  t8577 = 6.4*t8478*t6037;
  t8581 = 3.2*t8550*t8580;
  t8587 = 3.2*t8556*t8586;
  t8588 = t8547 + t8553 + t8573 + t8577 + t8581 + t8587;
  t13645 = t13639*t8448;
  t13658 = t8435*t8610;
  t13659 = t13645 + t8633 + t8634 + t13658;
  t13715 = -1.*t2790*t8856;
  t13810 = -1.*t13639*t5933;
  t13864 = -1.*t8630*t5933;
  t13982 = t13697 + t8611 + t13698 + t13715 + t13746 + t13810 + t13864 + t13886;
  t13988 = -1.*t2790*t13639;
  t14101 = -1.*t8448*t8610;
  t14102 = t13988 + t9472 + t14101 + t9520;
  t14115 = t2790*t13639;
  t14116 = t2790*t8630;
  t14120 = t8448*t8856;
  t14134 = t14115 + t14116 + t14117 + t14119 + t9212 + t14120 + t14121 + t14129;
  t15625 = -0.384*var2[4]*t11575;
  t14167 = -1.*t8121*t2332;
  t14170 = 0.24*t8370;
  t14171 = t14167 + t14170;
  t15627 = 3.2*t8474*t6037;
  t15635 = 3.2*t8540*t11575;
  t15648 = Power(t8478,2);
  t15649 = 6.4*t15648;
  t15650 = 6.4*t8453*t6037;
  t15658 = Power(t6037,2);
  t15659 = 6.4*t15658;
  t15660 = 6.4*t8478*t11575;
  t15664 = t15649 + t15650 + t15659 + t15660;
  t15665 = -0.5*var2[1]*t15664;
  t15666 = -0.5*var2[0]*t11935;
  t15667 = 3.2*t8614*t6037;
  t15677 = 3.2*t9216*t11575;
  t14197 = -2.*t2790*t8856;
  t14200 = -2.*t8630*t5933;
  t14202 = t13697 + t13698 + t14197 + t13746 + t14200 + t13886;
  t14251 = 2.*t2790*t8630;
  t14253 = 2.*t8448*t8856;
  t14285 = t14251 + t14117 + t14119 + t14253 + t14121 + t14129;
  t14469 = -0.5*var2[4]*t14464;
  t8615 = 3.2*t8478*t8614;
  t8954 = 3.2*t8478*t8890;
  t9232 = 3.2*t9216*t6037;
  t9552 = 3.2*t8453*t9524;
  t9644 = t8615 + t8954 + t9232 + t9552;
  t8457 = 3.2*t8432*t8453;
  t8479 = 3.2*t8474*t8478;
  t8534 = 3.2*t8533*t8478;
  t8541 = 3.2*t8540*t6037;
  t8542 = t8457 + t8479 + t8534 + t8541;
  t8546 = -0.5*var2[3]*t8542;
  t15707 = t8547 + t8577;
  t9665 = -0.5*var2[2]*t9644;
  t15610 = 3.2*t8556*t8614;
  t15611 = 3.2*t8556*t8890;
  t15613 = 3.2*t9216*t8580;
  t15618 = 3.2*t8552*t9524;
  t15621 = t15610 + t15611 + t15613 + t15618;
  t13667 = 3.2*t13659*t8586;
  t13672 = 3.2*t8890*t8586;
  t13984 = 3.2*t8564*t13982;
  t14105 = 3.2*t8550*t14102;
  t14114 = 3.2*t8550*t9524;
  t14137 = 3.2*t8550*t14134;
  t14139 = t13601 + t13609 + t13667 + t13672 + t13984 + t14105 + t14114 + t14137;
  t15675 = 3.2*t13659*t6037;
  t15676 = 3.2*t8890*t6037;
  t15680 = 3.2*t8453*t13982;
  t15682 = 3.2*t8478*t14102;
  t15683 = 3.2*t8478*t9524;
  t15684 = 3.2*t8478*t14134;
  t15685 = t15667 + t15675 + t15676 + t15677 + t15680 + t15682 + t15683 + t15684;
  t14190 = 6.4*t8890*t8586;
  t14249 = 3.2*t8564*t14202;
  t14250 = 6.4*t8550*t9524;
  t14306 = 3.2*t8550*t14285;
  t14316 = t13601 + t13609 + t14190 + t14249 + t14250 + t14306;
  t15699 = 6.4*t8890*t6037;
  t15700 = 3.2*t8453*t14202;
  t15701 = 6.4*t8478*t9524;
  t15702 = 3.2*t8478*t14285;
  t15703 = t15667 + t15699 + t15677 + t15700 + t15701 + t15702;
  t15320 = -0.5*var2[4]*t15290;
  t15714 = -0.5*var2[4]*t9644;
  t15775 = 3.2*t8432*t8614;
  t15776 = 3.2*t8533*t9216;
  t15777 = 3.2*t8540*t8890;
  t15778 = 3.2*t8474*t9524;
  t15779 = t15775 + t15776 + t15777 + t15778;
  t15771 = 6.4*t9216*t8890;
  t15772 = 6.4*t8614*t9524;
  t15773 = t15771 + t15772;
  t15522 = 3.2*t8474*t8556;
  t15532 = 3.2*t8533*t8556;
  t15538 = 3.2*t8432*t8552;
  t15539 = 3.2*t8540*t8580;
  t15540 = t15522 + t15532 + t15538 + t15539;
  t15626 = 3.2*t8432*t8478;
  t15634 = 3.2*t8533*t6037;
  t15636 = t15626 + t15627 + t15634 + t15635;
  t10616 = 3.2*t8432*t8550;
  t11006 = 3.2*t8533*t8586;
  t11069 = t10616 + t10619 + t10971 + t11006;
  t15728 = 3.2*t8533*t13659;
  t15729 = 3.2*t8474*t13982;
  t15733 = 3.2*t8432*t14102;
  t15734 = 3.2*t8540*t14134;
  t15735 = t15728 + t15729 + t15733 + t15734;
  t15690 = 3.2*t8533*t8453;
  t15691 = 6.4*t8432*t8478;
  t15695 = 3.2*t14171*t8478;
  t15696 = 6.4*t8533*t6037;
  t15697 = t15690 + t15691 + t15695 + t15627 + t15696 + t15635;
  t14165 = 6.4*t8432*t8550;
  t14180 = 3.2*t14171*t8550;
  t14181 = 3.2*t8533*t8564;
  t14182 = 6.4*t8533*t8586;
  t14183 = t14165 + t14180 + t14181 + t10619 + t10971 + t14182;
  t15749 = 3.2*t8533*t8614;
  t15750 = 3.2*t14171*t9216;
  t15751 = 6.4*t8533*t8890;
  t15752 = 3.2*t8474*t14202;
  t15753 = 6.4*t8432*t9524;
  t15754 = 3.2*t8540*t14285;
  t15755 = t15749 + t15750 + t15751 + t15752 + t15753 + t15754;
  t15440 = -0.5*var2[4]*t15351;
  t15715 = -0.5*var2[4]*t8542;
  t15780 = -0.5*var2[4]*t15779;
  t15810 = 6.4*t8432*t8474;
  t15811 = 6.4*t8533*t8540;
  t15812 = t15810 + t15811;
  t15824 = -0.384*var2[0]*t10258;
  t15825 = -0.384*var2[1]*t11575;
  t6076 = -0.384*var2[4]*t6037;
  p_output1[0]=(t6076 + t8546 + t9665 - 0.5*(6.4*t6037*t8550 + 6.4*t8453*t8550 + 6.4*t8478*t8564 + 6.4*t8478*t8586)*var2[0] - 0.5*t8588*var2[1])*var2[4];
  p_output1[1]=(t10611 + t12127 + t13577 - 0.5*t14139*var2[2] - 0.5*t11069*var2[3])*var2[4];
  p_output1[2]=(t10611 + t12127 + t13577 - 0.5*t14316*var2[2] - 0.5*t14183*var2[3])*var2[4];
  p_output1[3]=-0.5*t14381*var2[4];
  p_output1[4]=t14469;
  p_output1[5]=t15320;
  p_output1[6]=t15440;
  p_output1[7]=-0.5*t14381*var2[0] - 0.5*t14464*var2[1] - 0.5*t15290*var2[2] - 0.5*t15351*var2[3] - 0.768*t8586*var2[4];
  p_output1[8]=var2[4]*(-0.5*t8588*var2[0] - 0.5*(6.4*t8478*t8552 + 6.4*t6037*t8556 + 6.4*t8453*t8556 + 6.4*t8478*t8580)*var2[1] - 0.5*t15621*var2[2] - 0.5*t15540*var2[3] - 0.384*t8580*var2[4]);
  p_output1[9]=(t15625 + t15665 + t15666 - 0.5*t15685*var2[2] - 0.5*t15636*var2[3])*var2[4];
  p_output1[10]=(t15625 + t15665 + t15666 - 0.5*t15703*var2[2] - 0.5*t15697*var2[3])*var2[4];
  p_output1[11]=t14469;
  p_output1[12]=-0.5*t15707*var2[4];
  p_output1[13]=t15714;
  p_output1[14]=t15715;
  p_output1[15]=t8546 + t9665 - 0.5*t14464*var2[0] - 0.5*t15707*var2[1] - 0.768*t6037*var2[4];
  p_output1[16]=(-0.5*t9644*var2[0] - 0.5*t15621*var2[1])*var2[4];
  p_output1[17]=var2[4]*(-0.5*t14139*var2[0] - 0.5*t15685*var2[1] - 0.5*(6.4*t13982*t8614 + 6.4*t13659*t8890 + 6.4*t14134*t9216 + 6.4*t14102*t9524)*var2[2] - 0.5*t15735*var2[3] - 0.384*t14134*var2[4]);
  p_output1[18]=var2[4]*(-0.5*t14316*var2[0] - 0.5*t15703*var2[1] - 0.5*(6.4*t14202*t8614 + 6.4*Power(t8890,2) + 6.4*t14285*t9216 + 6.4*Power(t9524,2))*var2[2] - 0.5*t15755*var2[3] - 0.384*t14285*var2[4]);
  p_output1[19]=t15320;
  p_output1[20]=t15714;
  p_output1[21]=-0.5*t15773*var2[4];
  p_output1[22]=t15780;
  p_output1[23]=-0.5*t15290*var2[0] - 0.5*t9644*var2[1] - 0.5*t15773*var2[2] - 0.5*t15779*var2[3] - 0.768*t8890*var2[4];
  p_output1[24]=(-0.5*t8542*var2[0] - 0.5*t15540*var2[1])*var2[4];
  p_output1[25]=(-0.5*t11069*var2[0] - 0.5*t15636*var2[1] - 0.5*t15735*var2[2])*var2[4];
  p_output1[26]=var2[4]*(-0.5*t14183*var2[0] - 0.5*t15697*var2[1] - 0.5*t15755*var2[2] - 0.5*(6.4*Power(t8432,2) + 6.4*t8474*t8533 + 6.4*Power(t8533,2) + 6.4*t14171*t8540)*var2[3] - 0.384*t14171*var2[4]);
  p_output1[27]=t15440;
  p_output1[28]=t15715;
  p_output1[29]=t15780;
  p_output1[30]=-0.5*t15812*var2[4];
  p_output1[31]=-0.5*t15351*var2[0] - 0.5*t8542*var2[1] - 0.5*t15779*var2[2] - 0.5*t15812*var2[3] - 0.768*t8533*var2[4];
  p_output1[32]=(-0.384*t6037*var2[0] - 0.384*t8580*var2[1])*var2[4];
  p_output1[33]=(t15824 + t15825 - 0.384*t14134*var2[2])*var2[4];
  p_output1[34]=(t15824 + t15825 - 0.384*t14285*var2[2] - 0.384*t14171*var2[3])*var2[4];
  p_output1[35]=-0.384*t8586*var2[4];
  p_output1[36]=t6076;
  p_output1[37]=-0.384*t8890*var2[4];
  p_output1[38]=-0.384*t8533*var2[4];
  p_output1[39]=-0.384*t8586*var2[0] - 0.384*t6037*var2[1] - 0.384*t8890*var2[2] - 0.384*t8533*var2[3];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce2_vec5_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce2_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
