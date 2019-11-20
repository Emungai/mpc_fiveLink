/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:02:53 GMT-05:00
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
  double t4535;
  double t4726;
  double t4487;
  double t9510;
  double t3599;
  double t4620;
  double t9522;
  double t9523;
  double t9542;
  double t9543;
  double t9554;
  double t9555;
  double t9574;
  double t9575;
  double t9576;
  double t9577;
  double t9578;
  double t9579;
  double t9580;
  double t3867;
  double t4121;
  double t9597;
  double t9598;
  double t9599;
  double t9596;
  double t9600;
  double t9601;
  double t9602;
  double t9603;
  double t9604;
  double t9617;
  double t9619;
  double t9634;
  double t9635;
  double t9636;
  double t9637;
  double t9638;
  double t9645;
  double t9646;
  double t9647;
  double t9644;
  double t9648;
  double t9649;
  double t9650;
  double t9651;
  double t9652;
  double t9643;
  double t9653;
  double t9654;
  double t9655;
  double t9541;
  double t9556;
  double t9557;
  double t9564;
  double t9565;
  double t9573;
  double t9581;
  double t9582;
  double t9606;
  double t9608;
  double t9609;
  double t9610;
  double t9611;
  double t9618;
  double t9620;
  double t9631;
  double t9632;
  double t9633;
  double t9639;
  double t9640;
  double t9641;
  double t9642;
  double t9656;
  double t9657;
  double t9658;
  double t9668;
  double t9669;
  double t9670;
  double t9671;
  double t9672;
  double t9686;
  double t9687;
  double t9688;
  double t9689;
  double t9659;
  double t9660;
  double t9661;
  double t9662;
  double t9663;
  double t9694;
  double t9700;
  double t9702;
  double t9707;
  double t9708;
  double t9709;
  double t9710;
  double t9711;
  double t9716;
  double t9717;
  double t9718;
  double t9719;
  double t9720;
  double t9721;
  double t9722;
  double t9723;
  double t9724;
  double t9725;
  double t9696;
  double t9697;
  double t9698;
  double t9699;
  double t9701;
  double t9703;
  double t9704;
  double t9705;
  double t9706;
  double t9712;
  double t9713;
  double t9714;
  double t9715;
  double t9726;
  double t9727;
  double t9728;
  double t9743;
  double t9744;
  double t9745;
  double t9746;
  t4535 = Cos(var1[5]);
  t4726 = Sin(var1[2]);
  t4487 = Cos(var1[2]);
  t9510 = Sin(var1[5]);
  t3599 = Cos(var1[6]);
  t4620 = t4487*t4535;
  t9522 = -1.*t4726*t9510;
  t9523 = t4620 + t9522;
  t9542 = -1.*t4535*t4726;
  t9543 = -1.*t4487*t9510;
  t9554 = t9542 + t9543;
  t9555 = Sin(var1[6]);
  t9574 = -0.4*t3599*t9554;
  t9575 = 0.4*t9523*t9555;
  t9576 = t3599*t9554;
  t9577 = -1.*t9523*t9555;
  t9578 = t9576 + t9577;
  t9579 = 0.8*t9578;
  t9580 = t9574 + t9575 + t9579;
  t3867 = -1.*t3599;
  t4121 = 1. + t3867;
  t9597 = -1.*t4487*t4535;
  t9598 = t4726*t9510;
  t9599 = t9597 + t9598;
  t9596 = 0.4*t4121*t9554;
  t9600 = -0.4*t9599*t9555;
  t9601 = t9599*t9555;
  t9602 = t9576 + t9601;
  t9603 = 0.8*t9602;
  t9604 = t9596 + t9600 + t9603;
  t9617 = 0.4*t9554*t9555;
  t9619 = -1.*t9554*t9555;
  t9634 = -0.4*t3599*t9599;
  t9635 = t3599*t9599;
  t9636 = t9635 + t9619;
  t9637 = 0.8*t9636;
  t9638 = t9634 + t9617 + t9637;
  t9645 = t4535*t4726;
  t9646 = t4487*t9510;
  t9647 = t9645 + t9646;
  t9644 = 0.4*t4121*t9599;
  t9648 = -0.4*t9647*t9555;
  t9649 = t9647*t9555;
  t9650 = t9635 + t9649;
  t9651 = 0.8*t9650;
  t9652 = t9644 + t9648 + t9651;
  t9643 = var2[6]*t9638;
  t9653 = var2[2]*t9652;
  t9654 = var2[5]*t9652;
  t9655 = t9643 + t9653 + t9654;
  t9541 = 0.4*t4121*t9523;
  t9556 = -0.4*t9554*t9555;
  t9557 = t3599*t9523;
  t9564 = t9554*t9555;
  t9565 = t9557 + t9564;
  t9573 = 0.8*t9565;
  t9581 = var3[6]*t9580;
  t9582 = var2[6]*t9580;
  t9606 = var3[2]*t9604;
  t9608 = var3[5]*t9604;
  t9609 = var2[2]*t9604;
  t9610 = var2[5]*t9604;
  t9611 = 0.4*t3599*t9523;
  t9618 = -1.*t3599*t9523;
  t9620 = t9618 + t9619;
  t9631 = 0.8*t9620;
  t9632 = t9611 + t9617 + t9631;
  t9633 = var2[6]*t9632;
  t9639 = var2[2]*t9638;
  t9640 = var2[5]*t9638;
  t9641 = t9633 + t9639 + t9640;
  t9642 = var2[6]*t9641;
  t9656 = var2[2]*t9655;
  t9657 = var2[5]*t9655;
  t9658 = t9541 + t9556 + t9573 + t9581 + t9582 + t9606 + t9608 + t9609 + t9610 + t9642 + t9656 + t9657;
  t9668 = 0.4*t3599*t9647;
  t9669 = -1.*t3599*t9647;
  t9670 = t9669 + t9577;
  t9671 = 0.8*t9670;
  t9672 = t9668 + t9575 + t9671;
  t9686 = 2.*var2[6]*t9580;
  t9687 = 2.*var2[2]*t9604;
  t9688 = 2.*var2[5]*t9604;
  t9689 = t9541 + t9556 + t9573 + t9686 + t9687 + t9688;
  t9659 = -0.4*t3599*t9523;
  t9660 = 0.4*t9647*t9555;
  t9661 = -1.*t9647*t9555;
  t9662 = t9557 + t9661;
  t9663 = 0.8*t9662;
  t9694 = t9541 + t9556 + t9573;
  t9700 = 0.4*t9599*t9555;
  t9702 = -1.*t9599*t9555;
  t9707 = -0.4*t3599*t9647;
  t9708 = t3599*t9647;
  t9709 = t9708 + t9702;
  t9710 = 0.8*t9709;
  t9711 = t9707 + t9700 + t9710;
  t9716 = 0.4*t4121*t9647;
  t9717 = -0.4*t9523*t9555;
  t9718 = t9523*t9555;
  t9719 = t9708 + t9718;
  t9720 = 0.8*t9719;
  t9721 = t9716 + t9717 + t9720;
  t9722 = var2[2]*t9721;
  t9723 = var2[5]*t9721;
  t9724 = var2[6]*t9711;
  t9725 = t9722 + t9723 + t9724;
  t9696 = var3[6]*t9638;
  t9697 = var3[2]*t9652;
  t9698 = var3[5]*t9652;
  t9699 = 0.4*t3599*t9554;
  t9701 = -1.*t3599*t9554;
  t9703 = t9701 + t9702;
  t9704 = 0.8*t9703;
  t9705 = t9699 + t9700 + t9704;
  t9706 = var2[6]*t9705;
  t9712 = var2[2]*t9711;
  t9713 = var2[5]*t9711;
  t9714 = t9706 + t9712 + t9713;
  t9715 = var2[6]*t9714;
  t9726 = var2[2]*t9725;
  t9727 = var2[5]*t9725;
  t9728 = t9596 + t9600 + t9603 + t9696 + t9643 + t9697 + t9698 + t9653 + t9654 + t9715 + t9726 + t9727;
  t9743 = 2.*var2[6]*t9638;
  t9744 = 2.*var2[2]*t9652;
  t9745 = 2.*var2[5]*t9652;
  t9746 = t9596 + t9600 + t9603 + t9743 + t9744 + t9745;
  p_output1[0]=1.;
  p_output1[1]=t9658;
  p_output1[2]=t9658;
  p_output1[3]=t9659 + t9660 + t9663 + t9580*var2[2] + t9641*var2[2] + t9580*var2[5] + t9641*var2[5] + t9672*var2[6] + var2[6]*(t9632*var2[2] + t9632*var2[5] + (t9611 + t9648 + 0.8*(t9618 + t9649))*var2[6]) + t9580*var3[2] + t9580*var3[5] + t9672*var3[6];
  p_output1[4]=1.;
  p_output1[5]=t9689;
  p_output1[6]=t9689;
  p_output1[7]=t9659 + t9660 + t9663 + 2.*t9580*var2[2] + 2.*t9580*var2[5] + 2.*t9672*var2[6];
  p_output1[8]=1.;
  p_output1[9]=t9694;
  p_output1[10]=t9694;
  p_output1[11]=t9659 + t9660 + t9663;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t9728;
  p_output1[16]=t9728;
  p_output1[17]=t9574 + t9575 + t9579 + t9633 + t9639 + t9640 + t9714*var2[2] + t9714*var2[5] + var2[6]*(t9705*var2[2] + t9705*var2[5] + (t9699 + t9717 + 0.8*(t9701 + t9718))*var2[6]) + t9638*var3[2] + t9638*var3[5] + t9632*var3[6];
  p_output1[18]=1.;
  p_output1[19]=t9746;
  p_output1[20]=t9746;
  p_output1[21]=t9574 + t9575 + t9579 + 2.*t9638*var2[2] + 2.*t9638*var2[5] + 2.*t9632*var2[6];
  p_output1[22]=1.;
  p_output1[23]=t9604;
  p_output1[24]=t9604;
  p_output1[25]=t9580;
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

#include "J_ddh_LeftToe_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_ddh_LeftToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
