/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:02 GMT-05:00
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
  double t2490;
  double t2528;
  double t2415;
  double t2455;
  double t2407;
  double t2447;
  double t2492;
  double t2499;
  double t2514;
  double t2515;
  double t2516;
  double t2538;
  double t2539;
  double t2540;
  double t2544;
  double t2545;
  double t2546;
  double t2547;
  double t2548;
  double t2549;
  double t2550;
  double t2531;
  double t2532;
  double t2533;
  double t2534;
  double t2535;
  double t2536;
  double t2552;
  double t2557;
  double t2558;
  double t2559;
  double t2560;
  double t2551;
  double t2553;
  double t2561;
  double t2416;
  double t2473;
  double t2474;
  double t2475;
  double t2541;
  double t2573;
  double t2574;
  double t2575;
  double t2597;
  double t2598;
  double t2599;
  double t2589;
  double t2590;
  double t2591;
  double t2593;
  double t2594;
  double t2595;
  double t2614;
  double t2615;
  double t2616;
  double t2618;
  double t2619;
  double t2620;
  double t2537;
  double t2542;
  double t2572;
  double t2576;
  double t2577;
  double t2578;
  double t2581;
  double t2582;
  double t2583;
  double t2584;
  double t2585;
  double t2586;
  double t2596;
  double t2600;
  double t2644;
  double t2645;
  double t2605;
  double t2647;
  double t2648;
  double t2607;
  t2490 = Cos(var1[6]);
  t2528 = Sin(var1[6]);
  t2415 = Sin(var1[2]);
  t2455 = Sin(var1[5]);
  t2407 = Cos(var1[5]);
  t2447 = Cos(var1[2]);
  t2492 = -1.*t2490;
  t2499 = 1. + t2492;
  t2514 = 0.4*t2499;
  t2515 = 0.64*t2490;
  t2516 = t2514 + t2515;
  t2538 = t2407*t2490;
  t2539 = -1.*t2455*t2528;
  t2540 = t2538 + t2539;
  t2544 = t2516*t2490;
  t2545 = Power(t2528,2);
  t2546 = 0.24*t2545;
  t2547 = t2544 + t2546;
  t2548 = -1.*t2490*t2455;
  t2549 = -1.*t2407*t2528;
  t2550 = t2548 + t2549;
  t2531 = t2516*t2528;
  t2532 = -0.24*t2490*t2528;
  t2533 = t2531 + t2532;
  t2534 = t2490*t2455;
  t2535 = t2407*t2528;
  t2536 = t2534 + t2535;
  t2552 = -1.*t2415*t2540;
  t2557 = -1.*t2447*t2407;
  t2558 = t2415*t2455;
  t2559 = t2557 + t2558;
  t2560 = -0.748*t2559;
  t2551 = t2447*t2550;
  t2553 = t2551 + t2552;
  t2561 = -1.*t2415*t2550;
  t2416 = -1.*t2407*t2415;
  t2473 = -1.*t2447*t2455;
  t2474 = t2416 + t2473;
  t2475 = -0.748*t2474;
  t2541 = t2447*t2540;
  t2573 = -1.*t2407*t2490;
  t2574 = t2455*t2528;
  t2575 = t2573 + t2574;
  t2597 = t2407*t2516;
  t2598 = -0.24*t2455*t2528;
  t2599 = t2597 + t2598;
  t2589 = -1.*t2516*t2455;
  t2590 = -0.24*t2407*t2528;
  t2591 = t2589 + t2590;
  t2593 = t2516*t2455;
  t2594 = 0.24*t2407*t2528;
  t2595 = t2593 + t2594;
  t2614 = -1.*t2516*t2528;
  t2615 = 0.24*t2490*t2528;
  t2616 = t2614 + t2615;
  t2618 = Power(t2490,2);
  t2619 = -0.24*t2618;
  t2620 = t2544 + t2619;
  t2537 = -1.*t2415*t2536;
  t2542 = t2537 + t2541;
  t2572 = -3.2*t2533*t2553;
  t2576 = t2447*t2575;
  t2577 = t2561 + t2576;
  t2578 = -3.2*t2547*t2577;
  t2581 = t2415*t2550;
  t2582 = t2581 + t2541;
  t2583 = -3.2*t2533*t2582;
  t2584 = t2415*t2575;
  t2585 = t2551 + t2584;
  t2586 = -3.2*t2547*t2585;
  t2596 = t2595*t2540;
  t2600 = t2550*t2599;
  t2644 = -0.24*t2490*t2455;
  t2645 = t2644 + t2590;
  t2605 = -1.*t2550*t2595;
  t2647 = 0.24*t2407*t2490;
  t2648 = t2647 + t2598;
  t2607 = -1.*t2599*t2575;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=(-0.5*(t2475 - 3.2*t2533*t2542 - 3.2*t2547*t2553)*var2[0] - 0.5*(-3.2*t2533*(-1.*t2447*t2536 + t2552) + t2560 - 3.2*t2547*(-1.*t2447*t2540 + t2561))*var2[1])*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*(t2475 + t2583 + t2586)*var2[0] - 0.5*(t2560 + t2572 + t2578)*var2[1] - 0.5*(-3.2*t2547*(t2540*t2591 + t2596 + t2536*t2599 + t2600) - 3.2*t2533*(-1.*t2550*t2591 - 1.*t2540*t2599 + t2605 + t2607))*var2[2])*var2[5];
  p_output1[6]=var2[5]*(-0.5*(t2583 + t2586 - 3.2*t2582*t2616 - 3.2*(t2447*t2536 + t2415*t2540)*t2620)*var2[0] - 0.5*(t2572 + t2578 - 3.2*t2553*t2616 - 3.2*t2542*t2620)*var2[1] - 0.5*(-3.2*(t2536*t2595 + t2540*t2599)*t2616 - 3.2*(-1.*t2540*t2595 - 1.*t2550*t2599)*t2620 - 3.2*t2547*(t2596 + t2600 + t2540*t2645 + t2536*t2648) - 3.2*t2533*(t2605 + t2607 - 1.*t2550*t2645 - 1.*t2540*t2648))*var2[2] - 0.5*(-6.4*t2547*t2616 - 6.4*t2533*t2620)*var2[5] + 0.384*t2616*var2[6]);
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

#include "Ce3_vec6_five_link_walker.hh"

namespace LeftStance
{

void Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
