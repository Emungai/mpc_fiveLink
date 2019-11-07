/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:15 GMT-05:00
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
  double t8007;
  double t7633;
  double t7872;
  double t8112;
  double t8268;
  double t6189;
  double t7944;
  double t8146;
  double t8153;
  double t12420;
  double t12423;
  double t12427;
  double t12435;
  double t12438;
  double t8203;
  double t9222;
  double t9254;
  double t9390;
  double t9411;
  double t10781;
  double t12312;
  double t12372;
  double t12386;
  double t12550;
  double t12551;
  double t12552;
  double t12486;
  double t12529;
  double t12530;
  double t12531;
  double t12532;
  double t12537;
  double t12562;
  double t12563;
  double t12564;
  double t12566;
  double t12567;
  double t12568;
  double t12569;
  double t12570;
  double t12571;
  double t12588;
  double t12589;
  double t12604;
  double t12605;
  double t12606;
  double t12608;
  double t12609;
  double t12610;
  double t12614;
  double t12615;
  double t12616;
  double t12591;
  double t12592;
  double t12593;
  double t12581;
  double t12582;
  double t12583;
  double t12442;
  double t12443;
  double t12444;
  double t12543;
  double t12544;
  double t12545;
  double t12546;
  double t12561;
  double t12585;
  double t12586;
  double t12576;
  double t12577;
  double t12578;
  double t12579;
  double t12580;
  double t12584;
  double t12587;
  double t12590;
  double t12594;
  double t12595;
  double t12596;
  double t12598;
  double t12599;
  double t12600;
  double t12601;
  double t12602;
  double t12607;
  double t12611;
  double t12612;
  double t12617;
  double t12618;
  double t12619;
  double t12620;
  double t12621;
  double t12623;
  double t12624;
  double t12625;
  double t12627;
  double t12628;
  double t12629;
  double t12630;
  double t12631;
  double t12649;
  double t12650;
  double t12651;
  double t12652;
  double t12653;
  double t12654;
  double t12603;
  double t12613;
  double t12622;
  double t12626;
  double t12632;
  double t12633;
  double t12638;
  double t12639;
  double t12640;
  double t12641;
  double t12412;
  double t12538;
  double t12547;
  double t12548;
  double t12659;
  double t12660;
  double t12661;
  t8007 = Cos(var1[3]);
  t7633 = Cos(var1[4]);
  t7872 = Sin(var1[3]);
  t8112 = Sin(var1[4]);
  t8268 = Sin(var1[2]);
  t6189 = Cos(var1[2]);
  t7944 = -1.*t7633*t7872;
  t8146 = -1.*t8007*t8112;
  t8153 = t7944 + t8146;
  t12420 = -1.*t7633;
  t12423 = 1. + t12420;
  t12427 = 0.4*t12423;
  t12435 = 0.64*t7633;
  t12438 = t12427 + t12435;
  t8203 = t6189*t8153;
  t9222 = -1.*t8007*t7633;
  t9254 = t7872*t8112;
  t9390 = t9222 + t9254;
  t9411 = t8268*t9390;
  t10781 = t8203 + t9411;
  t12312 = -1.*t8007*t8268;
  t12372 = -1.*t6189*t7872;
  t12386 = t12312 + t12372;
  t12550 = t6189*t8007;
  t12551 = -1.*t8268*t7872;
  t12552 = t12550 + t12551;
  t12486 = t8268*t8153;
  t12529 = t8007*t7633;
  t12530 = -1.*t7872*t8112;
  t12531 = t12529 + t12530;
  t12532 = t6189*t12531;
  t12537 = t12486 + t12532;
  t12562 = t8007*t8268;
  t12563 = t6189*t7872;
  t12564 = t12562 + t12563;
  t12566 = t7633*t7872;
  t12567 = t8007*t8112;
  t12568 = t12566 + t12567;
  t12569 = t6189*t12568;
  t12570 = t8268*t12531;
  t12571 = t12569 + t12570;
  t12588 = -1.*t8268*t12531;
  t12589 = t8203 + t12588;
  t12604 = t12438*t7872;
  t12605 = 0.24*t8007*t8112;
  t12606 = t12604 + t12605;
  t12608 = t8007*t12438;
  t12609 = -0.24*t7872*t8112;
  t12610 = t12608 + t12609;
  t12614 = -1.*t12438*t7872;
  t12615 = -0.24*t8007*t8112;
  t12616 = t12614 + t12615;
  t12591 = -1.*t8268*t8153;
  t12592 = t6189*t9390;
  t12593 = t12591 + t12592;
  t12581 = -1.*t6189*t8007;
  t12582 = t8268*t7872;
  t12583 = t12581 + t12582;
  t12442 = t12438*t8112;
  t12443 = -0.24*t7633*t8112;
  t12444 = t12442 + t12443;
  t12543 = t12438*t7633;
  t12544 = Power(t8112,2);
  t12545 = 0.24*t12544;
  t12546 = t12543 + t12545;
  t12561 = 13.6*t12386*t12552;
  t12585 = -1.*t8268*t12568;
  t12586 = t12585 + t12532;
  t12576 = Power(t12386,2);
  t12577 = 6.8*t12576;
  t12578 = 6.8*t12386*t12564;
  t12579 = Power(t12552,2);
  t12580 = 6.8*t12579;
  t12584 = 6.8*t12552*t12583;
  t12587 = 3.2*t12537*t12586;
  t12590 = 3.2*t12589*t12571;
  t12594 = 3.2*t12537*t12593;
  t12595 = 3.2*t12589*t10781;
  t12596 = t12577 + t12578 + t12580 + t12584 + t12587 + t12590 + t12594 + t12595;
  t12598 = Power(t8007,2);
  t12599 = 0.11*t12598;
  t12600 = Power(t7872,2);
  t12601 = 0.11*t12600;
  t12602 = t12599 + t12601;
  t12607 = -1.*t12606*t12531;
  t12611 = -1.*t8153*t12610;
  t12612 = t12607 + t12611;
  t12617 = t12616*t12531;
  t12618 = t12606*t12531;
  t12619 = t8153*t12610;
  t12620 = t12568*t12610;
  t12621 = t12617 + t12618 + t12619 + t12620;
  t12623 = t12606*t12568;
  t12624 = t12531*t12610;
  t12625 = t12623 + t12624;
  t12627 = -1.*t8153*t12616;
  t12628 = -1.*t8153*t12606;
  t12629 = -1.*t12531*t12610;
  t12630 = -1.*t12610*t9390;
  t12631 = t12627 + t12628 + t12629 + t12630;
  t12649 = 6.8*t12583*t12602;
  t12650 = 3.2*t12589*t12612;
  t12651 = 3.2*t12589*t12621;
  t12652 = 3.2*t12625*t12593;
  t12653 = 3.2*t12586*t12631;
  t12654 = t12649 + t12650 + t12651 + t12652 + t12653;
  t12603 = 6.8*t12386*t12602;
  t12613 = 3.2*t12537*t12612;
  t12622 = 3.2*t12537*t12621;
  t12626 = 3.2*t12625*t10781;
  t12632 = 3.2*t12571*t12631;
  t12633 = t12603 + t12613 + t12622 + t12626 + t12632;
  t12638 = 0.748*t12583;
  t12639 = 3.2*t12444*t12589;
  t12640 = 3.2*t12546*t12593;
  t12641 = t12638 + t12639 + t12640;
  t12412 = 0.748*t12386;
  t12538 = 3.2*t12444*t12537;
  t12547 = 3.2*t12546*t10781;
  t12548 = t12412 + t12538 + t12547;
  t12659 = 3.2*t12546*t12621;
  t12660 = 3.2*t12444*t12631;
  t12661 = t12659 + t12660;
  p_output1[0]=var2[3]*(-0.5*(6.4*t10781*t12537 + t12561 + 13.6*t12552*t12564 + 6.4*t12537*t12571)*var2[0] - 0.5*t12596*var2[1] - 0.5*t12633*var2[2] - 0.5*t12548*var2[3] - 0.384*t10781*var2[4]);
  p_output1[1]=var2[3]*(-0.5*t12596*var2[0] - 0.5*(t12561 + 13.6*t12386*t12583 + 6.4*t12586*t12589 + 6.4*t12589*t12593)*var2[1] - 0.5*t12654*var2[2] - 0.5*t12641*var2[3] - 0.384*t12593*var2[4]);
  p_output1[2]=var2[3]*(-0.5*t12633*var2[0] - 0.5*t12654*var2[1] - 0.5*(6.4*t12621*t12625 + 6.4*t12612*t12631)*var2[2] - 0.5*t12661*var2[3] - 0.384*t12621*var2[4]);
  p_output1[3]=(-0.5*t12548*var2[0] - 0.5*t12641*var2[1] - 0.5*t12661*var2[2])*var2[3];
  p_output1[4]=(-0.384*t10781*var2[0] - 0.384*t12593*var2[1] - 0.384*t12621*var2[2])*var2[3];
  p_output1[5]=0;
  p_output1[6]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec4_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce2_vec4_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
