/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 15:30:22 GMT-05:00
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
  double t9674;
  double t2761;
  double t9620;
  double t9626;
  double t9634;
  double t9672;
  double t9676;
  double t9677;
  double t9678;
  double t9679;
  double t9680;
  double t9681;
  double t9682;
  double t9689;
  double t9690;
  double t9691;
  double t9692;
  double t9693;
  double t9696;
  double t9697;
  double t9698;
  double t9701;
  double t9702;
  double t9705;
  double t9726;
  double t9728;
  double t9742;
  double t9743;
  double t9720;
  double t9721;
  double t9722;
  double t9723;
  double t9724;
  double t9725;
  double t9727;
  t9674 = -1.*var4[1];
  t2761 = -1. + var5[0];
  t9620 = -1. + var6[0];
  t9626 = 1/t9620;
  t9634 = -1.*t2761*t9626;
  t9672 = 1. + t9634;
  t9676 = var4[0] + t9674;
  t9677 = Power(t9676,-5);
  t9678 = -1.*var1[0];
  t9679 = t9678 + var1[1];
  t9680 = t2761*t9626*t9679;
  t9681 = t9674 + var1[0] + t9680;
  t9682 = Power(t9681,4);
  t9689 = Power(t9676,-4);
  t9690 = Power(t9681,3);
  t9691 = 1/t9676;
  t9692 = -1.*t9691*t9681;
  t9693 = 1. + t9692;
  t9696 = Power(t9676,-3);
  t9697 = Power(t9681,2);
  t9698 = Power(t9693,2);
  t9701 = Power(t9676,-2);
  t9702 = Power(t9693,3);
  t9705 = Power(t9693,4);
  t9726 = Power(t9681,5);
  t9728 = Power(t9676,-6);
  t9742 = -1.*t9701*t9681;
  t9743 = t9691 + t9742;
  t9720 = Power(t9693,5);
  t9721 = -1.*t9720;
  t9722 = -5.*t9691*t9681*t9705;
  t9723 = -10.*t9701*t9697*t9702;
  t9724 = -10.*t9696*t9690*t9698;
  t9725 = -5.*t9689*t9682*t9693;
  t9727 = -1.*t9677*t9726;
  p_output1[0]=5.*t9672*t9691*t9705*var3[0] + 20.*t9672*t9681*t9701*t9702*var3[4] - 5.*t9672*t9691*t9705*var3[4] + 30.*t9672*t9696*t9697*t9698*var3[8] - 20.*t9672*t9681*t9701*t9702*var3[8] + 20.*t9672*t9689*t9690*t9693*var3[12] - 30.*t9672*t9696*t9697*t9698*var3[12] + 5.*t9672*t9677*t9682*var3[16] - 20.*t9672*t9689*t9690*t9693*var3[16] - 5.*t9672*t9677*t9682*var3[20];
  p_output1[1]=5.*t2761*t9626*t9691*t9705*var3[0] + 20.*t2761*t9626*t9681*t9701*t9702*var3[4] - 5.*t2761*t9626*t9691*t9705*var3[4] + 30.*t2761*t9626*t9696*t9697*t9698*var3[8] - 20.*t2761*t9626*t9681*t9701*t9702*var3[8] + 20.*t2761*t9626*t9689*t9690*t9693*var3[12] - 30.*t2761*t9626*t9696*t9697*t9698*var3[12] + 5.*t2761*t9626*t9677*t9682*var3[16] - 20.*t2761*t9626*t9689*t9690*t9693*var3[16] - 5.*t2761*t9626*t9677*t9682*var3[20];
  p_output1[2]=1.;
  p_output1[3]=t9721;
  p_output1[4]=t9722;
  p_output1[5]=t9723;
  p_output1[6]=t9724;
  p_output1[7]=t9725;
  p_output1[8]=t9727;
  p_output1[9]=-5.*t9681*t9701*t9705*var3[0] - 20.*t9696*t9697*t9702*var3[4] + 5.*t9681*t9701*t9705*var3[4] - 30.*t9689*t9690*t9698*var3[8] + 20.*t9696*t9697*t9702*var3[8] - 20.*t9677*t9682*t9693*var3[12] + 30.*t9689*t9690*t9698*var3[12] + 20.*t9677*t9682*t9693*var3[16] - 5.*t9726*t9728*var3[16] + 5.*t9726*t9728*var3[20];
  p_output1[10]=-5.*t9705*t9743*var3[0] + 5.*t9691*t9705*var3[4] - 5.*t9681*t9701*t9705*var3[4] - 20.*t9681*t9691*t9702*t9743*var3[4] - 20.*t9696*t9697*t9702*var3[8] + 20.*t9681*t9701*t9702*var3[8] - 30.*t9697*t9698*t9701*t9743*var3[8] - 30.*t9689*t9690*t9698*var3[12] + 30.*t9696*t9697*t9698*var3[12] - 20.*t9690*t9693*t9696*t9743*var3[12] - 20.*t9677*t9682*t9693*var3[16] + 20.*t9689*t9690*t9693*var3[16] - 5.*t9682*t9689*t9743*var3[16] + 5.*t9677*t9682*var3[20] - 5.*t9726*t9728*var3[20];
  p_output1[11]=5.*t9672*t9691*t9705*var3[1] + 20.*t9672*t9681*t9701*t9702*var3[5] - 5.*t9672*t9691*t9705*var3[5] + 30.*t9672*t9696*t9697*t9698*var3[9] - 20.*t9672*t9681*t9701*t9702*var3[9] + 20.*t9672*t9689*t9690*t9693*var3[13] - 30.*t9672*t9696*t9697*t9698*var3[13] + 5.*t9672*t9677*t9682*var3[17] - 20.*t9672*t9689*t9690*t9693*var3[17] - 5.*t9672*t9677*t9682*var3[21];
  p_output1[12]=5.*t2761*t9626*t9691*t9705*var3[1] + 20.*t2761*t9626*t9681*t9701*t9702*var3[5] - 5.*t2761*t9626*t9691*t9705*var3[5] + 30.*t2761*t9626*t9696*t9697*t9698*var3[9] - 20.*t2761*t9626*t9681*t9701*t9702*var3[9] + 20.*t2761*t9626*t9689*t9690*t9693*var3[13] - 30.*t2761*t9626*t9696*t9697*t9698*var3[13] + 5.*t2761*t9626*t9677*t9682*var3[17] - 20.*t2761*t9626*t9689*t9690*t9693*var3[17] - 5.*t2761*t9626*t9677*t9682*var3[21];
  p_output1[13]=1.;
  p_output1[14]=t9721;
  p_output1[15]=t9722;
  p_output1[16]=t9723;
  p_output1[17]=t9724;
  p_output1[18]=t9725;
  p_output1[19]=t9727;
  p_output1[20]=-5.*t9681*t9701*t9705*var3[1] - 20.*t9696*t9697*t9702*var3[5] + 5.*t9681*t9701*t9705*var3[5] - 30.*t9689*t9690*t9698*var3[9] + 20.*t9696*t9697*t9702*var3[9] - 20.*t9677*t9682*t9693*var3[13] + 30.*t9689*t9690*t9698*var3[13] + 20.*t9677*t9682*t9693*var3[17] - 5.*t9726*t9728*var3[17] + 5.*t9726*t9728*var3[21];
  p_output1[21]=-5.*t9705*t9743*var3[1] + 5.*t9691*t9705*var3[5] - 5.*t9681*t9701*t9705*var3[5] - 20.*t9681*t9691*t9702*t9743*var3[5] - 20.*t9696*t9697*t9702*var3[9] + 20.*t9681*t9701*t9702*var3[9] - 30.*t9697*t9698*t9701*t9743*var3[9] - 30.*t9689*t9690*t9698*var3[13] + 30.*t9696*t9697*t9698*var3[13] - 20.*t9690*t9693*t9696*t9743*var3[13] - 20.*t9677*t9682*t9693*var3[17] + 20.*t9689*t9690*t9693*var3[17] - 5.*t9682*t9689*t9743*var3[17] + 5.*t9677*t9682*var3[21] - 5.*t9726*t9728*var3[21];
  p_output1[22]=5.*t9672*t9691*t9705*var3[2] + 20.*t9672*t9681*t9701*t9702*var3[6] - 5.*t9672*t9691*t9705*var3[6] + 30.*t9672*t9696*t9697*t9698*var3[10] - 20.*t9672*t9681*t9701*t9702*var3[10] + 20.*t9672*t9689*t9690*t9693*var3[14] - 30.*t9672*t9696*t9697*t9698*var3[14] + 5.*t9672*t9677*t9682*var3[18] - 20.*t9672*t9689*t9690*t9693*var3[18] - 5.*t9672*t9677*t9682*var3[22];
  p_output1[23]=5.*t2761*t9626*t9691*t9705*var3[2] + 20.*t2761*t9626*t9681*t9701*t9702*var3[6] - 5.*t2761*t9626*t9691*t9705*var3[6] + 30.*t2761*t9626*t9696*t9697*t9698*var3[10] - 20.*t2761*t9626*t9681*t9701*t9702*var3[10] + 20.*t2761*t9626*t9689*t9690*t9693*var3[14] - 30.*t2761*t9626*t9696*t9697*t9698*var3[14] + 5.*t2761*t9626*t9677*t9682*var3[18] - 20.*t2761*t9626*t9689*t9690*t9693*var3[18] - 5.*t2761*t9626*t9677*t9682*var3[22];
  p_output1[24]=1.;
  p_output1[25]=t9721;
  p_output1[26]=t9722;
  p_output1[27]=t9723;
  p_output1[28]=t9724;
  p_output1[29]=t9725;
  p_output1[30]=t9727;
  p_output1[31]=-5.*t9681*t9701*t9705*var3[2] - 20.*t9696*t9697*t9702*var3[6] + 5.*t9681*t9701*t9705*var3[6] - 30.*t9689*t9690*t9698*var3[10] + 20.*t9696*t9697*t9702*var3[10] - 20.*t9677*t9682*t9693*var3[14] + 30.*t9689*t9690*t9698*var3[14] + 20.*t9677*t9682*t9693*var3[18] - 5.*t9726*t9728*var3[18] + 5.*t9726*t9728*var3[22];
  p_output1[32]=-5.*t9705*t9743*var3[2] + 5.*t9691*t9705*var3[6] - 5.*t9681*t9701*t9705*var3[6] - 20.*t9681*t9691*t9702*t9743*var3[6] - 20.*t9696*t9697*t9702*var3[10] + 20.*t9681*t9701*t9702*var3[10] - 30.*t9697*t9698*t9701*t9743*var3[10] - 30.*t9689*t9690*t9698*var3[14] + 30.*t9696*t9697*t9698*var3[14] - 20.*t9690*t9693*t9696*t9743*var3[14] - 20.*t9677*t9682*t9693*var3[18] + 20.*t9689*t9690*t9693*var3[18] - 5.*t9682*t9689*t9743*var3[18] + 5.*t9677*t9682*var3[22] - 5.*t9726*t9728*var3[22];
  p_output1[33]=5.*t9672*t9691*t9705*var3[3] + 20.*t9672*t9681*t9701*t9702*var3[7] - 5.*t9672*t9691*t9705*var3[7] + 30.*t9672*t9696*t9697*t9698*var3[11] - 20.*t9672*t9681*t9701*t9702*var3[11] + 20.*t9672*t9689*t9690*t9693*var3[15] - 30.*t9672*t9696*t9697*t9698*var3[15] + 5.*t9672*t9677*t9682*var3[19] - 20.*t9672*t9689*t9690*t9693*var3[19] - 5.*t9672*t9677*t9682*var3[23];
  p_output1[34]=5.*t2761*t9626*t9691*t9705*var3[3] + 20.*t2761*t9626*t9681*t9701*t9702*var3[7] - 5.*t2761*t9626*t9691*t9705*var3[7] + 30.*t2761*t9626*t9696*t9697*t9698*var3[11] - 20.*t2761*t9626*t9681*t9701*t9702*var3[11] + 20.*t2761*t9626*t9689*t9690*t9693*var3[15] - 30.*t2761*t9626*t9696*t9697*t9698*var3[15] + 5.*t2761*t9626*t9677*t9682*var3[19] - 20.*t2761*t9626*t9689*t9690*t9693*var3[19] - 5.*t2761*t9626*t9677*t9682*var3[23];
  p_output1[35]=1.;
  p_output1[36]=t9721;
  p_output1[37]=t9722;
  p_output1[38]=t9723;
  p_output1[39]=t9724;
  p_output1[40]=t9725;
  p_output1[41]=t9727;
  p_output1[42]=-5.*t9681*t9701*t9705*var3[3] - 20.*t9696*t9697*t9702*var3[7] + 5.*t9681*t9701*t9705*var3[7] - 30.*t9689*t9690*t9698*var3[11] + 20.*t9696*t9697*t9702*var3[11] - 20.*t9677*t9682*t9693*var3[15] + 30.*t9689*t9690*t9698*var3[15] + 20.*t9677*t9682*t9693*var3[19] - 5.*t9726*t9728*var3[19] + 5.*t9726*t9728*var3[23];
  p_output1[43]=-5.*t9705*t9743*var3[3] + 5.*t9691*t9705*var3[7] - 5.*t9681*t9701*t9705*var3[7] - 20.*t9681*t9691*t9702*t9743*var3[7] - 20.*t9696*t9697*t9702*var3[11] + 20.*t9681*t9701*t9702*var3[11] - 30.*t9697*t9698*t9701*t9743*var3[11] - 30.*t9689*t9690*t9698*var3[15] + 30.*t9696*t9697*t9698*var3[15] - 20.*t9690*t9693*t9696*t9743*var3[15] - 20.*t9677*t9682*t9693*var3[19] + 20.*t9689*t9690*t9693*var3[19] - 5.*t9682*t9689*t9743*var3[19] + 5.*t9677*t9682*var3[23] - 5.*t9726*t9728*var3[23];
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

#include "J_y_time_DoubleSupportConstHeight.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_y_time_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
