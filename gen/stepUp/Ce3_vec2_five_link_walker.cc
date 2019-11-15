/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:38:48 GMT-05:00
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
  double t1812;
  double t1805;
  double t1810;
  double t1826;
  double t1852;
  double t1776;
  double t1811;
  double t1845;
  double t1850;
  double t1851;
  double t1863;
  double t1867;
  double t1878;
  double t1882;
  double t1883;
  double t1899;
  double t1900;
  double t1901;
  double t1902;
  double t1903;
  double t1970;
  double t1967;
  double t1968;
  double t1971;
  double t1969;
  double t1980;
  double t1981;
  double t1984;
  double t1985;
  double t1992;
  double t1993;
  double t1998;
  double t2002;
  double t2011;
  double t2012;
  double t2013;
  double t2014;
  double t2015;
  double t2037;
  double t2038;
  double t2039;
  double t1895;
  double t1896;
  double t1897;
  double t1926;
  double t1922;
  double t1923;
  double t1924;
  double t1925;
  double t1927;
  double t2072;
  double t2075;
  double t2076;
  double t2004;
  double t2006;
  double t2008;
  double t2028;
  double t2024;
  double t2025;
  double t2026;
  double t2027;
  double t2029;
  double t2040;
  double t2041;
  double t2042;
  double t2059;
  double t2058;
  double t2066;
  double t2045;
  double t2054;
  double t2077;
  double t2079;
  double t2081;
  double t2089;
  double t2088;
  double t2090;
  double t2085;
  double t2086;
  double t2147;
  double t2148;
  double t2149;
  double t2151;
  double t2152;
  double t2153;
  double t2167;
  double t2168;
  double t2169;
  double t2171;
  double t2172;
  double t2173;
  double t1898;
  double t1919;
  double t1920;
  double t1921;
  double t1904;
  double t1915;
  double t1916;
  double t1917;
  double t2185;
  double t2186;
  double t2187;
  double t2188;
  double t2189;
  double t2043;
  double t2044;
  double t2094;
  double t2095;
  double t2096;
  double t2097;
  double t2098;
  double t2099;
  double t2100;
  double t2101;
  double t2102;
  double t2105;
  double t2108;
  double t2114;
  double t2115;
  double t2116;
  double t2141;
  double t2142;
  double t2143;
  double t2144;
  double t2145;
  double t2146;
  double t2150;
  double t2154;
  double t2155;
  double t2157;
  double t2158;
  double t2159;
  double t2208;
  double t2209;
  double t2210;
  double t2190;
  double t2191;
  double t2192;
  double t2195;
  double t2196;
  double t2199;
  double t2200;
  double t2201;
  double t2202;
  double t2203;
  double t2204;
  double t2207;
  double t2212;
  double t2213;
  double t2217;
  double t2242;
  double t2243;
  double t2219;
  double t2245;
  double t2246;
  double t2221;
  double t2010;
  double t2021;
  double t2022;
  double t2023;
  double t2016;
  double t2017;
  double t2018;
  double t2019;
  double t2258;
  double t2259;
  double t2260;
  double t2261;
  double t2262;
  double t2083;
  double t2084;
  double t2118;
  double t2119;
  double t2120;
  double t2121;
  double t2122;
  double t2123;
  double t2124;
  double t2125;
  double t2126;
  double t2127;
  double t2128;
  double t2134;
  double t2135;
  double t2136;
  double t2161;
  double t2162;
  double t2163;
  double t2164;
  double t2165;
  double t2166;
  double t2170;
  double t2174;
  double t2175;
  double t2177;
  double t2178;
  double t2179;
  double t2281;
  double t2282;
  double t2283;
  double t2263;
  double t2264;
  double t2265;
  double t2268;
  double t2269;
  double t2272;
  double t2273;
  double t2274;
  double t2275;
  double t2276;
  double t2277;
  double t2280;
  double t2285;
  double t2286;
  double t2290;
  double t2315;
  double t2316;
  double t2292;
  double t2318;
  double t2319;
  double t2294;
  t1812 = Cos(var1[3]);
  t1805 = Cos(var1[4]);
  t1810 = Sin(var1[3]);
  t1826 = Sin(var1[4]);
  t1852 = Cos(var1[2]);
  t1776 = Sin(var1[2]);
  t1811 = -1.*t1805*t1810;
  t1845 = -1.*t1812*t1826;
  t1850 = t1811 + t1845;
  t1851 = -1.*t1776*t1850;
  t1863 = t1812*t1805;
  t1867 = -1.*t1810*t1826;
  t1878 = t1863 + t1867;
  t1882 = -1.*t1852*t1878;
  t1883 = t1851 + t1882;
  t1899 = -1.*t1805;
  t1900 = 1. + t1899;
  t1901 = 0.4*t1900;
  t1902 = 0.64*t1805;
  t1903 = t1901 + t1902;
  t1970 = Cos(var1[5]);
  t1967 = Cos(var1[6]);
  t1968 = Sin(var1[5]);
  t1971 = Sin(var1[6]);
  t1969 = -1.*t1967*t1968;
  t1980 = -1.*t1970*t1971;
  t1981 = t1969 + t1980;
  t1984 = -1.*t1776*t1981;
  t1985 = t1970*t1967;
  t1992 = -1.*t1968*t1971;
  t1993 = t1985 + t1992;
  t1998 = -1.*t1852*t1993;
  t2002 = t1984 + t1998;
  t2011 = -1.*t1967;
  t2012 = 1. + t2011;
  t2013 = 0.4*t2012;
  t2014 = 0.64*t1967;
  t2015 = t2013 + t2014;
  t2037 = -1.*t1812*t1776;
  t2038 = -1.*t1852*t1810;
  t2039 = t2037 + t2038;
  t1895 = -1.*t1852*t1812;
  t1896 = t1776*t1810;
  t1897 = t1895 + t1896;
  t1926 = -1.*t1776*t1878;
  t1922 = t1805*t1810;
  t1923 = t1812*t1826;
  t1924 = t1922 + t1923;
  t1925 = -1.*t1852*t1924;
  t1927 = t1925 + t1926;
  t2072 = -1.*t1970*t1776;
  t2075 = -1.*t1852*t1968;
  t2076 = t2072 + t2075;
  t2004 = -1.*t1852*t1970;
  t2006 = t1776*t1968;
  t2008 = t2004 + t2006;
  t2028 = -1.*t1776*t1993;
  t2024 = t1967*t1968;
  t2025 = t1970*t1971;
  t2026 = t2024 + t2025;
  t2027 = -1.*t1852*t2026;
  t2029 = t2027 + t2028;
  t2040 = t1852*t1812;
  t2041 = -1.*t1776*t1810;
  t2042 = t2040 + t2041;
  t2059 = t1852*t1878;
  t2058 = -1.*t1776*t1924;
  t2066 = t2058 + t2059;
  t2045 = t1852*t1850;
  t2054 = t2045 + t1926;
  t2077 = t1852*t1970;
  t2079 = -1.*t1776*t1968;
  t2081 = t2077 + t2079;
  t2089 = t1852*t1993;
  t2088 = -1.*t1776*t2026;
  t2090 = t2088 + t2089;
  t2085 = t1852*t1981;
  t2086 = t2085 + t2028;
  t2147 = t1903*t1810;
  t2148 = 0.24*t1812*t1826;
  t2149 = t2147 + t2148;
  t2151 = t1812*t1903;
  t2152 = -0.24*t1810*t1826;
  t2153 = t2151 + t2152;
  t2167 = t2015*t1968;
  t2168 = 0.24*t1970*t1971;
  t2169 = t2167 + t2168;
  t2171 = t1970*t2015;
  t2172 = -0.24*t1968*t1971;
  t2173 = t2171 + t2172;
  t1898 = -0.748*t1897;
  t1919 = t1903*t1826;
  t1920 = -0.24*t1805*t1826;
  t1921 = t1919 + t1920;
  t1904 = t1903*t1805;
  t1915 = Power(t1826,2);
  t1916 = 0.24*t1915;
  t1917 = t1904 + t1916;
  t2185 = -1.*t1812*t1805;
  t2186 = t1810*t1826;
  t2187 = t2185 + t2186;
  t2188 = t1852*t2187;
  t2189 = t1851 + t2188;
  t2043 = -13.6*t2039*t2042;
  t2044 = -13.6*t2039*t1897;
  t2094 = Power(t2039,2);
  t2095 = -6.8*t2094;
  t2096 = t1812*t1776;
  t2097 = t1852*t1810;
  t2098 = t2096 + t2097;
  t2099 = -6.8*t2039*t2098;
  t2100 = Power(t2042,2);
  t2101 = -6.8*t2100;
  t2102 = -6.8*t2042*t1897;
  t2105 = t1776*t1850;
  t2108 = t2105 + t2059;
  t2114 = t1852*t1924;
  t2115 = t1776*t1878;
  t2116 = t2114 + t2115;
  t2141 = Power(t1812,2);
  t2142 = 0.11*t2141;
  t2143 = Power(t1810,2);
  t2144 = 0.11*t2143;
  t2145 = t2142 + t2144;
  t2146 = -6.8*t1897*t2145;
  t2150 = -1.*t2149*t1878;
  t2154 = -1.*t1850*t2153;
  t2155 = t2150 + t2154;
  t2157 = t2149*t1924;
  t2158 = t1878*t2153;
  t2159 = t2157 + t2158;
  t2208 = -1.*t1903*t1810;
  t2209 = -0.24*t1812*t1826;
  t2210 = t2208 + t2209;
  t2190 = 0.384*var2[4]*t2189;
  t2191 = -3.2*t1921*t2054;
  t2192 = -3.2*t1917*t2189;
  t2195 = -6.4*t2066*t2054;
  t2196 = -6.4*t2054*t2189;
  t2199 = -3.2*t2108*t2066;
  t2200 = -3.2*t2054*t2116;
  t2201 = -3.2*t2108*t2189;
  t2202 = t1776*t2187;
  t2203 = t2045 + t2202;
  t2204 = -3.2*t2054*t2203;
  t2207 = -3.2*t2054*t2155;
  t2212 = t2149*t1878;
  t2213 = t1850*t2153;
  t2217 = -3.2*t2159*t2189;
  t2242 = -0.24*t1805*t1810;
  t2243 = t2242 + t2209;
  t2219 = -1.*t1850*t2149;
  t2245 = 0.24*t1812*t1805;
  t2246 = t2245 + t2152;
  t2221 = -1.*t2153*t2187;
  t2010 = -0.748*t2008;
  t2021 = t2015*t1971;
  t2022 = -0.24*t1967*t1971;
  t2023 = t2021 + t2022;
  t2016 = t2015*t1967;
  t2017 = Power(t1971,2);
  t2018 = 0.24*t2017;
  t2019 = t2016 + t2018;
  t2258 = -1.*t1970*t1967;
  t2259 = t1968*t1971;
  t2260 = t2258 + t2259;
  t2261 = t1852*t2260;
  t2262 = t1984 + t2261;
  t2083 = -13.6*t2076*t2081;
  t2084 = -13.6*t2076*t2008;
  t2118 = Power(t2076,2);
  t2119 = -6.8*t2118;
  t2120 = t1970*t1776;
  t2121 = t1852*t1968;
  t2122 = t2120 + t2121;
  t2123 = -6.8*t2076*t2122;
  t2124 = Power(t2081,2);
  t2125 = -6.8*t2124;
  t2126 = -6.8*t2081*t2008;
  t2127 = t1776*t1981;
  t2128 = t2127 + t2089;
  t2134 = t1852*t2026;
  t2135 = t1776*t1993;
  t2136 = t2134 + t2135;
  t2161 = Power(t1970,2);
  t2162 = 0.11*t2161;
  t2163 = Power(t1968,2);
  t2164 = 0.11*t2163;
  t2165 = t2162 + t2164;
  t2166 = -6.8*t2008*t2165;
  t2170 = -1.*t2169*t1993;
  t2174 = -1.*t1981*t2173;
  t2175 = t2170 + t2174;
  t2177 = t2169*t2026;
  t2178 = t1993*t2173;
  t2179 = t2177 + t2178;
  t2281 = -1.*t2015*t1968;
  t2282 = -0.24*t1970*t1971;
  t2283 = t2281 + t2282;
  t2263 = 0.384*var2[6]*t2262;
  t2264 = -3.2*t2023*t2086;
  t2265 = -3.2*t2019*t2262;
  t2268 = -6.4*t2090*t2086;
  t2269 = -6.4*t2086*t2262;
  t2272 = -3.2*t2128*t2090;
  t2273 = -3.2*t2086*t2136;
  t2274 = -3.2*t2128*t2262;
  t2275 = t1776*t2260;
  t2276 = t2085 + t2275;
  t2277 = -3.2*t2086*t2276;
  t2280 = -3.2*t2086*t2175;
  t2285 = t2169*t1993;
  t2286 = t1981*t2173;
  t2290 = -3.2*t2179*t2262;
  t2315 = -0.24*t1967*t1968;
  t2316 = t2315 + t2282;
  t2292 = -1.*t1981*t2169;
  t2318 = 0.24*t1970*t1967;
  t2319 = t2318 + t2172;
  t2294 = -1.*t2173*t2260;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[1]*(-0.5*(-3.2*Power(t2054,2) - 3.2*Power(t2066,2) - 3.2*Power(t2086,2) - 3.2*Power(t2090,2) + t2095 + t2099 + t2101 + t2102 - 3.2*t1883*t2108 - 3.2*t1927*t2116 + t2119 + t2123 + t2125 + t2126 - 3.2*t2002*t2128 - 3.2*t2029*t2136)*var2[0] - 0.5*(t2043 + t2044 - 6.4*t1883*t2054 - 6.4*t1927*t2066 + t2083 + t2084 - 6.4*t2002*t2086 - 6.4*t2029*t2090)*var2[1] - 0.5*(2.88*t1852 + t2146 - 3.2*t1927*t2155 - 3.2*t1883*t2159 + t2166 - 3.2*t2029*t2175 - 3.2*t2002*t2179)*var2[2] - 0.5*(t1898 - 3.2*t1883*t1917 - 3.2*t1921*t1927)*var2[3] + 0.384*t1883*var2[4] - 0.5*(t2010 - 3.2*t2002*t2019 - 3.2*t2023*t2029)*var2[5] + 0.384*t2002*var2[6]);
  p_output1[3]=var2[1]*(t2190 - 0.5*(t2095 + t2099 + t2101 + t2102 + t2199 + t2200 + t2201 + t2204)*var2[0] - 0.5*(t2043 + t2044 + t2195 + t2196)*var2[1] - 0.5*(t2146 + t2207 - 3.2*t2054*(t1924*t2153 + t1878*t2210 + t2212 + t2213) + t2217 - 3.2*t2066*(-1.*t1878*t2153 - 1.*t1850*t2210 + t2219 + t2221))*var2[2] - 0.5*(t1898 + t2191 + t2192)*var2[3]);
  p_output1[4]=var2[1]*(t2190 - 0.5*(t2199 + t2200 + t2201 + t2204)*var2[0] - 0.5*(t2195 + t2196)*var2[1] - 0.5*(t2207 + t2217 - 3.2*t2066*(t2219 + t2221 - 1.*t1850*t2243 - 1.*t1878*t2246) - 3.2*t2054*(t2212 + t2213 + t1878*t2243 + t1924*t2246))*var2[2] - 0.5*(-3.2*(0.24*t1805*t1826 - 1.*t1826*t1903)*t2054 - 3.2*(-0.24*Power(t1805,2) + t1904)*t2066 + t2191 + t2192)*var2[3]);
  p_output1[5]=var2[1]*(t2263 - 0.5*(t2119 + t2123 + t2125 + t2126 + t2272 + t2273 + t2274 + t2277)*var2[0] - 0.5*(t2083 + t2084 + t2268 + t2269)*var2[1] - 0.5*(t2166 + t2280 - 3.2*t2086*(t2026*t2173 + t1993*t2283 + t2285 + t2286) + t2290 - 3.2*t2090*(-1.*t1993*t2173 - 1.*t1981*t2283 + t2292 + t2294))*var2[2] - 0.5*(t2010 + t2264 + t2265)*var2[5]);
  p_output1[6]=var2[1]*(t2263 - 0.5*(t2272 + t2273 + t2274 + t2277)*var2[0] - 0.5*(t2268 + t2269)*var2[1] - 0.5*(t2280 + t2290 - 3.2*t2090*(t2292 + t2294 - 1.*t1981*t2316 - 1.*t1993*t2319) - 3.2*t2086*(t2285 + t2286 + t1993*t2316 + t2026*t2319))*var2[2] - 0.5*(-3.2*(0.24*t1967*t1971 - 1.*t1971*t2015)*t2086 - 3.2*(-0.24*Power(t1967,2) + t2016)*t2090 + t2264 + t2265)*var2[5]);
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

#include "Ce3_vec2_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void Ce3_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
