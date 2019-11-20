/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:21:00 GMT-05:00
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
  double t6185;
  double t6182;
  double t6183;
  double t6186;
  double t6175;
  double t6238;
  double t6292;
  double t6294;
  double t6295;
  double t6296;
  double t6328;
  double t6184;
  double t6187;
  double t6230;
  double t6363;
  double t6365;
  double t6370;
  double t6379;
  double t6386;
  double t6387;
  double t6329;
  double t6231;
  double t6247;
  double t6254;
  double t6255;
  double t6280;
  double t6281;
  double t6359;
  double t6360;
  double t6361;
  double t6362;
  double t6373;
  double t6374;
  double t6427;
  double t6428;
  double t6435;
  double t6436;
  double t6437;
  double t6439;
  double t6440;
  double t6450;
  double t6451;
  double t6466;
  double t6467;
  double t6468;
  double t6470;
  double t6471;
  double t6472;
  double t6476;
  double t6480;
  double t6481;
  double t6488;
  double t6489;
  double t6330;
  double t6336;
  double t6354;
  double t6410;
  double t6411;
  double t6412;
  double t6508;
  double t6509;
  double t6376;
  double t6377;
  double t6378;
  double t6393;
  double t6400;
  double t6401;
  double t6447;
  double t6494;
  double t6495;
  double t6496;
  double t6469;
  double t6473;
  double t6474;
  double t6486;
  double t6487;
  double t6485;
  double t6491;
  double t6492;
  double t6538;
  double t6539;
  double t6499;
  double t6501;
  double t6498;
  double t6500;
  double t6502;
  double t6548;
  double t6549;
  double t6550;
  double t6510;
  double t6512;
  double t6513;
  double t6519;
  double t6520;
  double t6521;
  double t6522;
  double t6523;
  double t6524;
  double t6525;
  double t6526;
  double t6527;
  double t6528;
  double t6529;
  double t6530;
  double t6531;
  double t6532;
  double t6533;
  double t6534;
  double t6535;
  double t6536;
  double t6537;
  double t6545;
  double t6546;
  double t6551;
  double t6554;
  double t6564;
  double t6565;
  double t6567;
  double t6568;
  double t6614;
  double t6615;
  double t6616;
  double t6617;
  double t6618;
  double t6598;
  double t6599;
  double t6600;
  double t6602;
  double t6603;
  double t6604;
  double t6605;
  double t6606;
  double t6608;
  double t6609;
  double t6610;
  double t6611;
  double t6612;
  double t6443;
  double t6448;
  double t6429;
  double t6432;
  double t6419;
  double t6434;
  double t6441;
  double t6442;
  double t6449;
  double t6452;
  double t6453;
  double t6540;
  double t6541;
  double t6542;
  double t6547;
  double t6552;
  double t6553;
  double t6555;
  double t6557;
  double t6558;
  double t6559;
  double t6562;
  double t6563;
  double t6566;
  double t6569;
  double t6648;
  double t6576;
  double t6577;
  double t6578;
  double t6650;
  double t6652;
  double t6655;
  double t6656;
  double t6657;
  double t6658;
  double t6659;
  double t6660;
  double t6661;
  double t6662;
  double t6663;
  double t6664;
  double t6667;
  double t6585;
  double t6586;
  double t6587;
  double t6590;
  double t6591;
  double t6592;
  double t6607;
  double t6475;
  double t6493;
  double t6497;
  double t6503;
  double t6504;
  double t6375;
  double t6388;
  double t6402;
  double t6416;
  double t6417;
  double t6418;
  double t6690;
  double t6505;
  double t6640;
  double t6641;
  double t6642;
  double t6643;
  double t6644;
  double t6543;
  double t6544;
  double t6556;
  double t6560;
  double t6561;
  double t6570;
  double t6571;
  double t6665;
  double t6666;
  double t6668;
  double t6669;
  double t6670;
  double t6671;
  double t6672;
  double t6584;
  double t6588;
  double t6589;
  double t6593;
  double t6594;
  double t6682;
  double t6683;
  double t6684;
  double t6685;
  double t6686;
  double t6613;
  double t6692;
  double t6744;
  double t6745;
  double t6746;
  double t6747;
  double t6748;
  double t6740;
  double t6741;
  double t6742;
  double t6627;
  double t6628;
  double t6629;
  double t6630;
  double t6631;
  double t6649;
  double t6651;
  double t6653;
  double t6511;
  double t6514;
  double t6517;
  double t6703;
  double t6704;
  double t6705;
  double t6706;
  double t6707;
  double t6676;
  double t6677;
  double t6678;
  double t6679;
  double t6680;
  double t6575;
  double t6579;
  double t6580;
  double t6581;
  double t6582;
  double t6720;
  double t6721;
  double t6722;
  double t6723;
  double t6724;
  double t6725;
  double t6726;
  double t6619;
  double t6693;
  double t6749;
  double t6779;
  double t6780;
  double t6781;
  double t6793;
  double t6794;
  double t6282;
  t6185 = Cos(var1[5]);
  t6182 = Cos(var1[6]);
  t6183 = Sin(var1[5]);
  t6186 = Sin(var1[6]);
  t6175 = Sin(var1[2]);
  t6238 = Cos(var1[2]);
  t6292 = -1.*t6182;
  t6294 = 1. + t6292;
  t6295 = 0.4*t6294;
  t6296 = 0.64*t6182;
  t6328 = t6295 + t6296;
  t6184 = -1.*t6182*t6183;
  t6187 = -1.*t6185*t6186;
  t6230 = t6184 + t6187;
  t6363 = t6185*t6182;
  t6365 = -1.*t6183*t6186;
  t6370 = t6363 + t6365;
  t6379 = t6238*t6230;
  t6386 = -1.*t6175*t6370;
  t6387 = t6379 + t6386;
  t6329 = t6328*t6182;
  t6231 = -1.*t6175*t6230;
  t6247 = -1.*t6185*t6182;
  t6254 = t6183*t6186;
  t6255 = t6247 + t6254;
  t6280 = t6238*t6255;
  t6281 = t6231 + t6280;
  t6359 = t6182*t6183;
  t6360 = t6185*t6186;
  t6361 = t6359 + t6360;
  t6362 = -1.*t6175*t6361;
  t6373 = t6238*t6370;
  t6374 = t6362 + t6373;
  t6427 = t6175*t6230;
  t6428 = t6427 + t6373;
  t6435 = -1.*t6238*t6370;
  t6436 = t6231 + t6435;
  t6437 = t6238*t6361;
  t6439 = t6175*t6370;
  t6440 = t6437 + t6439;
  t6450 = t6175*t6255;
  t6451 = t6379 + t6450;
  t6466 = t6328*t6183;
  t6467 = 0.24*t6185*t6186;
  t6468 = t6466 + t6467;
  t6470 = t6185*t6328;
  t6471 = -0.24*t6183*t6186;
  t6472 = t6470 + t6471;
  t6476 = -0.24*t6182*t6183;
  t6480 = -0.24*t6185*t6186;
  t6481 = t6476 + t6480;
  t6488 = 0.24*t6185*t6182;
  t6489 = t6488 + t6471;
  t6330 = Power(t6182,2);
  t6336 = -0.24*t6330;
  t6354 = t6329 + t6336;
  t6410 = Power(t6186,2);
  t6411 = 0.24*t6410;
  t6412 = t6329 + t6411;
  t6508 = t6175*t6361;
  t6509 = t6508 + t6280;
  t6376 = t6328*t6186;
  t6377 = -0.24*t6182*t6186;
  t6378 = t6376 + t6377;
  t6393 = -1.*t6328*t6186;
  t6400 = 0.24*t6182*t6186;
  t6401 = t6393 + t6400;
  t6447 = -1.*t6175*t6255;
  t6494 = t6468*t6361;
  t6495 = t6370*t6472;
  t6496 = t6494 + t6495;
  t6469 = -1.*t6468*t6370;
  t6473 = -1.*t6230*t6472;
  t6474 = t6469 + t6473;
  t6486 = t6468*t6370;
  t6487 = t6230*t6472;
  t6485 = t6481*t6370;
  t6491 = t6361*t6489;
  t6492 = t6485 + t6486 + t6487 + t6491;
  t6538 = -1.*t6328*t6183;
  t6539 = t6538 + t6480;
  t6499 = -1.*t6230*t6468;
  t6501 = -1.*t6472*t6255;
  t6498 = -1.*t6230*t6481;
  t6500 = -1.*t6370*t6489;
  t6502 = t6498 + t6499 + t6500 + t6501;
  t6548 = -0.24*t6185*t6182;
  t6549 = 0.24*t6183*t6186;
  t6550 = t6548 + t6549;
  t6510 = -0.384*var2[6]*t6509;
  t6512 = 3.2*t6412*t6509;
  t6513 = 3.2*t6378*t6451;
  t6519 = 6.4*t6428*t6387;
  t6520 = 3.2*t6440*t6281;
  t6521 = 3.2*t6387*t6509;
  t6522 = t6437 + t6447;
  t6523 = 3.2*t6428*t6522;
  t6524 = 3.2*t6374*t6451;
  t6525 = 6.4*t6281*t6451;
  t6526 = t6519 + t6520 + t6521 + t6523 + t6524 + t6525;
  t6527 = -0.5*var2[1]*t6526;
  t6528 = Power(t6428,2);
  t6529 = 6.4*t6528;
  t6530 = 6.4*t6428*t6509;
  t6531 = 6.4*t6440*t6451;
  t6532 = Power(t6451,2);
  t6533 = 6.4*t6532;
  t6534 = t6529 + t6530 + t6531 + t6533;
  t6535 = -0.5*var2[0]*t6534;
  t6536 = 3.2*t6496*t6509;
  t6537 = 3.2*t6474*t6451;
  t6545 = -1.*t6481*t6370;
  t6546 = -1.*t6361*t6472;
  t6551 = -1.*t6230*t6550;
  t6554 = -1.*t6468*t6255;
  t6564 = t6230*t6468;
  t6565 = t6481*t6361;
  t6567 = t6370*t6550;
  t6568 = t6472*t6255;
  t6614 = 3.2*t6378*t6428;
  t6615 = 3.2*t6401*t6428;
  t6616 = 3.2*t6354*t6440;
  t6617 = 3.2*t6412*t6451;
  t6618 = t6614 + t6615 + t6616 + t6617;
  t6598 = 6.4*t6428*t6440;
  t6599 = 6.4*t6428*t6451;
  t6600 = t6598 + t6599;
  t6602 = 3.2*t6428*t6374;
  t6603 = 3.2*t6387*t6440;
  t6604 = 3.2*t6428*t6281;
  t6605 = 3.2*t6387*t6451;
  t6606 = t6602 + t6603 + t6604 + t6605;
  t6608 = 3.2*t6428*t6474;
  t6609 = 3.2*t6428*t6492;
  t6610 = 3.2*t6496*t6451;
  t6611 = 3.2*t6440*t6502;
  t6612 = t6608 + t6609 + t6610 + t6611;
  t6443 = -1.*t6238*t6230;
  t6448 = t6443 + t6447;
  t6429 = -1.*t6238*t6361;
  t6432 = t6429 + t6386;
  t6419 = 6.4*t6374*t6387;
  t6434 = 3.2*t6428*t6432;
  t6441 = 3.2*t6436*t6440;
  t6442 = 6.4*t6387*t6281;
  t6449 = 3.2*t6428*t6448;
  t6452 = 3.2*t6436*t6451;
  t6453 = t6419 + t6434 + t6441 + t6442 + t6449 + t6452;
  t6540 = t6539*t6370;
  t6541 = t6361*t6472;
  t6542 = t6540 + t6486 + t6487 + t6541;
  t6547 = -1.*t6230*t6489;
  t6552 = -1.*t6539*t6255;
  t6553 = -1.*t6481*t6255;
  t6555 = t6545 + t6473 + t6546 + t6547 + t6551 + t6552 + t6553 + t6554;
  t6557 = -1.*t6230*t6539;
  t6558 = -1.*t6370*t6472;
  t6559 = t6557 + t6499 + t6558 + t6501;
  t6562 = t6230*t6539;
  t6563 = t6230*t6481;
  t6566 = t6370*t6489;
  t6569 = t6562 + t6563 + t6564 + t6565 + t6495 + t6566 + t6567 + t6568;
  t6648 = -0.384*var2[6]*t6522;
  t6576 = -1.*t6328*t6182;
  t6577 = 0.24*t6330;
  t6578 = t6576 + t6577;
  t6650 = 3.2*t6378*t6281;
  t6652 = 3.2*t6412*t6522;
  t6655 = Power(t6387,2);
  t6656 = 6.4*t6655;
  t6657 = 6.4*t6374*t6281;
  t6658 = Power(t6281,2);
  t6659 = 6.4*t6658;
  t6660 = 6.4*t6387*t6522;
  t6661 = t6656 + t6657 + t6659 + t6660;
  t6662 = -0.5*var2[1]*t6661;
  t6663 = -0.5*var2[0]*t6526;
  t6664 = 3.2*t6474*t6281;
  t6667 = 3.2*t6496*t6522;
  t6585 = -2.*t6230*t6489;
  t6586 = -2.*t6481*t6255;
  t6587 = t6545 + t6546 + t6585 + t6551 + t6586 + t6554;
  t6590 = 2.*t6230*t6481;
  t6591 = 2.*t6370*t6489;
  t6592 = t6590 + t6564 + t6565 + t6591 + t6567 + t6568;
  t6607 = -0.5*var2[6]*t6606;
  t6475 = 3.2*t6387*t6474;
  t6493 = 3.2*t6387*t6492;
  t6497 = 3.2*t6496*t6281;
  t6503 = 3.2*t6374*t6502;
  t6504 = t6475 + t6493 + t6497 + t6503;
  t6375 = 3.2*t6354*t6374;
  t6388 = 3.2*t6378*t6387;
  t6402 = 3.2*t6401*t6387;
  t6416 = 3.2*t6412*t6281;
  t6417 = t6375 + t6388 + t6402 + t6416;
  t6418 = -0.5*var2[5]*t6417;
  t6690 = t6419 + t6442;
  t6505 = -0.5*var2[2]*t6504;
  t6640 = 3.2*t6436*t6474;
  t6641 = 3.2*t6436*t6492;
  t6642 = 3.2*t6496*t6448;
  t6643 = 3.2*t6432*t6502;
  t6644 = t6640 + t6641 + t6642 + t6643;
  t6543 = 3.2*t6542*t6451;
  t6544 = 3.2*t6492*t6451;
  t6556 = 3.2*t6440*t6555;
  t6560 = 3.2*t6428*t6559;
  t6561 = 3.2*t6428*t6502;
  t6570 = 3.2*t6428*t6569;
  t6571 = t6536 + t6537 + t6543 + t6544 + t6556 + t6560 + t6561 + t6570;
  t6665 = 3.2*t6542*t6281;
  t6666 = 3.2*t6492*t6281;
  t6668 = 3.2*t6374*t6555;
  t6669 = 3.2*t6387*t6559;
  t6670 = 3.2*t6387*t6502;
  t6671 = 3.2*t6387*t6569;
  t6672 = t6664 + t6665 + t6666 + t6667 + t6668 + t6669 + t6670 + t6671;
  t6584 = 6.4*t6492*t6451;
  t6588 = 3.2*t6440*t6587;
  t6589 = 6.4*t6428*t6502;
  t6593 = 3.2*t6428*t6592;
  t6594 = t6536 + t6537 + t6584 + t6588 + t6589 + t6593;
  t6682 = 6.4*t6492*t6281;
  t6683 = 3.2*t6374*t6587;
  t6684 = 6.4*t6387*t6502;
  t6685 = 3.2*t6387*t6592;
  t6686 = t6664 + t6682 + t6667 + t6683 + t6684 + t6685;
  t6613 = -0.5*var2[6]*t6612;
  t6692 = -0.5*var2[6]*t6504;
  t6744 = 3.2*t6354*t6474;
  t6745 = 3.2*t6401*t6496;
  t6746 = 3.2*t6412*t6492;
  t6747 = 3.2*t6378*t6502;
  t6748 = t6744 + t6745 + t6746 + t6747;
  t6740 = 6.4*t6496*t6492;
  t6741 = 6.4*t6474*t6502;
  t6742 = t6740 + t6741;
  t6627 = 3.2*t6378*t6436;
  t6628 = 3.2*t6401*t6436;
  t6629 = 3.2*t6354*t6432;
  t6630 = 3.2*t6412*t6448;
  t6631 = t6627 + t6628 + t6629 + t6630;
  t6649 = 3.2*t6354*t6387;
  t6651 = 3.2*t6401*t6281;
  t6653 = t6649 + t6650 + t6651 + t6652;
  t6511 = 3.2*t6354*t6428;
  t6514 = 3.2*t6401*t6451;
  t6517 = t6511 + t6512 + t6513 + t6514;
  t6703 = 3.2*t6401*t6542;
  t6704 = 3.2*t6378*t6555;
  t6705 = 3.2*t6354*t6559;
  t6706 = 3.2*t6412*t6569;
  t6707 = t6703 + t6704 + t6705 + t6706;
  t6676 = 3.2*t6401*t6374;
  t6677 = 6.4*t6354*t6387;
  t6678 = 3.2*t6578*t6387;
  t6679 = 6.4*t6401*t6281;
  t6680 = t6676 + t6677 + t6678 + t6650 + t6679 + t6652;
  t6575 = 6.4*t6354*t6428;
  t6579 = 3.2*t6578*t6428;
  t6580 = 3.2*t6401*t6440;
  t6581 = 6.4*t6401*t6451;
  t6582 = t6575 + t6579 + t6580 + t6512 + t6513 + t6581;
  t6720 = 3.2*t6401*t6474;
  t6721 = 3.2*t6578*t6496;
  t6722 = 6.4*t6401*t6492;
  t6723 = 3.2*t6378*t6587;
  t6724 = 6.4*t6354*t6502;
  t6725 = 3.2*t6412*t6592;
  t6726 = t6720 + t6721 + t6722 + t6723 + t6724 + t6725;
  t6619 = -0.5*var2[6]*t6618;
  t6693 = -0.5*var2[6]*t6417;
  t6749 = -0.5*var2[6]*t6748;
  t6779 = 6.4*t6354*t6378;
  t6780 = 6.4*t6401*t6412;
  t6781 = t6779 + t6780;
  t6793 = -0.384*var2[0]*t6509;
  t6794 = -0.384*var2[1]*t6522;
  t6282 = -0.384*var2[6]*t6281;
  p_output1[0]=(t6282 + t6418 + t6505 - 0.5*(6.4*t6281*t6428 + 6.4*t6374*t6428 + 6.4*t6387*t6440 + 6.4*t6387*t6451)*var2[0] - 0.5*t6453*var2[1])*var2[6];
  p_output1[1]=(t6510 + t6527 + t6535 - 0.5*t6571*var2[2] - 0.5*t6517*var2[5])*var2[6];
  p_output1[2]=(t6510 + t6527 + t6535 - 0.5*t6594*var2[2] - 0.5*t6582*var2[5])*var2[6];
  p_output1[3]=-0.5*t6600*var2[6];
  p_output1[4]=t6607;
  p_output1[5]=t6613;
  p_output1[6]=t6619;
  p_output1[7]=-0.5*t6600*var2[0] - 0.5*t6606*var2[1] - 0.5*t6612*var2[2] - 0.5*t6618*var2[5] - 0.768*t6451*var2[6];
  p_output1[8]=var2[6]*(-0.5*t6453*var2[0] - 0.5*(6.4*t6387*t6432 + 6.4*t6281*t6436 + 6.4*t6374*t6436 + 6.4*t6387*t6448)*var2[1] - 0.5*t6644*var2[2] - 0.5*t6631*var2[5] - 0.384*t6448*var2[6]);
  p_output1[9]=(t6648 + t6662 + t6663 - 0.5*t6672*var2[2] - 0.5*t6653*var2[5])*var2[6];
  p_output1[10]=(t6648 + t6662 + t6663 - 0.5*t6686*var2[2] - 0.5*t6680*var2[5])*var2[6];
  p_output1[11]=t6607;
  p_output1[12]=-0.5*t6690*var2[6];
  p_output1[13]=t6692;
  p_output1[14]=t6693;
  p_output1[15]=t6418 + t6505 - 0.5*t6606*var2[0] - 0.5*t6690*var2[1] - 0.768*t6281*var2[6];
  p_output1[16]=(-0.5*t6504*var2[0] - 0.5*t6644*var2[1])*var2[6];
  p_output1[17]=var2[6]*(-0.5*t6571*var2[0] - 0.5*t6672*var2[1] - 0.5*(6.4*t6492*t6542 + 6.4*t6474*t6555 + 6.4*t6502*t6559 + 6.4*t6496*t6569)*var2[2] - 0.5*t6707*var2[5] - 0.384*t6569*var2[6]);
  p_output1[18]=var2[6]*(-0.5*t6594*var2[0] - 0.5*t6686*var2[1] - 0.5*(6.4*Power(t6492,2) + 6.4*Power(t6502,2) + 6.4*t6474*t6587 + 6.4*t6496*t6592)*var2[2] - 0.5*t6726*var2[5] - 0.384*t6592*var2[6]);
  p_output1[19]=t6613;
  p_output1[20]=t6692;
  p_output1[21]=-0.5*t6742*var2[6];
  p_output1[22]=t6749;
  p_output1[23]=-0.5*t6612*var2[0] - 0.5*t6504*var2[1] - 0.5*t6742*var2[2] - 0.5*t6748*var2[5] - 0.768*t6492*var2[6];
  p_output1[24]=(-0.5*t6417*var2[0] - 0.5*t6631*var2[1])*var2[6];
  p_output1[25]=(-0.5*t6517*var2[0] - 0.5*t6653*var2[1] - 0.5*t6707*var2[2])*var2[6];
  p_output1[26]=var2[6]*(-0.5*t6582*var2[0] - 0.5*t6680*var2[1] - 0.5*t6726*var2[2] - 0.5*(6.4*Power(t6354,2) + 6.4*t6378*t6401 + 6.4*Power(t6401,2) + 6.4*t6412*t6578)*var2[5] - 0.384*t6578*var2[6]);
  p_output1[27]=t6619;
  p_output1[28]=t6693;
  p_output1[29]=t6749;
  p_output1[30]=-0.5*t6781*var2[6];
  p_output1[31]=-0.5*t6618*var2[0] - 0.5*t6417*var2[1] - 0.5*t6748*var2[2] - 0.5*t6781*var2[5] - 0.768*t6401*var2[6];
  p_output1[32]=(-0.384*t6281*var2[0] - 0.384*t6448*var2[1])*var2[6];
  p_output1[33]=(t6793 + t6794 - 0.384*t6569*var2[2])*var2[6];
  p_output1[34]=(t6793 + t6794 - 0.384*t6592*var2[2] - 0.384*t6578*var2[5])*var2[6];
  p_output1[35]=-0.384*t6451*var2[6];
  p_output1[36]=t6282;
  p_output1[37]=-0.384*t6492*var2[6];
  p_output1[38]=-0.384*t6401*var2[6];
  p_output1[39]=-0.384*t6451*var2[0] - 0.384*t6281*var2[1] - 0.384*t6492*var2[2] - 0.384*t6401*var2[5];
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

namespace LeftStance
{

void J_Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
