/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:19:52 GMT-05:00
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
  double t1596;
  double t1580;
  double t1588;
  double t1597;
  double t1658;
  double t1595;
  double t1598;
  double t1620;
  double t1544;
  double t1669;
  double t1670;
  double t1671;
  double t1678;
  double t1679;
  double t1686;
  double t1687;
  double t1688;
  double t1689;
  double t1690;
  double t1691;
  double t1697;
  double t1657;
  double t1659;
  double t1660;
  double t1665;
  double t1666;
  double t1667;
  double t1701;
  double t1702;
  double t1703;
  double t1704;
  double t1705;
  double t1706;
  double t1721;
  double t1722;
  double t1731;
  double t1732;
  double t1733;
  double t1735;
  double t1736;
  double t1737;
  double t1741;
  double t1742;
  double t1743;
  double t1747;
  double t1748;
  double t1724;
  double t1725;
  double t1726;
  double t1698;
  double t1699;
  double t1700;
  double t1718;
  double t1719;
  double t1680;
  double t1681;
  double t1685;
  double t1693;
  double t1694;
  double t1695;
  double t1708;
  double t1709;
  double t1710;
  double t1720;
  double t1723;
  double t1727;
  double t1728;
  double t1729;
  double t1734;
  double t1738;
  double t1739;
  double t1744;
  double t1745;
  double t1746;
  double t1749;
  double t1750;
  double t1752;
  double t1753;
  double t1754;
  double t1756;
  double t1757;
  double t1758;
  double t1759;
  double t1760;
  double t1778;
  double t1779;
  double t1780;
  double t1781;
  double t1782;
  double t1740;
  double t1751;
  double t1755;
  double t1761;
  double t1762;
  double t1767;
  double t1768;
  double t1769;
  double t1770;
  double t1771;
  double t1692;
  double t1696;
  double t1707;
  double t1711;
  double t1712;
  double t1787;
  double t1788;
  double t1789;
  double t1790;
  double t1791;
  t1596 = Cos(var1[5]);
  t1580 = Cos(var1[6]);
  t1588 = Sin(var1[5]);
  t1597 = Sin(var1[6]);
  t1658 = Sin(var1[2]);
  t1595 = -1.*t1580*t1588;
  t1598 = -1.*t1596*t1597;
  t1620 = t1595 + t1598;
  t1544 = Cos(var1[2]);
  t1669 = -1.*t1580;
  t1670 = 1. + t1669;
  t1671 = 0.4*t1670;
  t1678 = 0.64*t1580;
  t1679 = t1671 + t1678;
  t1686 = t1658*t1620;
  t1687 = t1596*t1580;
  t1688 = -1.*t1588*t1597;
  t1689 = t1687 + t1688;
  t1690 = t1544*t1689;
  t1691 = t1686 + t1690;
  t1697 = t1679*t1580;
  t1657 = t1544*t1620;
  t1659 = -1.*t1596*t1580;
  t1660 = t1588*t1597;
  t1665 = t1659 + t1660;
  t1666 = t1658*t1665;
  t1667 = t1657 + t1666;
  t1701 = t1580*t1588;
  t1702 = t1596*t1597;
  t1703 = t1701 + t1702;
  t1704 = t1544*t1703;
  t1705 = t1658*t1689;
  t1706 = t1704 + t1705;
  t1721 = -1.*t1658*t1689;
  t1722 = t1657 + t1721;
  t1731 = t1679*t1588;
  t1732 = 0.24*t1596*t1597;
  t1733 = t1731 + t1732;
  t1735 = t1596*t1679;
  t1736 = -0.24*t1588*t1597;
  t1737 = t1735 + t1736;
  t1741 = -0.24*t1580*t1588;
  t1742 = -0.24*t1596*t1597;
  t1743 = t1741 + t1742;
  t1747 = 0.24*t1596*t1580;
  t1748 = t1747 + t1736;
  t1724 = -1.*t1658*t1620;
  t1725 = t1544*t1665;
  t1726 = t1724 + t1725;
  t1698 = Power(t1580,2);
  t1699 = -0.24*t1698;
  t1700 = t1697 + t1699;
  t1718 = -1.*t1658*t1703;
  t1719 = t1718 + t1690;
  t1680 = t1679*t1597;
  t1681 = -0.24*t1580*t1597;
  t1685 = t1680 + t1681;
  t1693 = -1.*t1679*t1597;
  t1694 = 0.24*t1580*t1597;
  t1695 = t1693 + t1694;
  t1708 = Power(t1597,2);
  t1709 = 0.24*t1708;
  t1710 = t1697 + t1709;
  t1720 = 3.2*t1691*t1719;
  t1723 = 3.2*t1722*t1706;
  t1727 = 3.2*t1691*t1726;
  t1728 = 3.2*t1722*t1667;
  t1729 = t1720 + t1723 + t1727 + t1728;
  t1734 = -1.*t1733*t1689;
  t1738 = -1.*t1620*t1737;
  t1739 = t1734 + t1738;
  t1744 = t1743*t1689;
  t1745 = t1733*t1689;
  t1746 = t1620*t1737;
  t1749 = t1703*t1748;
  t1750 = t1744 + t1745 + t1746 + t1749;
  t1752 = t1733*t1703;
  t1753 = t1689*t1737;
  t1754 = t1752 + t1753;
  t1756 = -1.*t1620*t1743;
  t1757 = -1.*t1620*t1733;
  t1758 = -1.*t1689*t1748;
  t1759 = -1.*t1737*t1665;
  t1760 = t1756 + t1757 + t1758 + t1759;
  t1778 = 3.2*t1722*t1739;
  t1779 = 3.2*t1722*t1750;
  t1780 = 3.2*t1754*t1726;
  t1781 = 3.2*t1719*t1760;
  t1782 = t1778 + t1779 + t1780 + t1781;
  t1740 = 3.2*t1691*t1739;
  t1751 = 3.2*t1691*t1750;
  t1755 = 3.2*t1754*t1667;
  t1761 = 3.2*t1706*t1760;
  t1762 = t1740 + t1751 + t1755 + t1761;
  t1767 = 3.2*t1700*t1719;
  t1768 = 3.2*t1685*t1722;
  t1769 = 3.2*t1695*t1722;
  t1770 = 3.2*t1710*t1726;
  t1771 = t1767 + t1768 + t1769 + t1770;
  t1692 = 3.2*t1685*t1691;
  t1696 = 3.2*t1695*t1691;
  t1707 = 3.2*t1700*t1706;
  t1711 = 3.2*t1710*t1667;
  t1712 = t1692 + t1696 + t1707 + t1711;
  t1787 = 3.2*t1700*t1739;
  t1788 = 3.2*t1695*t1754;
  t1789 = 3.2*t1710*t1750;
  t1790 = 3.2*t1685*t1760;
  t1791 = t1787 + t1788 + t1789 + t1790;
  p_output1[0]=var2[6]*(-0.5*(6.4*t1667*t1691 + 6.4*t1691*t1706)*var2[0] - 0.5*t1729*var2[1] - 0.5*t1762*var2[2] - 0.5*t1712*var2[5] - 0.384*t1667*var2[6]);
  p_output1[1]=var2[6]*(-0.5*t1729*var2[0] - 0.5*(6.4*t1719*t1722 + 6.4*t1722*t1726)*var2[1] - 0.5*t1782*var2[2] - 0.5*t1771*var2[5] - 0.384*t1726*var2[6]);
  p_output1[2]=var2[6]*(-0.5*t1762*var2[0] - 0.5*t1782*var2[1] - 0.5*(6.4*t1750*t1754 + 6.4*t1739*t1760)*var2[2] - 0.5*t1791*var2[5] - 0.384*t1750*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=var2[6]*(-0.5*t1712*var2[0] - 0.5*t1771*var2[1] - 0.5*t1791*var2[2] - 0.5*(6.4*t1685*t1700 + 6.4*t1695*t1710)*var2[5] - 0.384*t1695*var2[6]);
  p_output1[6]=(-0.384*t1667*var2[0] - 0.384*t1726*var2[1] - 0.384*t1750*var2[2] - 0.384*t1695*var2[5])*var2[6];
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

#include "Ce2_vec7_five_link_walker.hh"

namespace LeftStance
{

void Ce2_vec7_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
