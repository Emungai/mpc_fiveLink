/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:12 GMT-05:00
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
  double t9448;
  double t9461;
  double t5869;
  double t9462;
  double t3238;
  double t9460;
  double t9463;
  double t9481;
  double t9493;
  double t9494;
  double t9495;
  double t9502;
  double t9515;
  double t9516;
  double t9517;
  double t9518;
  double t9519;
  double t9520;
  double t9534;
  double t5796;
  double t5866;
  double t9538;
  double t9539;
  double t9540;
  double t9537;
  double t9541;
  double t9542;
  double t9544;
  double t9546;
  double t9547;
  double t9558;
  double t9570;
  double t9575;
  double t9576;
  double t9577;
  double t9578;
  double t9579;
  double t9586;
  double t9587;
  double t9588;
  double t9585;
  double t9589;
  double t9590;
  double t9591;
  double t9592;
  double t9593;
  double t9584;
  double t9594;
  double t9595;
  double t9596;
  double t9492;
  double t9503;
  double t9511;
  double t9512;
  double t9513;
  double t9514;
  double t9535;
  double t9536;
  double t9548;
  double t9549;
  double t9555;
  double t9556;
  double t9557;
  double t9569;
  double t9571;
  double t9572;
  double t9573;
  double t9574;
  double t9580;
  double t9581;
  double t9582;
  double t9583;
  double t9597;
  double t9598;
  double t9599;
  double t9609;
  double t9610;
  double t9611;
  double t9612;
  double t9613;
  double t9627;
  double t9628;
  double t9629;
  double t9630;
  double t9600;
  double t9601;
  double t9602;
  double t9603;
  double t9604;
  double t9635;
  double t9641;
  double t9643;
  double t9648;
  double t9649;
  double t9650;
  double t9651;
  double t9652;
  double t9657;
  double t9658;
  double t9659;
  double t9660;
  double t9661;
  double t9662;
  double t9663;
  double t9664;
  double t9665;
  double t9666;
  double t9637;
  double t9638;
  double t9639;
  double t9640;
  double t9642;
  double t9644;
  double t9645;
  double t9646;
  double t9647;
  double t9653;
  double t9654;
  double t9655;
  double t9656;
  double t9667;
  double t9668;
  double t9669;
  double t9684;
  double t9685;
  double t9686;
  double t9687;
  t9448 = Cos(var1[3]);
  t9461 = Sin(var1[2]);
  t5869 = Cos(var1[2]);
  t9462 = Sin(var1[3]);
  t3238 = Cos(var1[4]);
  t9460 = t5869*t9448;
  t9463 = -1.*t9461*t9462;
  t9481 = t9460 + t9463;
  t9493 = -1.*t9448*t9461;
  t9494 = -1.*t5869*t9462;
  t9495 = t9493 + t9494;
  t9502 = Sin(var1[4]);
  t9515 = -0.4*t3238*t9495;
  t9516 = 0.4*t9481*t9502;
  t9517 = t3238*t9495;
  t9518 = -1.*t9481*t9502;
  t9519 = t9517 + t9518;
  t9520 = 0.8*t9519;
  t9534 = t9515 + t9516 + t9520;
  t5796 = -1.*t3238;
  t5866 = 1. + t5796;
  t9538 = -1.*t5869*t9448;
  t9539 = t9461*t9462;
  t9540 = t9538 + t9539;
  t9537 = 0.4*t5866*t9495;
  t9541 = -0.4*t9540*t9502;
  t9542 = t9540*t9502;
  t9544 = t9517 + t9542;
  t9546 = 0.8*t9544;
  t9547 = t9537 + t9541 + t9546;
  t9558 = 0.4*t9495*t9502;
  t9570 = -1.*t9495*t9502;
  t9575 = -0.4*t3238*t9540;
  t9576 = t3238*t9540;
  t9577 = t9576 + t9570;
  t9578 = 0.8*t9577;
  t9579 = t9575 + t9558 + t9578;
  t9586 = t9448*t9461;
  t9587 = t5869*t9462;
  t9588 = t9586 + t9587;
  t9585 = 0.4*t5866*t9540;
  t9589 = -0.4*t9588*t9502;
  t9590 = t9588*t9502;
  t9591 = t9576 + t9590;
  t9592 = 0.8*t9591;
  t9593 = t9585 + t9589 + t9592;
  t9584 = var2[4]*t9579;
  t9594 = var2[2]*t9593;
  t9595 = var2[3]*t9593;
  t9596 = t9584 + t9594 + t9595;
  t9492 = 0.4*t5866*t9481;
  t9503 = -0.4*t9495*t9502;
  t9511 = t3238*t9481;
  t9512 = t9495*t9502;
  t9513 = t9511 + t9512;
  t9514 = 0.8*t9513;
  t9535 = var3[4]*t9534;
  t9536 = var2[4]*t9534;
  t9548 = var3[2]*t9547;
  t9549 = var3[3]*t9547;
  t9555 = var2[2]*t9547;
  t9556 = var2[3]*t9547;
  t9557 = 0.4*t3238*t9481;
  t9569 = -1.*t3238*t9481;
  t9571 = t9569 + t9570;
  t9572 = 0.8*t9571;
  t9573 = t9557 + t9558 + t9572;
  t9574 = var2[4]*t9573;
  t9580 = var2[2]*t9579;
  t9581 = var2[3]*t9579;
  t9582 = t9574 + t9580 + t9581;
  t9583 = var2[4]*t9582;
  t9597 = var2[2]*t9596;
  t9598 = var2[3]*t9596;
  t9599 = t9492 + t9503 + t9514 + t9535 + t9536 + t9548 + t9549 + t9555 + t9556 + t9583 + t9597 + t9598;
  t9609 = 0.4*t3238*t9588;
  t9610 = -1.*t3238*t9588;
  t9611 = t9610 + t9518;
  t9612 = 0.8*t9611;
  t9613 = t9609 + t9516 + t9612;
  t9627 = 2.*var2[4]*t9534;
  t9628 = 2.*var2[2]*t9547;
  t9629 = 2.*var2[3]*t9547;
  t9630 = t9492 + t9503 + t9514 + t9627 + t9628 + t9629;
  t9600 = -0.4*t3238*t9481;
  t9601 = 0.4*t9588*t9502;
  t9602 = -1.*t9588*t9502;
  t9603 = t9511 + t9602;
  t9604 = 0.8*t9603;
  t9635 = t9492 + t9503 + t9514;
  t9641 = 0.4*t9540*t9502;
  t9643 = -1.*t9540*t9502;
  t9648 = -0.4*t3238*t9588;
  t9649 = t3238*t9588;
  t9650 = t9649 + t9643;
  t9651 = 0.8*t9650;
  t9652 = t9648 + t9641 + t9651;
  t9657 = 0.4*t5866*t9588;
  t9658 = -0.4*t9481*t9502;
  t9659 = t9481*t9502;
  t9660 = t9649 + t9659;
  t9661 = 0.8*t9660;
  t9662 = t9657 + t9658 + t9661;
  t9663 = var2[2]*t9662;
  t9664 = var2[3]*t9662;
  t9665 = var2[4]*t9652;
  t9666 = t9663 + t9664 + t9665;
  t9637 = var3[4]*t9579;
  t9638 = var3[2]*t9593;
  t9639 = var3[3]*t9593;
  t9640 = 0.4*t3238*t9495;
  t9642 = -1.*t3238*t9495;
  t9644 = t9642 + t9643;
  t9645 = 0.8*t9644;
  t9646 = t9640 + t9641 + t9645;
  t9647 = var2[4]*t9646;
  t9653 = var2[2]*t9652;
  t9654 = var2[3]*t9652;
  t9655 = t9647 + t9653 + t9654;
  t9656 = var2[4]*t9655;
  t9667 = var2[2]*t9666;
  t9668 = var2[3]*t9666;
  t9669 = t9537 + t9541 + t9546 + t9637 + t9584 + t9638 + t9639 + t9594 + t9595 + t9656 + t9667 + t9668;
  t9684 = 2.*var2[4]*t9579;
  t9685 = 2.*var2[2]*t9593;
  t9686 = 2.*var2[3]*t9593;
  t9687 = t9537 + t9541 + t9546 + t9684 + t9685 + t9686;
  p_output1[0]=1.;
  p_output1[1]=t9599;
  p_output1[2]=t9599;
  p_output1[3]=t9600 + t9601 + t9604 + t9534*var2[2] + t9582*var2[2] + t9534*var2[3] + t9582*var2[3] + t9613*var2[4] + var2[4]*(t9573*var2[2] + t9573*var2[3] + (t9557 + t9589 + 0.8*(t9569 + t9590))*var2[4]) + t9534*var3[2] + t9534*var3[3] + t9613*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t9630;
  p_output1[6]=t9630;
  p_output1[7]=t9600 + t9601 + t9604 + 2.*t9534*var2[2] + 2.*t9534*var2[3] + 2.*t9613*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t9635;
  p_output1[10]=t9635;
  p_output1[11]=t9600 + t9601 + t9604;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t9669;
  p_output1[16]=t9669;
  p_output1[17]=t9515 + t9516 + t9520 + t9574 + t9580 + t9581 + t9655*var2[2] + t9655*var2[3] + var2[4]*(t9646*var2[2] + t9646*var2[3] + (t9640 + t9658 + 0.8*(t9642 + t9659))*var2[4]) + t9579*var3[2] + t9579*var3[3] + t9573*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t9687;
  p_output1[20]=t9687;
  p_output1[21]=t9515 + t9516 + t9520 + 2.*t9579*var2[2] + 2.*t9579*var2[3] + 2.*t9573*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t9547;
  p_output1[24]=t9547;
  p_output1[25]=t9534;
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

#include "J_ddh_RightToe_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_ddh_RightToe_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
