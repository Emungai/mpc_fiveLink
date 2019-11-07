/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:45 GMT-05:00
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
  double t9674;
  double t8930;
  double t8931;
  double t9677;
  double t9697;
  double t6096;
  double t9698;
  double t9702;
  double t9704;
  double t9717;
  double t9718;
  double t9719;
  double t9722;
  double t9723;
  double t9666;
  double t9678;
  double t9682;
  double t9695;
  double t9706;
  double t9707;
  double t13330;
  double t13292;
  double t13297;
  double t13335;
  double t13339;
  double t13364;
  double t13375;
  double t13448;
  double t13449;
  double t13450;
  double t13451;
  double t13453;
  double t13304;
  double t13336;
  double t13337;
  double t13338;
  double t13390;
  double t13391;
  double t9710;
  double t9711;
  double t9715;
  double t13514;
  double t13515;
  double t13523;
  double t10733;
  double t10251;
  double t10258;
  double t10627;
  double t10643;
  double t10764;
  double t13417;
  double t13431;
  double t13432;
  double t13543;
  double t13544;
  double t13545;
  double t13495;
  double t13458;
  double t13459;
  double t13460;
  double t13487;
  double t13496;
  double t13525;
  double t13526;
  double t13527;
  double t13529;
  double t13530;
  double t13532;
  double t13536;
  double t13539;
  double t13547;
  double t13548;
  double t13549;
  double t13551;
  double t13552;
  double t13554;
  double t13555;
  double t13556;
  double t13609;
  double t13610;
  double t13611;
  double t13613;
  double t13614;
  double t13615;
  double t13629;
  double t13630;
  double t13631;
  double t13633;
  double t13634;
  double t13635;
  double t9716;
  double t10197;
  double t10219;
  double t10244;
  double t10855;
  double t10989;
  double t11172;
  double t11173;
  double t13646;
  double t13647;
  double t13648;
  double t13649;
  double t13650;
  double t13524;
  double t13528;
  double t13560;
  double t13561;
  double t13562;
  double t13563;
  double t13564;
  double t13565;
  double t13566;
  double t13567;
  double t13568;
  double t13569;
  double t13603;
  double t13604;
  double t13605;
  double t13606;
  double t13607;
  double t13608;
  double t13612;
  double t13616;
  double t13617;
  double t13619;
  double t13620;
  double t13621;
  double t13669;
  double t13670;
  double t13671;
  double t13651;
  double t13652;
  double t13653;
  double t13656;
  double t13657;
  double t13660;
  double t13661;
  double t13662;
  double t13663;
  double t13664;
  double t13665;
  double t13668;
  double t13673;
  double t13674;
  double t13678;
  double t13702;
  double t13703;
  double t13680;
  double t13705;
  double t13706;
  double t13682;
  double t13436;
  double t13455;
  double t13456;
  double t13457;
  double t13507;
  double t13508;
  double t13509;
  double t13510;
  double t13717;
  double t13718;
  double t13719;
  double t13720;
  double t13721;
  double t13546;
  double t13550;
  double t13580;
  double t13581;
  double t13582;
  double t13583;
  double t13584;
  double t13585;
  double t13586;
  double t13587;
  double t13588;
  double t13589;
  double t13623;
  double t13624;
  double t13625;
  double t13626;
  double t13627;
  double t13628;
  double t13632;
  double t13636;
  double t13637;
  double t13639;
  double t13640;
  double t13641;
  double t13740;
  double t13741;
  double t13742;
  double t13722;
  double t13723;
  double t13724;
  double t13727;
  double t13728;
  double t13731;
  double t13732;
  double t13733;
  double t13734;
  double t13735;
  double t13736;
  double t13739;
  double t13744;
  double t13745;
  double t13749;
  double t13773;
  double t13774;
  double t13751;
  double t13776;
  double t13777;
  double t13753;
  double t13570;
  double t13571;
  double t13577;
  double t13578;
  double t13590;
  double t13591;
  double t13597;
  double t13598;
  double t13572;
  double t13573;
  double t13574;
  double t13575;
  double t13576;
  double t13579;
  double t13592;
  double t13593;
  double t13594;
  double t13595;
  double t13596;
  double t13599;
  double t13600;
  double t13833;
  double t13844;
  double t13666;
  double t13854;
  double t13672;
  double t13675;
  double t13676;
  double t13679;
  double t13681;
  double t13683;
  double t13863;
  double t13692;
  double t13693;
  double t13694;
  double t13864;
  double t13688;
  double t13689;
  double t13690;
  double t13865;
  double t13868;
  double t13869;
  double t13700;
  double t13873;
  double t13704;
  double t13707;
  double t13708;
  double t13875;
  double t13710;
  double t13711;
  double t13712;
  double t13839;
  double t13847;
  double t13737;
  double t13857;
  double t13743;
  double t13746;
  double t13747;
  double t13750;
  double t13752;
  double t13754;
  double t13892;
  double t13763;
  double t13764;
  double t13765;
  double t13893;
  double t13759;
  double t13760;
  double t13761;
  double t13894;
  double t13897;
  double t13898;
  double t13771;
  double t13902;
  double t13775;
  double t13778;
  double t13779;
  double t13904;
  double t13781;
  double t13782;
  double t13783;
  double t13805;
  double t13806;
  double t13807;
  double t13808;
  double t13809;
  double t13810;
  double t13811;
  double t13812;
  double t13813;
  double t13788;
  double t13789;
  double t13790;
  double t13791;
  double t13602;
  double t13618;
  double t13622;
  double t13638;
  double t13642;
  double t13643;
  double t10853;
  double t11239;
  double t11248;
  double t13500;
  double t13511;
  double t13512;
  double t13853;
  double t13855;
  double t13856;
  double t13858;
  double t13859;
  double t13860;
  double t13874;
  double t13876;
  double t13877;
  double t13677;
  double t13684;
  double t13685;
  double t13887;
  double t13888;
  double t13889;
  double t13709;
  double t13713;
  double t13714;
  double t13903;
  double t13905;
  double t13906;
  double t13748;
  double t13755;
  double t13756;
  double t13916;
  double t13917;
  double t13918;
  double t13780;
  double t13784;
  double t13785;
  double t13814;
  double t13815;
  double t13816;
  double t13817;
  double t13818;
  double t13819;
  double t13820;
  double t13821;
  double t13834;
  double t13835;
  double t13836;
  double t13866;
  double t13654;
  double t13928;
  double t13929;
  double t13930;
  double t13880;
  double t13881;
  double t13882;
  double t13691;
  double t13695;
  double t13696;
  double t13940;
  double t13941;
  double t13942;
  double t13943;
  double t13944;
  double t13822;
  double t13823;
  double t13824;
  double t13825;
  double t13992;
  double t13993;
  double t13994;
  double t13995;
  double t14031;
  double t14032;
  double t13826;
  double t13922;
  double t13996;
  double t13997;
  double t14025;
  double t14026;
  double t13840;
  double t13841;
  double t13842;
  double t13895;
  double t13725;
  double t13954;
  double t13955;
  double t13956;
  double t13909;
  double t13910;
  double t13911;
  double t13762;
  double t13766;
  double t13767;
  double t13966;
  double t13967;
  double t13968;
  double t13969;
  double t13970;
  double t13827;
  double t13828;
  double t13829;
  double t13830;
  double t13998;
  double t13999;
  double t14000;
  double t14001;
  double t14064;
  double t14065;
  double t13831;
  double t13923;
  double t14002;
  double t14003;
  double t14058;
  double t14059;
  t9674 = Cos(var1[3]);
  t8930 = Cos(var1[4]);
  t8931 = Sin(var1[3]);
  t9677 = Sin(var1[4]);
  t9697 = Sin(var1[2]);
  t6096 = Cos(var1[2]);
  t9698 = t9674*t8930;
  t9702 = -1.*t8931*t9677;
  t9704 = t9698 + t9702;
  t9717 = -1.*t8930;
  t9718 = 1. + t9717;
  t9719 = 0.4*t9718;
  t9722 = 0.64*t8930;
  t9723 = t9719 + t9722;
  t9666 = -1.*t8930*t8931;
  t9678 = -1.*t9674*t9677;
  t9682 = t9666 + t9678;
  t9695 = t6096*t9682;
  t9706 = -1.*t9697*t9704;
  t9707 = t9695 + t9706;
  t13330 = Cos(var1[5]);
  t13292 = Cos(var1[6]);
  t13297 = Sin(var1[5]);
  t13335 = Sin(var1[6]);
  t13339 = t13330*t13292;
  t13364 = -1.*t13297*t13335;
  t13375 = t13339 + t13364;
  t13448 = -1.*t13292;
  t13449 = 1. + t13448;
  t13450 = 0.4*t13449;
  t13451 = 0.64*t13292;
  t13453 = t13450 + t13451;
  t13304 = -1.*t13292*t13297;
  t13336 = -1.*t13330*t13335;
  t13337 = t13304 + t13336;
  t13338 = t6096*t13337;
  t13390 = -1.*t9697*t13375;
  t13391 = t13338 + t13390;
  t9710 = -1.*t9674*t9697;
  t9711 = -1.*t6096*t8931;
  t9715 = t9710 + t9711;
  t13514 = t6096*t9674;
  t13515 = -1.*t9697*t8931;
  t13523 = t13514 + t13515;
  t10733 = t6096*t9704;
  t10251 = t8930*t8931;
  t10258 = t9674*t9677;
  t10627 = t10251 + t10258;
  t10643 = -1.*t9697*t10627;
  t10764 = t10643 + t10733;
  t13417 = -1.*t13330*t9697;
  t13431 = -1.*t6096*t13297;
  t13432 = t13417 + t13431;
  t13543 = t6096*t13330;
  t13544 = -1.*t9697*t13297;
  t13545 = t13543 + t13544;
  t13495 = t6096*t13375;
  t13458 = t13292*t13297;
  t13459 = t13330*t13335;
  t13460 = t13458 + t13459;
  t13487 = -1.*t9697*t13460;
  t13496 = t13487 + t13495;
  t13525 = t9674*t9697;
  t13526 = t6096*t8931;
  t13527 = t13525 + t13526;
  t13529 = t9697*t9682;
  t13530 = t13529 + t10733;
  t13532 = t6096*t10627;
  t13536 = t9697*t9704;
  t13539 = t13532 + t13536;
  t13547 = t13330*t9697;
  t13548 = t6096*t13297;
  t13549 = t13547 + t13548;
  t13551 = t9697*t13337;
  t13552 = t13551 + t13495;
  t13554 = t6096*t13460;
  t13555 = t9697*t13375;
  t13556 = t13554 + t13555;
  t13609 = t9723*t8931;
  t13610 = 0.24*t9674*t9677;
  t13611 = t13609 + t13610;
  t13613 = t9674*t9723;
  t13614 = -0.24*t8931*t9677;
  t13615 = t13613 + t13614;
  t13629 = t13453*t13297;
  t13630 = 0.24*t13330*t13335;
  t13631 = t13629 + t13630;
  t13633 = t13330*t13453;
  t13634 = -0.24*t13297*t13335;
  t13635 = t13633 + t13634;
  t9716 = -0.748*t9715;
  t10197 = t9723*t9677;
  t10219 = -0.24*t8930*t9677;
  t10244 = t10197 + t10219;
  t10855 = t9723*t8930;
  t10989 = Power(t9677,2);
  t11172 = 0.24*t10989;
  t11173 = t10855 + t11172;
  t13646 = -1.*t9674*t8930;
  t13647 = t8931*t9677;
  t13648 = t13646 + t13647;
  t13649 = t9697*t13648;
  t13650 = t9695 + t13649;
  t13524 = -13.6*t9715*t13523;
  t13528 = -13.6*t13527*t13523;
  t13560 = Power(t9715,2);
  t13561 = -6.8*t13560;
  t13562 = -6.8*t9715*t13527;
  t13563 = Power(t13523,2);
  t13564 = -6.8*t13563;
  t13565 = -1.*t6096*t9674;
  t13566 = t9697*t8931;
  t13567 = t13565 + t13566;
  t13568 = -6.8*t13523*t13567;
  t13569 = -1.*t9697*t9682;
  t13603 = Power(t9674,2);
  t13604 = 0.11*t13603;
  t13605 = Power(t8931,2);
  t13606 = 0.11*t13605;
  t13607 = t13604 + t13606;
  t13608 = -6.8*t9715*t13607;
  t13612 = -1.*t13611*t9704;
  t13616 = -1.*t9682*t13615;
  t13617 = t13612 + t13616;
  t13619 = t13611*t10627;
  t13620 = t9704*t13615;
  t13621 = t13619 + t13620;
  t13669 = -1.*t9723*t8931;
  t13670 = -0.24*t9674*t9677;
  t13671 = t13669 + t13670;
  t13651 = -0.768*var2[4]*t13650;
  t13652 = -3.2*t10244*t13530;
  t13653 = -3.2*t11173*t13650;
  t13656 = -6.4*t13530*t13539;
  t13657 = -6.4*t13530*t13650;
  t13660 = -3.2*t13530*t10764;
  t13661 = -3.2*t9707*t13539;
  t13662 = t6096*t13648;
  t13663 = t13569 + t13662;
  t13664 = -3.2*t13530*t13663;
  t13665 = -3.2*t9707*t13650;
  t13668 = -3.2*t13530*t13617;
  t13673 = t13611*t9704;
  t13674 = t9682*t13615;
  t13678 = -3.2*t13621*t13650;
  t13702 = -0.24*t8930*t8931;
  t13703 = t13702 + t13670;
  t13680 = -1.*t9682*t13611;
  t13705 = 0.24*t9674*t8930;
  t13706 = t13705 + t13614;
  t13682 = -1.*t13615*t13648;
  t13436 = -0.748*t13432;
  t13455 = t13453*t13335;
  t13456 = -0.24*t13292*t13335;
  t13457 = t13455 + t13456;
  t13507 = t13453*t13292;
  t13508 = Power(t13335,2);
  t13509 = 0.24*t13508;
  t13510 = t13507 + t13509;
  t13717 = -1.*t13330*t13292;
  t13718 = t13297*t13335;
  t13719 = t13717 + t13718;
  t13720 = t9697*t13719;
  t13721 = t13338 + t13720;
  t13546 = -13.6*t13432*t13545;
  t13550 = -13.6*t13549*t13545;
  t13580 = Power(t13432,2);
  t13581 = -6.8*t13580;
  t13582 = -6.8*t13432*t13549;
  t13583 = Power(t13545,2);
  t13584 = -6.8*t13583;
  t13585 = -1.*t6096*t13330;
  t13586 = t9697*t13297;
  t13587 = t13585 + t13586;
  t13588 = -6.8*t13545*t13587;
  t13589 = -1.*t9697*t13337;
  t13623 = Power(t13330,2);
  t13624 = 0.11*t13623;
  t13625 = Power(t13297,2);
  t13626 = 0.11*t13625;
  t13627 = t13624 + t13626;
  t13628 = -6.8*t13432*t13627;
  t13632 = -1.*t13631*t13375;
  t13636 = -1.*t13337*t13635;
  t13637 = t13632 + t13636;
  t13639 = t13631*t13460;
  t13640 = t13375*t13635;
  t13641 = t13639 + t13640;
  t13740 = -1.*t13453*t13297;
  t13741 = -0.24*t13330*t13335;
  t13742 = t13740 + t13741;
  t13722 = -0.768*var2[6]*t13721;
  t13723 = -3.2*t13457*t13552;
  t13724 = -3.2*t13510*t13721;
  t13727 = -6.4*t13552*t13556;
  t13728 = -6.4*t13552*t13721;
  t13731 = -3.2*t13552*t13496;
  t13732 = -3.2*t13391*t13556;
  t13733 = t6096*t13719;
  t13734 = t13589 + t13733;
  t13735 = -3.2*t13552*t13734;
  t13736 = -3.2*t13391*t13721;
  t13739 = -3.2*t13552*t13637;
  t13744 = t13631*t13375;
  t13745 = t13337*t13635;
  t13749 = -3.2*t13641*t13721;
  t13773 = -0.24*t13292*t13297;
  t13774 = t13773 + t13741;
  t13751 = -1.*t13337*t13631;
  t13776 = 0.24*t13330*t13292;
  t13777 = t13776 + t13634;
  t13753 = -1.*t13635*t13719;
  t13570 = -1.*t6096*t9704;
  t13571 = t13569 + t13570;
  t13577 = -1.*t6096*t10627;
  t13578 = t13577 + t9706;
  t13590 = -1.*t6096*t13375;
  t13591 = t13589 + t13590;
  t13597 = -1.*t6096*t13460;
  t13598 = t13597 + t13390;
  t13572 = -3.2*t13571*t13530;
  t13573 = Power(t10764,2);
  t13574 = -3.2*t13573;
  t13575 = Power(t9707,2);
  t13576 = -3.2*t13575;
  t13579 = -3.2*t13578*t13539;
  t13592 = -3.2*t13591*t13552;
  t13593 = Power(t13496,2);
  t13594 = -3.2*t13593;
  t13595 = Power(t13391,2);
  t13596 = -3.2*t13595;
  t13599 = -3.2*t13598*t13556;
  t13600 = t13561 + t13562 + t13564 + t13568 + t13572 + t13574 + t13576 + t13579 + t13581 + t13582 + t13584 + t13588 + t13592 + t13594 + t13596 + t13599;
  t13833 = -0.748*t13567;
  t13844 = -13.6*t9715*t13567;
  t13666 = t13561 + t13562 + t13564 + t13568 + t13660 + t13661 + t13664 + t13665;
  t13854 = -6.8*t13567*t13607;
  t13672 = t13671*t9704;
  t13675 = t10627*t13615;
  t13676 = t13672 + t13673 + t13674 + t13675;
  t13679 = -1.*t9682*t13671;
  t13681 = -1.*t9704*t13615;
  t13683 = t13679 + t13680 + t13681 + t13682;
  t13863 = -0.768*var2[4]*t13663;
  t13692 = Power(t8930,2);
  t13693 = -0.24*t13692;
  t13694 = t10855 + t13693;
  t13864 = -3.2*t10244*t9707;
  t13688 = -1.*t9723*t9677;
  t13689 = 0.24*t8930*t9677;
  t13690 = t13688 + t13689;
  t13865 = -3.2*t11173*t13663;
  t13868 = -6.4*t10764*t9707;
  t13869 = -6.4*t9707*t13663;
  t13700 = t13660 + t13661 + t13664 + t13665;
  t13873 = -3.2*t9707*t13617;
  t13704 = t13703*t9704;
  t13707 = t10627*t13706;
  t13708 = t13704 + t13673 + t13674 + t13707;
  t13875 = -3.2*t13621*t13663;
  t13710 = -1.*t9682*t13703;
  t13711 = -1.*t9704*t13706;
  t13712 = t13710 + t13680 + t13711 + t13682;
  t13839 = -0.748*t13587;
  t13847 = -13.6*t13432*t13587;
  t13737 = t13581 + t13582 + t13584 + t13588 + t13731 + t13732 + t13735 + t13736;
  t13857 = -6.8*t13587*t13627;
  t13743 = t13742*t13375;
  t13746 = t13460*t13635;
  t13747 = t13743 + t13744 + t13745 + t13746;
  t13750 = -1.*t13337*t13742;
  t13752 = -1.*t13375*t13635;
  t13754 = t13750 + t13751 + t13752 + t13753;
  t13892 = -0.768*var2[6]*t13734;
  t13763 = Power(t13292,2);
  t13764 = -0.24*t13763;
  t13765 = t13507 + t13764;
  t13893 = -3.2*t13457*t13391;
  t13759 = -1.*t13453*t13335;
  t13760 = 0.24*t13292*t13335;
  t13761 = t13759 + t13760;
  t13894 = -3.2*t13510*t13734;
  t13897 = -6.4*t13496*t13391;
  t13898 = -6.4*t13391*t13734;
  t13771 = t13731 + t13732 + t13735 + t13736;
  t13902 = -3.2*t13391*t13637;
  t13775 = t13774*t13375;
  t13778 = t13460*t13777;
  t13779 = t13775 + t13744 + t13745 + t13778;
  t13904 = -3.2*t13641*t13734;
  t13781 = -1.*t13337*t13774;
  t13782 = -1.*t13375*t13777;
  t13783 = t13781 + t13751 + t13782 + t13753;
  t13805 = -6.8*t9715*t13523;
  t13806 = -6.8*t13527*t13523;
  t13807 = -3.2*t13530*t9707;
  t13808 = -3.2*t10764*t13539;
  t13809 = -6.8*t13432*t13545;
  t13810 = -6.8*t13549*t13545;
  t13811 = -3.2*t13552*t13391;
  t13812 = -3.2*t13496*t13556;
  t13813 = t13805 + t13806 + t13807 + t13808 + t13809 + t13810 + t13811 + t13812;
  t13788 = Power(t6096,2);
  t13789 = -12.*t13788;
  t13790 = Power(t9697,2);
  t13791 = -12.*t13790;
  t13602 = 2.88*t9697;
  t13618 = -3.2*t10764*t13617;
  t13622 = -3.2*t9707*t13621;
  t13638 = -3.2*t13496*t13637;
  t13642 = -3.2*t13391*t13641;
  t13643 = t13602 + t13608 + t13618 + t13622 + t13628 + t13638 + t13642;
  t10853 = -3.2*t10244*t10764;
  t11239 = -3.2*t11173*t9707;
  t11248 = t9716 + t10853 + t11239;
  t13500 = -3.2*t13457*t13496;
  t13511 = -3.2*t13510*t13391;
  t13512 = t13436 + t13500 + t13511;
  t13853 = 2.88*t6096;
  t13855 = -3.2*t13578*t13617;
  t13856 = -3.2*t13571*t13621;
  t13858 = -3.2*t13598*t13637;
  t13859 = -3.2*t13591*t13641;
  t13860 = t13853 + t13854 + t13855 + t13856 + t13857 + t13858 + t13859;
  t13874 = -3.2*t9707*t13676;
  t13876 = -3.2*t10764*t13683;
  t13877 = t13854 + t13873 + t13874 + t13875 + t13876;
  t13677 = -3.2*t13530*t13676;
  t13684 = -3.2*t13539*t13683;
  t13685 = t13608 + t13668 + t13677 + t13678 + t13684;
  t13887 = -3.2*t9707*t13708;
  t13888 = -3.2*t10764*t13712;
  t13889 = t13873 + t13887 + t13875 + t13888;
  t13709 = -3.2*t13530*t13708;
  t13713 = -3.2*t13539*t13712;
  t13714 = t13668 + t13709 + t13678 + t13713;
  t13903 = -3.2*t13391*t13747;
  t13905 = -3.2*t13496*t13754;
  t13906 = t13857 + t13902 + t13903 + t13904 + t13905;
  t13748 = -3.2*t13552*t13747;
  t13755 = -3.2*t13556*t13754;
  t13756 = t13628 + t13739 + t13748 + t13749 + t13755;
  t13916 = -3.2*t13391*t13779;
  t13917 = -3.2*t13496*t13783;
  t13918 = t13902 + t13916 + t13904 + t13917;
  t13780 = -3.2*t13552*t13779;
  t13784 = -3.2*t13556*t13783;
  t13785 = t13739 + t13780 + t13749 + t13784;
  t13814 = -2.88*t6096;
  t13815 = -6.8*t13523*t13607;
  t13816 = -3.2*t13539*t13617;
  t13817 = -3.2*t13530*t13621;
  t13818 = -6.8*t13545*t13627;
  t13819 = -3.2*t13556*t13637;
  t13820 = -3.2*t13552*t13641;
  t13821 = t13814 + t13815 + t13816 + t13817 + t13818 + t13819 + t13820;
  t13834 = -3.2*t11173*t13571;
  t13835 = -3.2*t10244*t13578;
  t13836 = t13833 + t13834 + t13835;
  t13866 = t13833 + t13864 + t13865;
  t13654 = t9716 + t13652 + t13653;
  t13928 = -3.2*t11173*t13676;
  t13929 = -3.2*t10244*t13683;
  t13930 = t13928 + t13929;
  t13880 = -3.2*t13694*t10764;
  t13881 = -3.2*t13690*t9707;
  t13882 = t13880 + t13864 + t13881 + t13865;
  t13691 = -3.2*t13690*t13530;
  t13695 = -3.2*t13694*t13539;
  t13696 = t13652 + t13691 + t13695 + t13653;
  t13940 = -3.2*t13694*t13617;
  t13941 = -3.2*t13690*t13621;
  t13942 = -3.2*t11173*t13708;
  t13943 = -3.2*t10244*t13712;
  t13944 = t13940 + t13941 + t13942 + t13943;
  t13822 = -0.748*t13523;
  t13823 = -3.2*t11173*t13530;
  t13824 = -3.2*t10244*t13539;
  t13825 = t13822 + t13823 + t13824;
  t13992 = -0.748*t13607;
  t13993 = -3.2*t10244*t13617;
  t13994 = -3.2*t11173*t13621;
  t13995 = -0.67 + t13992 + t13993 + t13994;
  t14031 = -0.768*var2[1]*t13663;
  t14032 = -0.768*var2[0]*t13650;
  t13826 = -0.768*t13530;
  t13922 = -0.768*t9707;
  t13996 = -0.768*t13621;
  t13997 = -0.2 + t13996;
  t14025 = -0.768*t11173;
  t14026 = -0.2 + t14025;
  t13840 = -3.2*t13510*t13591;
  t13841 = -3.2*t13457*t13598;
  t13842 = t13839 + t13840 + t13841;
  t13895 = t13839 + t13893 + t13894;
  t13725 = t13436 + t13723 + t13724;
  t13954 = -3.2*t13510*t13747;
  t13955 = -3.2*t13457*t13754;
  t13956 = t13954 + t13955;
  t13909 = -3.2*t13765*t13496;
  t13910 = -3.2*t13761*t13391;
  t13911 = t13909 + t13893 + t13910 + t13894;
  t13762 = -3.2*t13761*t13552;
  t13766 = -3.2*t13765*t13556;
  t13767 = t13723 + t13762 + t13766 + t13724;
  t13966 = -3.2*t13765*t13637;
  t13967 = -3.2*t13761*t13641;
  t13968 = -3.2*t13510*t13779;
  t13969 = -3.2*t13457*t13783;
  t13970 = t13966 + t13967 + t13968 + t13969;
  t13827 = -0.748*t13545;
  t13828 = -3.2*t13510*t13552;
  t13829 = -3.2*t13457*t13556;
  t13830 = t13827 + t13828 + t13829;
  t13998 = -0.748*t13627;
  t13999 = -3.2*t13457*t13637;
  t14000 = -3.2*t13510*t13641;
  t14001 = -0.67 + t13998 + t13999 + t14000;
  t14064 = -0.768*var2[1]*t13734;
  t14065 = -0.768*var2[0]*t13721;
  t13831 = -0.768*t13552;
  t13923 = -0.768*t13391;
  t14002 = -0.768*t13641;
  t14003 = -0.2 + t14002;
  t14058 = -0.768*t13510;
  t14059 = -0.2 + t14058;
  p_output1[0]=(t13524 + t13528 - 6.4*t10764*t13539 + t13546 + t13550 - 6.4*t13391*t13552 - 6.4*t13496*t13556 - 6.4*t13530*t9707)*var2[0] + t13600*var2[1] + t13643*var2[2] + t11248*var2[3] - 0.768*t9707*var2[4] + t13512*var2[5] - 0.768*t13391*var2[6];
  p_output1[1]=t13651 + (t13524 + t13528 + t13656 + t13657)*var2[0] + t13666*var2[1] + t13685*var2[2] + t13654*var2[3];
  p_output1[2]=t13651 + (t13656 + t13657)*var2[0] + t13700*var2[1] + t13714*var2[2] + t13696*var2[3];
  p_output1[3]=t13722 + (t13546 + t13550 + t13727 + t13728)*var2[0] + t13737*var2[1] + t13756*var2[2] + t13725*var2[5];
  p_output1[4]=t13722 + (t13727 + t13728)*var2[0] + t13771*var2[1] + t13785*var2[2] + t13767*var2[5];
  p_output1[5]=-6.8*Power(t13527,2) - 3.2*Power(t13530,2) - 3.2*Power(t13539,2) - 6.8*Power(t13549,2) - 3.2*Power(t13552,2) - 3.2*Power(t13556,2) + t13564 + t13584 + t13789 + t13791;
  p_output1[6]=t13813;
  p_output1[7]=t13821;
  p_output1[8]=t13825;
  p_output1[9]=t13826;
  p_output1[10]=t13830;
  p_output1[11]=t13831;
  p_output1[12]=t13600*var2[0] + (t13524 + t13546 - 6.4*t10764*t13578 - 6.4*t13391*t13591 - 6.4*t13496*t13598 + t13844 + t13847 - 6.4*t13571*t9707)*var2[1] + t13860*var2[2] + t13836*var2[3] - 0.768*t13571*var2[4] + t13842*var2[5] - 0.768*t13591*var2[6];
  p_output1[13]=t13863 + t13666*var2[0] + (t13524 + t13844 + t13868 + t13869)*var2[1] + t13877*var2[2] + t13866*var2[3];
  p_output1[14]=t13863 + t13700*var2[0] + (t13868 + t13869)*var2[1] + t13889*var2[2] + t13882*var2[3];
  p_output1[15]=t13892 + t13737*var2[0] + (t13546 + t13847 + t13897 + t13898)*var2[1] + t13906*var2[2] + t13895*var2[5];
  p_output1[16]=t13892 + t13771*var2[0] + (t13897 + t13898)*var2[1] + t13918*var2[2] + t13911*var2[5];
  p_output1[17]=t13813;
  p_output1[18]=t13561 + t13564 + t13574 + t13576 + t13581 + t13584 + t13594 + t13596 + t13789 + t13791;
  p_output1[19]=t13643;
  p_output1[20]=t11248;
  p_output1[21]=t13922;
  p_output1[22]=t13512;
  p_output1[23]=t13923;
  p_output1[24]=t13643*var2[0] + t13860*var2[1];
  p_output1[25]=t13685*var2[0] + t13877*var2[1] + (-6.4*t13621*t13676 - 6.4*t13617*t13683)*var2[2] + t13930*var2[3] - 0.768*t13676*var2[4];
  p_output1[26]=t13714*var2[0] + t13889*var2[1] + (-6.4*t13621*t13708 - 6.4*t13617*t13712)*var2[2] + t13944*var2[3] - 0.768*t13708*var2[4];
  p_output1[27]=t13756*var2[0] + t13906*var2[1] + (-6.4*t13641*t13747 - 6.4*t13637*t13754)*var2[2] + t13956*var2[5] - 0.768*t13747*var2[6];
  p_output1[28]=t13785*var2[0] + t13918*var2[1] + (-6.4*t13641*t13779 - 6.4*t13637*t13783)*var2[2] + t13970*var2[5] - 0.768*t13779*var2[6];
  p_output1[29]=t13821;
  p_output1[30]=t13643;
  p_output1[31]=-3.3612 - 6.8*Power(t13607,2) - 3.2*Power(t13617,2) - 3.2*Power(t13621,2) - 6.8*Power(t13627,2) - 3.2*Power(t13637,2) - 3.2*Power(t13641,2);
  p_output1[32]=t13995;
  p_output1[33]=t13997;
  p_output1[34]=t14001;
  p_output1[35]=t14003;
  p_output1[36]=t11248*var2[0] + t13836*var2[1];
  p_output1[37]=t13654*var2[0] + t13866*var2[1] + t13930*var2[2];
  p_output1[38]=t13696*var2[0] + t13882*var2[1] + t13944*var2[2] + (-6.4*t11173*t13690 - 6.4*t10244*t13694)*var2[3] - 0.768*t13690*var2[4];
  p_output1[39]=t13825;
  p_output1[40]=t11248;
  p_output1[41]=t13995;
  p_output1[42]=-1.58228 - 3.2*Power(t10244,2) - 3.2*Power(t11173,2);
  p_output1[43]=t14026;
  p_output1[44]=-0.768*t9707*var2[0] - 0.768*t13571*var2[1];
  p_output1[45]=t14031 + t14032 - 0.768*t13676*var2[2];
  p_output1[46]=t14031 + t14032 - 0.768*t13708*var2[2] - 0.768*t13690*var2[3];
  p_output1[47]=t13826;
  p_output1[48]=t13922;
  p_output1[49]=t13997;
  p_output1[50]=t14026;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t13512*var2[0] + t13842*var2[1];
  p_output1[53]=t13725*var2[0] + t13895*var2[1] + t13956*var2[2];
  p_output1[54]=t13767*var2[0] + t13911*var2[1] + t13970*var2[2] + (-6.4*t13510*t13761 - 6.4*t13457*t13765)*var2[5] - 0.768*t13761*var2[6];
  p_output1[55]=t13830;
  p_output1[56]=t13512;
  p_output1[57]=t14001;
  p_output1[58]=-1.58228 - 3.2*Power(t13457,2) - 3.2*Power(t13510,2);
  p_output1[59]=t14059;
  p_output1[60]=-0.768*t13391*var2[0] - 0.768*t13591*var2[1];
  p_output1[61]=t14064 + t14065 - 0.768*t13747*var2[2];
  p_output1[62]=t14064 + t14065 - 0.768*t13779*var2[2] - 0.768*t13761*var2[5];
  p_output1[63]=t13831;
  p_output1[64]=t13923;
  p_output1[65]=t14003;
  p_output1[66]=t14059;
  p_output1[67]=-1.2143199999999998;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 68, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
