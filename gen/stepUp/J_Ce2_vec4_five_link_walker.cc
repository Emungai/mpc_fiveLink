/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:40:08 GMT-05:00
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
  double t5250;
  double t2996;
  double t3124;
  double t5257;
  double t5269;
  double t2995;
  double t3182;
  double t5259;
  double t5261;
  double t5349;
  double t5368;
  double t5369;
  double t5370;
  double t5380;
  double t5262;
  double t5271;
  double t5273;
  double t5274;
  double t5275;
  double t5276;
  double t5489;
  double t5508;
  double t5513;
  double t5477;
  double t5478;
  double t5479;
  double t5321;
  double t5331;
  double t5343;
  double t5519;
  double t5520;
  double t5521;
  double t5399;
  double t5400;
  double t5410;
  double t5398;
  double t5422;
  double t5427;
  double t5551;
  double t5541;
  double t5542;
  double t5547;
  double t5554;
  double t5555;
  double t5561;
  double t5562;
  double t5550;
  double t5552;
  double t5563;
  double t5564;
  double t5565;
  double t5588;
  double t5589;
  double t5641;
  double t5642;
  double t5643;
  double t5652;
  double t5653;
  double t5654;
  double t5662;
  double t5663;
  double t5664;
  double t5348;
  double t5447;
  double t5448;
  double t5449;
  double t5459;
  double t5685;
  double t5686;
  double t5382;
  double t5383;
  double t5384;
  double t5514;
  double t5530;
  double t5531;
  double t5536;
  double t5577;
  double t5601;
  double t5602;
  double t5603;
  double t5604;
  double t5608;
  double t5609;
  double t5629;
  double t5630;
  double t5634;
  double t5635;
  double t5636;
  double t5637;
  double t5671;
  double t5672;
  double t5673;
  double t5651;
  double t5655;
  double t5660;
  double t5665;
  double t5666;
  double t5667;
  double t5668;
  double t5669;
  double t5675;
  double t5676;
  double t5677;
  double t5678;
  double t5679;
  double t5719;
  double t5720;
  double t5721;
  double t5687;
  double t5688;
  double t5689;
  double t5692;
  double t5693;
  double t5694;
  double t5695;
  double t5696;
  double t5697;
  double t5698;
  double t5701;
  double t5702;
  double t5707;
  double t5708;
  double t5709;
  double t5710;
  double t5713;
  double t5714;
  double t5759;
  double t5760;
  double t5718;
  double t5762;
  double t5763;
  double t5724;
  double t5733;
  double t5769;
  double t5770;
  double t5737;
  double t5792;
  double t5793;
  double t5794;
  double t5795;
  double t5796;
  double t5798;
  double t5799;
  double t5800;
  double t5801;
  double t5802;
  double t5803;
  double t5804;
  double t5805;
  double t5806;
  double t5808;
  double t5809;
  double t5810;
  double t5811;
  double t5812;
  double t5813;
  double t5576;
  double t5582;
  double t5558;
  double t5559;
  double t5553;
  double t5560;
  double t5566;
  double t5575;
  double t5587;
  double t5595;
  double t5596;
  double t5827;
  double t5832;
  double t5833;
  double t5699;
  double t5841;
  double t5716;
  double t5717;
  double t5722;
  double t5723;
  double t5725;
  double t5728;
  double t5734;
  double t5735;
  double t5736;
  double t5738;
  double t5850;
  double t5744;
  double t5745;
  double t5746;
  double t5851;
  double t5748;
  double t5749;
  double t5750;
  double t5852;
  double t5855;
  double t5856;
  double t5857;
  double t5858;
  double t5859;
  double t5860;
  double t5754;
  double t5864;
  double t5761;
  double t5764;
  double t5765;
  double t5866;
  double t5767;
  double t5768;
  double t5771;
  double t5772;
  double t5773;
  double t5774;
  double t5777;
  double t5778;
  double t5779;
  double t5781;
  double t5782;
  double t5783;
  double t5784;
  double t5785;
  double t5786;
  double t5807;
  double t5661;
  double t5670;
  double t5674;
  double t5680;
  double t5681;
  double t5320;
  double t5428;
  double t5461;
  double t5462;
  double t5891;
  double t5892;
  double t5682;
  double t5842;
  double t5843;
  double t5844;
  double t5845;
  double t5846;
  double t5715;
  double t5726;
  double t5727;
  double t5739;
  double t5740;
  double t5865;
  double t5867;
  double t5868;
  double t5869;
  double t5870;
  double t5758;
  double t5766;
  double t5775;
  double t5776;
  double t5780;
  double t5787;
  double t5788;
  double t5881;
  double t5882;
  double t5883;
  double t5884;
  double t5885;
  double t5886;
  double t5887;
  double t5814;
  double t5894;
  double t5938;
  double t5939;
  double t5940;
  double t5828;
  double t5829;
  double t5830;
  double t5853;
  double t5690;
  double t5905;
  double t5906;
  double t5907;
  double t5874;
  double t5875;
  double t5876;
  double t5747;
  double t5751;
  double t5752;
  double t5922;
  double t5923;
  double t5924;
  double t5925;
  double t5926;
  double t5816;
  double t5817;
  double t5818;
  double t5819;
  double t5463;
  double t5943;
  double t5944;
  double t5945;
  double t5976;
  double t5977;
  double t5825;
  double t5899;
  double t5951;
  t5250 = Cos(var1[3]);
  t2996 = Cos(var1[4]);
  t3124 = Sin(var1[3]);
  t5257 = Sin(var1[4]);
  t5269 = Cos(var1[2]);
  t2995 = Sin(var1[2]);
  t3182 = -1.*t2996*t3124;
  t5259 = -1.*t5250*t5257;
  t5261 = t3182 + t5259;
  t5349 = -1.*t2996;
  t5368 = 1. + t5349;
  t5369 = 0.4*t5368;
  t5370 = 0.64*t2996;
  t5380 = t5369 + t5370;
  t5262 = -1.*t2995*t5261;
  t5271 = -1.*t5250*t2996;
  t5273 = t3124*t5257;
  t5274 = t5271 + t5273;
  t5275 = t5269*t5274;
  t5276 = t5262 + t5275;
  t5489 = t5269*t5250;
  t5508 = -1.*t2995*t3124;
  t5513 = t5489 + t5508;
  t5477 = -1.*t5250*t2995;
  t5478 = -1.*t5269*t3124;
  t5479 = t5477 + t5478;
  t5321 = -1.*t5269*t5250;
  t5331 = t2995*t3124;
  t5343 = t5321 + t5331;
  t5519 = t5250*t2995;
  t5520 = t5269*t3124;
  t5521 = t5519 + t5520;
  t5399 = t5250*t2996;
  t5400 = -1.*t3124*t5257;
  t5410 = t5399 + t5400;
  t5398 = t5269*t5261;
  t5422 = -1.*t2995*t5410;
  t5427 = t5398 + t5422;
  t5551 = t5269*t5410;
  t5541 = t2996*t3124;
  t5542 = t5250*t5257;
  t5547 = t5541 + t5542;
  t5554 = t2995*t5261;
  t5555 = t5554 + t5551;
  t5561 = -1.*t5269*t5410;
  t5562 = t5262 + t5561;
  t5550 = -1.*t2995*t5547;
  t5552 = t5550 + t5551;
  t5563 = t5269*t5547;
  t5564 = t2995*t5410;
  t5565 = t5563 + t5564;
  t5588 = t2995*t5274;
  t5589 = t5398 + t5588;
  t5641 = t5380*t3124;
  t5642 = 0.24*t5250*t5257;
  t5643 = t5641 + t5642;
  t5652 = t5250*t5380;
  t5653 = -0.24*t3124*t5257;
  t5654 = t5652 + t5653;
  t5662 = -1.*t5380*t3124;
  t5663 = -0.24*t5250*t5257;
  t5664 = t5662 + t5663;
  t5348 = 0.748*t5343;
  t5447 = t5380*t2996;
  t5448 = Power(t5257,2);
  t5449 = 0.24*t5448;
  t5459 = t5447 + t5449;
  t5685 = t2995*t5547;
  t5686 = t5685 + t5275;
  t5382 = t5380*t5257;
  t5383 = -0.24*t2996*t5257;
  t5384 = t5382 + t5383;
  t5514 = 20.4*t5479*t5513;
  t5530 = 6.8*t5521*t5513;
  t5531 = 20.4*t5479*t5343;
  t5536 = 6.8*t5521*t5343;
  t5577 = -1.*t2995*t5274;
  t5601 = Power(t5479,2);
  t5602 = 13.6*t5601;
  t5603 = 13.6*t5479*t5521;
  t5604 = Power(t5513,2);
  t5608 = 13.6*t5604;
  t5609 = 13.6*t5513*t5343;
  t5629 = Power(t5250,2);
  t5630 = 0.11*t5629;
  t5634 = Power(t3124,2);
  t5635 = 0.11*t5634;
  t5636 = t5630 + t5635;
  t5637 = 6.8*t5343*t5636;
  t5671 = t5643*t5547;
  t5672 = t5410*t5654;
  t5673 = t5671 + t5672;
  t5651 = -1.*t5643*t5410;
  t5655 = -1.*t5261*t5654;
  t5660 = t5651 + t5655;
  t5665 = t5664*t5410;
  t5666 = t5643*t5410;
  t5667 = t5261*t5654;
  t5668 = t5547*t5654;
  t5669 = t5665 + t5666 + t5667 + t5668;
  t5675 = -1.*t5261*t5664;
  t5676 = -1.*t5261*t5643;
  t5677 = -1.*t5410*t5654;
  t5678 = -1.*t5654*t5274;
  t5679 = t5675 + t5676 + t5677 + t5678;
  t5719 = -1.*t5250*t5380;
  t5720 = 0.24*t3124*t5257;
  t5721 = t5719 + t5720;
  t5687 = -0.384*var2[4]*t5686;
  t5688 = 3.2*t5459*t5686;
  t5689 = 3.2*t5384*t5589;
  t5692 = 6.4*t5555*t5427;
  t5693 = 3.2*t5565*t5276;
  t5694 = 3.2*t5427*t5686;
  t5695 = t5563 + t5577;
  t5696 = 3.2*t5555*t5695;
  t5697 = 3.2*t5552*t5589;
  t5698 = 6.4*t5276*t5589;
  t5701 = Power(t5555,2);
  t5702 = 6.4*t5701;
  t5707 = 6.4*t5555*t5686;
  t5708 = 6.4*t5565*t5589;
  t5709 = Power(t5589,2);
  t5710 = 6.4*t5709;
  t5713 = 3.2*t5673*t5686;
  t5714 = 3.2*t5660*t5589;
  t5759 = -0.24*t2996*t3124;
  t5760 = t5759 + t5663;
  t5718 = -1.*t5547*t5654;
  t5762 = 0.24*t5250*t2996;
  t5763 = t5762 + t5653;
  t5724 = -1.*t5643*t5274;
  t5733 = t5261*t5643;
  t5769 = -0.24*t5250*t2996;
  t5770 = t5769 + t5720;
  t5737 = t5654*t5274;
  t5792 = 13.6*t5479*t5513;
  t5793 = 13.6*t5521*t5513;
  t5794 = 6.4*t5555*t5565;
  t5795 = 6.4*t5555*t5589;
  t5796 = t5792 + t5793 + t5794 + t5795;
  t5798 = 6.8*t5601;
  t5799 = 6.8*t5479*t5521;
  t5800 = 6.8*t5604;
  t5801 = 6.8*t5513*t5343;
  t5802 = 3.2*t5555*t5552;
  t5803 = 3.2*t5427*t5565;
  t5804 = 3.2*t5555*t5276;
  t5805 = 3.2*t5427*t5589;
  t5806 = t5798 + t5799 + t5800 + t5801 + t5802 + t5803 + t5804 + t5805;
  t5808 = 6.8*t5479*t5636;
  t5809 = 3.2*t5555*t5660;
  t5810 = 3.2*t5555*t5669;
  t5811 = 3.2*t5673*t5589;
  t5812 = 3.2*t5565*t5679;
  t5813 = t5808 + t5809 + t5810 + t5811 + t5812;
  t5576 = -1.*t5269*t5261;
  t5582 = t5576 + t5577;
  t5558 = -1.*t5269*t5547;
  t5559 = t5558 + t5422;
  t5553 = 6.4*t5552*t5427;
  t5560 = 3.2*t5555*t5559;
  t5566 = 3.2*t5562*t5565;
  t5575 = 6.4*t5427*t5276;
  t5587 = 3.2*t5555*t5582;
  t5595 = 3.2*t5562*t5589;
  t5596 = t5514 + t5530 + t5531 + t5536 + t5553 + t5560 + t5566 + t5575 + t5587 + t5595;
  t5827 = 0.748*t5521;
  t5832 = Power(t5343,2);
  t5833 = 13.6*t5832;
  t5699 = t5514 + t5530 + t5531 + t5536 + t5692 + t5693 + t5694 + t5696 + t5697 + t5698;
  t5841 = 6.8*t5521*t5636;
  t5716 = -1.*t5664*t5410;
  t5717 = -2.*t5261*t5654;
  t5722 = -1.*t5261*t5721;
  t5723 = -2.*t5664*t5274;
  t5725 = t5716 + t5717 + t5718 + t5722 + t5723 + t5724;
  t5728 = 2.*t5261*t5664;
  t5734 = t5664*t5547;
  t5735 = 2.*t5410*t5654;
  t5736 = t5410*t5721;
  t5738 = t5728 + t5733 + t5734 + t5735 + t5736 + t5737;
  t5850 = -0.384*var2[4]*t5695;
  t5744 = Power(t2996,2);
  t5745 = -0.24*t5744;
  t5746 = t5447 + t5745;
  t5851 = 3.2*t5384*t5276;
  t5748 = -1.*t5380*t5257;
  t5749 = 0.24*t2996*t5257;
  t5750 = t5748 + t5749;
  t5852 = 3.2*t5459*t5695;
  t5855 = Power(t5427,2);
  t5856 = 6.4*t5855;
  t5857 = 6.4*t5552*t5276;
  t5858 = Power(t5276,2);
  t5859 = 6.4*t5858;
  t5860 = 6.4*t5427*t5695;
  t5754 = t5692 + t5693 + t5694 + t5696 + t5697 + t5698;
  t5864 = 3.2*t5660*t5276;
  t5761 = t5760*t5410;
  t5764 = t5547*t5763;
  t5765 = t5761 + t5666 + t5667 + t5764;
  t5866 = 3.2*t5673*t5695;
  t5767 = -1.*t5760*t5410;
  t5768 = -1.*t5261*t5763;
  t5771 = -1.*t5261*t5770;
  t5772 = -1.*t5664*t5274;
  t5773 = -1.*t5760*t5274;
  t5774 = t5767 + t5655 + t5718 + t5768 + t5771 + t5772 + t5773 + t5724;
  t5777 = -1.*t5261*t5760;
  t5778 = -1.*t5410*t5763;
  t5779 = t5777 + t5676 + t5778 + t5678;
  t5781 = t5261*t5664;
  t5782 = t5261*t5760;
  t5783 = t5760*t5547;
  t5784 = t5410*t5763;
  t5785 = t5410*t5770;
  t5786 = t5781 + t5782 + t5733 + t5783 + t5672 + t5784 + t5785 + t5737;
  t5807 = -0.5*var2[3]*t5806;
  t5661 = 3.2*t5427*t5660;
  t5670 = 3.2*t5427*t5669;
  t5674 = 3.2*t5673*t5276;
  t5680 = 3.2*t5552*t5679;
  t5681 = t5637 + t5661 + t5670 + t5674 + t5680;
  t5320 = -0.384*var2[4]*t5276;
  t5428 = 3.2*t5384*t5427;
  t5461 = 3.2*t5459*t5276;
  t5462 = t5348 + t5428 + t5461;
  t5891 = 13.6*t5479*t5343;
  t5892 = t5792 + t5891 + t5553 + t5575;
  t5682 = -0.5*var2[2]*t5681;
  t5842 = 3.2*t5562*t5660;
  t5843 = 3.2*t5562*t5669;
  t5844 = 3.2*t5673*t5582;
  t5845 = 3.2*t5559*t5679;
  t5846 = t5841 + t5842 + t5843 + t5844 + t5845;
  t5715 = 6.4*t5669*t5589;
  t5726 = 3.2*t5565*t5725;
  t5727 = 6.4*t5555*t5679;
  t5739 = 3.2*t5555*t5738;
  t5740 = t5637 + t5713 + t5714 + t5715 + t5726 + t5727 + t5739;
  t5865 = 6.4*t5669*t5276;
  t5867 = 3.2*t5552*t5725;
  t5868 = 6.4*t5427*t5679;
  t5869 = 3.2*t5427*t5738;
  t5870 = t5841 + t5864 + t5865 + t5866 + t5867 + t5868 + t5869;
  t5758 = 3.2*t5669*t5589;
  t5766 = 3.2*t5765*t5589;
  t5775 = 3.2*t5565*t5774;
  t5776 = 3.2*t5555*t5679;
  t5780 = 3.2*t5555*t5779;
  t5787 = 3.2*t5555*t5786;
  t5788 = t5713 + t5714 + t5758 + t5766 + t5775 + t5776 + t5780 + t5787;
  t5881 = 3.2*t5669*t5276;
  t5882 = 3.2*t5765*t5276;
  t5883 = 3.2*t5552*t5774;
  t5884 = 3.2*t5427*t5679;
  t5885 = 3.2*t5427*t5779;
  t5886 = 3.2*t5427*t5786;
  t5887 = t5864 + t5881 + t5882 + t5866 + t5883 + t5884 + t5885 + t5886;
  t5814 = -0.5*var2[3]*t5813;
  t5894 = -0.5*var2[3]*t5681;
  t5938 = 6.4*t5669*t5673;
  t5939 = 6.4*t5660*t5679;
  t5940 = t5938 + t5939;
  t5828 = 3.2*t5384*t5562;
  t5829 = 3.2*t5459*t5582;
  t5830 = t5827 + t5828 + t5829;
  t5853 = t5827 + t5851 + t5852;
  t5690 = t5348 + t5688 + t5689;
  t5905 = 3.2*t5384*t5725;
  t5906 = 3.2*t5459*t5738;
  t5907 = t5905 + t5906;
  t5874 = 3.2*t5746*t5427;
  t5875 = 3.2*t5750*t5276;
  t5876 = t5874 + t5851 + t5875 + t5852;
  t5747 = 3.2*t5746*t5555;
  t5751 = 3.2*t5750*t5589;
  t5752 = t5747 + t5688 + t5689 + t5751;
  t5922 = 3.2*t5750*t5669;
  t5923 = 3.2*t5384*t5774;
  t5924 = 3.2*t5746*t5679;
  t5925 = 3.2*t5459*t5786;
  t5926 = t5922 + t5923 + t5924 + t5925;
  t5816 = 0.748*t5479;
  t5817 = 3.2*t5384*t5555;
  t5818 = 3.2*t5459*t5589;
  t5819 = t5816 + t5817 + t5818;
  t5463 = -0.5*var2[3]*t5462;
  t5943 = 3.2*t5459*t5669;
  t5944 = 3.2*t5384*t5679;
  t5945 = t5943 + t5944;
  t5976 = -0.384*var2[0]*t5686;
  t5977 = -0.384*var2[1]*t5695;
  t5825 = -0.384*var2[3]*t5589;
  t5899 = -0.384*var2[3]*t5276;
  t5951 = -0.384*var2[3]*t5669;
  p_output1[0]=(t5320 + t5463 + t5682 - 0.5*(6.4*t5276*t5555 + 6.4*t5552*t5555 + 6.4*t5427*t5565 + 6.4*t5427*t5589 + t5602 + t5603 + t5608 + t5609)*var2[0] - 0.5*t5596*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t5687 - 0.5*(t5602 + t5603 + t5608 + t5609 + t5702 + t5707 + t5708 + t5710)*var2[0] - 0.5*t5699*var2[1] - 0.5*t5740*var2[2] - 0.5*t5690*var2[3]);
  p_output1[2]=var2[3]*(t5687 - 0.5*(t5702 + t5707 + t5708 + t5710)*var2[0] - 0.5*t5754*var2[1] - 0.5*t5788*var2[2] - 0.5*t5752*var2[3]);
  p_output1[3]=-0.5*t5796*var2[3];
  p_output1[4]=t5807;
  p_output1[5]=t5814;
  p_output1[6]=-0.5*t5796*var2[0] - 0.5*t5806*var2[1] - 0.5*t5813*var2[2] - 1.*t5819*var2[3] - 0.384*t5589*var2[4];
  p_output1[7]=t5825;
  p_output1[8]=var2[3]*(-0.5*t5596*var2[0] - 0.5*(6.4*t5427*t5559 + 6.4*t5276*t5562 + 6.4*t5552*t5562 + 6.4*t5427*t5582 + t5602 + t5603 + t5609 + t5833)*var2[1] - 0.5*t5846*var2[2] - 0.5*t5830*var2[3] - 0.384*t5582*var2[4]);
  p_output1[9]=var2[3]*(t5850 - 0.5*t5699*var2[0] - 0.5*(t5602 + t5603 + t5609 + t5833 + t5856 + t5857 + t5859 + t5860)*var2[1] - 0.5*t5870*var2[2] - 0.5*t5853*var2[3]);
  p_output1[10]=var2[3]*(t5850 - 0.5*t5754*var2[0] - 0.5*(t5856 + t5857 + t5859 + t5860)*var2[1] - 0.5*t5887*var2[2] - 0.5*t5876*var2[3]);
  p_output1[11]=t5807;
  p_output1[12]=-0.5*t5892*var2[3];
  p_output1[13]=t5894;
  p_output1[14]=t5320 + t5682 - 0.5*t5806*var2[0] - 0.5*t5892*var2[1] - 1.*t5462*var2[3];
  p_output1[15]=t5899;
  p_output1[16]=(-0.5*t5681*var2[0] - 0.5*t5846*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t5740*var2[0] - 0.5*t5870*var2[1] - 0.5*(6.4*Power(t5669,2) + 6.4*Power(t5679,2) + 6.4*t5660*t5725 + 6.4*t5673*t5738)*var2[2] - 0.5*t5907*var2[3] - 0.384*t5738*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t5788*var2[0] - 0.5*t5887*var2[1] - 0.5*(6.4*t5669*t5765 + 6.4*t5660*t5774 + 6.4*t5679*t5779 + 6.4*t5673*t5786)*var2[2] - 0.5*t5926*var2[3] - 0.384*t5786*var2[4]);
  p_output1[19]=t5814;
  p_output1[20]=t5894;
  p_output1[21]=-0.5*t5940*var2[3];
  p_output1[22]=-0.5*t5813*var2[0] - 0.5*t5681*var2[1] - 0.5*t5940*var2[2] - 1.*t5945*var2[3] - 0.384*t5669*var2[4];
  p_output1[23]=t5951;
  p_output1[24]=(-0.5*t5462*var2[0] - 0.5*t5830*var2[1])*var2[3];
  p_output1[25]=(-0.5*t5690*var2[0] - 0.5*t5853*var2[1] - 0.5*t5907*var2[2])*var2[3];
  p_output1[26]=(-0.5*t5752*var2[0] - 0.5*t5876*var2[1] - 0.5*t5926*var2[2])*var2[3];
  p_output1[27]=-0.5*t5819*var2[3];
  p_output1[28]=t5463;
  p_output1[29]=-0.5*t5945*var2[3];
  p_output1[30]=-0.5*t5819*var2[0] - 0.5*t5462*var2[1] - 0.5*t5945*var2[2];
  p_output1[31]=(-0.384*t5276*var2[0] - 0.384*t5582*var2[1])*var2[3];
  p_output1[32]=(t5976 + t5977 - 0.384*t5738*var2[2])*var2[3];
  p_output1[33]=(t5976 + t5977 - 0.384*t5786*var2[2])*var2[3];
  p_output1[34]=t5825;
  p_output1[35]=t5899;
  p_output1[36]=t5951;
  p_output1[37]=-0.384*t5589*var2[0] - 0.384*t5276*var2[1] - 0.384*t5669*var2[2];
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

#include "J_Ce2_vec4_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
