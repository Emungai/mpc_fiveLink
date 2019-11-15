/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:18:49 GMT-05:00
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
  double t9422;
  double t9643;
  double t9115;
  double t11487;
  double t89;
  double t9473;
  double t11488;
  double t11492;
  double t11494;
  double t11529;
  double t11530;
  double t11531;
  double t11550;
  double t11551;
  double t11552;
  double t11553;
  double t11554;
  double t11555;
  double t11556;
  double t2890;
  double t9114;
  double t11573;
  double t11574;
  double t11575;
  double t11572;
  double t11576;
  double t11577;
  double t11578;
  double t11579;
  double t11581;
  double t11593;
  double t11595;
  double t11610;
  double t11611;
  double t11612;
  double t11613;
  double t11614;
  double t11621;
  double t11622;
  double t11623;
  double t11620;
  double t11624;
  double t11625;
  double t11626;
  double t11627;
  double t11628;
  double t11619;
  double t11629;
  double t11630;
  double t11631;
  double t11493;
  double t11532;
  double t11539;
  double t11540;
  double t11548;
  double t11549;
  double t11557;
  double t11571;
  double t11583;
  double t11584;
  double t11585;
  double t11586;
  double t11592;
  double t11594;
  double t11606;
  double t11607;
  double t11608;
  double t11609;
  double t11615;
  double t11616;
  double t11617;
  double t11618;
  double t11632;
  double t11633;
  double t11634;
  double t11644;
  double t11645;
  double t11646;
  double t11647;
  double t11648;
  double t11662;
  double t11663;
  double t11664;
  double t11665;
  double t11635;
  double t11636;
  double t11637;
  double t11638;
  double t11639;
  double t11670;
  double t11676;
  double t11678;
  double t11683;
  double t11684;
  double t11685;
  double t11686;
  double t11687;
  double t11692;
  double t11693;
  double t11694;
  double t11695;
  double t11696;
  double t11697;
  double t11698;
  double t11699;
  double t11700;
  double t11701;
  double t11672;
  double t11673;
  double t11674;
  double t11675;
  double t11677;
  double t11679;
  double t11680;
  double t11681;
  double t11682;
  double t11688;
  double t11689;
  double t11690;
  double t11691;
  double t11702;
  double t11703;
  double t11704;
  double t11719;
  double t11720;
  double t11721;
  double t11722;
  t9422 = Cos(var1[5]);
  t9643 = Sin(var1[2]);
  t9115 = Cos(var1[2]);
  t11487 = Sin(var1[5]);
  t89 = Cos(var1[6]);
  t9473 = t9115*t9422;
  t11488 = -1.*t9643*t11487;
  t11492 = t9473 + t11488;
  t11494 = -1.*t9422*t9643;
  t11529 = -1.*t9115*t11487;
  t11530 = t11494 + t11529;
  t11531 = Sin(var1[6]);
  t11550 = -0.4*t89*t11530;
  t11551 = 0.4*t11492*t11531;
  t11552 = t89*t11530;
  t11553 = -1.*t11492*t11531;
  t11554 = t11552 + t11553;
  t11555 = 0.8*t11554;
  t11556 = t11550 + t11551 + t11555;
  t2890 = -1.*t89;
  t9114 = 1. + t2890;
  t11573 = -1.*t9115*t9422;
  t11574 = t9643*t11487;
  t11575 = t11573 + t11574;
  t11572 = 0.4*t9114*t11530;
  t11576 = -0.4*t11575*t11531;
  t11577 = t11575*t11531;
  t11578 = t11552 + t11577;
  t11579 = 0.8*t11578;
  t11581 = t11572 + t11576 + t11579;
  t11593 = 0.4*t11530*t11531;
  t11595 = -1.*t11530*t11531;
  t11610 = -0.4*t89*t11575;
  t11611 = t89*t11575;
  t11612 = t11611 + t11595;
  t11613 = 0.8*t11612;
  t11614 = t11610 + t11593 + t11613;
  t11621 = t9422*t9643;
  t11622 = t9115*t11487;
  t11623 = t11621 + t11622;
  t11620 = 0.4*t9114*t11575;
  t11624 = -0.4*t11623*t11531;
  t11625 = t11623*t11531;
  t11626 = t11611 + t11625;
  t11627 = 0.8*t11626;
  t11628 = t11620 + t11624 + t11627;
  t11619 = var2[6]*t11614;
  t11629 = var2[2]*t11628;
  t11630 = var2[5]*t11628;
  t11631 = t11619 + t11629 + t11630;
  t11493 = 0.4*t9114*t11492;
  t11532 = -0.4*t11530*t11531;
  t11539 = t89*t11492;
  t11540 = t11530*t11531;
  t11548 = t11539 + t11540;
  t11549 = 0.8*t11548;
  t11557 = var3[6]*t11556;
  t11571 = var2[6]*t11556;
  t11583 = var3[2]*t11581;
  t11584 = var3[5]*t11581;
  t11585 = var2[2]*t11581;
  t11586 = var2[5]*t11581;
  t11592 = 0.4*t89*t11492;
  t11594 = -1.*t89*t11492;
  t11606 = t11594 + t11595;
  t11607 = 0.8*t11606;
  t11608 = t11592 + t11593 + t11607;
  t11609 = var2[6]*t11608;
  t11615 = var2[2]*t11614;
  t11616 = var2[5]*t11614;
  t11617 = t11609 + t11615 + t11616;
  t11618 = var2[6]*t11617;
  t11632 = var2[2]*t11631;
  t11633 = var2[5]*t11631;
  t11634 = t11493 + t11532 + t11549 + t11557 + t11571 + t11583 + t11584 + t11585 + t11586 + t11618 + t11632 + t11633;
  t11644 = 0.4*t89*t11623;
  t11645 = -1.*t89*t11623;
  t11646 = t11645 + t11553;
  t11647 = 0.8*t11646;
  t11648 = t11644 + t11551 + t11647;
  t11662 = 2.*var2[6]*t11556;
  t11663 = 2.*var2[2]*t11581;
  t11664 = 2.*var2[5]*t11581;
  t11665 = t11493 + t11532 + t11549 + t11662 + t11663 + t11664;
  t11635 = -0.4*t89*t11492;
  t11636 = 0.4*t11623*t11531;
  t11637 = -1.*t11623*t11531;
  t11638 = t11539 + t11637;
  t11639 = 0.8*t11638;
  t11670 = t11493 + t11532 + t11549;
  t11676 = 0.4*t11575*t11531;
  t11678 = -1.*t11575*t11531;
  t11683 = -0.4*t89*t11623;
  t11684 = t89*t11623;
  t11685 = t11684 + t11678;
  t11686 = 0.8*t11685;
  t11687 = t11683 + t11676 + t11686;
  t11692 = 0.4*t9114*t11623;
  t11693 = -0.4*t11492*t11531;
  t11694 = t11492*t11531;
  t11695 = t11684 + t11694;
  t11696 = 0.8*t11695;
  t11697 = t11692 + t11693 + t11696;
  t11698 = var2[2]*t11697;
  t11699 = var2[5]*t11697;
  t11700 = var2[6]*t11687;
  t11701 = t11698 + t11699 + t11700;
  t11672 = var3[6]*t11614;
  t11673 = var3[2]*t11628;
  t11674 = var3[5]*t11628;
  t11675 = 0.4*t89*t11530;
  t11677 = -1.*t89*t11530;
  t11679 = t11677 + t11678;
  t11680 = 0.8*t11679;
  t11681 = t11675 + t11676 + t11680;
  t11682 = var2[6]*t11681;
  t11688 = var2[2]*t11687;
  t11689 = var2[5]*t11687;
  t11690 = t11682 + t11688 + t11689;
  t11691 = var2[6]*t11690;
  t11702 = var2[2]*t11701;
  t11703 = var2[5]*t11701;
  t11704 = t11572 + t11576 + t11579 + t11672 + t11619 + t11673 + t11674 + t11629 + t11630 + t11691 + t11702 + t11703;
  t11719 = 2.*var2[6]*t11614;
  t11720 = 2.*var2[2]*t11628;
  t11721 = 2.*var2[5]*t11628;
  t11722 = t11572 + t11576 + t11579 + t11719 + t11720 + t11721;
  p_output1[0]=1.;
  p_output1[1]=t11634;
  p_output1[2]=t11634;
  p_output1[3]=t11635 + t11636 + t11639 + t11556*var2[2] + t11617*var2[2] + t11556*var2[5] + t11617*var2[5] + t11648*var2[6] + var2[6]*(t11608*var2[2] + t11608*var2[5] + (t11592 + t11624 + 0.8*(t11594 + t11625))*var2[6]) + t11556*var3[2] + t11556*var3[5] + t11648*var3[6];
  p_output1[4]=1.;
  p_output1[5]=t11665;
  p_output1[6]=t11665;
  p_output1[7]=t11635 + t11636 + t11639 + 2.*t11556*var2[2] + 2.*t11556*var2[5] + 2.*t11648*var2[6];
  p_output1[8]=1.;
  p_output1[9]=t11670;
  p_output1[10]=t11670;
  p_output1[11]=t11635 + t11636 + t11639;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t11704;
  p_output1[16]=t11704;
  p_output1[17]=t11550 + t11551 + t11555 + t11609 + t11615 + t11616 + t11690*var2[2] + t11690*var2[5] + var2[6]*(t11681*var2[2] + t11681*var2[5] + (t11675 + t11693 + 0.8*(t11677 + t11694))*var2[6]) + t11614*var3[2] + t11614*var3[5] + t11608*var3[6];
  p_output1[18]=1.;
  p_output1[19]=t11722;
  p_output1[20]=t11722;
  p_output1[21]=t11550 + t11551 + t11555 + 2.*t11614*var2[2] + 2.*t11614*var2[5] + 2.*t11608*var2[6];
  p_output1[22]=1.;
  p_output1[23]=t11581;
  p_output1[24]=t11581;
  p_output1[25]=t11556;
  p_output1[26]=-1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_LeftToe_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_ddh_LeftToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
