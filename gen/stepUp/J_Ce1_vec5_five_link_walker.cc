/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:20:29 GMT-05:00
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
  double t4524;
  double t4502;
  double t4503;
  double t4525;
  double t4468;
  double t4504;
  double t4538;
  double t4539;
  double t4540;
  double t4541;
  double t4557;
  double t4558;
  double t4566;
  double t4574;
  double t4575;
  double t4595;
  double t4596;
  double t4598;
  double t4599;
  double t4600;
  double t4585;
  double t4601;
  double t4607;
  double t4611;
  double t4612;
  double t4542;
  double t4543;
  double t4547;
  double t4613;
  double t4614;
  double t4623;
  double t4628;
  double t4629;
  double t4638;
  double t4651;
  double t4652;
  double t4682;
  double t4687;
  double t4678;
  double t4688;
  double t4693;
  double t4694;
  double t4698;
  double t4554;
  double t4555;
  double t4579;
  double t4556;
  double t4578;
  double t4709;
  double t4710;
  double t4711;
  double t4712;
  double t4774;
  double t4775;
  double t4776;
  double t4777;
  double t4791;
  double t4795;
  double t4796;
  double t4783;
  double t4787;
  double t4788;
  double t4789;
  double t4806;
  double t4807;
  double t4799;
  double t4802;
  double t4805;
  double t4813;
  double t4814;
  double t4815;
  double t4816;
  double t4817;
  double t4818;
  double t4819;
  double t4820;
  double t4821;
  double t4822;
  double t4836;
  double t4837;
  double t4838;
  double t4839;
  double t4840;
  t4524 = Cos(var1[3]);
  t4502 = Cos(var1[4]);
  t4503 = Sin(var1[3]);
  t4525 = Sin(var1[4]);
  t4468 = Sin(var1[2]);
  t4504 = -1.*t4502*t4503;
  t4538 = -1.*t4524*t4525;
  t4539 = t4504 + t4538;
  t4540 = -1.*t4468*t4539;
  t4541 = Cos(var1[2]);
  t4557 = -1.*t4524*t4502;
  t4558 = t4503*t4525;
  t4566 = t4557 + t4558;
  t4574 = t4541*t4566;
  t4575 = t4540 + t4574;
  t4595 = t4502*t4503;
  t4596 = t4524*t4525;
  t4598 = t4595 + t4596;
  t4599 = t4468*t4598;
  t4600 = t4599 + t4574;
  t4585 = -0.384*var2[2]*t4575;
  t4601 = -0.384*var2[3]*t4600;
  t4607 = -0.384*var2[4]*t4600;
  t4611 = t4585 + t4601 + t4607;
  t4612 = var2[4]*t4611;
  t4542 = t4524*t4502;
  t4543 = -1.*t4503*t4525;
  t4547 = t4542 + t4543;
  t4613 = t4541*t4539;
  t4614 = -1.*t4468*t4547;
  t4623 = t4613 + t4614;
  t4628 = t4468*t4566;
  t4629 = t4613 + t4628;
  t4638 = -1.*t4541*t4539;
  t4651 = -1.*t4468*t4566;
  t4652 = t4638 + t4651;
  t4682 = t4541*t4598;
  t4687 = t4682 + t4651;
  t4678 = -0.384*var2[2]*t4652;
  t4688 = -0.384*var2[3]*t4687;
  t4693 = -0.384*var2[4]*t4687;
  t4694 = t4678 + t4688 + t4693;
  t4698 = var2[4]*t4694;
  t4554 = -1.*t4541*t4547;
  t4555 = t4540 + t4554;
  t4579 = -0.384*var2[4]*t4575;
  t4556 = -0.384*var2[2]*t4555;
  t4578 = -0.384*var2[3]*t4575;
  t4709 = -1.*t4502;
  t4710 = 1. + t4709;
  t4711 = 0.4*t4710;
  t4712 = 0.64*t4502;
  t4774 = t4711 + t4712;
  t4775 = -1.*t4774*t4503;
  t4776 = -0.24*t4524*t4525;
  t4777 = t4775 + t4776;
  t4791 = t4524*t4774;
  t4795 = -0.24*t4503*t4525;
  t4796 = t4791 + t4795;
  t4783 = t4774*t4503;
  t4787 = 0.24*t4524*t4525;
  t4788 = t4783 + t4787;
  t4789 = t4539*t4788;
  t4806 = -0.24*t4502*t4503;
  t4807 = t4806 + t4776;
  t4799 = 0.24*t4503*t4525;
  t4802 = t4796*t4566;
  t4805 = t4539*t4777;
  t4813 = t4539*t4807;
  t4814 = t4807*t4598;
  t4815 = t4547*t4796;
  t4816 = 0.24*t4524*t4502;
  t4817 = t4816 + t4795;
  t4818 = t4547*t4817;
  t4819 = -0.24*t4524*t4502;
  t4820 = t4819 + t4799;
  t4821 = t4547*t4820;
  t4822 = t4805 + t4813 + t4789 + t4814 + t4815 + t4818 + t4821 + t4802;
  t4836 = t4777*t4547;
  t4837 = t4788*t4547;
  t4838 = t4539*t4796;
  t4839 = t4598*t4796;
  t4840 = t4836 + t4837 + t4838 + t4839;
  p_output1[0]=(t4556 + t4578 + t4579)*var2[4];
  p_output1[1]=t4612;
  p_output1[2]=t4612;
  p_output1[3]=-0.384*t4623*var2[4];
  p_output1[4]=-0.384*t4629*var2[4];
  p_output1[5]=-0.384*t4623*var2[2] - 0.384*t4629*var2[3] - 0.768*t4629*var2[4];
  p_output1[6]=var2[4]*(-0.384*(t4468*t4547 + t4638)*var2[2] - 0.384*t4652*var2[3] - 0.384*t4652*var2[4]);
  p_output1[7]=t4698;
  p_output1[8]=t4698;
  p_output1[9]=-0.384*t4555*var2[4];
  p_output1[10]=t4579;
  p_output1[11]=t4556 + t4578 - 0.768*t4575*var2[4];
  p_output1[12]=var2[4]*(-0.384*(2.*t4539*t4777 + t4598*t4777 + t4789 + 2.*t4547*t4796 + t4547*(-1.*t4524*t4774 + t4799) + t4802)*var2[3] - 0.384*t4822*var2[4]);
  p_output1[13]=var2[4]*(-0.384*t4822*var2[3] - 0.384*(t4789 + t4802 + 2.*t4539*t4807 + t4814 + 2.*t4547*t4817 + t4821)*var2[4]);
  p_output1[14]=-0.384*t4840*var2[4];
  p_output1[15]=-0.384*t4840*var2[3] - 0.768*(t4547*t4807 + t4598*t4817 + t4837 + t4838)*var2[4];
  p_output1[16]=-0.384*(0.24*Power(t4502,2) - 1.*t4502*t4774)*Power(var2[4],2);
  p_output1[17]=-0.768*(0.24*t4502*t4525 - 1.*t4525*t4774)*var2[4];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 18, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec5_five_link_walker.hh"

namespace LeftStance
{

void J_Ce1_vec5_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
