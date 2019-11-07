/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:20 GMT-05:00
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
  double t7886;
  double t310;
  double t311;
  double t7887;
  double t9361;
  double t189;
  double t3163;
  double t8838;
  double t9308;
  double t12672;
  double t12705;
  double t12706;
  double t12707;
  double t12708;
  double t9332;
  double t9362;
  double t9365;
  double t9371;
  double t9374;
  double t10662;
  double t12647;
  double t12648;
  double t12655;
  double t12741;
  double t12742;
  double t12743;
  double t12717;
  double t12718;
  double t12719;
  double t12725;
  double t12726;
  double t12727;
  double t12745;
  double t12746;
  double t12747;
  double t12749;
  double t12750;
  double t12751;
  double t12752;
  double t12753;
  double t12754;
  double t12771;
  double t12772;
  double t12787;
  double t12788;
  double t12789;
  double t12791;
  double t12792;
  double t12793;
  double t12797;
  double t12798;
  double t12799;
  double t12774;
  double t12775;
  double t12776;
  double t12764;
  double t12765;
  double t12766;
  double t12714;
  double t12715;
  double t12716;
  double t12734;
  double t12735;
  double t12736;
  double t12737;
  double t12744;
  double t12768;
  double t12769;
  double t12759;
  double t12760;
  double t12761;
  double t12762;
  double t12763;
  double t12767;
  double t12770;
  double t12773;
  double t12777;
  double t12778;
  double t12779;
  double t12781;
  double t12782;
  double t12783;
  double t12784;
  double t12785;
  double t12790;
  double t12794;
  double t12795;
  double t12800;
  double t12801;
  double t12802;
  double t12803;
  double t12804;
  double t12806;
  double t12807;
  double t12808;
  double t12810;
  double t12811;
  double t12812;
  double t12813;
  double t12814;
  double t12832;
  double t12833;
  double t12834;
  double t12835;
  double t12836;
  double t12837;
  double t12786;
  double t12796;
  double t12805;
  double t12809;
  double t12815;
  double t12816;
  double t12821;
  double t12822;
  double t12823;
  double t12824;
  double t12656;
  double t12728;
  double t12738;
  double t12739;
  double t12842;
  double t12843;
  double t12844;
  t7886 = Cos(var1[5]);
  t310 = Cos(var1[6]);
  t311 = Sin(var1[5]);
  t7887 = Sin(var1[6]);
  t9361 = Sin(var1[2]);
  t189 = Cos(var1[2]);
  t3163 = -1.*t310*t311;
  t8838 = -1.*t7886*t7887;
  t9308 = t3163 + t8838;
  t12672 = -1.*t310;
  t12705 = 1. + t12672;
  t12706 = 0.4*t12705;
  t12707 = 0.64*t310;
  t12708 = t12706 + t12707;
  t9332 = t189*t9308;
  t9362 = -1.*t7886*t310;
  t9365 = t311*t7887;
  t9371 = t9362 + t9365;
  t9374 = t9361*t9371;
  t10662 = t9332 + t9374;
  t12647 = -1.*t7886*t9361;
  t12648 = -1.*t189*t311;
  t12655 = t12647 + t12648;
  t12741 = t189*t7886;
  t12742 = -1.*t9361*t311;
  t12743 = t12741 + t12742;
  t12717 = t9361*t9308;
  t12718 = t7886*t310;
  t12719 = -1.*t311*t7887;
  t12725 = t12718 + t12719;
  t12726 = t189*t12725;
  t12727 = t12717 + t12726;
  t12745 = t7886*t9361;
  t12746 = t189*t311;
  t12747 = t12745 + t12746;
  t12749 = t310*t311;
  t12750 = t7886*t7887;
  t12751 = t12749 + t12750;
  t12752 = t189*t12751;
  t12753 = t9361*t12725;
  t12754 = t12752 + t12753;
  t12771 = -1.*t9361*t12725;
  t12772 = t9332 + t12771;
  t12787 = t12708*t311;
  t12788 = 0.24*t7886*t7887;
  t12789 = t12787 + t12788;
  t12791 = t7886*t12708;
  t12792 = -0.24*t311*t7887;
  t12793 = t12791 + t12792;
  t12797 = -1.*t12708*t311;
  t12798 = -0.24*t7886*t7887;
  t12799 = t12797 + t12798;
  t12774 = -1.*t9361*t9308;
  t12775 = t189*t9371;
  t12776 = t12774 + t12775;
  t12764 = -1.*t189*t7886;
  t12765 = t9361*t311;
  t12766 = t12764 + t12765;
  t12714 = t12708*t7887;
  t12715 = -0.24*t310*t7887;
  t12716 = t12714 + t12715;
  t12734 = t12708*t310;
  t12735 = Power(t7887,2);
  t12736 = 0.24*t12735;
  t12737 = t12734 + t12736;
  t12744 = 13.6*t12655*t12743;
  t12768 = -1.*t9361*t12751;
  t12769 = t12768 + t12726;
  t12759 = Power(t12655,2);
  t12760 = 6.8*t12759;
  t12761 = 6.8*t12655*t12747;
  t12762 = Power(t12743,2);
  t12763 = 6.8*t12762;
  t12767 = 6.8*t12743*t12766;
  t12770 = 3.2*t12727*t12769;
  t12773 = 3.2*t12772*t12754;
  t12777 = 3.2*t12727*t12776;
  t12778 = 3.2*t12772*t10662;
  t12779 = t12760 + t12761 + t12763 + t12767 + t12770 + t12773 + t12777 + t12778;
  t12781 = Power(t7886,2);
  t12782 = 0.11*t12781;
  t12783 = Power(t311,2);
  t12784 = 0.11*t12783;
  t12785 = t12782 + t12784;
  t12790 = -1.*t12789*t12725;
  t12794 = -1.*t9308*t12793;
  t12795 = t12790 + t12794;
  t12800 = t12799*t12725;
  t12801 = t12789*t12725;
  t12802 = t9308*t12793;
  t12803 = t12751*t12793;
  t12804 = t12800 + t12801 + t12802 + t12803;
  t12806 = t12789*t12751;
  t12807 = t12725*t12793;
  t12808 = t12806 + t12807;
  t12810 = -1.*t9308*t12799;
  t12811 = -1.*t9308*t12789;
  t12812 = -1.*t12725*t12793;
  t12813 = -1.*t12793*t9371;
  t12814 = t12810 + t12811 + t12812 + t12813;
  t12832 = 6.8*t12766*t12785;
  t12833 = 3.2*t12772*t12795;
  t12834 = 3.2*t12772*t12804;
  t12835 = 3.2*t12808*t12776;
  t12836 = 3.2*t12769*t12814;
  t12837 = t12832 + t12833 + t12834 + t12835 + t12836;
  t12786 = 6.8*t12655*t12785;
  t12796 = 3.2*t12727*t12795;
  t12805 = 3.2*t12727*t12804;
  t12809 = 3.2*t12808*t10662;
  t12815 = 3.2*t12754*t12814;
  t12816 = t12786 + t12796 + t12805 + t12809 + t12815;
  t12821 = 0.748*t12766;
  t12822 = 3.2*t12716*t12772;
  t12823 = 3.2*t12737*t12776;
  t12824 = t12821 + t12822 + t12823;
  t12656 = 0.748*t12655;
  t12728 = 3.2*t12716*t12727;
  t12738 = 3.2*t12737*t10662;
  t12739 = t12656 + t12728 + t12738;
  t12842 = 3.2*t12737*t12804;
  t12843 = 3.2*t12716*t12814;
  t12844 = t12842 + t12843;
  p_output1[0]=var2[5]*(-0.5*(6.4*t10662*t12727 + t12744 + 13.6*t12743*t12747 + 6.4*t12727*t12754)*var2[0] - 0.5*t12779*var2[1] - 0.5*t12816*var2[2] - 0.5*t12739*var2[5] - 0.384*t10662*var2[6]);
  p_output1[1]=var2[5]*(-0.5*t12779*var2[0] - 0.5*(t12744 + 13.6*t12655*t12766 + 6.4*t12769*t12772 + 6.4*t12772*t12776)*var2[1] - 0.5*t12837*var2[2] - 0.5*t12824*var2[5] - 0.384*t12776*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t12816*var2[0] - 0.5*t12837*var2[1] - 0.5*(6.4*t12804*t12808 + 6.4*t12795*t12814)*var2[2] - 0.5*t12844*var2[5] - 0.384*t12804*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t12739*var2[0] - 0.5*t12824*var2[1] - 0.5*t12844*var2[2])*var2[5];
  p_output1[6]=(-0.384*t10662*var2[0] - 0.384*t12776*var2[1] - 0.384*t12804*var2[2])*var2[5];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 7, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce2_vec6_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
