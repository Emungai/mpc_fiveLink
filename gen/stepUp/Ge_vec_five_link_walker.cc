/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:06 GMT-05:00
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
  double t2571;
  double t2580;
  double t2588;
  double t2592;
  double t2601;
  double t2602;
  double t2603;
  double t2613;
  double t2634;
  double t2646;
  double t2649;
  double t2650;
  double t2658;
  double t2659;
  double t2660;
  double t2661;
  double t2662;
  double t2664;
  double t2668;
  double t2669;
  double t2670;
  double t2671;
  double t2611;
  double t2617;
  double t2632;
  double t2633;
  double t2651;
  double t2652;
  double t2653;
  double t2654;
  double t2655;
  double t2656;
  double t2657;
  double t2682;
  double t2683;
  double t2684;
  double t2663;
  double t2665;
  double t2666;
  double t2667;
  double t2672;
  double t2673;
  double t2674;
  double t2675;
  double t2676;
  double t2677;
  double t2678;
  double t2693;
  double t2694;
  double t2695;
  t2571 = Sin(var1[2]);
  t2580 = Cos(var1[3]);
  t2588 = -1.*t2580*t2571;
  t2592 = Cos(var1[2]);
  t2601 = Sin(var1[3]);
  t2602 = -1.*t2592*t2601;
  t2603 = t2588 + t2602;
  t2613 = Cos(var1[4]);
  t2634 = -1.*t2592*t2580;
  t2646 = t2571*t2601;
  t2649 = t2634 + t2646;
  t2650 = Sin(var1[4]);
  t2658 = Cos(var1[5]);
  t2659 = -1.*t2658*t2571;
  t2660 = Sin(var1[5]);
  t2661 = -1.*t2592*t2660;
  t2662 = t2659 + t2661;
  t2664 = Cos(var1[6]);
  t2668 = -1.*t2592*t2658;
  t2669 = t2571*t2660;
  t2670 = t2668 + t2669;
  t2671 = Sin(var1[6]);
  t2611 = -7.33788*t2603;
  t2617 = -1.*t2613;
  t2632 = 1. + t2617;
  t2633 = 0.4*t2632*t2603;
  t2651 = -0.4*t2649*t2650;
  t2652 = t2613*t2603;
  t2653 = t2649*t2650;
  t2654 = t2652 + t2653;
  t2655 = 0.64*t2654;
  t2656 = t2633 + t2651 + t2655;
  t2657 = -31.392000000000003*t2656;
  t2682 = t2592*t2580;
  t2683 = -1.*t2571*t2601;
  t2684 = t2682 + t2683;
  t2663 = -7.33788*t2662;
  t2665 = -1.*t2664;
  t2666 = 1. + t2665;
  t2667 = 0.4*t2666*t2662;
  t2672 = -0.4*t2670*t2671;
  t2673 = t2664*t2662;
  t2674 = t2670*t2671;
  t2675 = t2673 + t2674;
  t2676 = 0.64*t2675;
  t2677 = t2667 + t2672 + t2676;
  t2678 = -31.392000000000003*t2677;
  t2693 = t2592*t2658;
  t2694 = -1.*t2571*t2660;
  t2695 = t2693 + t2694;
  p_output1[0]=0;
  p_output1[1]=-313.92;
  p_output1[2]=28.252799999999997*t2571 + t2611 + t2657 + t2663 + t2678;
  p_output1[3]=t2611 + t2657;
  p_output1[4]=-31.392000000000003*(-0.4*t2603*t2613 + 0.4*t2650*t2684 + 0.64*(t2652 - 1.*t2650*t2684));
  p_output1[5]=t2663 + t2678;
  p_output1[6]=-31.392000000000003*(-0.4*t2662*t2664 + 0.4*t2671*t2695 + 0.64*(t2673 - 1.*t2671*t2695));
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

#include "Ge_vec_five_link_walker.hh"

namespace LeftStance
{

void Ge_vec_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
