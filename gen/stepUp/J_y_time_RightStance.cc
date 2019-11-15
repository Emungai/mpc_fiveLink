/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 16:19:06 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t11706;
  double t9199;
  double t9537;
  double t11654;
  double t11660;
  double t11668;
  double t11708;
  double t11710;
  double t11711;
  double t11712;
  double t11713;
  double t11714;
  double t11715;
  double t11718;
  double t11723;
  double t11724;
  double t11725;
  double t11726;
  double t11729;
  double t11730;
  double t11731;
  double t11734;
  double t11735;
  double t11738;
  double t11759;
  double t11761;
  double t11775;
  double t11776;
  double t11753;
  double t11754;
  double t11755;
  double t11756;
  double t11757;
  double t11758;
  double t11760;
  t11706 = -1.*var4[1];
  t9199 = -1. + var5[0];
  t9537 = -1. + var6[0];
  t11654 = 1/t9537;
  t11660 = -1.*t9199*t11654;
  t11668 = 1. + t11660;
  t11708 = var4[0] + t11706;
  t11710 = Power(t11708,-5);
  t11711 = -1.*var1[0];
  t11712 = t11711 + var1[1];
  t11713 = t9199*t11654*t11712;
  t11714 = t11706 + var1[0] + t11713;
  t11715 = Power(t11714,4);
  t11718 = Power(t11708,-4);
  t11723 = Power(t11714,3);
  t11724 = 1/t11708;
  t11725 = -1.*t11724*t11714;
  t11726 = 1. + t11725;
  t11729 = Power(t11708,-3);
  t11730 = Power(t11714,2);
  t11731 = Power(t11726,2);
  t11734 = Power(t11708,-2);
  t11735 = Power(t11726,3);
  t11738 = Power(t11726,4);
  t11759 = Power(t11714,5);
  t11761 = Power(t11708,-6);
  t11775 = -1.*t11734*t11714;
  t11776 = t11724 + t11775;
  t11753 = Power(t11726,5);
  t11754 = -1.*t11753;
  t11755 = -5.*t11724*t11714*t11738;
  t11756 = -10.*t11734*t11730*t11735;
  t11757 = -10.*t11729*t11723*t11731;
  t11758 = -5.*t11718*t11715*t11726;
  t11760 = -1.*t11710*t11759;
  p_output1[0]=5.*t11668*t11724*t11738*var3[0] + 20.*t11668*t11714*t11734*t11735*var3[4] - 5.*t11668*t11724*t11738*var3[4] + 30.*t11668*t11729*t11730*t11731*var3[8] - 20.*t11668*t11714*t11734*t11735*var3[8] + 20.*t11668*t11718*t11723*t11726*var3[12] - 30.*t11668*t11729*t11730*t11731*var3[12] + 5.*t11668*t11710*t11715*var3[16] - 20.*t11668*t11718*t11723*t11726*var3[16] - 5.*t11668*t11710*t11715*var3[20];
  p_output1[1]=5.*t11654*t11724*t11738*t9199*var3[0] + 20.*t11654*t11714*t11734*t11735*t9199*var3[4] - 5.*t11654*t11724*t11738*t9199*var3[4] + 30.*t11654*t11729*t11730*t11731*t9199*var3[8] - 20.*t11654*t11714*t11734*t11735*t9199*var3[8] + 20.*t11654*t11718*t11723*t11726*t9199*var3[12] - 30.*t11654*t11729*t11730*t11731*t9199*var3[12] + 5.*t11654*t11710*t11715*t9199*var3[16] - 20.*t11654*t11718*t11723*t11726*t9199*var3[16] - 5.*t11654*t11710*t11715*t9199*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t11754;
  p_output1[4]=t11755;
  p_output1[5]=t11756;
  p_output1[6]=t11757;
  p_output1[7]=t11758;
  p_output1[8]=t11760;
  p_output1[9]=-5.*t11714*t11734*t11738*var3[0] - 20.*t11729*t11730*t11735*var3[4] + 5.*t11714*t11734*t11738*var3[4] - 30.*t11718*t11723*t11731*var3[8] + 20.*t11729*t11730*t11735*var3[8] - 20.*t11710*t11715*t11726*var3[12] + 30.*t11718*t11723*t11731*var3[12] + 20.*t11710*t11715*t11726*var3[16] - 5.*t11759*t11761*var3[16] + 5.*t11759*t11761*var3[20];
  p_output1[10]=-5.*t11738*t11776*var3[0] + 5.*t11724*t11738*var3[4] - 5.*t11714*t11734*t11738*var3[4] - 20.*t11714*t11724*t11735*t11776*var3[4] - 20.*t11729*t11730*t11735*var3[8] + 20.*t11714*t11734*t11735*var3[8] - 30.*t11730*t11731*t11734*t11776*var3[8] - 30.*t11718*t11723*t11731*var3[12] + 30.*t11729*t11730*t11731*var3[12] - 20.*t11723*t11726*t11729*t11776*var3[12] - 20.*t11710*t11715*t11726*var3[16] + 20.*t11718*t11723*t11726*var3[16] - 5.*t11715*t11718*t11776*var3[16] + 5.*t11710*t11715*var3[20] - 5.*t11759*t11761*var3[20];
  p_output1[11]=5.*t11668*t11724*t11738*var3[1] + 20.*t11668*t11714*t11734*t11735*var3[5] - 5.*t11668*t11724*t11738*var3[5] + 30.*t11668*t11729*t11730*t11731*var3[9] - 20.*t11668*t11714*t11734*t11735*var3[9] + 20.*t11668*t11718*t11723*t11726*var3[13] - 30.*t11668*t11729*t11730*t11731*var3[13] + 5.*t11668*t11710*t11715*var3[17] - 20.*t11668*t11718*t11723*t11726*var3[17] - 5.*t11668*t11710*t11715*var3[21];
  p_output1[12]=5.*t11654*t11724*t11738*t9199*var3[1] + 20.*t11654*t11714*t11734*t11735*t9199*var3[5] - 5.*t11654*t11724*t11738*t9199*var3[5] + 30.*t11654*t11729*t11730*t11731*t9199*var3[9] - 20.*t11654*t11714*t11734*t11735*t9199*var3[9] + 20.*t11654*t11718*t11723*t11726*t9199*var3[13] - 30.*t11654*t11729*t11730*t11731*t9199*var3[13] + 5.*t11654*t11710*t11715*t9199*var3[17] - 20.*t11654*t11718*t11723*t11726*t9199*var3[17] - 5.*t11654*t11710*t11715*t9199*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t11754;
  p_output1[15]=t11755;
  p_output1[16]=t11756;
  p_output1[17]=t11757;
  p_output1[18]=t11758;
  p_output1[19]=t11760;
  p_output1[20]=-5.*t11714*t11734*t11738*var3[1] - 20.*t11729*t11730*t11735*var3[5] + 5.*t11714*t11734*t11738*var3[5] - 30.*t11718*t11723*t11731*var3[9] + 20.*t11729*t11730*t11735*var3[9] - 20.*t11710*t11715*t11726*var3[13] + 30.*t11718*t11723*t11731*var3[13] + 20.*t11710*t11715*t11726*var3[17] - 5.*t11759*t11761*var3[17] + 5.*t11759*t11761*var3[21];
  p_output1[21]=-5.*t11738*t11776*var3[1] + 5.*t11724*t11738*var3[5] - 5.*t11714*t11734*t11738*var3[5] - 20.*t11714*t11724*t11735*t11776*var3[5] - 20.*t11729*t11730*t11735*var3[9] + 20.*t11714*t11734*t11735*var3[9] - 30.*t11730*t11731*t11734*t11776*var3[9] - 30.*t11718*t11723*t11731*var3[13] + 30.*t11729*t11730*t11731*var3[13] - 20.*t11723*t11726*t11729*t11776*var3[13] - 20.*t11710*t11715*t11726*var3[17] + 20.*t11718*t11723*t11726*var3[17] - 5.*t11715*t11718*t11776*var3[17] + 5.*t11710*t11715*var3[21] - 5.*t11759*t11761*var3[21];
  p_output1[22]=5.*t11668*t11724*t11738*var3[2] + 20.*t11668*t11714*t11734*t11735*var3[6] - 5.*t11668*t11724*t11738*var3[6] + 30.*t11668*t11729*t11730*t11731*var3[10] - 20.*t11668*t11714*t11734*t11735*var3[10] + 20.*t11668*t11718*t11723*t11726*var3[14] - 30.*t11668*t11729*t11730*t11731*var3[14] + 5.*t11668*t11710*t11715*var3[18] - 20.*t11668*t11718*t11723*t11726*var3[18] - 5.*t11668*t11710*t11715*var3[22];
  p_output1[23]=5.*t11654*t11724*t11738*t9199*var3[2] + 20.*t11654*t11714*t11734*t11735*t9199*var3[6] - 5.*t11654*t11724*t11738*t9199*var3[6] + 30.*t11654*t11729*t11730*t11731*t9199*var3[10] - 20.*t11654*t11714*t11734*t11735*t9199*var3[10] + 20.*t11654*t11718*t11723*t11726*t9199*var3[14] - 30.*t11654*t11729*t11730*t11731*t9199*var3[14] + 5.*t11654*t11710*t11715*t9199*var3[18] - 20.*t11654*t11718*t11723*t11726*t9199*var3[18] - 5.*t11654*t11710*t11715*t9199*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t11754;
  p_output1[26]=t11755;
  p_output1[27]=t11756;
  p_output1[28]=t11757;
  p_output1[29]=t11758;
  p_output1[30]=t11760;
  p_output1[31]=-5.*t11714*t11734*t11738*var3[2] - 20.*t11729*t11730*t11735*var3[6] + 5.*t11714*t11734*t11738*var3[6] - 30.*t11718*t11723*t11731*var3[10] + 20.*t11729*t11730*t11735*var3[10] - 20.*t11710*t11715*t11726*var3[14] + 30.*t11718*t11723*t11731*var3[14] + 20.*t11710*t11715*t11726*var3[18] - 5.*t11759*t11761*var3[18] + 5.*t11759*t11761*var3[22];
  p_output1[32]=-5.*t11738*t11776*var3[2] + 5.*t11724*t11738*var3[6] - 5.*t11714*t11734*t11738*var3[6] - 20.*t11714*t11724*t11735*t11776*var3[6] - 20.*t11729*t11730*t11735*var3[10] + 20.*t11714*t11734*t11735*var3[10] - 30.*t11730*t11731*t11734*t11776*var3[10] - 30.*t11718*t11723*t11731*var3[14] + 30.*t11729*t11730*t11731*var3[14] - 20.*t11723*t11726*t11729*t11776*var3[14] - 20.*t11710*t11715*t11726*var3[18] + 20.*t11718*t11723*t11726*var3[18] - 5.*t11715*t11718*t11776*var3[18] + 5.*t11710*t11715*var3[22] - 5.*t11759*t11761*var3[22];
  p_output1[33]=5.*t11668*t11724*t11738*var3[3] + 20.*t11668*t11714*t11734*t11735*var3[7] - 5.*t11668*t11724*t11738*var3[7] + 30.*t11668*t11729*t11730*t11731*var3[11] - 20.*t11668*t11714*t11734*t11735*var3[11] + 20.*t11668*t11718*t11723*t11726*var3[15] - 30.*t11668*t11729*t11730*t11731*var3[15] + 5.*t11668*t11710*t11715*var3[19] - 20.*t11668*t11718*t11723*t11726*var3[19] - 5.*t11668*t11710*t11715*var3[23];
  p_output1[34]=5.*t11654*t11724*t11738*t9199*var3[3] + 20.*t11654*t11714*t11734*t11735*t9199*var3[7] - 5.*t11654*t11724*t11738*t9199*var3[7] + 30.*t11654*t11729*t11730*t11731*t9199*var3[11] - 20.*t11654*t11714*t11734*t11735*t9199*var3[11] + 20.*t11654*t11718*t11723*t11726*t9199*var3[15] - 30.*t11654*t11729*t11730*t11731*t9199*var3[15] + 5.*t11654*t11710*t11715*t9199*var3[19] - 20.*t11654*t11718*t11723*t11726*t9199*var3[19] - 5.*t11654*t11710*t11715*t9199*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t11754;
  p_output1[37]=t11755;
  p_output1[38]=t11756;
  p_output1[39]=t11757;
  p_output1[40]=t11758;
  p_output1[41]=t11760;
  p_output1[42]=-5.*t11714*t11734*t11738*var3[3] - 20.*t11729*t11730*t11735*var3[7] + 5.*t11714*t11734*t11738*var3[7] - 30.*t11718*t11723*t11731*var3[11] + 20.*t11729*t11730*t11735*var3[11] - 20.*t11710*t11715*t11726*var3[15] + 30.*t11718*t11723*t11731*var3[15] + 20.*t11710*t11715*t11726*var3[19] - 5.*t11759*t11761*var3[19] + 5.*t11759*t11761*var3[23];
  p_output1[43]=-5.*t11738*t11776*var3[3] + 5.*t11724*t11738*var3[7] - 5.*t11714*t11734*t11738*var3[7] - 20.*t11714*t11724*t11735*t11776*var3[7] - 20.*t11729*t11730*t11735*var3[11] + 20.*t11714*t11734*t11735*var3[11] - 30.*t11730*t11731*t11734*t11776*var3[11] - 30.*t11718*t11723*t11731*var3[15] + 30.*t11729*t11730*t11731*var3[15] - 20.*t11723*t11726*t11729*t11776*var3[15] - 20.*t11710*t11715*t11726*var3[19] + 20.*t11718*t11723*t11726*var3[19] - 5.*t11715*t11718*t11776*var3[19] + 5.*t11710*t11715*var3[23] - 5.*t11759*t11761*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace Pattern[righStance, Blank[opt]]
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
