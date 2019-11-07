/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:21:02 GMT-05:00
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
  double t598;
  double t555;
  double t592;
  double t745;
  double t9412;
  double t593;
  double t7970;
  double t7973;
  double t154;
  double t10446;
  double t10455;
  double t10457;
  double t8866;
  double t10462;
  double t10475;
  double t10477;
  double t10513;
  double t10514;
  double t10515;
  double t10518;
  double t10519;
  double t10541;
  double t10542;
  double t10543;
  double t10544;
  double t10459;
  double t10460;
  double t10545;
  double t10546;
  double t10547;
  double t12908;
  double t13513;
  double t13548;
  double t13836;
  double t13840;
  double t13877;
  double t13883;
  double t13890;
  double t13908;
  double t13915;
  double t13917;
  double t14484;
  double t14516;
  double t14518;
  double t13555;
  double t13619;
  double t13657;
  double t13686;
  double t13700;
  double t13709;
  double t14028;
  double t14033;
  double t14034;
  double t14035;
  double t17208;
  double t17209;
  double t17107;
  double t17181;
  double t17393;
  double t17394;
  double t17401;
  double t17402;
  double t17403;
  double t17383;
  double t17390;
  double t17203;
  double t17214;
  double t17215;
  double t17216;
  double t17218;
  double t17219;
  double t17220;
  double t17222;
  double t17223;
  double t17224;
  double t17225;
  double t17226;
  double t17227;
  double t17382;
  double t17391;
  double t17392;
  double t17440;
  double t17441;
  double t17442;
  double t17421;
  double t17422;
  double t17425;
  double t17406;
  double t17407;
  t598 = Cos(var1[3]);
  t555 = Cos(var1[4]);
  t592 = Sin(var1[3]);
  t745 = Sin(var1[4]);
  t9412 = Cos(var1[2]);
  t593 = -1.*t555*t592;
  t7970 = -1.*t598*t745;
  t7973 = t593 + t7970;
  t154 = Sin(var1[2]);
  t10446 = t598*t555;
  t10455 = -1.*t592*t745;
  t10457 = t10446 + t10455;
  t8866 = -1.*t154*t7973;
  t10462 = -1.*t9412*t7973;
  t10475 = -1.*t598*t555;
  t10477 = t592*t745;
  t10513 = t10475 + t10477;
  t10514 = t9412*t10513;
  t10515 = t8866 + t10514;
  t10518 = 0.384*var2[0]*t10515;
  t10519 = -1.*t154*t10513;
  t10541 = t10462 + t10519;
  t10542 = 0.384*var2[1]*t10541;
  t10543 = t10518 + t10542;
  t10544 = var2[4]*t10543;
  t10459 = -1.*t9412*t10457;
  t10460 = t8866 + t10459;
  t10545 = t9412*t7973;
  t10546 = -1.*t154*t10457;
  t10547 = t10545 + t10546;
  t12908 = t555*t592;
  t13513 = t598*t745;
  t13548 = t12908 + t13513;
  t13836 = -1.*t555;
  t13840 = 1. + t13836;
  t13877 = 0.4*t13840;
  t13883 = 0.64*t555;
  t13890 = t13877 + t13883;
  t13908 = -1.*t13890*t592;
  t13915 = -0.24*t598*t745;
  t13917 = t13908 + t13915;
  t14484 = t598*t13890;
  t14516 = -0.24*t592*t745;
  t14518 = t14484 + t14516;
  t13555 = t154*t13548;
  t13619 = t13555 + t10514;
  t13657 = 0.384*var2[0]*t13619;
  t13686 = t9412*t13548;
  t13700 = t13686 + t10519;
  t13709 = 0.384*var2[1]*t13700;
  t14028 = t13890*t592;
  t14033 = 0.24*t598*t745;
  t14034 = t14028 + t14033;
  t14035 = t7973*t14034;
  t17208 = -0.24*t555*t592;
  t17209 = t17208 + t13915;
  t17107 = 0.24*t592*t745;
  t17181 = t14518*t10513;
  t17393 = t13917*t10457;
  t17394 = t14034*t10457;
  t17401 = t7973*t14518;
  t17402 = t13548*t14518;
  t17403 = t17393 + t17394 + t17401 + t17402;
  t17383 = t154*t10513;
  t17390 = t10545 + t17383;
  t17203 = t7973*t13917;
  t17214 = t7973*t17209;
  t17215 = t17209*t13548;
  t17216 = t10457*t14518;
  t17218 = 0.24*t598*t555;
  t17219 = t17218 + t14516;
  t17220 = t10457*t17219;
  t17222 = -0.24*t598*t555;
  t17223 = t17222 + t17107;
  t17224 = t10457*t17223;
  t17225 = t17203 + t17214 + t14035 + t17215 + t17216 + t17220 + t17224 + t17181;
  t17226 = 0.384*var2[2]*t17225;
  t17227 = t13657 + t13709 + t17226;
  t17382 = var2[4]*t17227;
  t17391 = 0.384*var2[4]*t17390;
  t17392 = 0.384*var2[4]*t10515;
  t17440 = -1.*t13890*t745;
  t17441 = 0.24*t555*t745;
  t17442 = t17440 + t17441;
  t17421 = t17209*t10457;
  t17422 = t13548*t17219;
  t17425 = t17421 + t17394 + t17401 + t17422;
  t17406 = 0.384*var2[1]*t10515;
  t17407 = 0.384*var2[0]*t17390;
  p_output1[0]=(0.384*t10460*var2[0] + 0.384*(t10462 + t10457*t154)*var2[1])*var2[4];
  p_output1[1]=t10544;
  p_output1[2]=t10544;
  p_output1[3]=0.384*t10547*var2[4];
  p_output1[4]=0.384*t10460*var2[4];
  p_output1[5]=0.384*t10547*var2[0] + 0.384*t10460*var2[1];
  p_output1[6]=t10544;
  p_output1[7]=(t13657 + t13709 + 0.384*(t13548*t13917 + t14035 + 2.*t10457*t14518 + t17181 + t10457*(t17107 - 1.*t13890*t598) + 2.*t13917*t7973)*var2[2])*var2[4];
  p_output1[8]=t17382;
  p_output1[9]=t17391;
  p_output1[10]=t17392;
  p_output1[11]=0.384*t17403*var2[4];
  p_output1[12]=t17406 + t17407 + 0.384*t17403*var2[2];
  p_output1[13]=t10544;
  p_output1[14]=t17382;
  p_output1[15]=(t13657 + t13709 + 0.384*(t14035 + t17181 + t17215 + 2.*t10457*t17219 + t17224 + 2.*t17209*t7973)*var2[2] + 0.384*(-1.*t13890*t555 + 0.24*Power(t555,2))*var2[3])*var2[4];
  p_output1[16]=t17391;
  p_output1[17]=t17392;
  p_output1[18]=0.384*t17425*var2[4];
  p_output1[19]=0.384*t17442*var2[4];
  p_output1[20]=t17406 + t17407 + 0.384*t17425*var2[2] + 0.384*t17442*var2[3];
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

#include "J_Ce3_vec5_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce3_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
