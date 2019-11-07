/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:11 GMT-05:00
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
  double t4936;
  double t4924;
  double t4928;
  double t4861;
  double t4994;
  double t4854;
  double t4937;
  double t4940;
  double t4943;
  double t4944;
  double t4951;
  double t5107;
  double t5109;
  double t5115;
  double t4918;
  double t4932;
  double t4933;
  double t4934;
  double t7368;
  double t7371;
  double t7584;
  double t5090;
  double t5094;
  double t5102;
  double t9157;
  double t4952;
  double t4995;
  double t4996;
  double t5078;
  double t5105;
  double t7649;
  double t7701;
  double t7845;
  double t9354;
  double t9446;
  double t9473;
  double t9615;
  double t9681;
  double t9701;
  double t9703;
  double t9710;
  double t9714;
  double t9724;
  double t10216;
  double t10221;
  double t10222;
  double t10226;
  double t10779;
  double t10783;
  double t10804;
  double t10810;
  double t11005;
  double t11059;
  double t10234;
  double t10252;
  double t10255;
  double t10225;
  double t10232;
  double t10233;
  double t10256;
  double t10257;
  double t11089;
  double t11140;
  double t11151;
  double t11164;
  double t11280;
  double t11916;
  double t11917;
  double t11929;
  double t11934;
  double t11981;
  double t11996;
  double t12000;
  double t12030;
  double t11825;
  double t11826;
  double t11836;
  double t12032;
  double t12049;
  double t12050;
  double t12054;
  double t6095;
  double t12066;
  double t12077;
  double t12082;
  double t12083;
  double t6212;
  double t12094;
  double t12106;
  double t7895;
  double t9194;
  double t12111;
  double t12116;
  double t12117;
  double t12119;
  double t12150;
  double t12168;
  double t12169;
  double t12121;
  double t12129;
  double t12131;
  double t12217;
  double t12246;
  double t13859;
  double t11621;
  double t11648;
  double t11679;
  double t7239;
  double t9197;
  double t9229;
  double t9239;
  double t10595;
  double t14438;
  double t14472;
  double t14474;
  double t14417;
  double t14428;
  double t14429;
  double t14618;
  double t14632;
  double t14653;
  double t14569;
  double t14593;
  double t14597;
  double t14488;
  double t14725;
  double t14726;
  double t14658;
  double t14683;
  double t14757;
  double t14758;
  double t14760;
  double t14761;
  double t14692;
  double t14714;
  double t14715;
  double t14716;
  double t14717;
  double t14720;
  double t14724;
  double t14748;
  double t14749;
  double t14759;
  double t14762;
  double t14763;
  double t14764;
  double t14765;
  double t14766;
  double t14773;
  double t14777;
  double t14785;
  double t14791;
  double t14796;
  double t14799;
  double t14800;
  double t14801;
  double t14806;
  double t14811;
  double t14833;
  double t14834;
  double t14838;
  double t14839;
  double t14840;
  double t14845;
  double t14846;
  double t14848;
  double t14849;
  double t14851;
  double t14852;
  double t14853;
  double t14874;
  double t14875;
  double t14881;
  double t14918;
  double t14919;
  double t14923;
  double t14924;
  double t14925;
  double t14952;
  double t14953;
  double t14954;
  t4936 = Cos(var1[6]);
  t4924 = Sin(var1[2]);
  t4928 = Sin(var1[5]);
  t4861 = Cos(var1[5]);
  t4994 = Sin(var1[6]);
  t4854 = Cos(var1[2]);
  t4937 = -1.*t4936;
  t4940 = 1. + t4937;
  t4943 = 0.4*t4940;
  t4944 = 0.64*t4936;
  t4951 = t4943 + t4944;
  t5107 = t4861*t4936;
  t5109 = -1.*t4928*t4994;
  t5115 = t5107 + t5109;
  t4918 = -1.*t4854*t4861;
  t4932 = t4924*t4928;
  t4933 = t4918 + t4932;
  t4934 = 0.748*t4933;
  t7368 = t4951*t4994;
  t7371 = -0.24*t4936*t4994;
  t7584 = t7368 + t7371;
  t5090 = -1.*t4936*t4928;
  t5094 = -1.*t4861*t4994;
  t5102 = t5090 + t5094;
  t9157 = -1.*t4924*t5115;
  t4952 = t4951*t4936;
  t4995 = Power(t4994,2);
  t4996 = 0.24*t4995;
  t5078 = t4952 + t4996;
  t5105 = -1.*t4924*t5102;
  t7649 = t4936*t4928;
  t7701 = t4861*t4994;
  t7845 = t7649 + t7701;
  t9354 = t4854*t5102;
  t9446 = t9354 + t9157;
  t9473 = 3.2*t7584*t9446;
  t9615 = -1.*t4861*t4936;
  t9681 = t4928*t4994;
  t9701 = t9615 + t9681;
  t9703 = t4854*t9701;
  t9710 = t5105 + t9703;
  t9714 = 3.2*t5078*t9710;
  t9724 = t4934 + t9473 + t9714;
  t10216 = Power(t4936,2);
  t10221 = -0.24*t10216;
  t10222 = t4952 + t10221;
  t10226 = t4854*t5115;
  t10779 = t4924*t7845;
  t10783 = t10779 + t9703;
  t10804 = 3.2*t5078*t10783;
  t10810 = t4924*t9701;
  t11005 = t9354 + t10810;
  t11059 = 3.2*t7584*t11005;
  t10234 = -1.*t4951*t4994;
  t10252 = 0.24*t4936*t4994;
  t10255 = t10234 + t10252;
  t10225 = -1.*t4924*t7845;
  t10232 = t10225 + t10226;
  t10233 = 3.2*t10222*t10232;
  t10256 = 3.2*t10255*t9446;
  t10257 = t10233 + t9473 + t10256 + t9714;
  t11089 = t4924*t5102;
  t11140 = t11089 + t10226;
  t11151 = 3.2*t10222*t11140;
  t11164 = 3.2*t10255*t11005;
  t11280 = t11151 + t10804 + t11059 + t11164;
  t11916 = -1.*t4861*t4924;
  t11917 = -1.*t4854*t4928;
  t11929 = t11916 + t11917;
  t11934 = 0.748*t11929;
  t11981 = 3.2*t7584*t10232;
  t11996 = 3.2*t5078*t9446;
  t12000 = t11934 + t11981 + t11996;
  t12030 = 3.2*t7584*t11140;
  t11825 = t4854*t7845;
  t11826 = t4924*t5115;
  t11836 = t11825 + t11826;
  t12032 = 3.2*t5078*t11005;
  t12049 = 3.2*t10255*t11140;
  t12050 = 3.2*t10222*t11836;
  t12054 = t12030 + t12049 + t12050 + t12032;
  t6095 = -1.*t4854*t5115;
  t12066 = t4861*t4924;
  t12077 = t4854*t4928;
  t12082 = t12066 + t12077;
  t12083 = 0.748*t12082;
  t6212 = t5105 + t6095;
  t12094 = -1.*t4854*t5102;
  t12106 = 3.2*t7584*t6212;
  t7895 = -1.*t4854*t7845;
  t9194 = t7895 + t9157;
  t12111 = -1.*t4924*t9701;
  t12116 = t12094 + t12111;
  t12117 = 3.2*t5078*t12116;
  t12119 = t12083 + t12106 + t12117;
  t12150 = 3.2*t7584*t9710;
  t12168 = t11825 + t12111;
  t12169 = 3.2*t5078*t12168;
  t12121 = 3.2*t10255*t6212;
  t12129 = 3.2*t10222*t9194;
  t12131 = t12106 + t12121 + t12129 + t12117;
  t12217 = 3.2*t10222*t9446;
  t12246 = 3.2*t10255*t9710;
  t13859 = t12217 + t12150 + t12246 + t12169;
  t11621 = -1.*t4951*t4936;
  t11648 = 0.24*t10216;
  t11679 = t11621 + t11648;
  t7239 = 3.2*t5078*t6212;
  t9197 = 3.2*t7584*t9194;
  t9229 = t4934 + t7239 + t9197;
  t9239 = -0.5*var2[2]*t9229;
  t10595 = -0.5*var2[6]*t10257;
  t14438 = t4861*t4951;
  t14472 = -0.24*t4928*t4994;
  t14474 = t14438 + t14472;
  t14417 = -1.*t4951*t4928;
  t14428 = -0.24*t4861*t4994;
  t14429 = t14417 + t14428;
  t14618 = t4951*t4928;
  t14632 = 0.24*t4861*t4994;
  t14653 = t14618 + t14632;
  t14569 = -1.*t4861*t4951;
  t14593 = 0.24*t4928*t4994;
  t14597 = t14569 + t14593;
  t14488 = -1.*t7845*t14474;
  t14725 = -0.24*t4936*t4928;
  t14726 = t14725 + t14428;
  t14658 = -1.*t14653*t9701;
  t14683 = t5102*t14653;
  t14757 = 0.24*t4861*t4936;
  t14758 = t14757 + t14472;
  t14760 = -0.24*t4861*t4936;
  t14761 = t14760 + t14593;
  t14692 = t14474*t9701;
  t14714 = t14429*t5115;
  t14715 = t14653*t5115;
  t14716 = t5102*t14474;
  t14717 = t7845*t14474;
  t14720 = t14714 + t14715 + t14716 + t14717;
  t14724 = 3.2*t10255*t14720;
  t14748 = -1.*t14726*t5115;
  t14749 = -1.*t5102*t14474;
  t14759 = -1.*t5102*t14758;
  t14762 = -1.*t5102*t14761;
  t14763 = -1.*t14429*t9701;
  t14764 = -1.*t14726*t9701;
  t14765 = t14748 + t14749 + t14488 + t14759 + t14762 + t14763 + t14764 + t14658;
  t14766 = 3.2*t7584*t14765;
  t14773 = -1.*t5102*t14429;
  t14777 = -1.*t5102*t14653;
  t14785 = -1.*t5115*t14474;
  t14791 = -1.*t14474*t9701;
  t14796 = t14773 + t14777 + t14785 + t14791;
  t14799 = 3.2*t10222*t14796;
  t14800 = t5102*t14429;
  t14801 = t5102*t14726;
  t14806 = t14726*t7845;
  t14811 = t5115*t14474;
  t14833 = t5115*t14758;
  t14834 = t5115*t14761;
  t14838 = t14800 + t14801 + t14683 + t14806 + t14811 + t14833 + t14834 + t14692;
  t14839 = 3.2*t5078*t14838;
  t14840 = t14724 + t14766 + t14799 + t14839;
  t14845 = -1.*t14653*t5115;
  t14846 = t14845 + t14749;
  t14848 = t14653*t7845;
  t14849 = t14848 + t14811;
  t14851 = t14726*t5115;
  t14852 = t7845*t14758;
  t14853 = t14851 + t14715 + t14716 + t14852;
  t14874 = -1.*t5102*t14726;
  t14875 = -1.*t5115*t14758;
  t14881 = t14874 + t14777 + t14875 + t14791;
  t14918 = 3.2*t10222*t14846;
  t14919 = 3.2*t10255*t14849;
  t14923 = 3.2*t5078*t14853;
  t14924 = 3.2*t7584*t14881;
  t14925 = t14918 + t14919 + t14923 + t14924;
  t14952 = 6.4*t10222*t7584;
  t14953 = 6.4*t10255*t5078;
  t14954 = t14952 + t14953;
  p_output1[0]=var2[5]*(t10595 + t9239 - 0.5*t9724*var2[5]);
  p_output1[1]=var2[5]*(-0.5*t9724*var2[2] - 0.5*(t10804 + t11059 + t4934)*var2[5] - 0.5*t11280*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t10257*var2[2] - 0.5*t11280*var2[5] - 0.5*(t10804 + 6.4*t10255*t11005 + t11059 + 6.4*t10222*t11140 + 3.2*t11140*t11679 + 3.2*t10255*t11836)*var2[6]);
  p_output1[3]=-0.5*t12000*var2[5];
  p_output1[4]=-0.5*t12000*var2[2] - 1.*(t11934 + t12030 + t12032)*var2[5] - 0.5*t12054*var2[6];
  p_output1[5]=-0.5*t12054*var2[5];
  p_output1[6]=var2[5]*(-0.5*(t12083 + 3.2*(t11826 + t12094)*t5078 + 3.2*(t10779 + t6095)*t7584)*var2[2] - 0.5*t12119*var2[5] - 0.5*t12131*var2[6]);
  p_output1[7]=var2[5]*(-0.5*t12119*var2[2] - 0.5*(t12083 + t12150 + t12169)*var2[5] - 0.5*t13859*var2[6]);
  p_output1[8]=var2[5]*(-0.5*t12131*var2[2] - 0.5*t13859*var2[5] - 0.5*(3.2*t10232*t10255 + t12150 + t12169 + 6.4*t10222*t9446 + 3.2*t11679*t9446 + 6.4*t10255*t9710)*var2[6]);
  p_output1[9]=-0.5*t9229*var2[5];
  p_output1[10]=t10595 + t9239 - 1.*t9724*var2[5];
  p_output1[11]=-0.5*t10257*var2[5];
  p_output1[12]=var2[5]*(-0.5*(3.2*t5078*(t14683 + t14692 + 2.*t14429*t5102 + 2.*t14474*t5115 + t14597*t5115 + t14429*t7845) + 3.2*t7584*(t14488 + t14658 - 2.*t14474*t5102 - 1.*t14597*t5102 - 1.*t14429*t5115 - 2.*t14429*t9701))*var2[5] - 0.5*t14840*var2[6]);
  p_output1[13]=var2[5]*(-0.5*t14840*var2[5] - 0.5*(3.2*t10255*t14846 + 3.2*t11679*t14849 + 6.4*t10255*t14853 + 6.4*t10222*t14881 + 3.2*t5078*(t14683 + t14692 + t14806 + t14834 + 2.*t14726*t5102 + 2.*t14758*t5115) + 3.2*t7584*(t14488 + t14658 + t14748 + t14762 - 2.*t14758*t5102 - 2.*t14726*t9701))*var2[6]);
  p_output1[14]=-1.*(3.2*t14720*t5078 + 3.2*t14796*t7584)*var2[5] - 0.5*t14925*var2[6];
  p_output1[15]=-0.5*t14925*var2[5];
  p_output1[16]=-0.5*(6.4*Power(t10222,2) + 6.4*Power(t10255,2) + 6.4*t11679*t5078 + 6.4*t10255*t7584)*var2[5]*var2[6];
  p_output1[17]=-0.5*t14954*var2[6];
  p_output1[18]=-0.5*t14954*var2[5];
  p_output1[19]=-0.384*t11679*var2[5]*var2[6];
  p_output1[20]=-0.384*t10255*var2[6];
  p_output1[21]=-0.384*t10255*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 22, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec6_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce1_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
