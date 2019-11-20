/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:03:14 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  double t9759;
  double t4465;
  double t4577;
  double t4768;
  double t9737;
  double t9747;
  double t9760;
  double t9764;
  double t9765;
  double t9768;
  double t9769;
  double t9771;
  double t9772;
  double t9785;
  double t9786;
  double t9787;
  double t9788;
  double t9789;
  double t9793;
  double t9794;
  double t9800;
  double t9801;
  double t9819;
  double t9830;
  double t9835;
  double t9855;
  double t9856;
  double t9820;
  double t9821;
  double t9822;
  double t9823;
  double t9824;
  double t9825;
  double t9826;
  double t9827;
  double t9828;
  double t9829;
  double t9831;
  double t9832;
  double t9833;
  double t9834;
  t9759 = -1.*var5[1];
  t4465 = -1. + var6[0];
  t4577 = -1. + var7[0];
  t4768 = 1/t4577;
  t9737 = -1.*t4465*t4768;
  t9747 = 1. + t9737;
  t9760 = var5[0] + t9759;
  t9764 = Power(t9760,-5);
  t9765 = -1.*var1[0];
  t9768 = t9765 + var1[1];
  t9769 = t4465*t4768*t9768;
  t9771 = t9759 + var1[0] + t9769;
  t9772 = Power(t9771,3);
  t9785 = Power(t9760,-4);
  t9786 = Power(t9771,2);
  t9787 = 1/t9760;
  t9788 = -1.*t9787*t9771;
  t9789 = 1. + t9788;
  t9793 = Power(t9760,-3);
  t9794 = Power(t9789,2);
  t9800 = Power(t9760,-2);
  t9801 = Power(t9789,3);
  t9819 = Power(t9789,4);
  t9830 = Power(t9771,4);
  t9835 = Power(t9760,-6);
  t9855 = -1.*t9800*t9771;
  t9856 = t9787 + t9855;
  t9820 = 5.*t9787*t9819;
  t9821 = 20.*t9800*t9771*t9801;
  t9822 = -5.*t9787*t9819;
  t9823 = t9821 + t9822;
  t9824 = 30.*t9793*t9786*t9794;
  t9825 = -20.*t9800*t9771*t9801;
  t9826 = t9824 + t9825;
  t9827 = 20.*t9785*t9772*t9789;
  t9828 = -30.*t9793*t9786*t9794;
  t9829 = t9827 + t9828;
  t9831 = 5.*t9764*t9830;
  t9832 = -20.*t9785*t9772*t9789;
  t9833 = t9831 + t9832;
  t9834 = -5.*t9764*t9830;
  p_output1[0]=-20.*t9747*t9800*t9801*var4[0] - 60.*t9747*t9771*t9793*t9794*var4[2] + 40.*t9747*t9800*t9801*var4[2] - 60.*t9747*t9785*t9786*t9789*var4[4] + 120.*t9747*t9771*t9793*t9794*var4[4] - 20.*t9747*t9800*t9801*var4[4] - 20.*t9747*t9764*t9772*var4[6] + 120.*t9747*t9785*t9786*t9789*var4[6] - 60.*t9747*t9771*t9793*t9794*var4[6] + 40.*t9747*t9764*t9772*var4[8] - 60.*t9747*t9785*t9786*t9789*var4[8] - 20.*t9747*t9764*t9772*var4[10];
  p_output1[1]=-20.*t4465*t4768*t9800*t9801*var4[0] - 60.*t4465*t4768*t9771*t9793*t9794*var4[2] + 40.*t4465*t4768*t9800*t9801*var4[2] - 60.*t4465*t4768*t9785*t9786*t9789*var4[4] + 120.*t4465*t4768*t9771*t9793*t9794*var4[4] - 20.*t4465*t4768*t9800*t9801*var4[4] - 20.*t4465*t4768*t9764*t9772*var4[6] + 120.*t4465*t4768*t9785*t9786*t9789*var4[6] - 60.*t4465*t4768*t9771*t9793*t9794*var4[6] + 40.*t4465*t4768*t9764*t9772*var4[8] - 60.*t4465*t4768*t9785*t9786*t9789*var4[8] - 20.*t4465*t4768*t9764*t9772*var4[10];
  p_output1[2]=1.;
  p_output1[3]=t9820;
  p_output1[4]=t9823;
  p_output1[5]=t9826;
  p_output1[6]=t9829;
  p_output1[7]=t9833;
  p_output1[8]=t9834;
  p_output1[9]=20.*t9771*t9793*t9801*var4[0] - 5.*t9800*t9819*var4[0] + 60.*t9785*t9786*t9794*var4[2] - 60.*t9771*t9793*t9801*var4[2] + 5.*t9800*t9819*var4[2] + 60.*t9764*t9772*t9789*var4[4] - 150.*t9785*t9786*t9794*var4[4] + 40.*t9771*t9793*t9801*var4[4] - 140.*t9764*t9772*t9789*var4[6] + 90.*t9785*t9786*t9794*var4[6] + 20.*t9830*t9835*var4[6] + 80.*t9764*t9772*t9789*var4[8] - 45.*t9830*t9835*var4[8] + 25.*t9830*t9835*var4[10];
  p_output1[10]=5.*t9800*t9819*var4[0] + 20.*t9787*t9801*t9856*var4[0] + 40.*t9771*t9793*t9801*var4[2] - 20.*t9800*t9801*var4[2] - 5.*t9800*t9819*var4[2] + 60.*t9771*t9794*t9800*t9856*var4[2] - 20.*t9787*t9801*t9856*var4[2] + 90.*t9785*t9786*t9794*var4[4] - 60.*t9771*t9793*t9794*var4[4] - 40.*t9771*t9793*t9801*var4[4] + 20.*t9800*t9801*var4[4] + 60.*t9786*t9789*t9793*t9856*var4[4] - 60.*t9771*t9794*t9800*t9856*var4[4] + 80.*t9764*t9772*t9789*var4[6] - 60.*t9785*t9786*t9789*var4[6] - 90.*t9785*t9786*t9794*var4[6] + 60.*t9771*t9793*t9794*var4[6] + 20.*t9772*t9785*t9856*var4[6] - 60.*t9786*t9789*t9793*t9856*var4[6] - 20.*t9764*t9772*var4[8] - 80.*t9764*t9772*t9789*var4[8] + 60.*t9785*t9786*t9789*var4[8] + 25.*t9830*t9835*var4[8] - 20.*t9772*t9785*t9856*var4[8] + 20.*t9764*t9772*var4[10] - 25.*t9830*t9835*var4[10];
  p_output1[11]=-20.*t9747*t9800*t9801*var4[1] - 60.*t9747*t9771*t9793*t9794*var4[3] + 40.*t9747*t9800*t9801*var4[3] - 60.*t9747*t9785*t9786*t9789*var4[5] + 120.*t9747*t9771*t9793*t9794*var4[5] - 20.*t9747*t9800*t9801*var4[5] - 20.*t9747*t9764*t9772*var4[7] + 120.*t9747*t9785*t9786*t9789*var4[7] - 60.*t9747*t9771*t9793*t9794*var4[7] + 40.*t9747*t9764*t9772*var4[9] - 60.*t9747*t9785*t9786*t9789*var4[9] - 20.*t9747*t9764*t9772*var4[11];
  p_output1[12]=-20.*t4465*t4768*t9800*t9801*var4[1] - 60.*t4465*t4768*t9771*t9793*t9794*var4[3] + 40.*t4465*t4768*t9800*t9801*var4[3] - 60.*t4465*t4768*t9785*t9786*t9789*var4[5] + 120.*t4465*t4768*t9771*t9793*t9794*var4[5] - 20.*t4465*t4768*t9800*t9801*var4[5] - 20.*t4465*t4768*t9764*t9772*var4[7] + 120.*t4465*t4768*t9785*t9786*t9789*var4[7] - 60.*t4465*t4768*t9771*t9793*t9794*var4[7] + 40.*t4465*t4768*t9764*t9772*var4[9] - 60.*t4465*t4768*t9785*t9786*t9789*var4[9] - 20.*t4465*t4768*t9764*t9772*var4[11];
  p_output1[13]=1.;
  p_output1[14]=t9820;
  p_output1[15]=t9823;
  p_output1[16]=t9826;
  p_output1[17]=t9829;
  p_output1[18]=t9833;
  p_output1[19]=t9834;
  p_output1[20]=20.*t9771*t9793*t9801*var4[1] - 5.*t9800*t9819*var4[1] + 60.*t9785*t9786*t9794*var4[3] - 60.*t9771*t9793*t9801*var4[3] + 5.*t9800*t9819*var4[3] + 60.*t9764*t9772*t9789*var4[5] - 150.*t9785*t9786*t9794*var4[5] + 40.*t9771*t9793*t9801*var4[5] - 140.*t9764*t9772*t9789*var4[7] + 90.*t9785*t9786*t9794*var4[7] + 20.*t9830*t9835*var4[7] + 80.*t9764*t9772*t9789*var4[9] - 45.*t9830*t9835*var4[9] + 25.*t9830*t9835*var4[11];
  p_output1[21]=5.*t9800*t9819*var4[1] + 20.*t9787*t9801*t9856*var4[1] + 40.*t9771*t9793*t9801*var4[3] - 20.*t9800*t9801*var4[3] - 5.*t9800*t9819*var4[3] + 60.*t9771*t9794*t9800*t9856*var4[3] - 20.*t9787*t9801*t9856*var4[3] + 90.*t9785*t9786*t9794*var4[5] - 60.*t9771*t9793*t9794*var4[5] - 40.*t9771*t9793*t9801*var4[5] + 20.*t9800*t9801*var4[5] + 60.*t9786*t9789*t9793*t9856*var4[5] - 60.*t9771*t9794*t9800*t9856*var4[5] + 80.*t9764*t9772*t9789*var4[7] - 60.*t9785*t9786*t9789*var4[7] - 90.*t9785*t9786*t9794*var4[7] + 60.*t9771*t9793*t9794*var4[7] + 20.*t9772*t9785*t9856*var4[7] - 60.*t9786*t9789*t9793*t9856*var4[7] - 20.*t9764*t9772*var4[9] - 80.*t9764*t9772*t9789*var4[9] + 60.*t9785*t9786*t9789*var4[9] + 25.*t9830*t9835*var4[9] - 20.*t9772*t9785*t9856*var4[9] + 20.*t9764*t9772*var4[11] - 25.*t9830*t9835*var4[11];
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

  double *var1,*var2,*var3,*var4,*var5,*var6,*var7;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 7)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Seven input(s) required (var1,var2,var3,var4,var5,var6,var7).");
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
    ( !(mrows == 12 && ncols == 1) && 
      !(mrows == 1 && ncols == 12))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
  mrows = mxGetM(prhs[6]);
  ncols = mxGetN(prhs[6]);
  if( !mxIsDouble(prhs[6]) || mxIsComplex(prhs[6]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var7 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
  var7 = mxGetPr(prhs[6]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6,var7);


}

#else // MATLAB_MEX_FILE

#include "J_d1y_doubleSupportConst_DoubleSupportConstHeight.hh"

namespace DoubleSupportConstHeight
{

void J_d1y_doubleSupportConst_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6,const double *var7)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6, var7);

}

}

#endif // MATLAB_MEX_FILE
