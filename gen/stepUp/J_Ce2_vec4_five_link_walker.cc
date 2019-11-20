/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:49 GMT-05:00
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
  double t5223;
  double t2694;
  double t5214;
  double t5225;
  double t5237;
  double t285;
  double t5221;
  double t5226;
  double t5233;
  double t5333;
  double t5334;
  double t5344;
  double t5346;
  double t5347;
  double t5235;
  double t5238;
  double t5239;
  double t5240;
  double t5284;
  double t5285;
  double t5477;
  double t5478;
  double t5483;
  double t5443;
  double t5453;
  double t5472;
  double t5307;
  double t5312;
  double t5313;
  double t5485;
  double t5494;
  double t5495;
  double t5374;
  double t5386;
  double t5391;
  double t5364;
  double t5392;
  double t5411;
  double t5517;
  double t5511;
  double t5514;
  double t5515;
  double t5522;
  double t5523;
  double t5527;
  double t5528;
  double t5516;
  double t5518;
  double t5529;
  double t5530;
  double t5539;
  double t5559;
  double t5560;
  double t5607;
  double t5615;
  double t5616;
  double t5618;
  double t5619;
  double t5624;
  double t5628;
  double t5629;
  double t5630;
  double t5332;
  double t5413;
  double t5423;
  double t5425;
  double t5426;
  double t5651;
  double t5652;
  double t5348;
  double t5362;
  double t5363;
  double t5484;
  double t5500;
  double t5505;
  double t5506;
  double t5551;
  double t5567;
  double t5568;
  double t5572;
  double t5573;
  double t5574;
  double t5579;
  double t5598;
  double t5599;
  double t5600;
  double t5601;
  double t5605;
  double t5606;
  double t5637;
  double t5638;
  double t5639;
  double t5617;
  double t5625;
  double t5626;
  double t5631;
  double t5632;
  double t5633;
  double t5634;
  double t5635;
  double t5641;
  double t5642;
  double t5643;
  double t5644;
  double t5645;
  double t5685;
  double t5686;
  double t5687;
  double t5653;
  double t5654;
  double t5655;
  double t5658;
  double t5659;
  double t5660;
  double t5661;
  double t5662;
  double t5663;
  double t5664;
  double t5671;
  double t5672;
  double t5673;
  double t5674;
  double t5675;
  double t5676;
  double t5679;
  double t5680;
  double t5725;
  double t5726;
  double t5684;
  double t5728;
  double t5729;
  double t5690;
  double t5699;
  double t5735;
  double t5736;
  double t5703;
  double t5758;
  double t5759;
  double t5760;
  double t5761;
  double t5762;
  double t5764;
  double t5765;
  double t5766;
  double t5767;
  double t5768;
  double t5769;
  double t5770;
  double t5771;
  double t5772;
  double t5774;
  double t5775;
  double t5776;
  double t5777;
  double t5778;
  double t5779;
  double t5546;
  double t5552;
  double t5524;
  double t5525;
  double t5519;
  double t5526;
  double t5540;
  double t5541;
  double t5553;
  double t5561;
  double t5565;
  double t5793;
  double t5798;
  double t5799;
  double t5665;
  double t5807;
  double t5682;
  double t5683;
  double t5688;
  double t5689;
  double t5691;
  double t5698;
  double t5700;
  double t5701;
  double t5702;
  double t5704;
  double t5816;
  double t5710;
  double t5711;
  double t5712;
  double t5817;
  double t5714;
  double t5715;
  double t5716;
  double t5818;
  double t5821;
  double t5822;
  double t5823;
  double t5824;
  double t5825;
  double t5826;
  double t5720;
  double t5830;
  double t5727;
  double t5730;
  double t5731;
  double t5832;
  double t5733;
  double t5734;
  double t5737;
  double t5738;
  double t5739;
  double t5740;
  double t5743;
  double t5744;
  double t5745;
  double t5747;
  double t5748;
  double t5749;
  double t5750;
  double t5751;
  double t5752;
  double t5773;
  double t5627;
  double t5636;
  double t5640;
  double t5646;
  double t5647;
  double t5295;
  double t5412;
  double t5427;
  double t5441;
  double t5857;
  double t5858;
  double t5648;
  double t5808;
  double t5809;
  double t5810;
  double t5811;
  double t5812;
  double t5681;
  double t5692;
  double t5697;
  double t5705;
  double t5706;
  double t5831;
  double t5833;
  double t5834;
  double t5835;
  double t5836;
  double t5724;
  double t5732;
  double t5741;
  double t5742;
  double t5746;
  double t5753;
  double t5754;
  double t5847;
  double t5848;
  double t5849;
  double t5850;
  double t5851;
  double t5852;
  double t5853;
  double t5780;
  double t5860;
  double t5904;
  double t5905;
  double t5906;
  double t5794;
  double t5795;
  double t5796;
  double t5819;
  double t5656;
  double t5871;
  double t5872;
  double t5873;
  double t5840;
  double t5841;
  double t5842;
  double t5713;
  double t5717;
  double t5718;
  double t5888;
  double t5889;
  double t5890;
  double t5891;
  double t5892;
  double t5782;
  double t5783;
  double t5784;
  double t5785;
  double t5442;
  double t5909;
  double t5910;
  double t5911;
  double t5942;
  double t5943;
  double t5791;
  double t5865;
  double t5917;
  t5223 = Cos(var1[3]);
  t2694 = Cos(var1[4]);
  t5214 = Sin(var1[3]);
  t5225 = Sin(var1[4]);
  t5237 = Cos(var1[2]);
  t285 = Sin(var1[2]);
  t5221 = -1.*t2694*t5214;
  t5226 = -1.*t5223*t5225;
  t5233 = t5221 + t5226;
  t5333 = -1.*t2694;
  t5334 = 1. + t5333;
  t5344 = 0.4*t5334;
  t5346 = 0.64*t2694;
  t5347 = t5344 + t5346;
  t5235 = -1.*t285*t5233;
  t5238 = -1.*t5223*t2694;
  t5239 = t5214*t5225;
  t5240 = t5238 + t5239;
  t5284 = t5237*t5240;
  t5285 = t5235 + t5284;
  t5477 = t5237*t5223;
  t5478 = -1.*t285*t5214;
  t5483 = t5477 + t5478;
  t5443 = -1.*t5223*t285;
  t5453 = -1.*t5237*t5214;
  t5472 = t5443 + t5453;
  t5307 = -1.*t5237*t5223;
  t5312 = t285*t5214;
  t5313 = t5307 + t5312;
  t5485 = t5223*t285;
  t5494 = t5237*t5214;
  t5495 = t5485 + t5494;
  t5374 = t5223*t2694;
  t5386 = -1.*t5214*t5225;
  t5391 = t5374 + t5386;
  t5364 = t5237*t5233;
  t5392 = -1.*t285*t5391;
  t5411 = t5364 + t5392;
  t5517 = t5237*t5391;
  t5511 = t2694*t5214;
  t5514 = t5223*t5225;
  t5515 = t5511 + t5514;
  t5522 = t285*t5233;
  t5523 = t5522 + t5517;
  t5527 = -1.*t5237*t5391;
  t5528 = t5235 + t5527;
  t5516 = -1.*t285*t5515;
  t5518 = t5516 + t5517;
  t5529 = t5237*t5515;
  t5530 = t285*t5391;
  t5539 = t5529 + t5530;
  t5559 = t285*t5240;
  t5560 = t5364 + t5559;
  t5607 = t5347*t5214;
  t5615 = 0.24*t5223*t5225;
  t5616 = t5607 + t5615;
  t5618 = t5223*t5347;
  t5619 = -0.24*t5214*t5225;
  t5624 = t5618 + t5619;
  t5628 = -1.*t5347*t5214;
  t5629 = -0.24*t5223*t5225;
  t5630 = t5628 + t5629;
  t5332 = 0.748*t5313;
  t5413 = t5347*t2694;
  t5423 = Power(t5225,2);
  t5425 = 0.24*t5423;
  t5426 = t5413 + t5425;
  t5651 = t285*t5515;
  t5652 = t5651 + t5284;
  t5348 = t5347*t5225;
  t5362 = -0.24*t2694*t5225;
  t5363 = t5348 + t5362;
  t5484 = 20.4*t5472*t5483;
  t5500 = 6.8*t5495*t5483;
  t5505 = 20.4*t5472*t5313;
  t5506 = 6.8*t5495*t5313;
  t5551 = -1.*t285*t5240;
  t5567 = Power(t5472,2);
  t5568 = 13.6*t5567;
  t5572 = 13.6*t5472*t5495;
  t5573 = Power(t5483,2);
  t5574 = 13.6*t5573;
  t5579 = 13.6*t5483*t5313;
  t5598 = Power(t5223,2);
  t5599 = 0.11*t5598;
  t5600 = Power(t5214,2);
  t5601 = 0.11*t5600;
  t5605 = t5599 + t5601;
  t5606 = 6.8*t5313*t5605;
  t5637 = t5616*t5515;
  t5638 = t5391*t5624;
  t5639 = t5637 + t5638;
  t5617 = -1.*t5616*t5391;
  t5625 = -1.*t5233*t5624;
  t5626 = t5617 + t5625;
  t5631 = t5630*t5391;
  t5632 = t5616*t5391;
  t5633 = t5233*t5624;
  t5634 = t5515*t5624;
  t5635 = t5631 + t5632 + t5633 + t5634;
  t5641 = -1.*t5233*t5630;
  t5642 = -1.*t5233*t5616;
  t5643 = -1.*t5391*t5624;
  t5644 = -1.*t5624*t5240;
  t5645 = t5641 + t5642 + t5643 + t5644;
  t5685 = -1.*t5223*t5347;
  t5686 = 0.24*t5214*t5225;
  t5687 = t5685 + t5686;
  t5653 = -0.384*var2[4]*t5652;
  t5654 = 3.2*t5426*t5652;
  t5655 = 3.2*t5363*t5560;
  t5658 = 6.4*t5523*t5411;
  t5659 = 3.2*t5539*t5285;
  t5660 = 3.2*t5411*t5652;
  t5661 = t5529 + t5551;
  t5662 = 3.2*t5523*t5661;
  t5663 = 3.2*t5518*t5560;
  t5664 = 6.4*t5285*t5560;
  t5671 = Power(t5523,2);
  t5672 = 6.4*t5671;
  t5673 = 6.4*t5523*t5652;
  t5674 = 6.4*t5539*t5560;
  t5675 = Power(t5560,2);
  t5676 = 6.4*t5675;
  t5679 = 3.2*t5639*t5652;
  t5680 = 3.2*t5626*t5560;
  t5725 = -0.24*t2694*t5214;
  t5726 = t5725 + t5629;
  t5684 = -1.*t5515*t5624;
  t5728 = 0.24*t5223*t2694;
  t5729 = t5728 + t5619;
  t5690 = -1.*t5616*t5240;
  t5699 = t5233*t5616;
  t5735 = -0.24*t5223*t2694;
  t5736 = t5735 + t5686;
  t5703 = t5624*t5240;
  t5758 = 13.6*t5472*t5483;
  t5759 = 13.6*t5495*t5483;
  t5760 = 6.4*t5523*t5539;
  t5761 = 6.4*t5523*t5560;
  t5762 = t5758 + t5759 + t5760 + t5761;
  t5764 = 6.8*t5567;
  t5765 = 6.8*t5472*t5495;
  t5766 = 6.8*t5573;
  t5767 = 6.8*t5483*t5313;
  t5768 = 3.2*t5523*t5518;
  t5769 = 3.2*t5411*t5539;
  t5770 = 3.2*t5523*t5285;
  t5771 = 3.2*t5411*t5560;
  t5772 = t5764 + t5765 + t5766 + t5767 + t5768 + t5769 + t5770 + t5771;
  t5774 = 6.8*t5472*t5605;
  t5775 = 3.2*t5523*t5626;
  t5776 = 3.2*t5523*t5635;
  t5777 = 3.2*t5639*t5560;
  t5778 = 3.2*t5539*t5645;
  t5779 = t5774 + t5775 + t5776 + t5777 + t5778;
  t5546 = -1.*t5237*t5233;
  t5552 = t5546 + t5551;
  t5524 = -1.*t5237*t5515;
  t5525 = t5524 + t5392;
  t5519 = 6.4*t5518*t5411;
  t5526 = 3.2*t5523*t5525;
  t5540 = 3.2*t5528*t5539;
  t5541 = 6.4*t5411*t5285;
  t5553 = 3.2*t5523*t5552;
  t5561 = 3.2*t5528*t5560;
  t5565 = t5484 + t5500 + t5505 + t5506 + t5519 + t5526 + t5540 + t5541 + t5553 + t5561;
  t5793 = 0.748*t5495;
  t5798 = Power(t5313,2);
  t5799 = 13.6*t5798;
  t5665 = t5484 + t5500 + t5505 + t5506 + t5658 + t5659 + t5660 + t5662 + t5663 + t5664;
  t5807 = 6.8*t5495*t5605;
  t5682 = -1.*t5630*t5391;
  t5683 = -2.*t5233*t5624;
  t5688 = -1.*t5233*t5687;
  t5689 = -2.*t5630*t5240;
  t5691 = t5682 + t5683 + t5684 + t5688 + t5689 + t5690;
  t5698 = 2.*t5233*t5630;
  t5700 = t5630*t5515;
  t5701 = 2.*t5391*t5624;
  t5702 = t5391*t5687;
  t5704 = t5698 + t5699 + t5700 + t5701 + t5702 + t5703;
  t5816 = -0.384*var2[4]*t5661;
  t5710 = Power(t2694,2);
  t5711 = -0.24*t5710;
  t5712 = t5413 + t5711;
  t5817 = 3.2*t5363*t5285;
  t5714 = -1.*t5347*t5225;
  t5715 = 0.24*t2694*t5225;
  t5716 = t5714 + t5715;
  t5818 = 3.2*t5426*t5661;
  t5821 = Power(t5411,2);
  t5822 = 6.4*t5821;
  t5823 = 6.4*t5518*t5285;
  t5824 = Power(t5285,2);
  t5825 = 6.4*t5824;
  t5826 = 6.4*t5411*t5661;
  t5720 = t5658 + t5659 + t5660 + t5662 + t5663 + t5664;
  t5830 = 3.2*t5626*t5285;
  t5727 = t5726*t5391;
  t5730 = t5515*t5729;
  t5731 = t5727 + t5632 + t5633 + t5730;
  t5832 = 3.2*t5639*t5661;
  t5733 = -1.*t5726*t5391;
  t5734 = -1.*t5233*t5729;
  t5737 = -1.*t5233*t5736;
  t5738 = -1.*t5630*t5240;
  t5739 = -1.*t5726*t5240;
  t5740 = t5733 + t5625 + t5684 + t5734 + t5737 + t5738 + t5739 + t5690;
  t5743 = -1.*t5233*t5726;
  t5744 = -1.*t5391*t5729;
  t5745 = t5743 + t5642 + t5744 + t5644;
  t5747 = t5233*t5630;
  t5748 = t5233*t5726;
  t5749 = t5726*t5515;
  t5750 = t5391*t5729;
  t5751 = t5391*t5736;
  t5752 = t5747 + t5748 + t5699 + t5749 + t5638 + t5750 + t5751 + t5703;
  t5773 = -0.5*var2[3]*t5772;
  t5627 = 3.2*t5411*t5626;
  t5636 = 3.2*t5411*t5635;
  t5640 = 3.2*t5639*t5285;
  t5646 = 3.2*t5518*t5645;
  t5647 = t5606 + t5627 + t5636 + t5640 + t5646;
  t5295 = -0.384*var2[4]*t5285;
  t5412 = 3.2*t5363*t5411;
  t5427 = 3.2*t5426*t5285;
  t5441 = t5332 + t5412 + t5427;
  t5857 = 13.6*t5472*t5313;
  t5858 = t5758 + t5857 + t5519 + t5541;
  t5648 = -0.5*var2[2]*t5647;
  t5808 = 3.2*t5528*t5626;
  t5809 = 3.2*t5528*t5635;
  t5810 = 3.2*t5639*t5552;
  t5811 = 3.2*t5525*t5645;
  t5812 = t5807 + t5808 + t5809 + t5810 + t5811;
  t5681 = 6.4*t5635*t5560;
  t5692 = 3.2*t5539*t5691;
  t5697 = 6.4*t5523*t5645;
  t5705 = 3.2*t5523*t5704;
  t5706 = t5606 + t5679 + t5680 + t5681 + t5692 + t5697 + t5705;
  t5831 = 6.4*t5635*t5285;
  t5833 = 3.2*t5518*t5691;
  t5834 = 6.4*t5411*t5645;
  t5835 = 3.2*t5411*t5704;
  t5836 = t5807 + t5830 + t5831 + t5832 + t5833 + t5834 + t5835;
  t5724 = 3.2*t5635*t5560;
  t5732 = 3.2*t5731*t5560;
  t5741 = 3.2*t5539*t5740;
  t5742 = 3.2*t5523*t5645;
  t5746 = 3.2*t5523*t5745;
  t5753 = 3.2*t5523*t5752;
  t5754 = t5679 + t5680 + t5724 + t5732 + t5741 + t5742 + t5746 + t5753;
  t5847 = 3.2*t5635*t5285;
  t5848 = 3.2*t5731*t5285;
  t5849 = 3.2*t5518*t5740;
  t5850 = 3.2*t5411*t5645;
  t5851 = 3.2*t5411*t5745;
  t5852 = 3.2*t5411*t5752;
  t5853 = t5830 + t5847 + t5848 + t5832 + t5849 + t5850 + t5851 + t5852;
  t5780 = -0.5*var2[3]*t5779;
  t5860 = -0.5*var2[3]*t5647;
  t5904 = 6.4*t5635*t5639;
  t5905 = 6.4*t5626*t5645;
  t5906 = t5904 + t5905;
  t5794 = 3.2*t5363*t5528;
  t5795 = 3.2*t5426*t5552;
  t5796 = t5793 + t5794 + t5795;
  t5819 = t5793 + t5817 + t5818;
  t5656 = t5332 + t5654 + t5655;
  t5871 = 3.2*t5363*t5691;
  t5872 = 3.2*t5426*t5704;
  t5873 = t5871 + t5872;
  t5840 = 3.2*t5712*t5411;
  t5841 = 3.2*t5716*t5285;
  t5842 = t5840 + t5817 + t5841 + t5818;
  t5713 = 3.2*t5712*t5523;
  t5717 = 3.2*t5716*t5560;
  t5718 = t5713 + t5654 + t5655 + t5717;
  t5888 = 3.2*t5716*t5635;
  t5889 = 3.2*t5363*t5740;
  t5890 = 3.2*t5712*t5645;
  t5891 = 3.2*t5426*t5752;
  t5892 = t5888 + t5889 + t5890 + t5891;
  t5782 = 0.748*t5472;
  t5783 = 3.2*t5363*t5523;
  t5784 = 3.2*t5426*t5560;
  t5785 = t5782 + t5783 + t5784;
  t5442 = -0.5*var2[3]*t5441;
  t5909 = 3.2*t5426*t5635;
  t5910 = 3.2*t5363*t5645;
  t5911 = t5909 + t5910;
  t5942 = -0.384*var2[0]*t5652;
  t5943 = -0.384*var2[1]*t5661;
  t5791 = -0.384*var2[3]*t5560;
  t5865 = -0.384*var2[3]*t5285;
  t5917 = -0.384*var2[3]*t5635;
  p_output1[0]=(t5295 + t5442 + t5648 - 0.5*(6.4*t5285*t5523 + 6.4*t5518*t5523 + 6.4*t5411*t5539 + 6.4*t5411*t5560 + t5568 + t5572 + t5574 + t5579)*var2[0] - 0.5*t5565*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t5653 - 0.5*(t5568 + t5572 + t5574 + t5579 + t5672 + t5673 + t5674 + t5676)*var2[0] - 0.5*t5665*var2[1] - 0.5*t5706*var2[2] - 0.5*t5656*var2[3]);
  p_output1[2]=var2[3]*(t5653 - 0.5*(t5672 + t5673 + t5674 + t5676)*var2[0] - 0.5*t5720*var2[1] - 0.5*t5754*var2[2] - 0.5*t5718*var2[3]);
  p_output1[3]=-0.5*t5762*var2[3];
  p_output1[4]=t5773;
  p_output1[5]=t5780;
  p_output1[6]=-0.5*t5762*var2[0] - 0.5*t5772*var2[1] - 0.5*t5779*var2[2] - 1.*t5785*var2[3] - 0.384*t5560*var2[4];
  p_output1[7]=t5791;
  p_output1[8]=var2[3]*(-0.5*t5565*var2[0] - 0.5*(6.4*t5411*t5525 + 6.4*t5285*t5528 + 6.4*t5518*t5528 + 6.4*t5411*t5552 + t5568 + t5572 + t5579 + t5799)*var2[1] - 0.5*t5812*var2[2] - 0.5*t5796*var2[3] - 0.384*t5552*var2[4]);
  p_output1[9]=var2[3]*(t5816 - 0.5*t5665*var2[0] - 0.5*(t5568 + t5572 + t5579 + t5799 + t5822 + t5823 + t5825 + t5826)*var2[1] - 0.5*t5836*var2[2] - 0.5*t5819*var2[3]);
  p_output1[10]=var2[3]*(t5816 - 0.5*t5720*var2[0] - 0.5*(t5822 + t5823 + t5825 + t5826)*var2[1] - 0.5*t5853*var2[2] - 0.5*t5842*var2[3]);
  p_output1[11]=t5773;
  p_output1[12]=-0.5*t5858*var2[3];
  p_output1[13]=t5860;
  p_output1[14]=t5295 + t5648 - 0.5*t5772*var2[0] - 0.5*t5858*var2[1] - 1.*t5441*var2[3];
  p_output1[15]=t5865;
  p_output1[16]=(-0.5*t5647*var2[0] - 0.5*t5812*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t5706*var2[0] - 0.5*t5836*var2[1] - 0.5*(6.4*Power(t5635,2) + 6.4*Power(t5645,2) + 6.4*t5626*t5691 + 6.4*t5639*t5704)*var2[2] - 0.5*t5873*var2[3] - 0.384*t5704*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t5754*var2[0] - 0.5*t5853*var2[1] - 0.5*(6.4*t5635*t5731 + 6.4*t5626*t5740 + 6.4*t5645*t5745 + 6.4*t5639*t5752)*var2[2] - 0.5*t5892*var2[3] - 0.384*t5752*var2[4]);
  p_output1[19]=t5780;
  p_output1[20]=t5860;
  p_output1[21]=-0.5*t5906*var2[3];
  p_output1[22]=-0.5*t5779*var2[0] - 0.5*t5647*var2[1] - 0.5*t5906*var2[2] - 1.*t5911*var2[3] - 0.384*t5635*var2[4];
  p_output1[23]=t5917;
  p_output1[24]=(-0.5*t5441*var2[0] - 0.5*t5796*var2[1])*var2[3];
  p_output1[25]=(-0.5*t5656*var2[0] - 0.5*t5819*var2[1] - 0.5*t5873*var2[2])*var2[3];
  p_output1[26]=(-0.5*t5718*var2[0] - 0.5*t5842*var2[1] - 0.5*t5892*var2[2])*var2[3];
  p_output1[27]=-0.5*t5785*var2[3];
  p_output1[28]=t5442;
  p_output1[29]=-0.5*t5911*var2[3];
  p_output1[30]=-0.5*t5785*var2[0] - 0.5*t5441*var2[1] - 0.5*t5911*var2[2];
  p_output1[31]=(-0.384*t5285*var2[0] - 0.384*t5552*var2[1])*var2[3];
  p_output1[32]=(t5942 + t5943 - 0.384*t5704*var2[2])*var2[3];
  p_output1[33]=(t5942 + t5943 - 0.384*t5752*var2[2])*var2[3];
  p_output1[34]=t5791;
  p_output1[35]=t5865;
  p_output1[36]=t5917;
  p_output1[37]=-0.384*t5560*var2[0] - 0.384*t5285*var2[1] - 0.384*t5635*var2[2];
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

namespace LeftStance
{

void J_Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
