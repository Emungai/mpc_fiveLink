/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:09:38 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  double t4503;
  double t4504;
  double t4579;
  double t4583;
  double t4601;
  double t4612;
  double t4628;
  double t4678;
  double t4682;
  double t4629;
  double t4711;
  double t4775;
  double t4796;
  double t4802;
  double t4813;
  double t4814;
  double t4819;
  double t4820;
  double t4836;
  double t4837;
  double t4840;
  double t4855;
  double t5042;
  double t5043;
  double t4898;
  double t5013;
  double t8355;
  double t8566;
  double t10052;
  double t10105;
  double t10460;
  double t10705;
  double t11111;
  double t11123;
  double t11153;
  double t11159;
  t4503 = 4.*var5[0];
  t4504 = var3[0] + t4503 + var7[0];
  t4579 = -1. + var8[0];
  t4583 = 1/t4579;
  t4601 = -1.*var1[0];
  t4612 = t4601 + var1[1];
  t4628 = -0.333333333333333*t4583*t4612;
  t4678 = 4.*var5[1];
  t4682 = var3[1] + t4678 + var7[1];
  t4629 = -1.33333333333333*t4583*t4612;
  t4711 = 4.*var5[2];
  t4775 = var3[2] + t4711 + var7[2];
  t4796 = 4.*var5[3];
  t4802 = var3[3] + t4796 + var7[3];
  t4813 = 4.*var5[4];
  t4814 = var3[4] + t4813 + var7[4];
  t4819 = 4.*var5[5];
  t4820 = var3[5] + t4819 + var7[5];
  t4836 = 4.*var5[6];
  t4837 = var3[6] + t4836 + var7[6];
  t4840 = -1.*var7[0];
  t4855 = var3[0] + t4840;
  t5042 = -1.*var7[1];
  t5043 = var3[1] + t5042;
  t4898 = -0.25*t4583*t4612;
  t5013 = 0.25*t4583*t4612;
  t8355 = -1.*var7[2];
  t8566 = var3[2] + t8355;
  t10052 = -1.*var7[3];
  t10105 = var3[3] + t10052;
  t10460 = -1.*var7[4];
  t10705 = var3[4] + t10460;
  t11111 = -1.*var7[5];
  t11123 = var3[5] + t11111;
  t11153 = -1.*var7[6];
  t11159 = var3[6] + t11153;
  p_output1[0]=0.333333333333333*t4504*t4583;
  p_output1[1]=-0.333333333333333*t4504*t4583;
  p_output1[2]=-1.;
  p_output1[3]=t4628;
  p_output1[4]=t4629;
  p_output1[5]=1.;
  p_output1[6]=t4628;
  p_output1[7]=0.333333333333333*t4583*t4682;
  p_output1[8]=-0.333333333333333*t4583*t4682;
  p_output1[9]=-1.;
  p_output1[10]=t4628;
  p_output1[11]=t4629;
  p_output1[12]=1.;
  p_output1[13]=t4628;
  p_output1[14]=0.333333333333333*t4583*t4775;
  p_output1[15]=-0.333333333333333*t4583*t4775;
  p_output1[16]=-1.;
  p_output1[17]=t4628;
  p_output1[18]=t4629;
  p_output1[19]=1.;
  p_output1[20]=t4628;
  p_output1[21]=0.333333333333333*t4583*t4802;
  p_output1[22]=-0.333333333333333*t4583*t4802;
  p_output1[23]=-1.;
  p_output1[24]=t4628;
  p_output1[25]=t4629;
  p_output1[26]=1.;
  p_output1[27]=t4628;
  p_output1[28]=0.333333333333333*t4583*t4814;
  p_output1[29]=-0.333333333333333*t4583*t4814;
  p_output1[30]=-1.;
  p_output1[31]=t4628;
  p_output1[32]=t4629;
  p_output1[33]=1.;
  p_output1[34]=t4628;
  p_output1[35]=0.333333333333333*t4583*t4820;
  p_output1[36]=-0.333333333333333*t4583*t4820;
  p_output1[37]=-1.;
  p_output1[38]=t4628;
  p_output1[39]=t4629;
  p_output1[40]=1.;
  p_output1[41]=t4628;
  p_output1[42]=0.333333333333333*t4583*t4837;
  p_output1[43]=-0.333333333333333*t4583*t4837;
  p_output1[44]=-1.;
  p_output1[45]=t4628;
  p_output1[46]=t4629;
  p_output1[47]=1.;
  p_output1[48]=t4628;
  p_output1[49]=0.25*t4583*t4855;
  p_output1[50]=-0.25*t4583*t4855;
  p_output1[51]=-0.5;
  p_output1[52]=t4898;
  p_output1[53]=1.;
  p_output1[54]=-0.5;
  p_output1[55]=t5013;
  p_output1[56]=0.25*t4583*t5043;
  p_output1[57]=-0.25*t4583*t5043;
  p_output1[58]=-0.5;
  p_output1[59]=t4898;
  p_output1[60]=1.;
  p_output1[61]=-0.5;
  p_output1[62]=t5013;
  p_output1[63]=0.25*t4583*t8566;
  p_output1[64]=-0.25*t4583*t8566;
  p_output1[65]=-0.5;
  p_output1[66]=t4898;
  p_output1[67]=1.;
  p_output1[68]=-0.5;
  p_output1[69]=t5013;
  p_output1[70]=0.25*t10105*t4583;
  p_output1[71]=-0.25*t10105*t4583;
  p_output1[72]=-0.5;
  p_output1[73]=t4898;
  p_output1[74]=1.;
  p_output1[75]=-0.5;
  p_output1[76]=t5013;
  p_output1[77]=0.25*t10705*t4583;
  p_output1[78]=-0.25*t10705*t4583;
  p_output1[79]=-0.5;
  p_output1[80]=t4898;
  p_output1[81]=1.;
  p_output1[82]=-0.5;
  p_output1[83]=t5013;
  p_output1[84]=0.25*t11123*t4583;
  p_output1[85]=-0.25*t11123*t4583;
  p_output1[86]=-0.5;
  p_output1[87]=t4898;
  p_output1[88]=1.;
  p_output1[89]=-0.5;
  p_output1[90]=t5013;
  p_output1[91]=0.25*t11159*t4583;
  p_output1[92]=-0.25*t11159*t4583;
  p_output1[93]=-0.5;
  p_output1[94]=t4898;
  p_output1[95]=1.;
  p_output1[96]=-0.5;
  p_output1[97]=t5013;
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 8)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Eight input(s) required (var1,var2,var3,var4,var5,var6,var7,var8).");
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
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }
  mrows = mxGetM(prhs[7]);
  ncols = mxGetN(prhs[7]);
  if( !mxIsDouble(prhs[7]) || mxIsComplex(prhs[7]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var8 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
  var8 = mxGetPr(prhs[7]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 98, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8);


}

#else // MATLAB_MEX_FILE

#include "J_hs_int_dx.hh"

namespace LeftStance
{

void J_hs_int_dx_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8);

}

}

#endif // MATLAB_MEX_FILE
