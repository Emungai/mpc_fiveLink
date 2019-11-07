/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:26:53 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  double t2669;
  double t6864;
  double t6887;
  double t6896;
  double t6939;
  double t6946;
  double t6947;
  double t6948;
  double t6949;
  double t6950;
  double t6957;
  double t6958;
  double t6959;
  double t6962;
  double t6963;
  double t6966;
  double t6977;
  double t6979;
  double t6994;
  double t6995;
  double t6971;
  double t6972;
  double t6973;
  double t6974;
  double t6975;
  double t6976;
  double t6978;
  t2669 = -1.*var6[1];
  t6864 = var6[0] + t2669;
  t6887 = Power(t6864,-5);
  t6896 = t2669 + var1[0];
  t6939 = Power(t6896,4);
  t6946 = Power(t6864,-4);
  t6947 = Power(t6896,3);
  t6948 = 1/t6864;
  t6949 = -1.*t6948*t6896;
  t6950 = 1. + t6949;
  t6957 = Power(t6864,-3);
  t6958 = Power(t6896,2);
  t6959 = Power(t6950,2);
  t6962 = Power(t6864,-2);
  t6963 = Power(t6950,3);
  t6966 = Power(t6950,4);
  t6977 = Power(t6896,5);
  t6979 = Power(t6864,-6);
  t6994 = -1.*t6962*t6896;
  t6995 = t6948 + t6994;
  t6971 = Power(t6950,5);
  t6972 = -1.*var9[0]*t6971;
  t6973 = -5.*var9[0]*t6948*t6896*t6966;
  t6974 = -10.*var9[0]*t6962*t6958*t6963;
  t6975 = -10.*var9[0]*t6957*t6947*t6959;
  t6976 = -5.*var9[0]*t6946*t6939*t6950;
  t6978 = -1.*var9[0]*t6887*t6977;
  p_output1[0]=(5.*t6948*t6966*var5[0] + 20.*t6896*t6962*t6963*var5[4] - 5.*t6948*t6966*var5[4] + 30.*t6957*t6958*t6959*var5[8] - 20.*t6896*t6962*t6963*var5[8] + 20.*t6946*t6947*t6950*var5[12] - 30.*t6957*t6958*t6959*var5[12] + 5.*t6887*t6939*var5[16] - 20.*t6946*t6947*t6950*var5[16] - 5.*t6887*t6939*var5[20])*var9[0];
  p_output1[1]=var9[0];
  p_output1[2]=var9[1];
  p_output1[3]=1.;
  p_output1[4]=t6972;
  p_output1[5]=t6973;
  p_output1[6]=t6974;
  p_output1[7]=t6975;
  p_output1[8]=t6976;
  p_output1[9]=t6978;
  p_output1[10]=(-5.*t6896*t6962*t6966*var5[0] - 20.*t6957*t6958*t6963*var5[4] + 5.*t6896*t6962*t6966*var5[4] - 30.*t6946*t6947*t6959*var5[8] + 20.*t6957*t6958*t6963*var5[8] - 20.*t6887*t6939*t6950*var5[12] + 30.*t6946*t6947*t6959*var5[12] + 20.*t6887*t6939*t6950*var5[16] - 5.*t6977*t6979*var5[16] + 5.*t6977*t6979*var5[20])*var9[0];
  p_output1[11]=(-5.*t6966*t6995*var5[0] + 5.*t6948*t6966*var5[4] - 5.*t6896*t6962*t6966*var5[4] - 20.*t6896*t6948*t6963*t6995*var5[4] - 20.*t6957*t6958*t6963*var5[8] + 20.*t6896*t6962*t6963*var5[8] - 30.*t6958*t6959*t6962*t6995*var5[8] - 30.*t6946*t6947*t6959*var5[12] + 30.*t6957*t6958*t6959*var5[12] - 20.*t6947*t6950*t6957*t6995*var5[12] - 20.*t6887*t6939*t6950*var5[16] + 20.*t6946*t6947*t6950*var5[16] - 5.*t6939*t6946*t6995*var5[16] + 5.*t6887*t6939*var5[20] - 5.*t6977*t6979*var5[20])*var9[0];
  p_output1[12]=(5.*t6948*t6966*var5[1] + 20.*t6896*t6962*t6963*var5[5] - 5.*t6948*t6966*var5[5] + 30.*t6957*t6958*t6959*var5[9] - 20.*t6896*t6962*t6963*var5[9] + 20.*t6946*t6947*t6950*var5[13] - 30.*t6957*t6958*t6959*var5[13] + 5.*t6887*t6939*var5[17] - 20.*t6946*t6947*t6950*var5[17] - 5.*t6887*t6939*var5[21])*var9[0];
  p_output1[13]=var9[0];
  p_output1[14]=var9[1];
  p_output1[15]=1.;
  p_output1[16]=t6972;
  p_output1[17]=t6973;
  p_output1[18]=t6974;
  p_output1[19]=t6975;
  p_output1[20]=t6976;
  p_output1[21]=t6978;
  p_output1[22]=(-5.*t6896*t6962*t6966*var5[1] - 20.*t6957*t6958*t6963*var5[5] + 5.*t6896*t6962*t6966*var5[5] - 30.*t6946*t6947*t6959*var5[9] + 20.*t6957*t6958*t6963*var5[9] - 20.*t6887*t6939*t6950*var5[13] + 30.*t6946*t6947*t6959*var5[13] + 20.*t6887*t6939*t6950*var5[17] - 5.*t6977*t6979*var5[17] + 5.*t6977*t6979*var5[21])*var9[0];
  p_output1[23]=(-5.*t6966*t6995*var5[1] + 5.*t6948*t6966*var5[5] - 5.*t6896*t6962*t6966*var5[5] - 20.*t6896*t6948*t6963*t6995*var5[5] - 20.*t6957*t6958*t6963*var5[9] + 20.*t6896*t6962*t6963*var5[9] - 30.*t6958*t6959*t6962*t6995*var5[9] - 30.*t6946*t6947*t6959*var5[13] + 30.*t6957*t6958*t6959*var5[13] - 20.*t6947*t6950*t6957*t6995*var5[13] - 20.*t6887*t6939*t6950*var5[17] + 20.*t6946*t6947*t6950*var5[17] - 5.*t6939*t6946*t6995*var5[17] + 5.*t6887*t6939*var5[21] - 5.*t6977*t6979*var5[21])*var9[0];
  p_output1[24]=(5.*t6948*t6966*var5[2] + 20.*t6896*t6962*t6963*var5[6] - 5.*t6948*t6966*var5[6] + 30.*t6957*t6958*t6959*var5[10] - 20.*t6896*t6962*t6963*var5[10] + 20.*t6946*t6947*t6950*var5[14] - 30.*t6957*t6958*t6959*var5[14] + 5.*t6887*t6939*var5[18] - 20.*t6946*t6947*t6950*var5[18] - 5.*t6887*t6939*var5[22])*var9[0];
  p_output1[25]=var9[0];
  p_output1[26]=var9[1];
  p_output1[27]=1.;
  p_output1[28]=t6972;
  p_output1[29]=t6973;
  p_output1[30]=t6974;
  p_output1[31]=t6975;
  p_output1[32]=t6976;
  p_output1[33]=t6978;
  p_output1[34]=(-5.*t6896*t6962*t6966*var5[2] - 20.*t6957*t6958*t6963*var5[6] + 5.*t6896*t6962*t6966*var5[6] - 30.*t6946*t6947*t6959*var5[10] + 20.*t6957*t6958*t6963*var5[10] - 20.*t6887*t6939*t6950*var5[14] + 30.*t6946*t6947*t6959*var5[14] + 20.*t6887*t6939*t6950*var5[18] - 5.*t6977*t6979*var5[18] + 5.*t6977*t6979*var5[22])*var9[0];
  p_output1[35]=(-5.*t6966*t6995*var5[2] + 5.*t6948*t6966*var5[6] - 5.*t6896*t6962*t6966*var5[6] - 20.*t6896*t6948*t6963*t6995*var5[6] - 20.*t6957*t6958*t6963*var5[10] + 20.*t6896*t6962*t6963*var5[10] - 30.*t6958*t6959*t6962*t6995*var5[10] - 30.*t6946*t6947*t6959*var5[14] + 30.*t6957*t6958*t6959*var5[14] - 20.*t6947*t6950*t6957*t6995*var5[14] - 20.*t6887*t6939*t6950*var5[18] + 20.*t6946*t6947*t6950*var5[18] - 5.*t6939*t6946*t6995*var5[18] + 5.*t6887*t6939*var5[22] - 5.*t6977*t6979*var5[22])*var9[0];
  p_output1[36]=(5.*t6948*t6966*var5[3] + 20.*t6896*t6962*t6963*var5[7] - 5.*t6948*t6966*var5[7] + 30.*t6957*t6958*t6959*var5[11] - 20.*t6896*t6962*t6963*var5[11] + 20.*t6946*t6947*t6950*var5[15] - 30.*t6957*t6958*t6959*var5[15] + 5.*t6887*t6939*var5[19] - 20.*t6946*t6947*t6950*var5[19] - 5.*t6887*t6939*var5[23])*var9[0];
  p_output1[37]=var9[0];
  p_output1[38]=var9[1];
  p_output1[39]=1.;
  p_output1[40]=t6972;
  p_output1[41]=t6973;
  p_output1[42]=t6974;
  p_output1[43]=t6975;
  p_output1[44]=t6976;
  p_output1[45]=t6978;
  p_output1[46]=(-5.*t6896*t6962*t6966*var5[3] - 20.*t6957*t6958*t6963*var5[7] + 5.*t6896*t6962*t6966*var5[7] - 30.*t6946*t6947*t6959*var5[11] + 20.*t6957*t6958*t6963*var5[11] - 20.*t6887*t6939*t6950*var5[15] + 30.*t6946*t6947*t6959*var5[15] + 20.*t6887*t6939*t6950*var5[19] - 5.*t6977*t6979*var5[19] + 5.*t6977*t6979*var5[23])*var9[0];
  p_output1[47]=(-5.*t6966*t6995*var5[3] + 5.*t6948*t6966*var5[7] - 5.*t6896*t6962*t6966*var5[7] - 20.*t6896*t6948*t6963*t6995*var5[7] - 20.*t6957*t6958*t6963*var5[11] + 20.*t6896*t6962*t6963*var5[11] - 30.*t6958*t6959*t6962*t6995*var5[11] - 30.*t6946*t6947*t6959*var5[15] + 30.*t6957*t6958*t6959*var5[15] - 20.*t6947*t6950*t6957*t6995*var5[15] - 20.*t6887*t6939*t6950*var5[19] + 20.*t6946*t6947*t6950*var5[19] - 5.*t6939*t6946*t6995*var5[19] + 5.*t6887*t6939*var5[23] - 5.*t6977*t6979*var5[23])*var9[0];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7,*var8,*var9;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 9)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Nine input(s) required (var1,var2,var3,var4,var5,var6,var7,var8,var9).");
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
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
  mrows = mxGetM(prhs[8]);
  ncols = mxGetN(prhs[8]);
  if( !mxIsDouble(prhs[8]) || mxIsComplex(prhs[8]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var9 is wrong.");
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
  var9 = mxGetPr(prhs[8]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 48, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7,var8,var9);


}

#else // MATLAB_MEX_FILE

#include "J_d2y_time_LeftStanceLand.hh"

namespace LeftStanceLand
{

void J_d2y_time_LeftStanceLand_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7,const double *var8,const double *var9)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7, var8, var9);

}

}

#endif // MATLAB_MEX_FILE
