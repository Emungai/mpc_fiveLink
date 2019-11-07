/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:25:54 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t6553;
  double t6550;
  double t6551;
  double t6556;
  double t6560;
  double t6549;
  double t6552;
  double t6557;
  double t6558;
  double t6559;
  double t6561;
  double t6562;
  double t6563;
  double t6564;
  double t6565;
  double t6573;
  double t6574;
  double t6575;
  double t6576;
  double t6577;
  double t6604;
  double t6601;
  double t6602;
  double t6605;
  double t6603;
  double t6606;
  double t6607;
  double t6608;
  double t6609;
  double t6613;
  double t6614;
  double t6615;
  double t6617;
  double t6625;
  double t6626;
  double t6627;
  double t6628;
  double t6629;
  double t6569;
  double t6570;
  double t6571;
  double t6586;
  double t6590;
  double t6591;
  double t6592;
  double t6593;
  double t6594;
  double t6621;
  double t6622;
  double t6623;
  double t6645;
  double t6646;
  double t6655;
  double t6656;
  double t6657;
  double t6658;
  double t6672;
  double t6673;
  double t6674;
  double t6687;
  double t6691;
  double t6692;
  double t7157;
  double t7202;
  double t7205;
  double t7220;
  double t7226;
  double t7230;
  double t7594;
  double t7596;
  double t7621;
  double t7632;
  double t7716;
  double t7717;
  double t6547;
  double t6548;
  double t6676;
  double t6677;
  double t6678;
  double t6567;
  double t6568;
  double t6667;
  double t6668;
  double t6670;
  double t6583;
  double t6584;
  double t6585;
  double t6680;
  double t6681;
  double t6578;
  double t6579;
  double t6580;
  double t6581;
  double t6599;
  double t6600;
  double t6694;
  double t6695;
  double t6697;
  double t6619;
  double t6620;
  double t6683;
  double t6684;
  double t6685;
  double t6642;
  double t6643;
  double t6644;
  double t6699;
  double t6700;
  double t6630;
  double t6631;
  double t6632;
  double t6633;
  double t6665;
  double t6666;
  double t6719;
  double t6720;
  double t6721;
  double t6722;
  double t6737;
  double t6738;
  double t6759;
  double t6760;
  double t6708;
  double t6718;
  double t6671;
  double t6675;
  double t6679;
  double t6682;
  double t6686;
  double t6693;
  double t6698;
  double t6701;
  double t6705;
  double t6796;
  double t6808;
  double t6838;
  double t6840;
  double t7067;
  double t7081;
  double t7111;
  double t7219;
  double t7233;
  double t7238;
  double t7370;
  double t7372;
  double t7373;
  double t7563;
  double t7568;
  double t7581;
  double t7582;
  double t7583;
  double t7627;
  double t7720;
  double t7836;
  double t7862;
  double t7879;
  double t7976;
  double t11194;
  double t11244;
  double t11252;
  double t6809;
  double t7114;
  double t7242;
  double t7562;
  double t7585;
  double t7855;
  double t8157;
  double t8165;
  double t10725;
  double t10730;
  double t10763;
  double t10856;
  double t10873;
  double t10897;
  double t10905;
  double t10906;
  double t9151;
  double t9185;
  double t9241;
  double t9406;
  double t6572;
  double t6582;
  double t6595;
  double t6596;
  double t11035;
  double t11042;
  double t11048;
  double t11073;
  double t12136;
  double t12142;
  double t10967;
  double t10983;
  double t11075;
  double t11127;
  double t11140;
  double t11150;
  double t11156;
  double t11174;
  double t11186;
  double t11188;
  double t11191;
  double t11298;
  double t11306;
  double t11307;
  double t11319;
  double t11540;
  double t11562;
  double t11587;
  double t9542;
  double t9555;
  double t9608;
  double t9615;
  double t6624;
  double t6634;
  double t6659;
  double t6663;
  double t11679;
  double t11836;
  double t11847;
  double t11888;
  double t12228;
  double t12247;
  double t11594;
  double t11612;
  t6553 = Cos(var2[3]);
  t6550 = Cos(var2[4]);
  t6551 = Sin(var2[3]);
  t6556 = Sin(var2[4]);
  t6560 = Cos(var2[2]);
  t6549 = Sin(var2[2]);
  t6552 = -1.*t6550*t6551;
  t6557 = -1.*t6553*t6556;
  t6558 = t6552 + t6557;
  t6559 = t6549*t6558;
  t6561 = t6553*t6550;
  t6562 = -1.*t6551*t6556;
  t6563 = t6561 + t6562;
  t6564 = t6560*t6563;
  t6565 = t6559 + t6564;
  t6573 = -1.*t6550;
  t6574 = 1. + t6573;
  t6575 = 0.4*t6574;
  t6576 = 0.64*t6550;
  t6577 = t6575 + t6576;
  t6604 = Cos(var2[5]);
  t6601 = Cos(var2[6]);
  t6602 = Sin(var2[5]);
  t6605 = Sin(var2[6]);
  t6603 = -1.*t6601*t6602;
  t6606 = -1.*t6604*t6605;
  t6607 = t6603 + t6606;
  t6608 = t6549*t6607;
  t6609 = t6604*t6601;
  t6613 = -1.*t6602*t6605;
  t6614 = t6609 + t6613;
  t6615 = t6560*t6614;
  t6617 = t6608 + t6615;
  t6625 = -1.*t6601;
  t6626 = 1. + t6625;
  t6627 = 0.4*t6626;
  t6628 = 0.64*t6601;
  t6629 = t6627 + t6628;
  t6569 = t6560*t6553;
  t6570 = -1.*t6549*t6551;
  t6571 = t6569 + t6570;
  t6586 = t6550*t6551;
  t6590 = t6553*t6556;
  t6591 = t6586 + t6590;
  t6592 = t6560*t6591;
  t6593 = t6549*t6563;
  t6594 = t6592 + t6593;
  t6621 = t6560*t6604;
  t6622 = -1.*t6549*t6602;
  t6623 = t6621 + t6622;
  t6645 = t6601*t6602;
  t6646 = t6604*t6605;
  t6655 = t6645 + t6646;
  t6656 = t6560*t6655;
  t6657 = t6549*t6614;
  t6658 = t6656 + t6657;
  t6672 = t6553*t6549;
  t6673 = t6560*t6551;
  t6674 = t6672 + t6673;
  t6687 = t6604*t6549;
  t6691 = t6560*t6602;
  t6692 = t6687 + t6691;
  t7157 = t6577*t6551;
  t7202 = 0.24*t6553*t6556;
  t7205 = t7157 + t7202;
  t7220 = t6553*t6577;
  t7226 = -0.24*t6551*t6556;
  t7230 = t7220 + t7226;
  t7594 = t6629*t6602;
  t7596 = 0.24*t6604*t6605;
  t7621 = t7594 + t7596;
  t7632 = t6604*t6629;
  t7716 = -0.24*t6602*t6605;
  t7717 = t7632 + t7716;
  t6547 = -1.*var1[4];
  t6548 = var3[4] + t6547;
  t6676 = t6560*t6558;
  t6677 = -1.*t6549*t6563;
  t6678 = t6676 + t6677;
  t6567 = -1.*var1[3];
  t6568 = var3[3] + t6567;
  t6667 = -1.*t6553*t6549;
  t6668 = -1.*t6560*t6551;
  t6670 = t6667 + t6668;
  t6583 = t6577*t6556;
  t6584 = -0.24*t6550*t6556;
  t6585 = t6583 + t6584;
  t6680 = -1.*t6549*t6591;
  t6681 = t6680 + t6564;
  t6578 = t6577*t6550;
  t6579 = Power(t6556,2);
  t6580 = 0.24*t6579;
  t6581 = t6578 + t6580;
  t6599 = -1.*var1[6];
  t6600 = var3[6] + t6599;
  t6694 = t6560*t6607;
  t6695 = -1.*t6549*t6614;
  t6697 = t6694 + t6695;
  t6619 = -1.*var1[5];
  t6620 = var3[5] + t6619;
  t6683 = -1.*t6604*t6549;
  t6684 = -1.*t6560*t6602;
  t6685 = t6683 + t6684;
  t6642 = t6629*t6605;
  t6643 = -0.24*t6601*t6605;
  t6644 = t6642 + t6643;
  t6699 = -1.*t6549*t6655;
  t6700 = t6699 + t6615;
  t6630 = t6629*t6601;
  t6631 = Power(t6605,2);
  t6632 = 0.24*t6631;
  t6633 = t6630 + t6632;
  t6665 = -1.*var1[1];
  t6666 = var3[1] + t6665;
  t6719 = Power(t6560,2);
  t6720 = 12.*t6719;
  t6721 = Power(t6549,2);
  t6722 = 12.*t6721;
  t6737 = Power(t6571,2);
  t6738 = 6.8*t6737;
  t6759 = Power(t6623,2);
  t6760 = 6.8*t6759;
  t6708 = -1.*var1[0];
  t6718 = var3[0] + t6708;
  t6671 = 6.8*t6670*t6571;
  t6675 = 6.8*t6674*t6571;
  t6679 = 3.2*t6565*t6678;
  t6682 = 3.2*t6681*t6594;
  t6686 = 6.8*t6685*t6623;
  t6693 = 6.8*t6692*t6623;
  t6698 = 3.2*t6617*t6697;
  t6701 = 3.2*t6700*t6658;
  t6705 = t6671 + t6675 + t6679 + t6682 + t6686 + t6693 + t6698 + t6701;
  t6796 = -1.*var1[2];
  t6808 = var3[2] + t6796;
  t6838 = Power(t6553,2);
  t6840 = 0.11*t6838;
  t7067 = Power(t6551,2);
  t7081 = 0.11*t7067;
  t7111 = t6840 + t7081;
  t7219 = -1.*t7205*t6563;
  t7233 = -1.*t6558*t7230;
  t7238 = t7219 + t7233;
  t7370 = t7205*t6591;
  t7372 = t6563*t7230;
  t7373 = t7370 + t7372;
  t7563 = Power(t6604,2);
  t7568 = 0.11*t7563;
  t7581 = Power(t6602,2);
  t7582 = 0.11*t7581;
  t7583 = t7568 + t7582;
  t7627 = -1.*t7621*t6614;
  t7720 = -1.*t6607*t7717;
  t7836 = t7627 + t7720;
  t7862 = t7621*t6655;
  t7879 = t6614*t7717;
  t7976 = t7862 + t7879;
  t11194 = -1.*t6560*t6604;
  t11244 = t6549*t6602;
  t11252 = t11194 + t11244;
  t6809 = 2.88*t6560;
  t7114 = 6.8*t6571*t7111;
  t7242 = 3.2*t6594*t7238;
  t7562 = 3.2*t6565*t7373;
  t7585 = 6.8*t6623*t7583;
  t7855 = 3.2*t6658*t7836;
  t8157 = 3.2*t6617*t7976;
  t8165 = t6809 + t7114 + t7242 + t7562 + t7585 + t7855 + t8157;
  t10725 = -2.88*t6549;
  t10730 = 6.8*t6670*t7111;
  t10763 = 3.2*t6681*t7238;
  t10856 = 3.2*t6678*t7373;
  t10873 = 6.8*t6685*t7583;
  t10897 = 3.2*t6700*t7836;
  t10905 = 3.2*t6697*t7976;
  t10906 = t10725 + t10730 + t10763 + t10856 + t10873 + t10897 + t10905;
  t9151 = 0.748*t6670;
  t9185 = 3.2*t6585*t6681;
  t9241 = 3.2*t6581*t6678;
  t9406 = t9151 + t9185 + t9241;
  t6572 = 0.748*t6571;
  t6582 = 3.2*t6581*t6565;
  t6595 = 3.2*t6585*t6594;
  t6596 = t6572 + t6582 + t6595;
  t11035 = 0.748*t7111;
  t11042 = 3.2*t6585*t7238;
  t11048 = 3.2*t6581*t7373;
  t11073 = 0.67 + t11035 + t11042 + t11048;
  t12136 = 0.768*t6581;
  t12142 = 0.2 + t12136;
  t10967 = 0.768*t7373;
  t10983 = 0.2 + t10967;
  t11075 = 0.4*t6626*t6623;
  t11127 = -0.4*t6685*t6605;
  t11140 = t6601*t6623;
  t11150 = t6685*t6605;
  t11156 = t11140 + t11150;
  t11174 = 0.8*t11156;
  t11186 = t11075 + t11127 + t11174;
  t11188 = -1.*var4[0]*t11186;
  t11191 = 0.4*t6626*t6685;
  t11298 = -0.4*t11252*t6605;
  t11306 = t6601*t6685;
  t11307 = t11252*t6605;
  t11319 = t11306 + t11307;
  t11540 = 0.8*t11319;
  t11562 = t11191 + t11298 + t11540;
  t11587 = -1.*var4[2]*t11562;
  t9542 = 0.748*t6685;
  t9555 = 3.2*t6644*t6700;
  t9608 = 3.2*t6633*t6697;
  t9615 = t9542 + t9555 + t9608;
  t6624 = 0.748*t6623;
  t6634 = 3.2*t6633*t6617;
  t6659 = 3.2*t6644*t6658;
  t6663 = t6624 + t6634 + t6659;
  t11679 = 0.748*t7583;
  t11836 = 3.2*t6644*t7836;
  t11847 = 3.2*t6633*t7976;
  t11888 = 0.67 + t11679 + t11836 + t11847;
  t12228 = 0.768*t6633;
  t12247 = 0.2 + t12228;
  t11594 = 0.768*t7976;
  t11612 = 0.2 + t11594;
  p_output1[0]=0.768*t6548*t6565 + t6568*t6596 + 0.768*t6600*t6617 + t6620*t6663 + t6666*t6705 + t6718*(3.2*Power(t6565,2) + 3.2*Power(t6594,2) + 3.2*Power(t6617,2) + 3.2*Power(t6658,2) + 6.8*Power(t6674,2) + 6.8*Power(t6692,2) + t6720 + t6722 + t6738 + t6760) + t6808*t8165 - 1.*var4[0];
  p_output1[1]=0.768*t6548*t6678 + 0.768*t6600*t6697 + t6705*t6718 + t6666*(6.8*Power(t6670,2) + 3.2*Power(t6678,2) + 3.2*Power(t6681,2) + 6.8*Power(t6685,2) + 3.2*Power(t6697,2) + 3.2*Power(t6700,2) + t6720 + t6722 + t6738 + t6760) + t10906*t6808 + t6568*t9406 + t6620*t9615 - 1.*var4[2];
  p_output1[2]=t11188 + t11587 + t10983*t6548 + t11073*t6568 + t11612*t6600 + t11888*t6620 + t10906*t6666 + t6808*(3.3612 + 6.8*Power(t7111,2) + 3.2*Power(t7238,2) + 3.2*Power(t7373,2) + 6.8*Power(t7583,2) + 3.2*Power(t7836,2) + 3.2*Power(t7976,2)) + t6718*t8165;
  p_output1[3]=t12142*t6548 + t6568*(1.58228 + 3.2*Power(t6581,2) + 3.2*Power(t6585,2)) + t6596*t6718 + t11073*t6808 + t6666*t9406;
  p_output1[4]=1.2143199999999998*t6548 + t12142*t6568 + 0.768*t6666*t6678 + 0.768*t6565*t6718 + t10983*t6808;
  p_output1[5]=t11188 + t11587 + t12247*t6600 + t6620*(1.58228 + 3.2*Power(t6633,2) + 3.2*Power(t6644,2)) + t6663*t6718 + t11888*t6808 + t6666*t9615;
  p_output1[6]=1.2143199999999998*t6600 + t12247*t6620 + 0.768*t6666*t6697 + 0.768*t6617*t6718 + t11612*t6808 - 1.*(-0.4*t6601*t6623 + 0.4*t6605*t6692 + 0.8*(t11140 - 1.*t6605*t6692))*var4[0] - 1.*(0.4*t6605*t6623 + 0.8*(t11306 - 1.*t6605*t6623) - 0.4*t6601*t6685)*var4[2];
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "dxDiscreteMapLSlift_LSland.hh"

namespace Pattern[LSlift, Blank[LSland]]
{

void dxDiscreteMapLSlift_LSland_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
