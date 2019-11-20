/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 20:19:50 GMT-05:00
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
  double t1484;
  double t1481;
  double t1482;
  double t1485;
  double t1533;
  double t1436;
  double t1483;
  double t1498;
  double t1531;
  double t1554;
  double t1560;
  double t1561;
  double t1562;
  double t1563;
  double t1532;
  double t1534;
  double t1540;
  double t1541;
  double t1542;
  double t1543;
  double t1545;
  double t1551;
  double t1552;
  double t1581;
  double t1582;
  double t1583;
  double t1567;
  double t1568;
  double t1569;
  double t1570;
  double t1571;
  double t1572;
  double t1585;
  double t1586;
  double t1587;
  double t1589;
  double t1590;
  double t1591;
  double t1592;
  double t1593;
  double t1594;
  double t1611;
  double t1612;
  double t1627;
  double t1628;
  double t1629;
  double t1631;
  double t1632;
  double t1633;
  double t1637;
  double t1638;
  double t1639;
  double t1614;
  double t1615;
  double t1616;
  double t1604;
  double t1605;
  double t1606;
  double t1564;
  double t1565;
  double t1566;
  double t1574;
  double t1575;
  double t1576;
  double t1577;
  double t1584;
  double t1608;
  double t1609;
  double t1599;
  double t1600;
  double t1601;
  double t1602;
  double t1603;
  double t1607;
  double t1610;
  double t1613;
  double t1617;
  double t1618;
  double t1619;
  double t1621;
  double t1622;
  double t1623;
  double t1624;
  double t1625;
  double t1630;
  double t1634;
  double t1635;
  double t1640;
  double t1641;
  double t1642;
  double t1643;
  double t1644;
  double t1646;
  double t1647;
  double t1648;
  double t1650;
  double t1651;
  double t1652;
  double t1653;
  double t1654;
  double t1672;
  double t1673;
  double t1674;
  double t1675;
  double t1676;
  double t1677;
  double t1626;
  double t1636;
  double t1645;
  double t1649;
  double t1655;
  double t1656;
  double t1661;
  double t1662;
  double t1663;
  double t1664;
  double t1553;
  double t1573;
  double t1578;
  double t1579;
  double t1682;
  double t1683;
  double t1684;
  t1484 = Cos(var1[5]);
  t1481 = Cos(var1[6]);
  t1482 = Sin(var1[5]);
  t1485 = Sin(var1[6]);
  t1533 = Sin(var1[2]);
  t1436 = Cos(var1[2]);
  t1483 = -1.*t1481*t1482;
  t1498 = -1.*t1484*t1485;
  t1531 = t1483 + t1498;
  t1554 = -1.*t1481;
  t1560 = 1. + t1554;
  t1561 = 0.4*t1560;
  t1562 = 0.64*t1481;
  t1563 = t1561 + t1562;
  t1532 = t1436*t1531;
  t1534 = -1.*t1484*t1481;
  t1540 = t1482*t1485;
  t1541 = t1534 + t1540;
  t1542 = t1533*t1541;
  t1543 = t1532 + t1542;
  t1545 = -1.*t1484*t1533;
  t1551 = -1.*t1436*t1482;
  t1552 = t1545 + t1551;
  t1581 = t1436*t1484;
  t1582 = -1.*t1533*t1482;
  t1583 = t1581 + t1582;
  t1567 = t1533*t1531;
  t1568 = t1484*t1481;
  t1569 = -1.*t1482*t1485;
  t1570 = t1568 + t1569;
  t1571 = t1436*t1570;
  t1572 = t1567 + t1571;
  t1585 = t1484*t1533;
  t1586 = t1436*t1482;
  t1587 = t1585 + t1586;
  t1589 = t1481*t1482;
  t1590 = t1484*t1485;
  t1591 = t1589 + t1590;
  t1592 = t1436*t1591;
  t1593 = t1533*t1570;
  t1594 = t1592 + t1593;
  t1611 = -1.*t1533*t1570;
  t1612 = t1532 + t1611;
  t1627 = t1563*t1482;
  t1628 = 0.24*t1484*t1485;
  t1629 = t1627 + t1628;
  t1631 = t1484*t1563;
  t1632 = -0.24*t1482*t1485;
  t1633 = t1631 + t1632;
  t1637 = -1.*t1563*t1482;
  t1638 = -0.24*t1484*t1485;
  t1639 = t1637 + t1638;
  t1614 = -1.*t1533*t1531;
  t1615 = t1436*t1541;
  t1616 = t1614 + t1615;
  t1604 = -1.*t1436*t1484;
  t1605 = t1533*t1482;
  t1606 = t1604 + t1605;
  t1564 = t1563*t1485;
  t1565 = -0.24*t1481*t1485;
  t1566 = t1564 + t1565;
  t1574 = t1563*t1481;
  t1575 = Power(t1485,2);
  t1576 = 0.24*t1575;
  t1577 = t1574 + t1576;
  t1584 = 13.6*t1552*t1583;
  t1608 = -1.*t1533*t1591;
  t1609 = t1608 + t1571;
  t1599 = Power(t1552,2);
  t1600 = 6.8*t1599;
  t1601 = 6.8*t1552*t1587;
  t1602 = Power(t1583,2);
  t1603 = 6.8*t1602;
  t1607 = 6.8*t1583*t1606;
  t1610 = 3.2*t1572*t1609;
  t1613 = 3.2*t1612*t1594;
  t1617 = 3.2*t1572*t1616;
  t1618 = 3.2*t1612*t1543;
  t1619 = t1600 + t1601 + t1603 + t1607 + t1610 + t1613 + t1617 + t1618;
  t1621 = Power(t1484,2);
  t1622 = 0.11*t1621;
  t1623 = Power(t1482,2);
  t1624 = 0.11*t1623;
  t1625 = t1622 + t1624;
  t1630 = -1.*t1629*t1570;
  t1634 = -1.*t1531*t1633;
  t1635 = t1630 + t1634;
  t1640 = t1639*t1570;
  t1641 = t1629*t1570;
  t1642 = t1531*t1633;
  t1643 = t1591*t1633;
  t1644 = t1640 + t1641 + t1642 + t1643;
  t1646 = t1629*t1591;
  t1647 = t1570*t1633;
  t1648 = t1646 + t1647;
  t1650 = -1.*t1531*t1639;
  t1651 = -1.*t1531*t1629;
  t1652 = -1.*t1570*t1633;
  t1653 = -1.*t1633*t1541;
  t1654 = t1650 + t1651 + t1652 + t1653;
  t1672 = 6.8*t1606*t1625;
  t1673 = 3.2*t1612*t1635;
  t1674 = 3.2*t1612*t1644;
  t1675 = 3.2*t1648*t1616;
  t1676 = 3.2*t1609*t1654;
  t1677 = t1672 + t1673 + t1674 + t1675 + t1676;
  t1626 = 6.8*t1552*t1625;
  t1636 = 3.2*t1572*t1635;
  t1645 = 3.2*t1572*t1644;
  t1649 = 3.2*t1648*t1543;
  t1655 = 3.2*t1594*t1654;
  t1656 = t1626 + t1636 + t1645 + t1649 + t1655;
  t1661 = 0.748*t1606;
  t1662 = 3.2*t1566*t1612;
  t1663 = 3.2*t1577*t1616;
  t1664 = t1661 + t1662 + t1663;
  t1553 = 0.748*t1552;
  t1573 = 3.2*t1566*t1572;
  t1578 = 3.2*t1577*t1543;
  t1579 = t1553 + t1573 + t1578;
  t1682 = 3.2*t1577*t1644;
  t1683 = 3.2*t1566*t1654;
  t1684 = t1682 + t1683;
  p_output1[0]=var2[5]*(-0.5*(6.4*t1543*t1572 + t1584 + 13.6*t1583*t1587 + 6.4*t1572*t1594)*var2[0] - 0.5*t1619*var2[1] - 0.5*t1656*var2[2] - 0.5*t1579*var2[5] - 0.384*t1543*var2[6]);
  p_output1[1]=var2[5]*(-0.5*t1619*var2[0] - 0.5*(t1584 + 13.6*t1552*t1606 + 6.4*t1609*t1612 + 6.4*t1612*t1616)*var2[1] - 0.5*t1677*var2[2] - 0.5*t1664*var2[5] - 0.384*t1616*var2[6]);
  p_output1[2]=var2[5]*(-0.5*t1656*var2[0] - 0.5*t1677*var2[1] - 0.5*(6.4*t1644*t1648 + 6.4*t1635*t1654)*var2[2] - 0.5*t1684*var2[5] - 0.384*t1644*var2[6]);
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=(-0.5*t1579*var2[0] - 0.5*t1664*var2[1] - 0.5*t1684*var2[2])*var2[5];
  p_output1[6]=(-0.384*t1543*var2[0] - 0.384*t1616*var2[1] - 0.384*t1644*var2[2])*var2[5];
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

namespace LeftStance
{

void Ce2_vec6_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
