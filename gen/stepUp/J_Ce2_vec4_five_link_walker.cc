/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:31 GMT-05:00
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
  double t5158;
  double t299;
  double t743;
  double t5904;
  double t8137;
  double t298;
  double t2913;
  double t5969;
  double t6074;
  double t10921;
  double t11029;
  double t11037;
  double t11047;
  double t11050;
  double t7928;
  double t8941;
  double t9301;
  double t9510;
  double t9513;
  double t9649;
  double t13853;
  double t13873;
  double t13881;
  double t12151;
  double t12170;
  double t13602;
  double t10199;
  double t10750;
  double t10774;
  double t15080;
  double t15082;
  double t15084;
  double t11152;
  double t11233;
  double t11249;
  double t11143;
  double t11250;
  double t11251;
  double t15151;
  double t15104;
  double t15105;
  double t15106;
  double t15174;
  double t15179;
  double t15201;
  double t15211;
  double t15107;
  double t15152;
  double t15213;
  double t15214;
  double t15215;
  double t15259;
  double t15278;
  double t15378;
  double t15381;
  double t15382;
  double t15384;
  double t15385;
  double t15386;
  double t15392;
  double t15393;
  double t15394;
  double t10852;
  double t11342;
  double t11539;
  double t11848;
  double t11994;
  double t15446;
  double t15451;
  double t11096;
  double t11134;
  double t11136;
  double t15073;
  double t15085;
  double t15100;
  double t15102;
  double t15241;
  double t15292;
  double t15293;
  double t15294;
  double t15308;
  double t15309;
  double t15310;
  double t15352;
  double t15361;
  double t15362;
  double t15367;
  double t15372;
  double t15373;
  double t15413;
  double t15418;
  double t15419;
  double t15383;
  double t15389;
  double t15390;
  double t15395;
  double t15396;
  double t15397;
  double t15406;
  double t15407;
  double t15426;
  double t15427;
  double t15428;
  double t15432;
  double t15433;
  double t15502;
  double t15503;
  double t15504;
  double t15452;
  double t15453;
  double t15459;
  double t15465;
  double t15466;
  double t15467;
  double t15468;
  double t15472;
  double t15473;
  double t15474;
  double t15484;
  double t15485;
  double t15486;
  double t15491;
  double t15492;
  double t15493;
  double t15496;
  double t15497;
  double t15542;
  double t15543;
  double t15501;
  double t15545;
  double t15546;
  double t15507;
  double t15512;
  double t15552;
  double t15553;
  double t15516;
  double t15579;
  double t15580;
  double t15581;
  double t15582;
  double t15583;
  double t15585;
  double t15586;
  double t15587;
  double t15588;
  double t15589;
  double t15590;
  double t15591;
  double t15592;
  double t15593;
  double t15595;
  double t15596;
  double t15597;
  double t15598;
  double t15599;
  double t15600;
  double t15231;
  double t15253;
  double t15180;
  double t15199;
  double t15162;
  double t15200;
  double t15229;
  double t15230;
  double t15258;
  double t15279;
  double t15280;
  double t15614;
  double t15619;
  double t15620;
  double t15482;
  double t15628;
  double t15499;
  double t15500;
  double t15505;
  double t15506;
  double t15508;
  double t15511;
  double t15513;
  double t15514;
  double t15515;
  double t15517;
  double t15637;
  double t15523;
  double t15524;
  double t15525;
  double t15638;
  double t15527;
  double t15528;
  double t15529;
  double t15639;
  double t15642;
  double t15643;
  double t15644;
  double t15645;
  double t15646;
  double t15647;
  double t15533;
  double t15651;
  double t15544;
  double t15547;
  double t15548;
  double t15653;
  double t15550;
  double t15551;
  double t15554;
  double t15555;
  double t15556;
  double t15557;
  double t15564;
  double t15565;
  double t15566;
  double t15568;
  double t15569;
  double t15570;
  double t15571;
  double t15572;
  double t15573;
  double t15594;
  double t15391;
  double t15408;
  double t15420;
  double t15434;
  double t15435;
  double t9652;
  double t11328;
  double t11998;
  double t11999;
  double t15678;
  double t15679;
  double t15439;
  double t15629;
  double t15630;
  double t15631;
  double t15632;
  double t15633;
  double t15498;
  double t15509;
  double t15510;
  double t15518;
  double t15519;
  double t15652;
  double t15654;
  double t15655;
  double t15656;
  double t15657;
  double t15541;
  double t15549;
  double t15558;
  double t15559;
  double t15567;
  double t15574;
  double t15575;
  double t15668;
  double t15669;
  double t15670;
  double t15671;
  double t15672;
  double t15673;
  double t15674;
  double t15601;
  double t15681;
  double t15725;
  double t15726;
  double t15727;
  double t15615;
  double t15616;
  double t15617;
  double t15640;
  double t15460;
  double t15692;
  double t15693;
  double t15694;
  double t15661;
  double t15662;
  double t15663;
  double t15526;
  double t15530;
  double t15531;
  double t15709;
  double t15710;
  double t15711;
  double t15712;
  double t15713;
  double t15603;
  double t15604;
  double t15605;
  double t15606;
  double t12093;
  double t15730;
  double t15731;
  double t15732;
  double t15763;
  double t15764;
  double t15612;
  double t15686;
  double t15738;
  t5158 = Cos(var1[3]);
  t299 = Cos(var1[4]);
  t743 = Sin(var1[3]);
  t5904 = Sin(var1[4]);
  t8137 = Cos(var1[2]);
  t298 = Sin(var1[2]);
  t2913 = -1.*t299*t743;
  t5969 = -1.*t5158*t5904;
  t6074 = t2913 + t5969;
  t10921 = -1.*t299;
  t11029 = 1. + t10921;
  t11037 = 0.4*t11029;
  t11047 = 0.64*t299;
  t11050 = t11037 + t11047;
  t7928 = -1.*t298*t6074;
  t8941 = -1.*t5158*t299;
  t9301 = t743*t5904;
  t9510 = t8941 + t9301;
  t9513 = t8137*t9510;
  t9649 = t7928 + t9513;
  t13853 = t8137*t5158;
  t13873 = -1.*t298*t743;
  t13881 = t13853 + t13873;
  t12151 = -1.*t5158*t298;
  t12170 = -1.*t8137*t743;
  t13602 = t12151 + t12170;
  t10199 = -1.*t8137*t5158;
  t10750 = t298*t743;
  t10774 = t10199 + t10750;
  t15080 = t5158*t298;
  t15082 = t8137*t743;
  t15084 = t15080 + t15082;
  t11152 = t5158*t299;
  t11233 = -1.*t743*t5904;
  t11249 = t11152 + t11233;
  t11143 = t8137*t6074;
  t11250 = -1.*t298*t11249;
  t11251 = t11143 + t11250;
  t15151 = t8137*t11249;
  t15104 = t299*t743;
  t15105 = t5158*t5904;
  t15106 = t15104 + t15105;
  t15174 = t298*t6074;
  t15179 = t15174 + t15151;
  t15201 = -1.*t8137*t11249;
  t15211 = t7928 + t15201;
  t15107 = -1.*t298*t15106;
  t15152 = t15107 + t15151;
  t15213 = t8137*t15106;
  t15214 = t298*t11249;
  t15215 = t15213 + t15214;
  t15259 = t298*t9510;
  t15278 = t11143 + t15259;
  t15378 = t11050*t743;
  t15381 = 0.24*t5158*t5904;
  t15382 = t15378 + t15381;
  t15384 = t5158*t11050;
  t15385 = -0.24*t743*t5904;
  t15386 = t15384 + t15385;
  t15392 = -1.*t11050*t743;
  t15393 = -0.24*t5158*t5904;
  t15394 = t15392 + t15393;
  t10852 = 0.748*t10774;
  t11342 = t11050*t299;
  t11539 = Power(t5904,2);
  t11848 = 0.24*t11539;
  t11994 = t11342 + t11848;
  t15446 = t298*t15106;
  t15451 = t15446 + t9513;
  t11096 = t11050*t5904;
  t11134 = -0.24*t299*t5904;
  t11136 = t11096 + t11134;
  t15073 = 20.4*t13602*t13881;
  t15085 = 6.8*t15084*t13881;
  t15100 = 20.4*t13602*t10774;
  t15102 = 6.8*t15084*t10774;
  t15241 = -1.*t298*t9510;
  t15292 = Power(t13602,2);
  t15293 = 13.6*t15292;
  t15294 = 13.6*t13602*t15084;
  t15308 = Power(t13881,2);
  t15309 = 13.6*t15308;
  t15310 = 13.6*t13881*t10774;
  t15352 = Power(t5158,2);
  t15361 = 0.11*t15352;
  t15362 = Power(t743,2);
  t15367 = 0.11*t15362;
  t15372 = t15361 + t15367;
  t15373 = 6.8*t10774*t15372;
  t15413 = t15382*t15106;
  t15418 = t11249*t15386;
  t15419 = t15413 + t15418;
  t15383 = -1.*t15382*t11249;
  t15389 = -1.*t6074*t15386;
  t15390 = t15383 + t15389;
  t15395 = t15394*t11249;
  t15396 = t15382*t11249;
  t15397 = t6074*t15386;
  t15406 = t15106*t15386;
  t15407 = t15395 + t15396 + t15397 + t15406;
  t15426 = -1.*t6074*t15394;
  t15427 = -1.*t6074*t15382;
  t15428 = -1.*t11249*t15386;
  t15432 = -1.*t15386*t9510;
  t15433 = t15426 + t15427 + t15428 + t15432;
  t15502 = -1.*t5158*t11050;
  t15503 = 0.24*t743*t5904;
  t15504 = t15502 + t15503;
  t15452 = -0.384*var2[4]*t15451;
  t15453 = 3.2*t11994*t15451;
  t15459 = 3.2*t11136*t15278;
  t15465 = 6.4*t15179*t11251;
  t15466 = 3.2*t15215*t9649;
  t15467 = 3.2*t11251*t15451;
  t15468 = t15213 + t15241;
  t15472 = 3.2*t15179*t15468;
  t15473 = 3.2*t15152*t15278;
  t15474 = 6.4*t9649*t15278;
  t15484 = Power(t15179,2);
  t15485 = 6.4*t15484;
  t15486 = 6.4*t15179*t15451;
  t15491 = 6.4*t15215*t15278;
  t15492 = Power(t15278,2);
  t15493 = 6.4*t15492;
  t15496 = 3.2*t15419*t15451;
  t15497 = 3.2*t15390*t15278;
  t15542 = -0.24*t299*t743;
  t15543 = t15542 + t15393;
  t15501 = -1.*t15106*t15386;
  t15545 = 0.24*t5158*t299;
  t15546 = t15545 + t15385;
  t15507 = -1.*t15382*t9510;
  t15512 = t6074*t15382;
  t15552 = -0.24*t5158*t299;
  t15553 = t15552 + t15503;
  t15516 = t15386*t9510;
  t15579 = 13.6*t13602*t13881;
  t15580 = 13.6*t15084*t13881;
  t15581 = 6.4*t15179*t15215;
  t15582 = 6.4*t15179*t15278;
  t15583 = t15579 + t15580 + t15581 + t15582;
  t15585 = 6.8*t15292;
  t15586 = 6.8*t13602*t15084;
  t15587 = 6.8*t15308;
  t15588 = 6.8*t13881*t10774;
  t15589 = 3.2*t15179*t15152;
  t15590 = 3.2*t11251*t15215;
  t15591 = 3.2*t15179*t9649;
  t15592 = 3.2*t11251*t15278;
  t15593 = t15585 + t15586 + t15587 + t15588 + t15589 + t15590 + t15591 + t15592;
  t15595 = 6.8*t13602*t15372;
  t15596 = 3.2*t15179*t15390;
  t15597 = 3.2*t15179*t15407;
  t15598 = 3.2*t15419*t15278;
  t15599 = 3.2*t15215*t15433;
  t15600 = t15595 + t15596 + t15597 + t15598 + t15599;
  t15231 = -1.*t8137*t6074;
  t15253 = t15231 + t15241;
  t15180 = -1.*t8137*t15106;
  t15199 = t15180 + t11250;
  t15162 = 6.4*t15152*t11251;
  t15200 = 3.2*t15179*t15199;
  t15229 = 3.2*t15211*t15215;
  t15230 = 6.4*t11251*t9649;
  t15258 = 3.2*t15179*t15253;
  t15279 = 3.2*t15211*t15278;
  t15280 = t15073 + t15085 + t15100 + t15102 + t15162 + t15200 + t15229 + t15230 + t15258 + t15279;
  t15614 = 0.748*t15084;
  t15619 = Power(t10774,2);
  t15620 = 13.6*t15619;
  t15482 = t15073 + t15085 + t15100 + t15102 + t15465 + t15466 + t15467 + t15472 + t15473 + t15474;
  t15628 = 6.8*t15084*t15372;
  t15499 = -1.*t15394*t11249;
  t15500 = -2.*t6074*t15386;
  t15505 = -1.*t6074*t15504;
  t15506 = -2.*t15394*t9510;
  t15508 = t15499 + t15500 + t15501 + t15505 + t15506 + t15507;
  t15511 = 2.*t6074*t15394;
  t15513 = t15394*t15106;
  t15514 = 2.*t11249*t15386;
  t15515 = t11249*t15504;
  t15517 = t15511 + t15512 + t15513 + t15514 + t15515 + t15516;
  t15637 = -0.384*var2[4]*t15468;
  t15523 = Power(t299,2);
  t15524 = -0.24*t15523;
  t15525 = t11342 + t15524;
  t15638 = 3.2*t11136*t9649;
  t15527 = -1.*t11050*t5904;
  t15528 = 0.24*t299*t5904;
  t15529 = t15527 + t15528;
  t15639 = 3.2*t11994*t15468;
  t15642 = Power(t11251,2);
  t15643 = 6.4*t15642;
  t15644 = 6.4*t15152*t9649;
  t15645 = Power(t9649,2);
  t15646 = 6.4*t15645;
  t15647 = 6.4*t11251*t15468;
  t15533 = t15465 + t15466 + t15467 + t15472 + t15473 + t15474;
  t15651 = 3.2*t15390*t9649;
  t15544 = t15543*t11249;
  t15547 = t15106*t15546;
  t15548 = t15544 + t15396 + t15397 + t15547;
  t15653 = 3.2*t15419*t15468;
  t15550 = -1.*t15543*t11249;
  t15551 = -1.*t6074*t15546;
  t15554 = -1.*t6074*t15553;
  t15555 = -1.*t15394*t9510;
  t15556 = -1.*t15543*t9510;
  t15557 = t15550 + t15389 + t15501 + t15551 + t15554 + t15555 + t15556 + t15507;
  t15564 = -1.*t6074*t15543;
  t15565 = -1.*t11249*t15546;
  t15566 = t15564 + t15427 + t15565 + t15432;
  t15568 = t6074*t15394;
  t15569 = t6074*t15543;
  t15570 = t15543*t15106;
  t15571 = t11249*t15546;
  t15572 = t11249*t15553;
  t15573 = t15568 + t15569 + t15512 + t15570 + t15418 + t15571 + t15572 + t15516;
  t15594 = -0.5*var2[3]*t15593;
  t15391 = 3.2*t11251*t15390;
  t15408 = 3.2*t11251*t15407;
  t15420 = 3.2*t15419*t9649;
  t15434 = 3.2*t15152*t15433;
  t15435 = t15373 + t15391 + t15408 + t15420 + t15434;
  t9652 = -0.384*var2[4]*t9649;
  t11328 = 3.2*t11136*t11251;
  t11998 = 3.2*t11994*t9649;
  t11999 = t10852 + t11328 + t11998;
  t15678 = 13.6*t13602*t10774;
  t15679 = t15579 + t15678 + t15162 + t15230;
  t15439 = -0.5*var2[2]*t15435;
  t15629 = 3.2*t15211*t15390;
  t15630 = 3.2*t15211*t15407;
  t15631 = 3.2*t15419*t15253;
  t15632 = 3.2*t15199*t15433;
  t15633 = t15628 + t15629 + t15630 + t15631 + t15632;
  t15498 = 6.4*t15407*t15278;
  t15509 = 3.2*t15215*t15508;
  t15510 = 6.4*t15179*t15433;
  t15518 = 3.2*t15179*t15517;
  t15519 = t15373 + t15496 + t15497 + t15498 + t15509 + t15510 + t15518;
  t15652 = 6.4*t15407*t9649;
  t15654 = 3.2*t15152*t15508;
  t15655 = 6.4*t11251*t15433;
  t15656 = 3.2*t11251*t15517;
  t15657 = t15628 + t15651 + t15652 + t15653 + t15654 + t15655 + t15656;
  t15541 = 3.2*t15407*t15278;
  t15549 = 3.2*t15548*t15278;
  t15558 = 3.2*t15215*t15557;
  t15559 = 3.2*t15179*t15433;
  t15567 = 3.2*t15179*t15566;
  t15574 = 3.2*t15179*t15573;
  t15575 = t15496 + t15497 + t15541 + t15549 + t15558 + t15559 + t15567 + t15574;
  t15668 = 3.2*t15407*t9649;
  t15669 = 3.2*t15548*t9649;
  t15670 = 3.2*t15152*t15557;
  t15671 = 3.2*t11251*t15433;
  t15672 = 3.2*t11251*t15566;
  t15673 = 3.2*t11251*t15573;
  t15674 = t15651 + t15668 + t15669 + t15653 + t15670 + t15671 + t15672 + t15673;
  t15601 = -0.5*var2[3]*t15600;
  t15681 = -0.5*var2[3]*t15435;
  t15725 = 6.4*t15407*t15419;
  t15726 = 6.4*t15390*t15433;
  t15727 = t15725 + t15726;
  t15615 = 3.2*t11136*t15211;
  t15616 = 3.2*t11994*t15253;
  t15617 = t15614 + t15615 + t15616;
  t15640 = t15614 + t15638 + t15639;
  t15460 = t10852 + t15453 + t15459;
  t15692 = 3.2*t11136*t15508;
  t15693 = 3.2*t11994*t15517;
  t15694 = t15692 + t15693;
  t15661 = 3.2*t15525*t11251;
  t15662 = 3.2*t15529*t9649;
  t15663 = t15661 + t15638 + t15662 + t15639;
  t15526 = 3.2*t15525*t15179;
  t15530 = 3.2*t15529*t15278;
  t15531 = t15526 + t15453 + t15459 + t15530;
  t15709 = 3.2*t15529*t15407;
  t15710 = 3.2*t11136*t15557;
  t15711 = 3.2*t15525*t15433;
  t15712 = 3.2*t11994*t15573;
  t15713 = t15709 + t15710 + t15711 + t15712;
  t15603 = 0.748*t13602;
  t15604 = 3.2*t11136*t15179;
  t15605 = 3.2*t11994*t15278;
  t15606 = t15603 + t15604 + t15605;
  t12093 = -0.5*var2[3]*t11999;
  t15730 = 3.2*t11994*t15407;
  t15731 = 3.2*t11136*t15433;
  t15732 = t15730 + t15731;
  t15763 = -0.384*var2[0]*t15451;
  t15764 = -0.384*var2[1]*t15468;
  t15612 = -0.384*var2[3]*t15278;
  t15686 = -0.384*var2[3]*t9649;
  t15738 = -0.384*var2[3]*t15407;
  p_output1[0]=(t12093 + t15439 + t9652 - 0.5*(6.4*t15152*t15179 + 6.4*t11251*t15215 + 6.4*t11251*t15278 + t15293 + t15294 + t15309 + t15310 + 6.4*t15179*t9649)*var2[0] - 0.5*t15280*var2[1])*var2[3];
  p_output1[1]=var2[3]*(t15452 - 0.5*(t15293 + t15294 + t15309 + t15310 + t15485 + t15486 + t15491 + t15493)*var2[0] - 0.5*t15482*var2[1] - 0.5*t15519*var2[2] - 0.5*t15460*var2[3]);
  p_output1[2]=var2[3]*(t15452 - 0.5*(t15485 + t15486 + t15491 + t15493)*var2[0] - 0.5*t15533*var2[1] - 0.5*t15575*var2[2] - 0.5*t15531*var2[3]);
  p_output1[3]=-0.5*t15583*var2[3];
  p_output1[4]=t15594;
  p_output1[5]=t15601;
  p_output1[6]=-0.5*t15583*var2[0] - 0.5*t15593*var2[1] - 0.5*t15600*var2[2] - 1.*t15606*var2[3] - 0.384*t15278*var2[4];
  p_output1[7]=t15612;
  p_output1[8]=var2[3]*(-0.5*t15280*var2[0] - 0.5*(6.4*t11251*t15199 + 6.4*t15152*t15211 + 6.4*t11251*t15253 + t15293 + t15294 + t15310 + t15620 + 6.4*t15211*t9649)*var2[1] - 0.5*t15633*var2[2] - 0.5*t15617*var2[3] - 0.384*t15253*var2[4]);
  p_output1[9]=var2[3]*(t15637 - 0.5*t15482*var2[0] - 0.5*(t15293 + t15294 + t15310 + t15620 + t15643 + t15644 + t15646 + t15647)*var2[1] - 0.5*t15657*var2[2] - 0.5*t15640*var2[3]);
  p_output1[10]=var2[3]*(t15637 - 0.5*t15533*var2[0] - 0.5*(t15643 + t15644 + t15646 + t15647)*var2[1] - 0.5*t15674*var2[2] - 0.5*t15663*var2[3]);
  p_output1[11]=t15594;
  p_output1[12]=-0.5*t15679*var2[3];
  p_output1[13]=t15681;
  p_output1[14]=t15439 + t9652 - 0.5*t15593*var2[0] - 0.5*t15679*var2[1] - 1.*t11999*var2[3];
  p_output1[15]=t15686;
  p_output1[16]=(-0.5*t15435*var2[0] - 0.5*t15633*var2[1])*var2[3];
  p_output1[17]=var2[3]*(-0.5*t15519*var2[0] - 0.5*t15657*var2[1] - 0.5*(6.4*Power(t15407,2) + 6.4*Power(t15433,2) + 6.4*t15390*t15508 + 6.4*t15419*t15517)*var2[2] - 0.5*t15694*var2[3] - 0.384*t15517*var2[4]);
  p_output1[18]=var2[3]*(-0.5*t15575*var2[0] - 0.5*t15674*var2[1] - 0.5*(6.4*t15407*t15548 + 6.4*t15390*t15557 + 6.4*t15433*t15566 + 6.4*t15419*t15573)*var2[2] - 0.5*t15713*var2[3] - 0.384*t15573*var2[4]);
  p_output1[19]=t15601;
  p_output1[20]=t15681;
  p_output1[21]=-0.5*t15727*var2[3];
  p_output1[22]=-0.5*t15600*var2[0] - 0.5*t15435*var2[1] - 0.5*t15727*var2[2] - 1.*t15732*var2[3] - 0.384*t15407*var2[4];
  p_output1[23]=t15738;
  p_output1[24]=(-0.5*t11999*var2[0] - 0.5*t15617*var2[1])*var2[3];
  p_output1[25]=(-0.5*t15460*var2[0] - 0.5*t15640*var2[1] - 0.5*t15694*var2[2])*var2[3];
  p_output1[26]=(-0.5*t15531*var2[0] - 0.5*t15663*var2[1] - 0.5*t15713*var2[2])*var2[3];
  p_output1[27]=-0.5*t15606*var2[3];
  p_output1[28]=t12093;
  p_output1[29]=-0.5*t15732*var2[3];
  p_output1[30]=-0.5*t15606*var2[0] - 0.5*t11999*var2[1] - 0.5*t15732*var2[2];
  p_output1[31]=(-0.384*t9649*var2[0] - 0.384*t15253*var2[1])*var2[3];
  p_output1[32]=(t15763 + t15764 - 0.384*t15517*var2[2])*var2[3];
  p_output1[33]=(t15763 + t15764 - 0.384*t15573*var2[2])*var2[3];
  p_output1[34]=t15612;
  p_output1[35]=t15686;
  p_output1[36]=t15738;
  p_output1[37]=-0.384*t15278*var2[0] - 0.384*t9649*var2[1] - 0.384*t15407*var2[2];
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

namespace DoubleSupportConstHeight
{

void J_Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
