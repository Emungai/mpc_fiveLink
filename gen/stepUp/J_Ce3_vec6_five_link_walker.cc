/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:07 GMT-05:00
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
  double t10548;
  double t10463;
  double t10464;
  double t5852;
  double t13851;
  double t126;
  double t10549;
  double t10563;
  double t10564;
  double t10997;
  double t11693;
  double t17182;
  double t17188;
  double t17189;
  double t17408;
  double t17409;
  double t17410;
  double t17411;
  double t17412;
  double t17413;
  double t17196;
  double t11987;
  double t13920;
  double t14310;
  double t14399;
  double t17105;
  double t17106;
  double t17108;
  double t10461;
  double t10465;
  double t10472;
  double t10473;
  double t17415;
  double t17110;
  double t17431;
  double t17443;
  double t17444;
  double t17448;
  double t17404;
  double t17452;
  double t17471;
  double t17472;
  double t17473;
  double t17468;
  double t17469;
  double t17470;
  double t17474;
  double t17475;
  double t17476;
  double t17479;
  double t17494;
  double t17495;
  double t17496;
  double t17487;
  double t17488;
  double t17489;
  double t17414;
  double t17416;
  double t17480;
  double t17481;
  double t17482;
  double t17490;
  double t17491;
  double t17492;
  double t17405;
  double t17417;
  double t17419;
  double t17506;
  double t17507;
  double t17508;
  double t17509;
  double t17510;
  double t17511;
  double t17512;
  double t17477;
  double t17478;
  double t17483;
  double t17484;
  double t17485;
  double t17486;
  double t17449;
  double t17535;
  double t17536;
  double t17537;
  double t17531;
  double t17532;
  double t17533;
  double t17545;
  double t17546;
  double t17547;
  double t17540;
  double t17541;
  double t17542;
  double t17518;
  double t17519;
  double t17520;
  double t17521;
  double t17524;
  double t17525;
  double t17526;
  double t17527;
  double t17528;
  double t17539;
  double t17579;
  double t17580;
  double t17548;
  double t17552;
  double t17583;
  double t17584;
  double t17586;
  double t17587;
  double t17556;
  double t17567;
  double t17568;
  double t17573;
  double t17574;
  double t17575;
  double t17576;
  double t17577;
  double t17593;
  double t17594;
  double t17595;
  double t17596;
  double t17597;
  double t17611;
  double t17612;
  double t17613;
  double t17616;
  double t17617;
  double t17618;
  double t17493;
  double t17497;
  double t17498;
  double t17499;
  double t17500;
  double t17501;
  double t17502;
  double t17503;
  double t17504;
  double t17505;
  double t17563;
  double t17564;
  double t17565;
  double t17566;
  double t17569;
  double t17570;
  double t17571;
  double t17572;
  double t17578;
  double t17581;
  double t17582;
  double t17585;
  double t17588;
  double t17589;
  double t17590;
  double t17591;
  double t17592;
  double t17598;
  double t17599;
  double t17600;
  double t17601;
  double t17602;
  double t17603;
  double t17604;
  double t17605;
  double t17606;
  double t17607;
  double t17608;
  double t17609;
  double t17610;
  double t17624;
  double t17625;
  double t17626;
  double t17453;
  double t17644;
  double t17649;
  double t17650;
  double t17652;
  double t17653;
  double t17655;
  double t17656;
  double t17657;
  double t17663;
  double t17664;
  double t17665;
  double t17675;
  double t17676;
  double t17677;
  double t17680;
  double t17681;
  double t17682;
  double t17683;
  double t17684;
  t10548 = Cos(var1[6]);
  t10463 = Sin(var1[2]);
  t10464 = Sin(var1[5]);
  t5852 = Cos(var1[5]);
  t13851 = Sin(var1[6]);
  t126 = Cos(var1[2]);
  t10549 = -1.*t10548;
  t10563 = 1. + t10549;
  t10564 = 0.4*t10563;
  t10997 = 0.64*t10548;
  t11693 = t10564 + t10997;
  t17182 = t5852*t10548;
  t17188 = -1.*t10464*t13851;
  t17189 = t17182 + t17188;
  t17408 = t11693*t13851;
  t17409 = -0.24*t10548*t13851;
  t17410 = t17408 + t17409;
  t17411 = t10548*t10464;
  t17412 = t5852*t13851;
  t17413 = t17411 + t17412;
  t17196 = -1.*t126*t17189;
  t11987 = t11693*t10548;
  t13920 = Power(t13851,2);
  t14310 = 0.24*t13920;
  t14399 = t11987 + t14310;
  t17105 = -1.*t10548*t10464;
  t17106 = -1.*t5852*t13851;
  t17108 = t17105 + t17106;
  t10461 = -1.*t126*t5852;
  t10465 = t10463*t10464;
  t10472 = t10461 + t10465;
  t10473 = -0.748*t10472;
  t17415 = -1.*t10463*t17189;
  t17110 = -1.*t10463*t17108;
  t17431 = t5852*t10463;
  t17443 = t126*t10464;
  t17444 = t17431 + t17443;
  t17448 = -0.748*t17444;
  t17404 = t17110 + t17196;
  t17452 = -1.*t126*t17108;
  t17471 = -1.*t5852*t10548;
  t17472 = t10464*t13851;
  t17473 = t17471 + t17472;
  t17468 = t126*t17108;
  t17469 = t17468 + t17415;
  t17470 = -3.2*t17410*t17469;
  t17474 = t126*t17473;
  t17475 = t17110 + t17474;
  t17476 = -3.2*t14399*t17475;
  t17479 = -3.2*t17410*t17404;
  t17494 = -1.*t11693*t13851;
  t17495 = 0.24*t10548*t13851;
  t17496 = t17494 + t17495;
  t17487 = Power(t10548,2);
  t17488 = -0.24*t17487;
  t17489 = t11987 + t17488;
  t17414 = -1.*t126*t17413;
  t17416 = t17414 + t17415;
  t17480 = -1.*t10463*t17473;
  t17481 = t17452 + t17480;
  t17482 = -3.2*t14399*t17481;
  t17490 = -1.*t10463*t17413;
  t17491 = t126*t17189;
  t17492 = t17490 + t17491;
  t17405 = -3.2*t14399*t17404;
  t17417 = -3.2*t17410*t17416;
  t17419 = t10473 + t17405 + t17417;
  t17506 = -1.*t5852*t10463;
  t17507 = -1.*t126*t10464;
  t17508 = t17506 + t17507;
  t17509 = -0.748*t17508;
  t17510 = -3.2*t17410*t17492;
  t17511 = -3.2*t14399*t17469;
  t17512 = t17509 + t17510 + t17511;
  t17477 = t10473 + t17470 + t17476;
  t17478 = -0.5*var2[0]*t17477;
  t17483 = t17448 + t17479 + t17482;
  t17484 = -0.5*var2[1]*t17483;
  t17485 = t17478 + t17484;
  t17486 = var2[5]*t17485;
  t17449 = t10463*t17413;
  t17535 = t5852*t11693;
  t17536 = -0.24*t10464*t13851;
  t17537 = t17535 + t17536;
  t17531 = -1.*t11693*t10464;
  t17532 = -0.24*t5852*t13851;
  t17533 = t17531 + t17532;
  t17545 = t11693*t10464;
  t17546 = 0.24*t5852*t13851;
  t17547 = t17545 + t17546;
  t17540 = -1.*t5852*t11693;
  t17541 = 0.24*t10464*t13851;
  t17542 = t17540 + t17541;
  t17518 = -3.2*t17410*t17475;
  t17519 = t126*t17413;
  t17520 = t17519 + t17480;
  t17521 = -3.2*t14399*t17520;
  t17524 = t17449 + t17474;
  t17525 = -3.2*t14399*t17524;
  t17526 = t10463*t17473;
  t17527 = t17468 + t17526;
  t17528 = -3.2*t17410*t17527;
  t17539 = -1.*t17413*t17537;
  t17579 = -0.24*t10548*t10464;
  t17580 = t17579 + t17532;
  t17548 = -1.*t17547*t17473;
  t17552 = t17108*t17547;
  t17583 = 0.24*t5852*t10548;
  t17584 = t17583 + t17536;
  t17586 = -0.24*t5852*t10548;
  t17587 = t17586 + t17541;
  t17556 = t17537*t17473;
  t17567 = t10463*t17108;
  t17568 = t17567 + t17491;
  t17573 = t17533*t17189;
  t17574 = t17547*t17189;
  t17575 = t17108*t17537;
  t17576 = t17413*t17537;
  t17577 = t17573 + t17574 + t17575 + t17576;
  t17593 = -1.*t17108*t17533;
  t17594 = -1.*t17108*t17547;
  t17595 = -1.*t17189*t17537;
  t17596 = -1.*t17537*t17473;
  t17597 = t17593 + t17594 + t17595 + t17596;
  t17611 = -3.2*t17410*t17568;
  t17612 = -3.2*t14399*t17527;
  t17613 = t17509 + t17611 + t17612;
  t17616 = -3.2*t14399*t17577;
  t17617 = -3.2*t17410*t17597;
  t17618 = t17616 + t17617;
  t17493 = -3.2*t17489*t17492;
  t17497 = -3.2*t17496*t17469;
  t17498 = t17493 + t17470 + t17497 + t17476;
  t17499 = -0.5*var2[0]*t17498;
  t17500 = -3.2*t17496*t17404;
  t17501 = -3.2*t17489*t17416;
  t17502 = t17479 + t17500 + t17501 + t17482;
  t17503 = -0.5*var2[1]*t17502;
  t17504 = t17499 + t17503;
  t17505 = var2[5]*t17504;
  t17563 = -3.2*t17489*t17469;
  t17564 = -3.2*t17496*t17475;
  t17565 = t17563 + t17518 + t17564 + t17521;
  t17566 = -0.5*var2[1]*t17565;
  t17569 = -3.2*t17489*t17568;
  t17570 = -3.2*t17496*t17527;
  t17571 = t17569 + t17525 + t17528 + t17570;
  t17572 = -0.5*var2[0]*t17571;
  t17578 = -3.2*t17496*t17577;
  t17581 = -1.*t17580*t17189;
  t17582 = -1.*t17108*t17537;
  t17585 = -1.*t17108*t17584;
  t17588 = -1.*t17108*t17587;
  t17589 = -1.*t17533*t17473;
  t17590 = -1.*t17580*t17473;
  t17591 = t17581 + t17582 + t17539 + t17585 + t17588 + t17589 + t17590 + t17548;
  t17592 = -3.2*t17410*t17591;
  t17598 = -3.2*t17489*t17597;
  t17599 = t17108*t17533;
  t17600 = t17108*t17580;
  t17601 = t17580*t17413;
  t17602 = t17189*t17537;
  t17603 = t17189*t17584;
  t17604 = t17189*t17587;
  t17605 = t17599 + t17600 + t17552 + t17601 + t17602 + t17603 + t17604 + t17556;
  t17606 = -3.2*t14399*t17605;
  t17607 = t17578 + t17592 + t17598 + t17606;
  t17608 = -0.5*var2[2]*t17607;
  t17609 = t17566 + t17572 + t17608;
  t17610 = var2[5]*t17609;
  t17624 = -1.*t11693*t10548;
  t17625 = 0.24*t17487;
  t17626 = t17624 + t17625;
  t17453 = t10463*t17189;
  t17644 = t17519 + t17453;
  t17649 = -1.*t17547*t17189;
  t17650 = t17649 + t17582;
  t17652 = t17547*t17413;
  t17653 = t17652 + t17602;
  t17655 = t17580*t17189;
  t17656 = t17413*t17584;
  t17657 = t17655 + t17574 + t17575 + t17656;
  t17663 = -1.*t17108*t17580;
  t17664 = -1.*t17189*t17584;
  t17665 = t17663 + t17594 + t17664 + t17596;
  t17675 = -3.2*t17496*t17568;
  t17676 = -3.2*t17489*t17644;
  t17677 = t17611 + t17675 + t17676 + t17612;
  t17680 = -3.2*t17489*t17650;
  t17681 = -3.2*t17496*t17653;
  t17682 = -3.2*t14399*t17657;
  t17683 = -3.2*t17410*t17665;
  t17684 = t17680 + t17681 + t17682 + t17683;
  p_output1[0]=(-0.5*t17419*var2[0] - 0.5*(t17448 - 3.2*t17410*(t17196 + t17449) - 3.2*t14399*(t17452 + t17453))*var2[1])*var2[5];
  p_output1[1]=t17486;
  p_output1[2]=t17505;
  p_output1[3]=-0.5*t17512*var2[5];
  p_output1[4]=-0.5*t17419*var2[5];
  p_output1[5]=-0.5*t17512*var2[0] - 0.5*t17419*var2[1];
  p_output1[6]=t17486;
  p_output1[7]=(-0.5*(t10473 + t17525 + t17528)*var2[0] - 0.5*(t17448 + t17518 + t17521)*var2[1] - 0.5*(-3.2*t17410*(-1.*t17189*t17533 - 2.*t17473*t17533 - 2.*t17108*t17537 + t17539 - 1.*t17108*t17542 + t17548) - 3.2*t14399*(2.*t17108*t17533 + t17413*t17533 + 2.*t17189*t17537 + t17189*t17542 + t17552 + t17556))*var2[2])*var2[5];
  p_output1[8]=t17610;
  p_output1[9]=-0.5*t17613*var2[5];
  p_output1[10]=-0.5*t17477*var2[5];
  p_output1[11]=-0.5*t17618*var2[5];
  p_output1[12]=-0.5*t17613*var2[0] - 0.5*t17477*var2[1] - 0.5*t17618*var2[2];
  p_output1[13]=t17505;
  p_output1[14]=t17610;
  p_output1[15]=var2[5]*(-0.5*(t17525 - 6.4*t17496*t17527 + t17528 - 6.4*t17489*t17568 - 3.2*t17568*t17626 - 3.2*t17496*t17644)*var2[0] - 0.5*(-6.4*t17469*t17489 - 6.4*t17475*t17496 - 3.2*t17492*t17496 + t17518 + t17521 - 3.2*t17469*t17626)*var2[1] - 0.5*(-3.2*t17410*(t17539 + t17548 - 2.*t17473*t17580 + t17581 - 2.*t17108*t17584 + t17588) - 3.2*t14399*(t17552 + t17556 + 2.*t17108*t17580 + 2.*t17189*t17584 + t17601 + t17604) - 3.2*t17496*t17650 - 3.2*t17626*t17653 - 6.4*t17496*t17657 - 6.4*t17489*t17665)*var2[2] - 0.5*(-6.4*Power(t17489,2) - 6.4*t17410*t17496 - 6.4*Power(t17496,2) - 6.4*t14399*t17626)*var2[5] + 0.384*t17626*var2[6]);
  p_output1[16]=-0.5*t17677*var2[5];
  p_output1[17]=-0.5*t17498*var2[5];
  p_output1[18]=-0.5*t17684*var2[5];
  p_output1[19]=-0.5*t17677*var2[0] - 0.5*t17498*var2[1] - 0.5*t17684*var2[2] - 1.*(-6.4*t17410*t17489 - 6.4*t14399*t17496)*var2[5] + 0.384*t17496*var2[6];
  p_output1[20]=0.384*t17496*var2[5];
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

namespace DoubleSupportConstHeight
{

void J_Ce3_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
