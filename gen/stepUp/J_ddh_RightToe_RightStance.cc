/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:07:33 GMT-05:00
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
  double t8509;
  double t8518;
  double t4731;
  double t8552;
  double t3640;
  double t8515;
  double t8556;
  double t8557;
  double t8575;
  double t8577;
  double t8578;
  double t8593;
  double t8629;
  double t8631;
  double t8633;
  double t8634;
  double t8635;
  double t8636;
  double t10774;
  double t4156;
  double t4157;
  double t10793;
  double t10794;
  double t10827;
  double t10790;
  double t10828;
  double t10829;
  double t10830;
  double t10837;
  double t10838;
  double t10855;
  double t10857;
  double t10875;
  double t10876;
  double t10877;
  double t10878;
  double t10879;
  double t10888;
  double t10894;
  double t10895;
  double t10887;
  double t10896;
  double t10897;
  double t10908;
  double t10909;
  double t10910;
  double t10886;
  double t10911;
  double t10912;
  double t10913;
  double t8567;
  double t8595;
  double t8596;
  double t8619;
  double t8620;
  double t8628;
  double t10779;
  double t10789;
  double t10848;
  double t10851;
  double t10852;
  double t10853;
  double t10854;
  double t10856;
  double t10858;
  double t10859;
  double t10873;
  double t10874;
  double t10880;
  double t10881;
  double t10883;
  double t10885;
  double t10914;
  double t10915;
  double t10916;
  double t10926;
  double t10927;
  double t10928;
  double t10929;
  double t10930;
  double t10944;
  double t10945;
  double t10946;
  double t10947;
  double t10917;
  double t10918;
  double t10919;
  double t10920;
  double t10921;
  double t10952;
  double t10958;
  double t10960;
  double t10965;
  double t10966;
  double t10967;
  double t10968;
  double t10969;
  double t10974;
  double t10975;
  double t10976;
  double t10977;
  double t10978;
  double t10979;
  double t10980;
  double t10981;
  double t10982;
  double t10983;
  double t10954;
  double t10955;
  double t10956;
  double t10957;
  double t10959;
  double t10961;
  double t10962;
  double t10963;
  double t10964;
  double t10970;
  double t10971;
  double t10972;
  double t10973;
  double t10984;
  double t10985;
  double t10986;
  double t11001;
  double t11002;
  double t11003;
  double t11004;
  t8509 = Cos(var1[3]);
  t8518 = Sin(var1[2]);
  t4731 = Cos(var1[2]);
  t8552 = Sin(var1[3]);
  t3640 = Cos(var1[4]);
  t8515 = t4731*t8509;
  t8556 = -1.*t8518*t8552;
  t8557 = t8515 + t8556;
  t8575 = -1.*t8509*t8518;
  t8577 = -1.*t4731*t8552;
  t8578 = t8575 + t8577;
  t8593 = Sin(var1[4]);
  t8629 = -0.4*t3640*t8578;
  t8631 = 0.4*t8557*t8593;
  t8633 = t3640*t8578;
  t8634 = -1.*t8557*t8593;
  t8635 = t8633 + t8634;
  t8636 = 0.8*t8635;
  t10774 = t8629 + t8631 + t8636;
  t4156 = -1.*t3640;
  t4157 = 1. + t4156;
  t10793 = -1.*t4731*t8509;
  t10794 = t8518*t8552;
  t10827 = t10793 + t10794;
  t10790 = 0.4*t4157*t8578;
  t10828 = -0.4*t10827*t8593;
  t10829 = t10827*t8593;
  t10830 = t8633 + t10829;
  t10837 = 0.8*t10830;
  t10838 = t10790 + t10828 + t10837;
  t10855 = 0.4*t8578*t8593;
  t10857 = -1.*t8578*t8593;
  t10875 = -0.4*t3640*t10827;
  t10876 = t3640*t10827;
  t10877 = t10876 + t10857;
  t10878 = 0.8*t10877;
  t10879 = t10875 + t10855 + t10878;
  t10888 = t8509*t8518;
  t10894 = t4731*t8552;
  t10895 = t10888 + t10894;
  t10887 = 0.4*t4157*t10827;
  t10896 = -0.4*t10895*t8593;
  t10897 = t10895*t8593;
  t10908 = t10876 + t10897;
  t10909 = 0.8*t10908;
  t10910 = t10887 + t10896 + t10909;
  t10886 = var2[4]*t10879;
  t10911 = var2[2]*t10910;
  t10912 = var2[3]*t10910;
  t10913 = t10886 + t10911 + t10912;
  t8567 = 0.4*t4157*t8557;
  t8595 = -0.4*t8578*t8593;
  t8596 = t3640*t8557;
  t8619 = t8578*t8593;
  t8620 = t8596 + t8619;
  t8628 = 0.8*t8620;
  t10779 = var3[4]*t10774;
  t10789 = var2[4]*t10774;
  t10848 = var3[2]*t10838;
  t10851 = var3[3]*t10838;
  t10852 = var2[2]*t10838;
  t10853 = var2[3]*t10838;
  t10854 = 0.4*t3640*t8557;
  t10856 = -1.*t3640*t8557;
  t10858 = t10856 + t10857;
  t10859 = 0.8*t10858;
  t10873 = t10854 + t10855 + t10859;
  t10874 = var2[4]*t10873;
  t10880 = var2[2]*t10879;
  t10881 = var2[3]*t10879;
  t10883 = t10874 + t10880 + t10881;
  t10885 = var2[4]*t10883;
  t10914 = var2[2]*t10913;
  t10915 = var2[3]*t10913;
  t10916 = t8567 + t8595 + t8628 + t10779 + t10789 + t10848 + t10851 + t10852 + t10853 + t10885 + t10914 + t10915;
  t10926 = 0.4*t3640*t10895;
  t10927 = -1.*t3640*t10895;
  t10928 = t10927 + t8634;
  t10929 = 0.8*t10928;
  t10930 = t10926 + t8631 + t10929;
  t10944 = 2.*var2[4]*t10774;
  t10945 = 2.*var2[2]*t10838;
  t10946 = 2.*var2[3]*t10838;
  t10947 = t8567 + t8595 + t8628 + t10944 + t10945 + t10946;
  t10917 = -0.4*t3640*t8557;
  t10918 = 0.4*t10895*t8593;
  t10919 = -1.*t10895*t8593;
  t10920 = t8596 + t10919;
  t10921 = 0.8*t10920;
  t10952 = t8567 + t8595 + t8628;
  t10958 = 0.4*t10827*t8593;
  t10960 = -1.*t10827*t8593;
  t10965 = -0.4*t3640*t10895;
  t10966 = t3640*t10895;
  t10967 = t10966 + t10960;
  t10968 = 0.8*t10967;
  t10969 = t10965 + t10958 + t10968;
  t10974 = 0.4*t4157*t10895;
  t10975 = -0.4*t8557*t8593;
  t10976 = t8557*t8593;
  t10977 = t10966 + t10976;
  t10978 = 0.8*t10977;
  t10979 = t10974 + t10975 + t10978;
  t10980 = var2[2]*t10979;
  t10981 = var2[3]*t10979;
  t10982 = var2[4]*t10969;
  t10983 = t10980 + t10981 + t10982;
  t10954 = var3[4]*t10879;
  t10955 = var3[2]*t10910;
  t10956 = var3[3]*t10910;
  t10957 = 0.4*t3640*t8578;
  t10959 = -1.*t3640*t8578;
  t10961 = t10959 + t10960;
  t10962 = 0.8*t10961;
  t10963 = t10957 + t10958 + t10962;
  t10964 = var2[4]*t10963;
  t10970 = var2[2]*t10969;
  t10971 = var2[3]*t10969;
  t10972 = t10964 + t10970 + t10971;
  t10973 = var2[4]*t10972;
  t10984 = var2[2]*t10983;
  t10985 = var2[3]*t10983;
  t10986 = t10790 + t10828 + t10837 + t10954 + t10886 + t10955 + t10956 + t10911 + t10912 + t10973 + t10984 + t10985;
  t11001 = 2.*var2[4]*t10879;
  t11002 = 2.*var2[2]*t10910;
  t11003 = 2.*var2[3]*t10910;
  t11004 = t10790 + t10828 + t10837 + t11001 + t11002 + t11003;
  p_output1[0]=1.;
  p_output1[1]=t10916;
  p_output1[2]=t10916;
  p_output1[3]=t10917 + t10918 + t10921 + t10774*var2[2] + t10883*var2[2] + t10774*var2[3] + t10883*var2[3] + t10930*var2[4] + var2[4]*(t10873*var2[2] + t10873*var2[3] + (t10854 + t10896 + 0.8*(t10856 + t10897))*var2[4]) + t10774*var3[2] + t10774*var3[3] + t10930*var3[4];
  p_output1[4]=1.;
  p_output1[5]=t10947;
  p_output1[6]=t10947;
  p_output1[7]=t10917 + t10918 + t10921 + 2.*t10774*var2[2] + 2.*t10774*var2[3] + 2.*t10930*var2[4];
  p_output1[8]=1.;
  p_output1[9]=t10952;
  p_output1[10]=t10952;
  p_output1[11]=t10917 + t10918 + t10921;
  p_output1[12]=-1.;
  p_output1[13]=-1.;
  p_output1[14]=1.;
  p_output1[15]=t10986;
  p_output1[16]=t10986;
  p_output1[17]=t10874 + t10880 + t10881 + t8629 + t8631 + t8636 + t10972*var2[2] + t10972*var2[3] + var2[4]*(t10963*var2[2] + t10963*var2[3] + (t10957 + t10975 + 0.8*(t10959 + t10976))*var2[4]) + t10879*var3[2] + t10879*var3[3] + t10873*var3[4];
  p_output1[18]=1.;
  p_output1[19]=t11004;
  p_output1[20]=t11004;
  p_output1[21]=t8629 + t8631 + t8636 + 2.*t10879*var2[2] + 2.*t10879*var2[3] + 2.*t10873*var2[4];
  p_output1[22]=1.;
  p_output1[23]=t10838;
  p_output1[24]=t10838;
  p_output1[25]=t10774;
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

#include "J_ddh_RightToe_RightStance.hh"

namespace RightStance
{

void J_ddh_RightToe_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
