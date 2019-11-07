/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:27:51 GMT-05:00
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
static void output1(double *p_output1,const double *var1)
{
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=1;
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=1;
  p_output1[14]=1;
  p_output1[15]=1;
  p_output1[16]=1;
  p_output1[17]=1;
  p_output1[18]=1;
  p_output1[19]=1;
  p_output1[20]=1;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
  p_output1[32]=2;
  p_output1[33]=2;
  p_output1[34]=2;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=2;
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=3;
  p_output1[49]=3;
  p_output1[50]=3;
  p_output1[51]=3;
  p_output1[52]=3;
  p_output1[53]=3;
  p_output1[54]=3;
  p_output1[55]=3;
  p_output1[56]=3;
  p_output1[57]=3;
  p_output1[58]=3;
  p_output1[59]=3;
  p_output1[60]=3;
  p_output1[61]=3;
  p_output1[62]=3;
  p_output1[63]=3;
  p_output1[64]=3;
  p_output1[65]=4;
  p_output1[66]=4;
  p_output1[67]=4;
  p_output1[68]=4;
  p_output1[69]=4;
  p_output1[70]=4;
  p_output1[71]=4;
  p_output1[72]=4;
  p_output1[73]=4;
  p_output1[74]=4;
  p_output1[75]=4;
  p_output1[76]=4;
  p_output1[77]=4;
  p_output1[78]=4;
  p_output1[79]=4;
  p_output1[80]=5;
  p_output1[81]=5;
  p_output1[82]=5;
  p_output1[83]=5;
  p_output1[84]=5;
  p_output1[85]=5;
  p_output1[86]=5;
  p_output1[87]=5;
  p_output1[88]=5;
  p_output1[89]=5;
  p_output1[90]=5;
  p_output1[91]=5;
  p_output1[92]=5;
  p_output1[93]=5;
  p_output1[94]=5;
  p_output1[95]=6;
  p_output1[96]=6;
  p_output1[97]=6;
  p_output1[98]=6;
  p_output1[99]=6;
  p_output1[100]=6;
  p_output1[101]=6;
  p_output1[102]=6;
  p_output1[103]=6;
  p_output1[104]=6;
  p_output1[105]=6;
  p_output1[106]=6;
  p_output1[107]=6;
  p_output1[108]=6;
  p_output1[109]=6;
  p_output1[110]=7;
  p_output1[111]=7;
  p_output1[112]=7;
  p_output1[113]=7;
  p_output1[114]=7;
  p_output1[115]=7;
  p_output1[116]=7;
  p_output1[117]=7;
  p_output1[118]=7;
  p_output1[119]=7;
  p_output1[120]=7;
  p_output1[121]=7;
  p_output1[122]=7;
  p_output1[123]=7;
  p_output1[124]=7;
  p_output1[125]=1;
  p_output1[126]=2;
  p_output1[127]=3;
  p_output1[128]=4;
  p_output1[129]=5;
  p_output1[130]=6;
  p_output1[131]=7;
  p_output1[132]=10;
  p_output1[133]=11;
  p_output1[134]=12;
  p_output1[135]=13;
  p_output1[136]=14;
  p_output1[137]=15;
  p_output1[138]=16;
  p_output1[139]=17;
  p_output1[140]=18;
  p_output1[141]=19;
  p_output1[142]=20;
  p_output1[143]=21;
  p_output1[144]=22;
  p_output1[145]=25;
  p_output1[146]=1;
  p_output1[147]=2;
  p_output1[148]=3;
  p_output1[149]=4;
  p_output1[150]=5;
  p_output1[151]=6;
  p_output1[152]=7;
  p_output1[153]=10;
  p_output1[154]=11;
  p_output1[155]=12;
  p_output1[156]=13;
  p_output1[157]=14;
  p_output1[158]=15;
  p_output1[159]=16;
  p_output1[160]=17;
  p_output1[161]=18;
  p_output1[162]=19;
  p_output1[163]=20;
  p_output1[164]=21;
  p_output1[165]=24;
  p_output1[166]=27;
  p_output1[167]=1;
  p_output1[168]=2;
  p_output1[169]=3;
  p_output1[170]=4;
  p_output1[171]=5;
  p_output1[172]=6;
  p_output1[173]=7;
  p_output1[174]=10;
  p_output1[175]=11;
  p_output1[176]=12;
  p_output1[177]=13;
  p_output1[178]=14;
  p_output1[179]=15;
  p_output1[180]=16;
  p_output1[181]=17;
  p_output1[182]=18;
  p_output1[183]=19;
  p_output1[184]=20;
  p_output1[185]=21;
  p_output1[186]=22;
  p_output1[187]=24;
  p_output1[188]=25;
  p_output1[189]=27;
  p_output1[190]=1;
  p_output1[191]=2;
  p_output1[192]=3;
  p_output1[193]=4;
  p_output1[194]=5;
  p_output1[195]=10;
  p_output1[196]=11;
  p_output1[197]=12;
  p_output1[198]=15;
  p_output1[199]=16;
  p_output1[200]=17;
  p_output1[201]=18;
  p_output1[202]=19;
  p_output1[203]=22;
  p_output1[204]=24;
  p_output1[205]=1;
  p_output1[206]=2;
  p_output1[207]=3;
  p_output1[208]=4;
  p_output1[209]=5;
  p_output1[210]=10;
  p_output1[211]=11;
  p_output1[212]=12;
  p_output1[213]=15;
  p_output1[214]=16;
  p_output1[215]=17;
  p_output1[216]=18;
  p_output1[217]=19;
  p_output1[218]=22;
  p_output1[219]=24;
  p_output1[220]=1;
  p_output1[221]=2;
  p_output1[222]=3;
  p_output1[223]=6;
  p_output1[224]=7;
  p_output1[225]=10;
  p_output1[226]=13;
  p_output1[227]=14;
  p_output1[228]=15;
  p_output1[229]=16;
  p_output1[230]=17;
  p_output1[231]=20;
  p_output1[232]=21;
  p_output1[233]=25;
  p_output1[234]=27;
  p_output1[235]=1;
  p_output1[236]=2;
  p_output1[237]=3;
  p_output1[238]=6;
  p_output1[239]=7;
  p_output1[240]=10;
  p_output1[241]=13;
  p_output1[242]=14;
  p_output1[243]=15;
  p_output1[244]=16;
  p_output1[245]=17;
  p_output1[246]=20;
  p_output1[247]=21;
  p_output1[248]=25;
  p_output1[249]=27;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 125, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_dxDiscreteMapLSland_DS2.hh"

namespace Pattern[LSland, Blank[DS2]]
{

void Js_dxDiscreteMapLSland_DS2_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
