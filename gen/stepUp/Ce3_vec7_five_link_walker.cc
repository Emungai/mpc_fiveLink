/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:04 GMT-05:00
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
  double t2562;
  double t2554;
  double t2555;
  double t2563;
  double t2567;
  double t2556;
  double t2564;
  double t2565;
  double t2543;
  double t2568;
  double t2569;
  double t2570;
  double t2604;
  double t2606;
  double t2608;
  double t2609;
  double t2610;
  double t2625;
  double t2626;
  double t2627;
  double t2566;
  double t2587;
  double t2635;
  double t2636;
  double t2637;
  double t2612;
  double t2621;
  double t2622;
  double t2623;
  double t2624;
  double t2628;
  double t2629;
  double t2630;
  double t2631;
  double t2638;
  double t2639;
  double t2640;
  double t2641;
  double t2642;
  double t2643;
  t2562 = Cos(var1[5]);
  t2554 = Cos(var1[6]);
  t2555 = Sin(var1[5]);
  t2563 = Sin(var1[6]);
  t2567 = Cos(var1[2]);
  t2556 = -1.*t2554*t2555;
  t2564 = -1.*t2562*t2563;
  t2565 = t2556 + t2564;
  t2543 = Sin(var1[2]);
  t2568 = t2562*t2554;
  t2569 = -1.*t2555*t2563;
  t2570 = t2568 + t2569;
  t2604 = -1.*t2554;
  t2606 = 1. + t2604;
  t2608 = 0.4*t2606;
  t2609 = 0.64*t2554;
  t2610 = t2608 + t2609;
  t2625 = t2562*t2610;
  t2626 = -0.24*t2555*t2563;
  t2627 = t2625 + t2626;
  t2566 = -1.*t2543*t2565;
  t2587 = t2567*t2565;
  t2635 = -1.*t2562*t2554;
  t2636 = t2555*t2563;
  t2637 = t2635 + t2636;
  t2612 = -0.24*t2562*t2563;
  t2621 = t2610*t2555;
  t2622 = 0.24*t2562*t2563;
  t2623 = t2621 + t2622;
  t2624 = t2623*t2570;
  t2628 = t2565*t2627;
  t2629 = t2554*t2555;
  t2630 = t2562*t2563;
  t2631 = t2629 + t2630;
  t2638 = t2567*t2637;
  t2639 = t2566 + t2638;
  t2640 = 0.384*var2[1]*t2639;
  t2641 = t2543*t2637;
  t2642 = t2587 + t2641;
  t2643 = 0.384*var2[0]*t2642;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(0.384*(-1.*t2543*t2570 + t2587)*var2[0] + 0.384*(t2566 - 1.*t2567*t2570)*var2[1])*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(t2640 + t2643 + 0.384*(t2570*(-1.*t2555*t2610 + t2612) + t2624 + t2628 + t2627*t2631)*var2[2])*var2[6];
  p_output1[6]=(t2640 + t2643 + 0.384*(t2570*(-0.24*t2554*t2555 + t2612) + t2624 + t2628 + (0.24*t2554*t2562 + t2626)*t2631)*var2[2] + 0.384*(0.24*t2554*t2563 - 1.*t2563*t2610)*var2[5])*var2[6];
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

#include "Ce3_vec7_five_link_walker.hh"

namespace LeftStance
{

void Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
