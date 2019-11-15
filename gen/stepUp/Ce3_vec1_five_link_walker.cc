/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:38:46 GMT-05:00
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
  double t1716;
  double t1713;
  double t1714;
  double t1717;
  double t1765;
  double t1668;
  double t1766;
  double t1772;
  double t1773;
  double t1786;
  double t1792;
  double t1793;
  double t1794;
  double t1795;
  double t1715;
  double t1730;
  double t1763;
  double t1764;
  double t1774;
  double t1775;
  double t1816;
  double t1813;
  double t1814;
  double t1817;
  double t1821;
  double t1822;
  double t1823;
  double t1831;
  double t1832;
  double t1833;
  double t1834;
  double t1835;
  double t1815;
  double t1818;
  double t1819;
  double t1820;
  double t1824;
  double t1825;
  double t1777;
  double t1783;
  double t1784;
  double t1853;
  double t1854;
  double t1855;
  double t1803;
  double t1799;
  double t1800;
  double t1801;
  double t1802;
  double t1804;
  double t1827;
  double t1828;
  double t1829;
  double t1868;
  double t1869;
  double t1870;
  double t1843;
  double t1839;
  double t1840;
  double t1841;
  double t1842;
  double t1844;
  double t1857;
  double t1858;
  double t1859;
  double t1861;
  double t1862;
  double t1864;
  double t1865;
  double t1866;
  double t1872;
  double t1873;
  double t1874;
  double t1876;
  double t1877;
  double t1879;
  double t1880;
  double t1881;
  double t1934;
  double t1935;
  double t1936;
  double t1938;
  double t1939;
  double t1940;
  double t1954;
  double t1955;
  double t1956;
  double t1958;
  double t1959;
  double t1960;
  double t1785;
  double t1796;
  double t1797;
  double t1798;
  double t1806;
  double t1807;
  double t1808;
  double t1809;
  double t1972;
  double t1973;
  double t1974;
  double t1975;
  double t1976;
  double t1856;
  double t1860;
  double t1885;
  double t1886;
  double t1887;
  double t1888;
  double t1889;
  double t1890;
  double t1891;
  double t1892;
  double t1893;
  double t1894;
  double t1928;
  double t1929;
  double t1930;
  double t1931;
  double t1932;
  double t1933;
  double t1937;
  double t1941;
  double t1942;
  double t1944;
  double t1945;
  double t1946;
  double t1995;
  double t1996;
  double t1997;
  double t1977;
  double t1978;
  double t1979;
  double t1982;
  double t1983;
  double t1986;
  double t1987;
  double t1988;
  double t1989;
  double t1990;
  double t1991;
  double t1994;
  double t1999;
  double t2001;
  double t2005;
  double t2030;
  double t2031;
  double t2007;
  double t2033;
  double t2034;
  double t2009;
  double t1830;
  double t1836;
  double t1837;
  double t1838;
  double t1846;
  double t1847;
  double t1848;
  double t1849;
  double t2046;
  double t2047;
  double t2048;
  double t2049;
  double t2050;
  double t1871;
  double t1875;
  double t1905;
  double t1906;
  double t1907;
  double t1908;
  double t1909;
  double t1910;
  double t1911;
  double t1912;
  double t1913;
  double t1914;
  double t1948;
  double t1949;
  double t1950;
  double t1951;
  double t1952;
  double t1953;
  double t1957;
  double t1961;
  double t1962;
  double t1964;
  double t1965;
  double t1966;
  double t2069;
  double t2070;
  double t2071;
  double t2051;
  double t2052;
  double t2053;
  double t2056;
  double t2057;
  double t2060;
  double t2061;
  double t2062;
  double t2063;
  double t2064;
  double t2065;
  double t2068;
  double t2073;
  double t2074;
  double t2078;
  double t2103;
  double t2104;
  double t2080;
  double t2106;
  double t2107;
  double t2082;
  t1716 = Cos(var1[3]);
  t1713 = Cos(var1[4]);
  t1714 = Sin(var1[3]);
  t1717 = Sin(var1[4]);
  t1765 = Sin(var1[2]);
  t1668 = Cos(var1[2]);
  t1766 = t1716*t1713;
  t1772 = -1.*t1714*t1717;
  t1773 = t1766 + t1772;
  t1786 = -1.*t1713;
  t1792 = 1. + t1786;
  t1793 = 0.4*t1792;
  t1794 = 0.64*t1713;
  t1795 = t1793 + t1794;
  t1715 = -1.*t1713*t1714;
  t1730 = -1.*t1716*t1717;
  t1763 = t1715 + t1730;
  t1764 = t1668*t1763;
  t1774 = -1.*t1765*t1773;
  t1775 = t1764 + t1774;
  t1816 = Cos(var1[5]);
  t1813 = Cos(var1[6]);
  t1814 = Sin(var1[5]);
  t1817 = Sin(var1[6]);
  t1821 = t1816*t1813;
  t1822 = -1.*t1814*t1817;
  t1823 = t1821 + t1822;
  t1831 = -1.*t1813;
  t1832 = 1. + t1831;
  t1833 = 0.4*t1832;
  t1834 = 0.64*t1813;
  t1835 = t1833 + t1834;
  t1815 = -1.*t1813*t1814;
  t1818 = -1.*t1816*t1817;
  t1819 = t1815 + t1818;
  t1820 = t1668*t1819;
  t1824 = -1.*t1765*t1823;
  t1825 = t1820 + t1824;
  t1777 = -1.*t1716*t1765;
  t1783 = -1.*t1668*t1714;
  t1784 = t1777 + t1783;
  t1853 = t1668*t1716;
  t1854 = -1.*t1765*t1714;
  t1855 = t1853 + t1854;
  t1803 = t1668*t1773;
  t1799 = t1713*t1714;
  t1800 = t1716*t1717;
  t1801 = t1799 + t1800;
  t1802 = -1.*t1765*t1801;
  t1804 = t1802 + t1803;
  t1827 = -1.*t1816*t1765;
  t1828 = -1.*t1668*t1814;
  t1829 = t1827 + t1828;
  t1868 = t1668*t1816;
  t1869 = -1.*t1765*t1814;
  t1870 = t1868 + t1869;
  t1843 = t1668*t1823;
  t1839 = t1813*t1814;
  t1840 = t1816*t1817;
  t1841 = t1839 + t1840;
  t1842 = -1.*t1765*t1841;
  t1844 = t1842 + t1843;
  t1857 = t1716*t1765;
  t1858 = t1668*t1714;
  t1859 = t1857 + t1858;
  t1861 = t1765*t1763;
  t1862 = t1861 + t1803;
  t1864 = t1668*t1801;
  t1865 = t1765*t1773;
  t1866 = t1864 + t1865;
  t1872 = t1816*t1765;
  t1873 = t1668*t1814;
  t1874 = t1872 + t1873;
  t1876 = t1765*t1819;
  t1877 = t1876 + t1843;
  t1879 = t1668*t1841;
  t1880 = t1765*t1823;
  t1881 = t1879 + t1880;
  t1934 = t1795*t1714;
  t1935 = 0.24*t1716*t1717;
  t1936 = t1934 + t1935;
  t1938 = t1716*t1795;
  t1939 = -0.24*t1714*t1717;
  t1940 = t1938 + t1939;
  t1954 = t1835*t1814;
  t1955 = 0.24*t1816*t1817;
  t1956 = t1954 + t1955;
  t1958 = t1816*t1835;
  t1959 = -0.24*t1814*t1817;
  t1960 = t1958 + t1959;
  t1785 = -0.748*t1784;
  t1796 = t1795*t1717;
  t1797 = -0.24*t1713*t1717;
  t1798 = t1796 + t1797;
  t1806 = t1795*t1713;
  t1807 = Power(t1717,2);
  t1808 = 0.24*t1807;
  t1809 = t1806 + t1808;
  t1972 = -1.*t1716*t1713;
  t1973 = t1714*t1717;
  t1974 = t1972 + t1973;
  t1975 = t1765*t1974;
  t1976 = t1764 + t1975;
  t1856 = -13.6*t1784*t1855;
  t1860 = -13.6*t1859*t1855;
  t1885 = Power(t1784,2);
  t1886 = -6.8*t1885;
  t1887 = -6.8*t1784*t1859;
  t1888 = Power(t1855,2);
  t1889 = -6.8*t1888;
  t1890 = -1.*t1668*t1716;
  t1891 = t1765*t1714;
  t1892 = t1890 + t1891;
  t1893 = -6.8*t1855*t1892;
  t1894 = -1.*t1765*t1763;
  t1928 = Power(t1716,2);
  t1929 = 0.11*t1928;
  t1930 = Power(t1714,2);
  t1931 = 0.11*t1930;
  t1932 = t1929 + t1931;
  t1933 = -6.8*t1784*t1932;
  t1937 = -1.*t1936*t1773;
  t1941 = -1.*t1763*t1940;
  t1942 = t1937 + t1941;
  t1944 = t1936*t1801;
  t1945 = t1773*t1940;
  t1946 = t1944 + t1945;
  t1995 = -1.*t1795*t1714;
  t1996 = -0.24*t1716*t1717;
  t1997 = t1995 + t1996;
  t1977 = 0.384*var2[4]*t1976;
  t1978 = -3.2*t1798*t1862;
  t1979 = -3.2*t1809*t1976;
  t1982 = -6.4*t1862*t1866;
  t1983 = -6.4*t1862*t1976;
  t1986 = -3.2*t1862*t1804;
  t1987 = -3.2*t1775*t1866;
  t1988 = t1668*t1974;
  t1989 = t1894 + t1988;
  t1990 = -3.2*t1862*t1989;
  t1991 = -3.2*t1775*t1976;
  t1994 = -3.2*t1862*t1942;
  t1999 = t1936*t1773;
  t2001 = t1763*t1940;
  t2005 = -3.2*t1946*t1976;
  t2030 = -0.24*t1713*t1714;
  t2031 = t2030 + t1996;
  t2007 = -1.*t1763*t1936;
  t2033 = 0.24*t1716*t1713;
  t2034 = t2033 + t1939;
  t2009 = -1.*t1940*t1974;
  t1830 = -0.748*t1829;
  t1836 = t1835*t1817;
  t1837 = -0.24*t1813*t1817;
  t1838 = t1836 + t1837;
  t1846 = t1835*t1813;
  t1847 = Power(t1817,2);
  t1848 = 0.24*t1847;
  t1849 = t1846 + t1848;
  t2046 = -1.*t1816*t1813;
  t2047 = t1814*t1817;
  t2048 = t2046 + t2047;
  t2049 = t1765*t2048;
  t2050 = t1820 + t2049;
  t1871 = -13.6*t1829*t1870;
  t1875 = -13.6*t1874*t1870;
  t1905 = Power(t1829,2);
  t1906 = -6.8*t1905;
  t1907 = -6.8*t1829*t1874;
  t1908 = Power(t1870,2);
  t1909 = -6.8*t1908;
  t1910 = -1.*t1668*t1816;
  t1911 = t1765*t1814;
  t1912 = t1910 + t1911;
  t1913 = -6.8*t1870*t1912;
  t1914 = -1.*t1765*t1819;
  t1948 = Power(t1816,2);
  t1949 = 0.11*t1948;
  t1950 = Power(t1814,2);
  t1951 = 0.11*t1950;
  t1952 = t1949 + t1951;
  t1953 = -6.8*t1829*t1952;
  t1957 = -1.*t1956*t1823;
  t1961 = -1.*t1819*t1960;
  t1962 = t1957 + t1961;
  t1964 = t1956*t1841;
  t1965 = t1823*t1960;
  t1966 = t1964 + t1965;
  t2069 = -1.*t1835*t1814;
  t2070 = -0.24*t1816*t1817;
  t2071 = t2069 + t2070;
  t2051 = 0.384*var2[6]*t2050;
  t2052 = -3.2*t1838*t1877;
  t2053 = -3.2*t1849*t2050;
  t2056 = -6.4*t1877*t1881;
  t2057 = -6.4*t1877*t2050;
  t2060 = -3.2*t1877*t1844;
  t2061 = -3.2*t1825*t1881;
  t2062 = t1668*t2048;
  t2063 = t1914 + t2062;
  t2064 = -3.2*t1877*t2063;
  t2065 = -3.2*t1825*t2050;
  t2068 = -3.2*t1877*t1962;
  t2073 = t1956*t1823;
  t2074 = t1819*t1960;
  t2078 = -3.2*t1966*t2050;
  t2103 = -0.24*t1813*t1814;
  t2104 = t2103 + t2070;
  t2080 = -1.*t1819*t1956;
  t2106 = 0.24*t1816*t1813;
  t2107 = t2106 + t1959;
  t2082 = -1.*t1960*t2048;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=var2[0]*(-0.5*(t1856 + t1860 - 6.4*t1775*t1862 - 6.4*t1804*t1866 + t1871 + t1875 - 6.4*t1825*t1877 - 6.4*t1844*t1881)*var2[0] - 0.5*(-3.2*Power(t1775,2) - 3.2*Power(t1804,2) - 3.2*Power(t1825,2) - 3.2*Power(t1844,2) - 3.2*(t1774 - 1.*t1668*t1801)*t1866 - 3.2*(t1824 - 1.*t1668*t1841)*t1881 + t1886 + t1887 + t1889 + t1893 - 3.2*t1862*(-1.*t1668*t1773 + t1894) + t1906 + t1907 + t1909 + t1913 - 3.2*t1877*(-1.*t1668*t1823 + t1914))*var2[1] - 0.5*(2.88*t1765 + t1933 - 3.2*t1804*t1942 - 3.2*t1775*t1946 + t1953 - 3.2*t1844*t1962 - 3.2*t1825*t1966)*var2[2] - 0.5*(t1785 - 3.2*t1798*t1804 - 3.2*t1775*t1809)*var2[3] + 0.384*t1775*var2[4] - 0.5*(t1830 - 3.2*t1838*t1844 - 3.2*t1825*t1849)*var2[5] + 0.384*t1825*var2[6]);
  p_output1[3]=var2[0]*(t1977 - 0.5*(t1856 + t1860 + t1982 + t1983)*var2[0] - 0.5*(t1886 + t1887 + t1889 + t1893 + t1986 + t1987 + t1990 + t1991)*var2[1] - 0.5*(t1933 + t1994 - 3.2*t1862*(t1801*t1940 + t1773*t1997 + t1999 + t2001) + t2005 - 3.2*t1866*(-1.*t1773*t1940 - 1.*t1763*t1997 + t2007 + t2009))*var2[2] - 0.5*(t1785 + t1978 + t1979)*var2[3]);
  p_output1[4]=var2[0]*(t1977 - 0.5*(t1982 + t1983)*var2[0] - 0.5*(t1986 + t1987 + t1990 + t1991)*var2[1] - 0.5*(t1994 + t2005 - 3.2*t1866*(t2007 + t2009 - 1.*t1763*t2031 - 1.*t1773*t2034) - 3.2*t1862*(t1999 + t2001 + t1773*t2031 + t1801*t2034))*var2[2] - 0.5*(-3.2*(0.24*t1713*t1717 - 1.*t1717*t1795)*t1862 - 3.2*(-0.24*Power(t1713,2) + t1806)*t1866 + t1978 + t1979)*var2[3]);
  p_output1[5]=var2[0]*(t2051 - 0.5*(t1871 + t1875 + t2056 + t2057)*var2[0] - 0.5*(t1906 + t1907 + t1909 + t1913 + t2060 + t2061 + t2064 + t2065)*var2[1] - 0.5*(t1953 + t2068 - 3.2*t1877*(t1841*t1960 + t1823*t2071 + t2073 + t2074) + t2078 - 3.2*t1881*(-1.*t1823*t1960 - 1.*t1819*t2071 + t2080 + t2082))*var2[2] - 0.5*(t1830 + t2052 + t2053)*var2[5]);
  p_output1[6]=var2[0]*(t2051 - 0.5*(t2056 + t2057)*var2[0] - 0.5*(t2060 + t2061 + t2064 + t2065)*var2[1] - 0.5*(t2068 + t2078 - 3.2*t1881*(t2080 + t2082 - 1.*t1819*t2104 - 1.*t1823*t2107) - 3.2*t1877*(t2073 + t2074 + t1823*t2104 + t1841*t2107))*var2[2] - 0.5*(-3.2*(0.24*t1813*t1817 - 1.*t1817*t1835)*t1877 - 3.2*(-0.24*Power(t1813,2) + t1846)*t1881 + t2052 + t2053)*var2[5]);
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

#include "Ce3_vec1_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void Ce3_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
