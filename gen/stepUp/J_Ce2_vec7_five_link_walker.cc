/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:40:22 GMT-05:00
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
  double t6222;
  double t6219;
  double t6220;
  double t6223;
  double t6212;
  double t6275;
  double t6329;
  double t6331;
  double t6332;
  double t6333;
  double t6365;
  double t6221;
  double t6224;
  double t6267;
  double t6400;
  double t6402;
  double t6407;
  double t6416;
  double t6423;
  double t6424;
  double t6366;
  double t6268;
  double t6284;
  double t6291;
  double t6292;
  double t6317;
  double t6318;
  double t6396;
  double t6397;
  double t6398;
  double t6399;
  double t6410;
  double t6411;
  double t6464;
  double t6465;
  double t6472;
  double t6473;
  double t6474;
  double t6476;
  double t6477;
  double t6487;
  double t6488;
  double t6503;
  double t6504;
  double t6505;
  double t6507;
  double t6508;
  double t6509;
  double t6513;
  double t6517;
  double t6518;
  double t6525;
  double t6526;
  double t6367;
  double t6373;
  double t6391;
  double t6447;
  double t6448;
  double t6449;
  double t6545;
  double t6546;
  double t6413;
  double t6414;
  double t6415;
  double t6430;
  double t6437;
  double t6438;
  double t6484;
  double t6531;
  double t6532;
  double t6533;
  double t6506;
  double t6510;
  double t6511;
  double t6523;
  double t6524;
  double t6522;
  double t6528;
  double t6529;
  double t6575;
  double t6576;
  double t6536;
  double t6538;
  double t6535;
  double t6537;
  double t6539;
  double t6585;
  double t6586;
  double t6587;
  double t6547;
  double t6549;
  double t6550;
  double t6556;
  double t6557;
  double t6558;
  double t6559;
  double t6560;
  double t6561;
  double t6562;
  double t6563;
  double t6564;
  double t6565;
  double t6566;
  double t6567;
  double t6568;
  double t6569;
  double t6570;
  double t6571;
  double t6572;
  double t6573;
  double t6574;
  double t6582;
  double t6583;
  double t6588;
  double t6591;
  double t6601;
  double t6602;
  double t6604;
  double t6605;
  double t6651;
  double t6652;
  double t6653;
  double t6654;
  double t6655;
  double t6635;
  double t6636;
  double t6637;
  double t6639;
  double t6640;
  double t6641;
  double t6642;
  double t6643;
  double t6645;
  double t6646;
  double t6647;
  double t6648;
  double t6649;
  double t6480;
  double t6485;
  double t6466;
  double t6469;
  double t6456;
  double t6471;
  double t6478;
  double t6479;
  double t6486;
  double t6489;
  double t6490;
  double t6577;
  double t6578;
  double t6579;
  double t6584;
  double t6589;
  double t6590;
  double t6592;
  double t6594;
  double t6595;
  double t6596;
  double t6599;
  double t6600;
  double t6603;
  double t6606;
  double t6685;
  double t6613;
  double t6614;
  double t6615;
  double t6687;
  double t6689;
  double t6692;
  double t6693;
  double t6694;
  double t6695;
  double t6696;
  double t6697;
  double t6698;
  double t6699;
  double t6700;
  double t6701;
  double t6704;
  double t6622;
  double t6623;
  double t6624;
  double t6627;
  double t6628;
  double t6629;
  double t6644;
  double t6512;
  double t6530;
  double t6534;
  double t6540;
  double t6541;
  double t6412;
  double t6425;
  double t6439;
  double t6453;
  double t6454;
  double t6455;
  double t6727;
  double t6542;
  double t6677;
  double t6678;
  double t6679;
  double t6680;
  double t6681;
  double t6580;
  double t6581;
  double t6593;
  double t6597;
  double t6598;
  double t6607;
  double t6608;
  double t6702;
  double t6703;
  double t6705;
  double t6706;
  double t6707;
  double t6708;
  double t6709;
  double t6621;
  double t6625;
  double t6626;
  double t6630;
  double t6631;
  double t6719;
  double t6720;
  double t6721;
  double t6722;
  double t6723;
  double t6650;
  double t6729;
  double t6781;
  double t6782;
  double t6783;
  double t6784;
  double t6785;
  double t6777;
  double t6778;
  double t6779;
  double t6664;
  double t6665;
  double t6666;
  double t6667;
  double t6668;
  double t6686;
  double t6688;
  double t6690;
  double t6548;
  double t6551;
  double t6554;
  double t6740;
  double t6741;
  double t6742;
  double t6743;
  double t6744;
  double t6713;
  double t6714;
  double t6715;
  double t6716;
  double t6717;
  double t6612;
  double t6616;
  double t6617;
  double t6618;
  double t6619;
  double t6757;
  double t6758;
  double t6759;
  double t6760;
  double t6761;
  double t6762;
  double t6763;
  double t6656;
  double t6730;
  double t6786;
  double t6816;
  double t6817;
  double t6818;
  double t6830;
  double t6831;
  double t6319;
  t6222 = Cos(var1[5]);
  t6219 = Cos(var1[6]);
  t6220 = Sin(var1[5]);
  t6223 = Sin(var1[6]);
  t6212 = Sin(var1[2]);
  t6275 = Cos(var1[2]);
  t6329 = -1.*t6219;
  t6331 = 1. + t6329;
  t6332 = 0.4*t6331;
  t6333 = 0.64*t6219;
  t6365 = t6332 + t6333;
  t6221 = -1.*t6219*t6220;
  t6224 = -1.*t6222*t6223;
  t6267 = t6221 + t6224;
  t6400 = t6222*t6219;
  t6402 = -1.*t6220*t6223;
  t6407 = t6400 + t6402;
  t6416 = t6275*t6267;
  t6423 = -1.*t6212*t6407;
  t6424 = t6416 + t6423;
  t6366 = t6365*t6219;
  t6268 = -1.*t6212*t6267;
  t6284 = -1.*t6222*t6219;
  t6291 = t6220*t6223;
  t6292 = t6284 + t6291;
  t6317 = t6275*t6292;
  t6318 = t6268 + t6317;
  t6396 = t6219*t6220;
  t6397 = t6222*t6223;
  t6398 = t6396 + t6397;
  t6399 = -1.*t6212*t6398;
  t6410 = t6275*t6407;
  t6411 = t6399 + t6410;
  t6464 = t6212*t6267;
  t6465 = t6464 + t6410;
  t6472 = -1.*t6275*t6407;
  t6473 = t6268 + t6472;
  t6474 = t6275*t6398;
  t6476 = t6212*t6407;
  t6477 = t6474 + t6476;
  t6487 = t6212*t6292;
  t6488 = t6416 + t6487;
  t6503 = t6365*t6220;
  t6504 = 0.24*t6222*t6223;
  t6505 = t6503 + t6504;
  t6507 = t6222*t6365;
  t6508 = -0.24*t6220*t6223;
  t6509 = t6507 + t6508;
  t6513 = -0.24*t6219*t6220;
  t6517 = -0.24*t6222*t6223;
  t6518 = t6513 + t6517;
  t6525 = 0.24*t6222*t6219;
  t6526 = t6525 + t6508;
  t6367 = Power(t6219,2);
  t6373 = -0.24*t6367;
  t6391 = t6366 + t6373;
  t6447 = Power(t6223,2);
  t6448 = 0.24*t6447;
  t6449 = t6366 + t6448;
  t6545 = t6212*t6398;
  t6546 = t6545 + t6317;
  t6413 = t6365*t6223;
  t6414 = -0.24*t6219*t6223;
  t6415 = t6413 + t6414;
  t6430 = -1.*t6365*t6223;
  t6437 = 0.24*t6219*t6223;
  t6438 = t6430 + t6437;
  t6484 = -1.*t6212*t6292;
  t6531 = t6505*t6398;
  t6532 = t6407*t6509;
  t6533 = t6531 + t6532;
  t6506 = -1.*t6505*t6407;
  t6510 = -1.*t6267*t6509;
  t6511 = t6506 + t6510;
  t6523 = t6505*t6407;
  t6524 = t6267*t6509;
  t6522 = t6518*t6407;
  t6528 = t6398*t6526;
  t6529 = t6522 + t6523 + t6524 + t6528;
  t6575 = -1.*t6365*t6220;
  t6576 = t6575 + t6517;
  t6536 = -1.*t6267*t6505;
  t6538 = -1.*t6509*t6292;
  t6535 = -1.*t6267*t6518;
  t6537 = -1.*t6407*t6526;
  t6539 = t6535 + t6536 + t6537 + t6538;
  t6585 = -0.24*t6222*t6219;
  t6586 = 0.24*t6220*t6223;
  t6587 = t6585 + t6586;
  t6547 = -0.384*var2[6]*t6546;
  t6549 = 3.2*t6449*t6546;
  t6550 = 3.2*t6415*t6488;
  t6556 = 6.4*t6465*t6424;
  t6557 = 3.2*t6477*t6318;
  t6558 = 3.2*t6424*t6546;
  t6559 = t6474 + t6484;
  t6560 = 3.2*t6465*t6559;
  t6561 = 3.2*t6411*t6488;
  t6562 = 6.4*t6318*t6488;
  t6563 = t6556 + t6557 + t6558 + t6560 + t6561 + t6562;
  t6564 = -0.5*var2[1]*t6563;
  t6565 = Power(t6465,2);
  t6566 = 6.4*t6565;
  t6567 = 6.4*t6465*t6546;
  t6568 = 6.4*t6477*t6488;
  t6569 = Power(t6488,2);
  t6570 = 6.4*t6569;
  t6571 = t6566 + t6567 + t6568 + t6570;
  t6572 = -0.5*var2[0]*t6571;
  t6573 = 3.2*t6533*t6546;
  t6574 = 3.2*t6511*t6488;
  t6582 = -1.*t6518*t6407;
  t6583 = -1.*t6398*t6509;
  t6588 = -1.*t6267*t6587;
  t6591 = -1.*t6505*t6292;
  t6601 = t6267*t6505;
  t6602 = t6518*t6398;
  t6604 = t6407*t6587;
  t6605 = t6509*t6292;
  t6651 = 3.2*t6415*t6465;
  t6652 = 3.2*t6438*t6465;
  t6653 = 3.2*t6391*t6477;
  t6654 = 3.2*t6449*t6488;
  t6655 = t6651 + t6652 + t6653 + t6654;
  t6635 = 6.4*t6465*t6477;
  t6636 = 6.4*t6465*t6488;
  t6637 = t6635 + t6636;
  t6639 = 3.2*t6465*t6411;
  t6640 = 3.2*t6424*t6477;
  t6641 = 3.2*t6465*t6318;
  t6642 = 3.2*t6424*t6488;
  t6643 = t6639 + t6640 + t6641 + t6642;
  t6645 = 3.2*t6465*t6511;
  t6646 = 3.2*t6465*t6529;
  t6647 = 3.2*t6533*t6488;
  t6648 = 3.2*t6477*t6539;
  t6649 = t6645 + t6646 + t6647 + t6648;
  t6480 = -1.*t6275*t6267;
  t6485 = t6480 + t6484;
  t6466 = -1.*t6275*t6398;
  t6469 = t6466 + t6423;
  t6456 = 6.4*t6411*t6424;
  t6471 = 3.2*t6465*t6469;
  t6478 = 3.2*t6473*t6477;
  t6479 = 6.4*t6424*t6318;
  t6486 = 3.2*t6465*t6485;
  t6489 = 3.2*t6473*t6488;
  t6490 = t6456 + t6471 + t6478 + t6479 + t6486 + t6489;
  t6577 = t6576*t6407;
  t6578 = t6398*t6509;
  t6579 = t6577 + t6523 + t6524 + t6578;
  t6584 = -1.*t6267*t6526;
  t6589 = -1.*t6576*t6292;
  t6590 = -1.*t6518*t6292;
  t6592 = t6582 + t6510 + t6583 + t6584 + t6588 + t6589 + t6590 + t6591;
  t6594 = -1.*t6267*t6576;
  t6595 = -1.*t6407*t6509;
  t6596 = t6594 + t6536 + t6595 + t6538;
  t6599 = t6267*t6576;
  t6600 = t6267*t6518;
  t6603 = t6407*t6526;
  t6606 = t6599 + t6600 + t6601 + t6602 + t6532 + t6603 + t6604 + t6605;
  t6685 = -0.384*var2[6]*t6559;
  t6613 = -1.*t6365*t6219;
  t6614 = 0.24*t6367;
  t6615 = t6613 + t6614;
  t6687 = 3.2*t6415*t6318;
  t6689 = 3.2*t6449*t6559;
  t6692 = Power(t6424,2);
  t6693 = 6.4*t6692;
  t6694 = 6.4*t6411*t6318;
  t6695 = Power(t6318,2);
  t6696 = 6.4*t6695;
  t6697 = 6.4*t6424*t6559;
  t6698 = t6693 + t6694 + t6696 + t6697;
  t6699 = -0.5*var2[1]*t6698;
  t6700 = -0.5*var2[0]*t6563;
  t6701 = 3.2*t6511*t6318;
  t6704 = 3.2*t6533*t6559;
  t6622 = -2.*t6267*t6526;
  t6623 = -2.*t6518*t6292;
  t6624 = t6582 + t6583 + t6622 + t6588 + t6623 + t6591;
  t6627 = 2.*t6267*t6518;
  t6628 = 2.*t6407*t6526;
  t6629 = t6627 + t6601 + t6602 + t6628 + t6604 + t6605;
  t6644 = -0.5*var2[6]*t6643;
  t6512 = 3.2*t6424*t6511;
  t6530 = 3.2*t6424*t6529;
  t6534 = 3.2*t6533*t6318;
  t6540 = 3.2*t6411*t6539;
  t6541 = t6512 + t6530 + t6534 + t6540;
  t6412 = 3.2*t6391*t6411;
  t6425 = 3.2*t6415*t6424;
  t6439 = 3.2*t6438*t6424;
  t6453 = 3.2*t6449*t6318;
  t6454 = t6412 + t6425 + t6439 + t6453;
  t6455 = -0.5*var2[5]*t6454;
  t6727 = t6456 + t6479;
  t6542 = -0.5*var2[2]*t6541;
  t6677 = 3.2*t6473*t6511;
  t6678 = 3.2*t6473*t6529;
  t6679 = 3.2*t6533*t6485;
  t6680 = 3.2*t6469*t6539;
  t6681 = t6677 + t6678 + t6679 + t6680;
  t6580 = 3.2*t6579*t6488;
  t6581 = 3.2*t6529*t6488;
  t6593 = 3.2*t6477*t6592;
  t6597 = 3.2*t6465*t6596;
  t6598 = 3.2*t6465*t6539;
  t6607 = 3.2*t6465*t6606;
  t6608 = t6573 + t6574 + t6580 + t6581 + t6593 + t6597 + t6598 + t6607;
  t6702 = 3.2*t6579*t6318;
  t6703 = 3.2*t6529*t6318;
  t6705 = 3.2*t6411*t6592;
  t6706 = 3.2*t6424*t6596;
  t6707 = 3.2*t6424*t6539;
  t6708 = 3.2*t6424*t6606;
  t6709 = t6701 + t6702 + t6703 + t6704 + t6705 + t6706 + t6707 + t6708;
  t6621 = 6.4*t6529*t6488;
  t6625 = 3.2*t6477*t6624;
  t6626 = 6.4*t6465*t6539;
  t6630 = 3.2*t6465*t6629;
  t6631 = t6573 + t6574 + t6621 + t6625 + t6626 + t6630;
  t6719 = 6.4*t6529*t6318;
  t6720 = 3.2*t6411*t6624;
  t6721 = 6.4*t6424*t6539;
  t6722 = 3.2*t6424*t6629;
  t6723 = t6701 + t6719 + t6704 + t6720 + t6721 + t6722;
  t6650 = -0.5*var2[6]*t6649;
  t6729 = -0.5*var2[6]*t6541;
  t6781 = 3.2*t6391*t6511;
  t6782 = 3.2*t6438*t6533;
  t6783 = 3.2*t6449*t6529;
  t6784 = 3.2*t6415*t6539;
  t6785 = t6781 + t6782 + t6783 + t6784;
  t6777 = 6.4*t6533*t6529;
  t6778 = 6.4*t6511*t6539;
  t6779 = t6777 + t6778;
  t6664 = 3.2*t6415*t6473;
  t6665 = 3.2*t6438*t6473;
  t6666 = 3.2*t6391*t6469;
  t6667 = 3.2*t6449*t6485;
  t6668 = t6664 + t6665 + t6666 + t6667;
  t6686 = 3.2*t6391*t6424;
  t6688 = 3.2*t6438*t6318;
  t6690 = t6686 + t6687 + t6688 + t6689;
  t6548 = 3.2*t6391*t6465;
  t6551 = 3.2*t6438*t6488;
  t6554 = t6548 + t6549 + t6550 + t6551;
  t6740 = 3.2*t6438*t6579;
  t6741 = 3.2*t6415*t6592;
  t6742 = 3.2*t6391*t6596;
  t6743 = 3.2*t6449*t6606;
  t6744 = t6740 + t6741 + t6742 + t6743;
  t6713 = 3.2*t6438*t6411;
  t6714 = 6.4*t6391*t6424;
  t6715 = 3.2*t6615*t6424;
  t6716 = 6.4*t6438*t6318;
  t6717 = t6713 + t6714 + t6715 + t6687 + t6716 + t6689;
  t6612 = 6.4*t6391*t6465;
  t6616 = 3.2*t6615*t6465;
  t6617 = 3.2*t6438*t6477;
  t6618 = 6.4*t6438*t6488;
  t6619 = t6612 + t6616 + t6617 + t6549 + t6550 + t6618;
  t6757 = 3.2*t6438*t6511;
  t6758 = 3.2*t6615*t6533;
  t6759 = 6.4*t6438*t6529;
  t6760 = 3.2*t6415*t6624;
  t6761 = 6.4*t6391*t6539;
  t6762 = 3.2*t6449*t6629;
  t6763 = t6757 + t6758 + t6759 + t6760 + t6761 + t6762;
  t6656 = -0.5*var2[6]*t6655;
  t6730 = -0.5*var2[6]*t6454;
  t6786 = -0.5*var2[6]*t6785;
  t6816 = 6.4*t6391*t6415;
  t6817 = 6.4*t6438*t6449;
  t6818 = t6816 + t6817;
  t6830 = -0.384*var2[0]*t6546;
  t6831 = -0.384*var2[1]*t6559;
  t6319 = -0.384*var2[6]*t6318;
  p_output1[0]=(t6319 + t6455 + t6542 - 0.5*(6.4*t6318*t6465 + 6.4*t6411*t6465 + 6.4*t6424*t6477 + 6.4*t6424*t6488)*var2[0] - 0.5*t6490*var2[1])*var2[6];
  p_output1[1]=(t6547 + t6564 + t6572 - 0.5*t6608*var2[2] - 0.5*t6554*var2[5])*var2[6];
  p_output1[2]=(t6547 + t6564 + t6572 - 0.5*t6631*var2[2] - 0.5*t6619*var2[5])*var2[6];
  p_output1[3]=-0.5*t6637*var2[6];
  p_output1[4]=t6644;
  p_output1[5]=t6650;
  p_output1[6]=t6656;
  p_output1[7]=-0.5*t6637*var2[0] - 0.5*t6643*var2[1] - 0.5*t6649*var2[2] - 0.5*t6655*var2[5] - 0.768*t6488*var2[6];
  p_output1[8]=var2[6]*(-0.5*t6490*var2[0] - 0.5*(6.4*t6424*t6469 + 6.4*t6318*t6473 + 6.4*t6411*t6473 + 6.4*t6424*t6485)*var2[1] - 0.5*t6681*var2[2] - 0.5*t6668*var2[5] - 0.384*t6485*var2[6]);
  p_output1[9]=(t6685 + t6699 + t6700 - 0.5*t6709*var2[2] - 0.5*t6690*var2[5])*var2[6];
  p_output1[10]=(t6685 + t6699 + t6700 - 0.5*t6723*var2[2] - 0.5*t6717*var2[5])*var2[6];
  p_output1[11]=t6644;
  p_output1[12]=-0.5*t6727*var2[6];
  p_output1[13]=t6729;
  p_output1[14]=t6730;
  p_output1[15]=t6455 + t6542 - 0.5*t6643*var2[0] - 0.5*t6727*var2[1] - 0.768*t6318*var2[6];
  p_output1[16]=(-0.5*t6541*var2[0] - 0.5*t6681*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t6608*var2[0] - 0.5*t6709*var2[1] - 0.5*(6.4*t6529*t6579 + 6.4*t6511*t6592 + 6.4*t6539*t6596 + 6.4*t6533*t6606)*var2[2] - 0.5*t6744*var2[5] - 0.384*t6606*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t6631*var2[0] - 0.5*t6723*var2[1] - 0.5*(6.4*Power(t6529,2) + 6.4*Power(t6539,2) + 6.4*t6511*t6624 + 6.4*t6533*t6629)*var2[2] - 0.5*t6763*var2[5] - 0.384*t6629*var2[6]);
  p_output1[19]=t6650;
  p_output1[20]=t6729;
  p_output1[21]=-0.5*t6779*var2[6];
  p_output1[22]=t6786;
  p_output1[23]=-0.5*t6649*var2[0] - 0.5*t6541*var2[1] - 0.5*t6779*var2[2] - 0.5*t6785*var2[5] - 0.768*t6529*var2[6];
  p_output1[24]=(-0.5*t6454*var2[0] - 0.5*t6668*var2[1])*var2[6];
  p_output1[25]=(-0.5*t6554*var2[0] - 0.5*t6690*var2[1] - 0.5*t6744*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t6619*var2[0] - 0.5*t6717*var2[1] - 0.5*t6763*var2[2] - 0.5*(6.4*Power(t6391,2) + 6.4*t6415*t6438 + 6.4*Power(t6438,2) + 6.4*t6449*t6615)*var2[5] - 0.384*t6615*var2[6]);
  p_output1[27]=t6656;
  p_output1[28]=t6730;
  p_output1[29]=t6786;
  p_output1[30]=-0.5*t6818*var2[6];
  p_output1[31]=-0.5*t6655*var2[0] - 0.5*t6454*var2[1] - 0.5*t6785*var2[2] - 0.5*t6818*var2[5] - 0.768*t6438*var2[6];
  p_output1[32]=(-0.384*t6318*var2[0] - 0.384*t6485*var2[1])*var2[6];
  p_output1[33]=(t6830 + t6831 - 0.384*t6606*var2[2])*var2[6];
  p_output1[34]=(t6830 + t6831 - 0.384*t6629*var2[2] - 0.384*t6615*var2[5])*var2[6];
  p_output1[35]=-0.384*t6488*var2[6];
  p_output1[36]=t6319;
  p_output1[37]=-0.384*t6529*var2[6];
  p_output1[38]=-0.384*t6438*var2[6];
  p_output1[39]=-0.384*t6488*var2[0] - 0.384*t6318*var2[1] - 0.384*t6529*var2[2] - 0.384*t6438*var2[5];
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

#include "J_Ce2_vec7_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
