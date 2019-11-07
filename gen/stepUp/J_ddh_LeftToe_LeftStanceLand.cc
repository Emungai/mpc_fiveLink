/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:26:32 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t6119;
  double t6598;
  double t3217;
  double t6610;
  double t127;
  double t6514;
  double t6611;
  double t6612;
  double t6651;
  double t6652;
  double t6653;
  double t6654;
  double t6724;
  double t6725;
  double t6726;
  double t6727;
  double t6728;
  double t6729;
  double t6730;
  double t2465;
  double t2914;
  double t6767;
  double t6768;
  double t6769;
  double t6766;
  double t6770;
  double t6771;
  double t6772;
  double t6774;
  double t6776;
  double t6792;
  double t6810;
  double t6816;
  double t6817;
  double t6819;
  double t6820;
  double t6821;
  double t6834;
  double t6835;
  double t6836;
  double t6833;
  double t6837;
  double t6839;
  double t6841;
  double t6844;
  double t6845;
  double t6832;
  double t6846;
  double t6847;
  double t6848;
  double t6616;
  double t6703;
  double t6704;
  double t6716;
  double t6717;
  double t6723;
  double t6758;
  double t6765;
  double t6777;
  double t6779;
  double t6780;
  double t6789;
  double t6791;
  double t6797;
  double t6811;
  double t6812;
  double t6813;
  double t6815;
  double t6822;
  double t6825;
  double t6827;
  double t6828;
  double t6849;
  double t6851;
  double t6853;
  double t6868;
  double t6869;
  double t6870;
  double t6871;
  double t6872;
  double t6888;
  double t6889;
  double t6890;
  double t6891;
  double t6859;
  double t6860;
  double t6861;
  double t6862;
  double t6863;
  double t6897;
  double t6908;
  double t6910;
  double t6915;
  double t6916;
  double t6917;
  double t6918;
  double t6919;
  double t6924;
  double t6925;
  double t6926;
  double t6927;
  double t6928;
  double t6929;
  double t6930;
  double t6931;
  double t6932;
  double t6933;
  double t6904;
  double t6905;
  double t6906;
  double t6907;
  double t6909;
  double t6911;
  double t6912;
  double t6913;
  double t6914;
  double t6920;
  double t6921;
  double t6922;
  double t6923;
  double t6934;
  double t6935;
  double t6936;
  double t6951;
  double t6952;
  double t6953;
  double t6954;
  t6119 = Cos(var1[5]);
  t6598 = Sin(var1[2]);
  t3217 = Cos(var1[2]);
  t6610 = Sin(var1[5]);
  t127 = Cos(var1[6]);
  t6514 = t3217*t6119;
  t6611 = -1.*t6598*t6610;
  t6612 = t6514 + t6611;
  t6651 = -1.*t6119*t6598;
  t6652 = -1.*t3217*t6610;
  t6653 = t6651 + t6652;
  t6654 = Sin(var1[6]);
  t6724 = -0.4*t127*t6653;
  t6725 = 0.4*t6612*t6654;
  t6726 = t127*t6653;
  t6727 = -1.*t6612*t6654;
  t6728 = t6726 + t6727;
  t6729 = 0.8*t6728;
  t6730 = t6724 + t6725 + t6729;
  t2465 = -1.*t127;
  t2914 = 1. + t2465;
  t6767 = -1.*t3217*t6119;
  t6768 = t6598*t6610;
  t6769 = t6767 + t6768;
  t6766 = 0.4*t2914*t6653;
  t6770 = -0.4*t6769*t6654;
  t6771 = t6769*t6654;
  t6772 = t6726 + t6771;
  t6774 = 0.8*t6772;
  t6776 = t6766 + t6770 + t6774;
  t6792 = 0.4*t6653*t6654;
  t6810 = -1.*t6653*t6654;
  t6816 = -0.4*t127*t6769;
  t6817 = t127*t6769;
  t6819 = t6817 + t6810;
  t6820 = 0.8*t6819;
  t6821 = t6816 + t6792 + t6820;
  t6834 = t6119*t6598;
  t6835 = t3217*t6610;
  t6836 = t6834 + t6835;
  t6833 = 0.4*t2914*t6769;
  t6837 = -0.4*t6836*t6654;
  t6839 = t6836*t6654;
  t6841 = t6817 + t6839;
  t6844 = 0.8*t6841;
  t6845 = t6833 + t6837 + t6844;
  t6832 = var2[6]*t6821;
  t6846 = var2[2]*t6845;
  t6847 = var2[5]*t6845;
  t6848 = t6832 + t6846 + t6847;
  t6616 = 0.4*t2914*t6612;
  t6703 = -0.4*t6653*t6654;
  t6704 = t127*t6612;
  t6716 = t6653*t6654;
  t6717 = t6704 + t6716;
  t6723 = 0.8*t6717;
  t6758 = var3[6]*t6730;
  t6765 = var2[6]*t6730;
  t6777 = var3[2]*t6776;
  t6779 = var3[5]*t6776;
  t6780 = var2[2]*t6776;
  t6789 = var2[5]*t6776;
  t6791 = 0.4*t127*t6612;
  t6797 = -1.*t127*t6612;
  t6811 = t6797 + t6810;
  t6812 = 0.8*t6811;
  t6813 = t6791 + t6792 + t6812;
  t6815 = var2[6]*t6813;
  t6822 = var2[2]*t6821;
  t6825 = var2[5]*t6821;
  t6827 = t6815 + t6822 + t6825;
  t6828 = var2[6]*t6827;
  t6849 = var2[2]*t6848;
  t6851 = var2[5]*t6848;
  t6853 = t6616 + t6703 + t6723 + t6758 + t6765 + t6777 + t6779 + t6780 + t6789 + t6828 + t6849 + t6851;
  t6868 = 0.4*t127*t6836;
  t6869 = -1.*t127*t6836;
  t6870 = t6869 + t6727;
  t6871 = 0.8*t6870;
  t6872 = t6868 + t6725 + t6871;
  t6888 = 2.*var2[6]*t6730;
  t6889 = 2.*var2[2]*t6776;
  t6890 = 2.*var2[5]*t6776;
  t6891 = t6616 + t6703 + t6723 + t6888 + t6889 + t6890;
  t6859 = -0.4*t127*t6612;
  t6860 = 0.4*t6836*t6654;
  t6861 = -1.*t6836*t6654;
  t6862 = t6704 + t6861;
  t6863 = 0.8*t6862;
  t6897 = t6616 + t6703 + t6723;
  t6908 = 0.4*t6769*t6654;
  t6910 = -1.*t6769*t6654;
  t6915 = -0.4*t127*t6836;
  t6916 = t127*t6836;
  t6917 = t6916 + t6910;
  t6918 = 0.8*t6917;
  t6919 = t6915 + t6908 + t6918;
  t6924 = 0.4*t2914*t6836;
  t6925 = -0.4*t6612*t6654;
  t6926 = t6612*t6654;
  t6927 = t6916 + t6926;
  t6928 = 0.8*t6927;
  t6929 = t6924 + t6925 + t6928;
  t6930 = var2[2]*t6929;
  t6931 = var2[5]*t6929;
  t6932 = var2[6]*t6919;
  t6933 = t6930 + t6931 + t6932;
  t6904 = var3[6]*t6821;
  t6905 = var3[2]*t6845;
  t6906 = var3[5]*t6845;
  t6907 = 0.4*t127*t6653;
  t6909 = -1.*t127*t6653;
  t6911 = t6909 + t6910;
  t6912 = 0.8*t6911;
  t6913 = t6907 + t6908 + t6912;
  t6914 = var2[6]*t6913;
  t6920 = var2[2]*t6919;
  t6921 = var2[5]*t6919;
  t6922 = t6914 + t6920 + t6921;
  t6923 = var2[6]*t6922;
  t6934 = var2[2]*t6933;
  t6935 = var2[5]*t6933;
  t6936 = t6766 + t6770 + t6774 + t6904 + t6832 + t6905 + t6906 + t6846 + t6847 + t6923 + t6934 + t6935;
  t6951 = 2.*var2[6]*t6821;
  t6952 = 2.*var2[2]*t6845;
  t6953 = 2.*var2[5]*t6845;
  t6954 = t6766 + t6770 + t6774 + t6951 + t6952 + t6953;
  p_output1[0]=1.;
  p_output1[1]=t6853;
  p_output1[2]=t6853;
  p_output1[3]=t6859 + t6860 + t6863 + t6730*var2[2] + t6827*var2[2] + t6730*var2[5] + t6827*var2[5] + t6872*var2[6] + var2[6]*(t6813*var2[2] + t6813*var2[5] + (t6791 + t6837 + 0.8*(t6797 + t6839))*var2[6]) + t6730*var3[2] + t6730*var3[5] + t6872*var3[6];
  p_output1[4]=1.;
  p_output1[5]=t6891;
  p_output1[6]=t6891;
  p_output1[7]=t6859 + t6860 + t6863 + 2.*t6730*var2[2] + 2.*t6730*var2[5] + 2.*t6872*var2[6];
  p_output1[8]=1.;
  p_output1[9]=t6897;
  p_output1[10]=t6897;
  p_output1[11]=t6859 + t6860 + t6863;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t6936;
  p_output1[16]=t6936;
  p_output1[17]=t6724 + t6725 + t6729 + t6815 + t6822 + t6825 + t6922*var2[2] + t6922*var2[5] + var2[6]*(t6913*var2[2] + t6913*var2[5] + (t6907 + t6925 + 0.8*(t6909 + t6926))*var2[6]) + t6821*var3[2] + t6821*var3[5] + t6813*var3[6];
  p_output1[18]=1.;
  p_output1[19]=t6954;
  p_output1[20]=t6954;
  p_output1[21]=t6724 + t6725 + t6729 + 2.*t6821*var2[2] + 2.*t6821*var2[5] + 2.*t6813*var2[6];
  p_output1[22]=1.;
  p_output1[23]=t6776;
  p_output1[24]=t6776;
  p_output1[25]=t6730;
  p_output1[26]=-1.;
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

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 27, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_ddh_LeftToe_LeftStanceLand.hh"

namespace LeftStanceLand
{

void J_ddh_LeftToe_LeftStanceLand_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
