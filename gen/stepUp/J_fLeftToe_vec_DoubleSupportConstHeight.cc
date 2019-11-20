/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:00:39 GMT-05:00
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
  double t4609;
  double t8930;
  double t4576;
  double t8931;
  double t2652;
  double t8929;
  double t8932;
  double t8933;
  double t8935;
  double t8936;
  double t8937;
  double t8938;
  double t2684;
  double t4570;
  double t8946;
  double t8947;
  double t8948;
  double t8934;
  double t8939;
  double t8940;
  double t8941;
  double t8942;
  double t8943;
  double t8944;
  double t8945;
  double t8949;
  double t8950;
  double t8951;
  double t8952;
  double t8953;
  double t8954;
  double t8955;
  double t8956;
  double t8957;
  double t8966;
  double t8967;
  double t8968;
  double t8958;
  double t8959;
  double t8960;
  double t8961;
  double t8962;
  double t8963;
  double t8964;
  double t8965;
  double t8969;
  double t8970;
  double t8971;
  double t8972;
  double t8973;
  double t8974;
  double t8975;
  double t8976;
  double t8977;
  double t8978;
  double t8979;
  double t8980;
  double t8981;
  double t8982;
  t4609 = Cos(var1[5]);
  t8930 = Sin(var1[2]);
  t4576 = Cos(var1[2]);
  t8931 = Sin(var1[5]);
  t2652 = Cos(var1[6]);
  t8929 = -1.*t4576*t4609;
  t8932 = t8930*t8931;
  t8933 = t8929 + t8932;
  t8935 = t4609*t8930;
  t8936 = t4576*t8931;
  t8937 = t8935 + t8936;
  t8938 = Sin(var1[6]);
  t2684 = -1.*t2652;
  t4570 = 1. + t2684;
  t8946 = -1.*t4609*t8930;
  t8947 = -1.*t4576*t8931;
  t8948 = t8946 + t8947;
  t8934 = 0.4*t4570*t8933;
  t8939 = -0.4*t8937*t8938;
  t8940 = t2652*t8933;
  t8941 = t8937*t8938;
  t8942 = t8940 + t8941;
  t8943 = 0.8*t8942;
  t8944 = t8934 + t8939 + t8943;
  t8945 = var2[2]*t8944;
  t8949 = 0.4*t4570*t8948;
  t8950 = -0.4*t8933*t8938;
  t8951 = t2652*t8948;
  t8952 = t8933*t8938;
  t8953 = t8951 + t8952;
  t8954 = 0.8*t8953;
  t8955 = t8949 + t8950 + t8954;
  t8956 = var2[0]*t8955;
  t8957 = t8945 + t8956;
  t8966 = t4576*t4609;
  t8967 = -1.*t8930*t8931;
  t8968 = t8966 + t8967;
  t8958 = -0.4*t2652*t8933;
  t8959 = 0.4*t8948*t8938;
  t8960 = -1.*t8948*t8938;
  t8961 = t8940 + t8960;
  t8962 = 0.8*t8961;
  t8963 = t8958 + t8959 + t8962;
  t8964 = var2[2]*t8963;
  t8965 = -0.4*t2652*t8948;
  t8969 = 0.4*t8968*t8938;
  t8970 = -1.*t8968*t8938;
  t8971 = t8951 + t8970;
  t8972 = 0.8*t8971;
  t8973 = t8965 + t8969 + t8972;
  t8974 = var2[0]*t8973;
  t8975 = t8964 + t8974;
  t8976 = 0.4*t4570*t8968;
  t8977 = -0.4*t8948*t8938;
  t8978 = t2652*t8968;
  t8979 = t8948*t8938;
  t8980 = t8978 + t8979;
  t8981 = 0.8*t8980;
  t8982 = t8976 + t8977 + t8981;
  p_output1[0]=1.;
  p_output1[1]=1.;
  p_output1[2]=t8957;
  p_output1[3]=t8957;
  p_output1[4]=t8975;
  p_output1[5]=t8982;
  p_output1[6]=t8955;
  p_output1[7]=t8957;
  p_output1[8]=t8957;
  p_output1[9]=t8975;
  p_output1[10]=t8982;
  p_output1[11]=t8955;
  p_output1[12]=t8975;
  p_output1[13]=t8975;
  p_output1[14]=(0.4*t2652*t8937 + t8969 + 0.8*(-1.*t2652*t8937 + t8970))*var2[0] + (t8959 + 0.4*t2652*t8968 + 0.8*(t8960 - 1.*t2652*t8968))*var2[2];
  p_output1[15]=0.4*t8937*t8938 - 0.4*t2652*t8968 + 0.8*(-1.*t8937*t8938 + t8978);
  p_output1[16]=t8973;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 17, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_fLeftToe_vec_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_fLeftToe_vec_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
