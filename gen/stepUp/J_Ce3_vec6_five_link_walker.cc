/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:40:53 GMT-05:00
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
  double t2530;
  double t2384;
  double t2409;
  double t2377;
  double t3057;
  double t2363;
  double t2787;
  double t2796;
  double t2940;
  double t3000;
  double t3030;
  double t3349;
  double t3350;
  double t3351;
  double t3398;
  double t3399;
  double t3400;
  double t3404;
  double t3405;
  double t3410;
  double t3352;
  double t3038;
  double t3058;
  double t3075;
  double t3086;
  double t3087;
  double t3092;
  double t3309;
  double t2383;
  double t2410;
  double t2527;
  double t2529;
  double t3420;
  double t3311;
  double t3440;
  double t3441;
  double t3444;
  double t3445;
  double t3353;
  double t3452;
  double t3469;
  double t3471;
  double t3472;
  double t3464;
  double t3465;
  double t3468;
  double t3474;
  double t3475;
  double t3477;
  double t3485;
  double t3528;
  double t3529;
  double t3530;
  double t3510;
  double t3511;
  double t3512;
  double t3416;
  double t3424;
  double t3488;
  double t3489;
  double t3497;
  double t3513;
  double t3518;
  double t3519;
  double t3384;
  double t3425;
  double t3426;
  double t3545;
  double t3548;
  double t3550;
  double t3551;
  double t3552;
  double t3566;
  double t3567;
  double t3480;
  double t3482;
  double t3498;
  double t3499;
  double t3500;
  double t3508;
  double t3446;
  double t3664;
  double t3665;
  double t3667;
  double t3660;
  double t3661;
  double t3662;
  double t3707;
  double t3711;
  double t3712;
  double t3691;
  double t3693;
  double t3694;
  double t3594;
  double t3595;
  double t3596;
  double t3597;
  double t3601;
  double t3603;
  double t3604;
  double t3632;
  double t3633;
  double t3670;
  double t3864;
  double t3865;
  double t3713;
  double t3728;
  double t3872;
  double t3873;
  double t3888;
  double t8086;
  double t3743;
  double t3802;
  double t3803;
  double t3818;
  double t3824;
  double t3828;
  double t3830;
  double t3832;
  double t8158;
  double t8159;
  double t8160;
  double t8220;
  double t8221;
  double t8353;
  double t8355;
  double t8356;
  double t8360;
  double t8364;
  double t8365;
  double t3524;
  double t3531;
  double t3533;
  double t3534;
  double t3535;
  double t3536;
  double t3537;
  double t3538;
  double t3540;
  double t3543;
  double t3778;
  double t3780;
  double t3787;
  double t3801;
  double t3812;
  double t3813;
  double t3814;
  double t3817;
  double t3834;
  double t3868;
  double t3869;
  double t3886;
  double t8092;
  double t8149;
  double t8155;
  double t8156;
  double t8157;
  double t8222;
  double t8223;
  double t8224;
  double t8253;
  double t8254;
  double t8269;
  double t8271;
  double t8277;
  double t8281;
  double t8286;
  double t8287;
  double t8351;
  double t8352;
  double t8436;
  double t8437;
  double t8438;
  double t3453;
  double t8459;
  double t8467;
  double t8470;
  double t8475;
  double t8476;
  double t8478;
  double t8482;
  double t8483;
  double t8489;
  double t8490;
  double t8494;
  double t8509;
  double t8510;
  double t8511;
  double t8514;
  double t8515;
  double t8516;
  double t8517;
  double t8518;
  t2530 = Cos(var1[6]);
  t2384 = Sin(var1[2]);
  t2409 = Sin(var1[5]);
  t2377 = Cos(var1[5]);
  t3057 = Sin(var1[6]);
  t2363 = Cos(var1[2]);
  t2787 = -1.*t2530;
  t2796 = 1. + t2787;
  t2940 = 0.4*t2796;
  t3000 = 0.64*t2530;
  t3030 = t2940 + t3000;
  t3349 = t2377*t2530;
  t3350 = -1.*t2409*t3057;
  t3351 = t3349 + t3350;
  t3398 = t3030*t3057;
  t3399 = -0.24*t2530*t3057;
  t3400 = t3398 + t3399;
  t3404 = t2530*t2409;
  t3405 = t2377*t3057;
  t3410 = t3404 + t3405;
  t3352 = -1.*t2363*t3351;
  t3038 = t3030*t2530;
  t3058 = Power(t3057,2);
  t3075 = 0.24*t3058;
  t3086 = t3038 + t3075;
  t3087 = -1.*t2530*t2409;
  t3092 = -1.*t2377*t3057;
  t3309 = t3087 + t3092;
  t2383 = -1.*t2363*t2377;
  t2410 = t2384*t2409;
  t2527 = t2383 + t2410;
  t2529 = -0.748*t2527;
  t3420 = -1.*t2384*t3351;
  t3311 = -1.*t2384*t3309;
  t3440 = t2377*t2384;
  t3441 = t2363*t2409;
  t3444 = t3440 + t3441;
  t3445 = -0.748*t3444;
  t3353 = t3311 + t3352;
  t3452 = -1.*t2363*t3309;
  t3469 = -1.*t2377*t2530;
  t3471 = t2409*t3057;
  t3472 = t3469 + t3471;
  t3464 = t2363*t3309;
  t3465 = t3464 + t3420;
  t3468 = -3.2*t3400*t3465;
  t3474 = t2363*t3472;
  t3475 = t3311 + t3474;
  t3477 = -3.2*t3086*t3475;
  t3485 = -3.2*t3400*t3353;
  t3528 = -1.*t3030*t3057;
  t3529 = 0.24*t2530*t3057;
  t3530 = t3528 + t3529;
  t3510 = Power(t2530,2);
  t3511 = -0.24*t3510;
  t3512 = t3038 + t3511;
  t3416 = -1.*t2363*t3410;
  t3424 = t3416 + t3420;
  t3488 = -1.*t2384*t3472;
  t3489 = t3452 + t3488;
  t3497 = -3.2*t3086*t3489;
  t3513 = -1.*t2384*t3410;
  t3518 = t2363*t3351;
  t3519 = t3513 + t3518;
  t3384 = -3.2*t3086*t3353;
  t3425 = -3.2*t3400*t3424;
  t3426 = t2529 + t3384 + t3425;
  t3545 = -1.*t2377*t2384;
  t3548 = -1.*t2363*t2409;
  t3550 = t3545 + t3548;
  t3551 = -0.748*t3550;
  t3552 = -3.2*t3400*t3519;
  t3566 = -3.2*t3086*t3465;
  t3567 = t3551 + t3552 + t3566;
  t3480 = t2529 + t3468 + t3477;
  t3482 = -0.5*var2[0]*t3480;
  t3498 = t3445 + t3485 + t3497;
  t3499 = -0.5*var2[1]*t3498;
  t3500 = t3482 + t3499;
  t3508 = var2[5]*t3500;
  t3446 = t2384*t3410;
  t3664 = t2377*t3030;
  t3665 = -0.24*t2409*t3057;
  t3667 = t3664 + t3665;
  t3660 = -1.*t3030*t2409;
  t3661 = -0.24*t2377*t3057;
  t3662 = t3660 + t3661;
  t3707 = t3030*t2409;
  t3711 = 0.24*t2377*t3057;
  t3712 = t3707 + t3711;
  t3691 = -1.*t2377*t3030;
  t3693 = 0.24*t2409*t3057;
  t3694 = t3691 + t3693;
  t3594 = -3.2*t3400*t3475;
  t3595 = t2363*t3410;
  t3596 = t3595 + t3488;
  t3597 = -3.2*t3086*t3596;
  t3601 = t3446 + t3474;
  t3603 = -3.2*t3086*t3601;
  t3604 = t2384*t3472;
  t3632 = t3464 + t3604;
  t3633 = -3.2*t3400*t3632;
  t3670 = -1.*t3410*t3667;
  t3864 = -0.24*t2530*t2409;
  t3865 = t3864 + t3661;
  t3713 = -1.*t3712*t3472;
  t3728 = t3309*t3712;
  t3872 = 0.24*t2377*t2530;
  t3873 = t3872 + t3665;
  t3888 = -0.24*t2377*t2530;
  t8086 = t3888 + t3693;
  t3743 = t3667*t3472;
  t3802 = t2384*t3309;
  t3803 = t3802 + t3518;
  t3818 = t3662*t3351;
  t3824 = t3712*t3351;
  t3828 = t3309*t3667;
  t3830 = t3410*t3667;
  t3832 = t3818 + t3824 + t3828 + t3830;
  t8158 = -1.*t3309*t3662;
  t8159 = -1.*t3309*t3712;
  t8160 = -1.*t3351*t3667;
  t8220 = -1.*t3667*t3472;
  t8221 = t8158 + t8159 + t8160 + t8220;
  t8353 = -3.2*t3400*t3803;
  t8355 = -3.2*t3086*t3632;
  t8356 = t3551 + t8353 + t8355;
  t8360 = -3.2*t3086*t3832;
  t8364 = -3.2*t3400*t8221;
  t8365 = t8360 + t8364;
  t3524 = -3.2*t3512*t3519;
  t3531 = -3.2*t3530*t3465;
  t3533 = t3524 + t3468 + t3531 + t3477;
  t3534 = -0.5*var2[0]*t3533;
  t3535 = -3.2*t3530*t3353;
  t3536 = -3.2*t3512*t3424;
  t3537 = t3485 + t3535 + t3536 + t3497;
  t3538 = -0.5*var2[1]*t3537;
  t3540 = t3534 + t3538;
  t3543 = var2[5]*t3540;
  t3778 = -3.2*t3512*t3465;
  t3780 = -3.2*t3530*t3475;
  t3787 = t3778 + t3594 + t3780 + t3597;
  t3801 = -0.5*var2[1]*t3787;
  t3812 = -3.2*t3512*t3803;
  t3813 = -3.2*t3530*t3632;
  t3814 = t3812 + t3603 + t3633 + t3813;
  t3817 = -0.5*var2[0]*t3814;
  t3834 = -3.2*t3530*t3832;
  t3868 = -1.*t3865*t3351;
  t3869 = -1.*t3309*t3667;
  t3886 = -1.*t3309*t3873;
  t8092 = -1.*t3309*t8086;
  t8149 = -1.*t3662*t3472;
  t8155 = -1.*t3865*t3472;
  t8156 = t3868 + t3869 + t3670 + t3886 + t8092 + t8149 + t8155 + t3713;
  t8157 = -3.2*t3400*t8156;
  t8222 = -3.2*t3512*t8221;
  t8223 = t3309*t3662;
  t8224 = t3309*t3865;
  t8253 = t3865*t3410;
  t8254 = t3351*t3667;
  t8269 = t3351*t3873;
  t8271 = t3351*t8086;
  t8277 = t8223 + t8224 + t3728 + t8253 + t8254 + t8269 + t8271 + t3743;
  t8281 = -3.2*t3086*t8277;
  t8286 = t3834 + t8157 + t8222 + t8281;
  t8287 = -0.5*var2[2]*t8286;
  t8351 = t3801 + t3817 + t8287;
  t8352 = var2[5]*t8351;
  t8436 = -1.*t3030*t2530;
  t8437 = 0.24*t3510;
  t8438 = t8436 + t8437;
  t3453 = t2384*t3351;
  t8459 = t3595 + t3453;
  t8467 = -1.*t3712*t3351;
  t8470 = t8467 + t3869;
  t8475 = t3712*t3410;
  t8476 = t8475 + t8254;
  t8478 = t3865*t3351;
  t8482 = t3410*t3873;
  t8483 = t8478 + t3824 + t3828 + t8482;
  t8489 = -1.*t3309*t3865;
  t8490 = -1.*t3351*t3873;
  t8494 = t8489 + t8159 + t8490 + t8220;
  t8509 = -3.2*t3530*t3803;
  t8510 = -3.2*t3512*t8459;
  t8511 = t8353 + t8509 + t8510 + t8355;
  t8514 = -3.2*t3512*t8470;
  t8515 = -3.2*t3530*t8476;
  t8516 = -3.2*t3086*t8483;
  t8517 = -3.2*t3400*t8494;
  t8518 = t8514 + t8515 + t8516 + t8517;
  p_output1[0]=(-0.5*t3426*var2[0] - 0.5*(t3445 - 3.2*t3400*(t3352 + t3446) - 3.2*t3086*(t3452 + t3453))*var2[1])*var2[5];
  p_output1[1]=t3508;
  p_output1[2]=t3543;
  p_output1[3]=-0.5*t3567*var2[5];
  p_output1[4]=-0.5*t3426*var2[5];
  p_output1[5]=-0.5*t3567*var2[0] - 0.5*t3426*var2[1];
  p_output1[6]=t3508;
  p_output1[7]=(-0.5*(t2529 + t3603 + t3633)*var2[0] - 0.5*(t3445 + t3594 + t3597)*var2[1] - 0.5*(-3.2*t3400*(-1.*t3351*t3662 - 2.*t3472*t3662 - 2.*t3309*t3667 + t3670 - 1.*t3309*t3694 + t3713) - 3.2*t3086*(2.*t3309*t3662 + t3410*t3662 + 2.*t3351*t3667 + t3351*t3694 + t3728 + t3743))*var2[2])*var2[5];
  p_output1[8]=t8352;
  p_output1[9]=-0.5*t8356*var2[5];
  p_output1[10]=-0.5*t3480*var2[5];
  p_output1[11]=-0.5*t8365*var2[5];
  p_output1[12]=-0.5*t8356*var2[0] - 0.5*t3480*var2[1] - 0.5*t8365*var2[2];
  p_output1[13]=t3543;
  p_output1[14]=t8352;
  p_output1[15]=var2[5]*(-0.5*(t3603 - 6.4*t3530*t3632 + t3633 - 6.4*t3512*t3803 - 3.2*t3803*t8438 - 3.2*t3530*t8459)*var2[0] - 0.5*(-6.4*t3465*t3512 - 6.4*t3475*t3530 - 3.2*t3519*t3530 + t3594 + t3597 - 3.2*t3465*t8438)*var2[1] - 0.5*(-3.2*t3400*(t3670 + t3713 - 2.*t3472*t3865 + t3868 - 2.*t3309*t3873 + t8092) - 3.2*t3086*(t3728 + t3743 + 2.*t3309*t3865 + 2.*t3351*t3873 + t8253 + t8271) - 3.2*t3530*t8470 - 3.2*t8438*t8476 - 6.4*t3530*t8483 - 6.4*t3512*t8494)*var2[2] - 0.5*(-6.4*Power(t3512,2) - 6.4*t3400*t3530 - 6.4*Power(t3530,2) - 6.4*t3086*t8438)*var2[5] + 0.384*t8438*var2[6]);
  p_output1[16]=-0.5*t8511*var2[5];
  p_output1[17]=-0.5*t3533*var2[5];
  p_output1[18]=-0.5*t8518*var2[5];
  p_output1[19]=-0.5*t8511*var2[0] - 0.5*t3533*var2[1] - 0.5*t8518*var2[2] - 1.*(-6.4*t3400*t3512 - 6.4*t3086*t3530)*var2[5] + 0.384*t3530*var2[6];
  p_output1[20]=0.384*t3530*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec6_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
