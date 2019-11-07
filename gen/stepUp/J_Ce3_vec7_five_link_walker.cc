/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:11 GMT-05:00
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
  double t11041;
  double t2640;
  double t9659;
  double t11285;
  double t14037;
  double t9717;
  double t13586;
  double t14015;
  double t289;
  double t14067;
  double t14070;
  double t14099;
  double t14036;
  double t14360;
  double t17450;
  double t17451;
  double t17454;
  double t17455;
  double t17456;
  double t17460;
  double t17461;
  double t17467;
  double t17513;
  double t17514;
  double t17515;
  double t14140;
  double t14156;
  double t17516;
  double t17517;
  double t17522;
  double t17543;
  double t17544;
  double t17549;
  double t17558;
  double t17559;
  double t17560;
  double t17561;
  double t17562;
  double t17614;
  double t17615;
  double t17619;
  double t17629;
  double t17630;
  double t17631;
  double t17550;
  double t17551;
  double t17553;
  double t17554;
  double t17555;
  double t17557;
  double t17621;
  double t17622;
  double t17623;
  double t17627;
  double t17643;
  double t17645;
  double t17634;
  double t17637;
  double t17673;
  double t17674;
  double t17678;
  double t17679;
  double t17685;
  double t17669;
  double t17670;
  double t17642;
  double t17646;
  double t17647;
  double t17648;
  double t17651;
  double t17654;
  double t17658;
  double t17659;
  double t17660;
  double t17661;
  double t17662;
  double t17666;
  double t17667;
  double t17668;
  double t17671;
  double t17672;
  double t17706;
  double t17707;
  double t17708;
  double t17702;
  double t17703;
  double t17704;
  double t17688;
  double t17689;
  t11041 = Cos(var1[5]);
  t2640 = Cos(var1[6]);
  t9659 = Sin(var1[5]);
  t11285 = Sin(var1[6]);
  t14037 = Cos(var1[2]);
  t9717 = -1.*t2640*t9659;
  t13586 = -1.*t11041*t11285;
  t14015 = t9717 + t13586;
  t289 = Sin(var1[2]);
  t14067 = t11041*t2640;
  t14070 = -1.*t9659*t11285;
  t14099 = t14067 + t14070;
  t14036 = -1.*t289*t14015;
  t14360 = -1.*t14037*t14015;
  t17450 = -1.*t11041*t2640;
  t17451 = t9659*t11285;
  t17454 = t17450 + t17451;
  t17455 = t14037*t17454;
  t17456 = t14036 + t17455;
  t17460 = 0.384*var2[0]*t17456;
  t17461 = -1.*t289*t17454;
  t17467 = t14360 + t17461;
  t17513 = 0.384*var2[1]*t17467;
  t17514 = t17460 + t17513;
  t17515 = var2[6]*t17514;
  t14140 = -1.*t14037*t14099;
  t14156 = t14036 + t14140;
  t17516 = t14037*t14015;
  t17517 = -1.*t289*t14099;
  t17522 = t17516 + t17517;
  t17543 = t2640*t9659;
  t17544 = t11041*t11285;
  t17549 = t17543 + t17544;
  t17558 = -1.*t2640;
  t17559 = 1. + t17558;
  t17560 = 0.4*t17559;
  t17561 = 0.64*t2640;
  t17562 = t17560 + t17561;
  t17614 = -1.*t17562*t9659;
  t17615 = -0.24*t11041*t11285;
  t17619 = t17614 + t17615;
  t17629 = t11041*t17562;
  t17630 = -0.24*t9659*t11285;
  t17631 = t17629 + t17630;
  t17550 = t289*t17549;
  t17551 = t17550 + t17455;
  t17553 = 0.384*var2[0]*t17551;
  t17554 = t14037*t17549;
  t17555 = t17554 + t17461;
  t17557 = 0.384*var2[1]*t17555;
  t17621 = t17562*t9659;
  t17622 = 0.24*t11041*t11285;
  t17623 = t17621 + t17622;
  t17627 = t14015*t17623;
  t17643 = -0.24*t2640*t9659;
  t17645 = t17643 + t17615;
  t17634 = 0.24*t9659*t11285;
  t17637 = t17631*t17454;
  t17673 = t17619*t14099;
  t17674 = t17623*t14099;
  t17678 = t14015*t17631;
  t17679 = t17549*t17631;
  t17685 = t17673 + t17674 + t17678 + t17679;
  t17669 = t289*t17454;
  t17670 = t17516 + t17669;
  t17642 = t14015*t17619;
  t17646 = t14015*t17645;
  t17647 = t17645*t17549;
  t17648 = t14099*t17631;
  t17651 = 0.24*t11041*t2640;
  t17654 = t17651 + t17630;
  t17658 = t14099*t17654;
  t17659 = -0.24*t11041*t2640;
  t17660 = t17659 + t17634;
  t17661 = t14099*t17660;
  t17662 = t17642 + t17646 + t17627 + t17647 + t17648 + t17658 + t17661 + t17637;
  t17666 = 0.384*var2[2]*t17662;
  t17667 = t17553 + t17557 + t17666;
  t17668 = var2[6]*t17667;
  t17671 = 0.384*var2[6]*t17670;
  t17672 = 0.384*var2[6]*t17456;
  t17706 = -1.*t17562*t11285;
  t17707 = 0.24*t2640*t11285;
  t17708 = t17706 + t17707;
  t17702 = t17645*t14099;
  t17703 = t17549*t17654;
  t17704 = t17702 + t17674 + t17678 + t17703;
  t17688 = 0.384*var2[1]*t17456;
  t17689 = 0.384*var2[0]*t17670;
  p_output1[0]=(0.384*t14156*var2[0] + 0.384*(t14360 + t14099*t289)*var2[1])*var2[6];
  p_output1[1]=t17515;
  p_output1[2]=t17515;
  p_output1[3]=0.384*t17522*var2[6];
  p_output1[4]=0.384*t14156*var2[6];
  p_output1[5]=0.384*t17522*var2[0] + 0.384*t14156*var2[1];
  p_output1[6]=t17515;
  p_output1[7]=(t17553 + t17557 + 0.384*(2.*t14015*t17619 + t17549*t17619 + t17627 + 2.*t14099*t17631 + t14099*(-1.*t11041*t17562 + t17634) + t17637)*var2[2])*var2[6];
  p_output1[8]=t17668;
  p_output1[9]=t17671;
  p_output1[10]=t17672;
  p_output1[11]=0.384*t17685*var2[6];
  p_output1[12]=t17688 + t17689 + 0.384*t17685*var2[2];
  p_output1[13]=t17515;
  p_output1[14]=t17668;
  p_output1[15]=(t17553 + t17557 + 0.384*(t17627 + t17637 + 2.*t14015*t17645 + t17647 + 2.*t14099*t17654 + t17661)*var2[2] + 0.384*(-1.*t17562*t2640 + 0.24*Power(t2640,2))*var2[5])*var2[6];
  p_output1[16]=t17671;
  p_output1[17]=t17672;
  p_output1[18]=0.384*t17704*var2[6];
  p_output1[19]=0.384*t17708*var2[6];
  p_output1[20]=t17688 + t17689 + 0.384*t17704*var2[2] + 0.384*t17708*var2[5];
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

#include "J_Ce3_vec7_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce3_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
