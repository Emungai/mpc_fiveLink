/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:14 GMT-05:00
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
  double t12284;
  double t9170;
  double t10630;
  double t12285;
  double t12299;
  double t8893;
  double t12301;
  double t12306;
  double t12307;
  double t12351;
  double t12352;
  double t12353;
  double t12354;
  double t12355;
  double t12283;
  double t12296;
  double t12297;
  double t12298;
  double t12310;
  double t12311;
  double t12376;
  double t12373;
  double t12374;
  double t12377;
  double t12381;
  double t12382;
  double t12383;
  double t12391;
  double t12392;
  double t12393;
  double t12394;
  double t12395;
  double t12375;
  double t12378;
  double t12379;
  double t12380;
  double t12384;
  double t12385;
  double t12313;
  double t12331;
  double t12334;
  double t12413;
  double t12414;
  double t12415;
  double t12363;
  double t12359;
  double t12360;
  double t12361;
  double t12362;
  double t12364;
  double t12387;
  double t12388;
  double t12389;
  double t12428;
  double t12429;
  double t12430;
  double t12403;
  double t12399;
  double t12400;
  double t12401;
  double t12402;
  double t12404;
  double t12417;
  double t12418;
  double t12419;
  double t12421;
  double t12422;
  double t12424;
  double t12425;
  double t12426;
  double t12432;
  double t12433;
  double t12434;
  double t12436;
  double t12437;
  double t12439;
  double t12440;
  double t12441;
  double t12494;
  double t12495;
  double t12496;
  double t12498;
  double t12499;
  double t12500;
  double t12514;
  double t12515;
  double t12516;
  double t12518;
  double t12519;
  double t12520;
  double t12454;
  double t12455;
  double t12456;
  double t12450;
  double t12451;
  double t12452;
  double t12366;
  double t12367;
  double t12368;
  double t12369;
  double t12356;
  double t12357;
  double t12358;
  double t12462;
  double t12463;
  double t12474;
  double t12475;
  double t12476;
  double t12470;
  double t12471;
  double t12472;
  double t12406;
  double t12407;
  double t12408;
  double t12409;
  double t12396;
  double t12397;
  double t12398;
  double t12482;
  double t12483;
  double t12416;
  double t12431;
  double t12445;
  double t12446;
  double t12447;
  double t12448;
  double t12449;
  double t12453;
  double t12457;
  double t12458;
  double t12459;
  double t12460;
  double t12461;
  double t12464;
  double t12465;
  double t12466;
  double t12467;
  double t12468;
  double t12469;
  double t12473;
  double t12477;
  double t12478;
  double t12479;
  double t12480;
  double t12481;
  double t12484;
  double t12485;
  double t12488;
  double t12489;
  double t12490;
  double t12491;
  double t12492;
  double t12497;
  double t12501;
  double t12502;
  double t12504;
  double t12505;
  double t12506;
  double t12508;
  double t12509;
  double t12510;
  double t12511;
  double t12512;
  double t12517;
  double t12521;
  double t12522;
  double t12524;
  double t12525;
  double t12526;
  double t12553;
  double t12554;
  double t12555;
  double t12556;
  double t12557;
  double t12558;
  double t12559;
  double t12560;
  double t12487;
  double t12493;
  double t12503;
  double t12507;
  double t12513;
  double t12523;
  double t12527;
  double t12528;
  double t12335;
  double t12365;
  double t12370;
  double t12371;
  double t12533;
  double t12534;
  double t12535;
  double t12536;
  double t12390;
  double t12405;
  double t12410;
  double t12411;
  double t12539;
  double t12540;
  double t12541;
  double t12542;
  t12284 = Cos(var1[3]);
  t9170 = Cos(var1[4]);
  t10630 = Sin(var1[3]);
  t12285 = Sin(var1[4]);
  t12299 = Sin(var1[2]);
  t8893 = Cos(var1[2]);
  t12301 = t12284*t9170;
  t12306 = -1.*t10630*t12285;
  t12307 = t12301 + t12306;
  t12351 = -1.*t9170;
  t12352 = 1. + t12351;
  t12353 = 0.4*t12352;
  t12354 = 0.64*t9170;
  t12355 = t12353 + t12354;
  t12283 = -1.*t9170*t10630;
  t12296 = -1.*t12284*t12285;
  t12297 = t12283 + t12296;
  t12298 = t8893*t12297;
  t12310 = -1.*t12299*t12307;
  t12311 = t12298 + t12310;
  t12376 = Cos(var1[5]);
  t12373 = Cos(var1[6]);
  t12374 = Sin(var1[5]);
  t12377 = Sin(var1[6]);
  t12381 = t12376*t12373;
  t12382 = -1.*t12374*t12377;
  t12383 = t12381 + t12382;
  t12391 = -1.*t12373;
  t12392 = 1. + t12391;
  t12393 = 0.4*t12392;
  t12394 = 0.64*t12373;
  t12395 = t12393 + t12394;
  t12375 = -1.*t12373*t12374;
  t12378 = -1.*t12376*t12377;
  t12379 = t12375 + t12378;
  t12380 = t8893*t12379;
  t12384 = -1.*t12299*t12383;
  t12385 = t12380 + t12384;
  t12313 = -1.*t12284*t12299;
  t12331 = -1.*t8893*t10630;
  t12334 = t12313 + t12331;
  t12413 = t8893*t12284;
  t12414 = -1.*t12299*t10630;
  t12415 = t12413 + t12414;
  t12363 = t8893*t12307;
  t12359 = t9170*t10630;
  t12360 = t12284*t12285;
  t12361 = t12359 + t12360;
  t12362 = -1.*t12299*t12361;
  t12364 = t12362 + t12363;
  t12387 = -1.*t12376*t12299;
  t12388 = -1.*t8893*t12374;
  t12389 = t12387 + t12388;
  t12428 = t8893*t12376;
  t12429 = -1.*t12299*t12374;
  t12430 = t12428 + t12429;
  t12403 = t8893*t12383;
  t12399 = t12373*t12374;
  t12400 = t12376*t12377;
  t12401 = t12399 + t12400;
  t12402 = -1.*t12299*t12401;
  t12404 = t12402 + t12403;
  t12417 = t12284*t12299;
  t12418 = t8893*t10630;
  t12419 = t12417 + t12418;
  t12421 = t12299*t12297;
  t12422 = t12421 + t12363;
  t12424 = t8893*t12361;
  t12425 = t12299*t12307;
  t12426 = t12424 + t12425;
  t12432 = t12376*t12299;
  t12433 = t8893*t12374;
  t12434 = t12432 + t12433;
  t12436 = t12299*t12379;
  t12437 = t12436 + t12403;
  t12439 = t8893*t12401;
  t12440 = t12299*t12383;
  t12441 = t12439 + t12440;
  t12494 = t12355*t10630;
  t12495 = 0.24*t12284*t12285;
  t12496 = t12494 + t12495;
  t12498 = t12284*t12355;
  t12499 = -0.24*t10630*t12285;
  t12500 = t12498 + t12499;
  t12514 = t12395*t12374;
  t12515 = 0.24*t12376*t12377;
  t12516 = t12514 + t12515;
  t12518 = t12376*t12395;
  t12519 = -0.24*t12374*t12377;
  t12520 = t12518 + t12519;
  t12454 = -1.*t12299*t12297;
  t12455 = -1.*t8893*t12307;
  t12456 = t12454 + t12455;
  t12450 = -1.*t8893*t12284;
  t12451 = t12299*t10630;
  t12452 = t12450 + t12451;
  t12366 = t12355*t9170;
  t12367 = Power(t12285,2);
  t12368 = 0.24*t12367;
  t12369 = t12366 + t12368;
  t12356 = t12355*t12285;
  t12357 = -0.24*t9170*t12285;
  t12358 = t12356 + t12357;
  t12462 = -1.*t8893*t12361;
  t12463 = t12462 + t12310;
  t12474 = -1.*t12299*t12379;
  t12475 = -1.*t8893*t12383;
  t12476 = t12474 + t12475;
  t12470 = -1.*t8893*t12376;
  t12471 = t12299*t12374;
  t12472 = t12470 + t12471;
  t12406 = t12395*t12373;
  t12407 = Power(t12377,2);
  t12408 = 0.24*t12407;
  t12409 = t12406 + t12408;
  t12396 = t12395*t12377;
  t12397 = -0.24*t12373*t12377;
  t12398 = t12396 + t12397;
  t12482 = -1.*t8893*t12401;
  t12483 = t12482 + t12384;
  t12416 = 13.6*t12334*t12415;
  t12431 = 13.6*t12389*t12430;
  t12445 = Power(t12334,2);
  t12446 = 6.8*t12445;
  t12447 = 6.8*t12334*t12419;
  t12448 = Power(t12415,2);
  t12449 = 6.8*t12448;
  t12453 = 6.8*t12415*t12452;
  t12457 = 3.2*t12456*t12422;
  t12458 = Power(t12364,2);
  t12459 = 3.2*t12458;
  t12460 = Power(t12311,2);
  t12461 = 3.2*t12460;
  t12464 = 3.2*t12463*t12426;
  t12465 = Power(t12389,2);
  t12466 = 6.8*t12465;
  t12467 = 6.8*t12389*t12434;
  t12468 = Power(t12430,2);
  t12469 = 6.8*t12468;
  t12473 = 6.8*t12430*t12472;
  t12477 = 3.2*t12476*t12437;
  t12478 = Power(t12404,2);
  t12479 = 3.2*t12478;
  t12480 = Power(t12385,2);
  t12481 = 3.2*t12480;
  t12484 = 3.2*t12483*t12441;
  t12485 = t12446 + t12447 + t12449 + t12453 + t12457 + t12459 + t12461 + t12464 + t12466 + t12467 + t12469 + t12473 + t12477 + t12479 + t12481 + t12484;
  t12488 = Power(t12284,2);
  t12489 = 0.11*t12488;
  t12490 = Power(t10630,2);
  t12491 = 0.11*t12490;
  t12492 = t12489 + t12491;
  t12497 = -1.*t12496*t12307;
  t12501 = -1.*t12297*t12500;
  t12502 = t12497 + t12501;
  t12504 = t12496*t12361;
  t12505 = t12307*t12500;
  t12506 = t12504 + t12505;
  t12508 = Power(t12376,2);
  t12509 = 0.11*t12508;
  t12510 = Power(t12374,2);
  t12511 = 0.11*t12510;
  t12512 = t12509 + t12511;
  t12517 = -1.*t12516*t12383;
  t12521 = -1.*t12379*t12520;
  t12522 = t12517 + t12521;
  t12524 = t12516*t12401;
  t12525 = t12383*t12520;
  t12526 = t12524 + t12525;
  t12553 = -2.88*t8893;
  t12554 = 6.8*t12452*t12492;
  t12555 = 3.2*t12463*t12502;
  t12556 = 3.2*t12456*t12506;
  t12557 = 6.8*t12472*t12512;
  t12558 = 3.2*t12483*t12522;
  t12559 = 3.2*t12476*t12526;
  t12560 = t12553 + t12554 + t12555 + t12556 + t12557 + t12558 + t12559;
  t12487 = -2.88*t12299;
  t12493 = 6.8*t12334*t12492;
  t12503 = 3.2*t12364*t12502;
  t12507 = 3.2*t12311*t12506;
  t12513 = 6.8*t12389*t12512;
  t12523 = 3.2*t12404*t12522;
  t12527 = 3.2*t12385*t12526;
  t12528 = t12487 + t12493 + t12503 + t12507 + t12513 + t12523 + t12527;
  t12335 = 0.748*t12334;
  t12365 = 3.2*t12358*t12364;
  t12370 = 3.2*t12369*t12311;
  t12371 = t12335 + t12365 + t12370;
  t12533 = 0.748*t12452;
  t12534 = 3.2*t12369*t12456;
  t12535 = 3.2*t12358*t12463;
  t12536 = t12533 + t12534 + t12535;
  t12390 = 0.748*t12389;
  t12405 = 3.2*t12398*t12404;
  t12410 = 3.2*t12409*t12385;
  t12411 = t12390 + t12405 + t12410;
  t12539 = 0.748*t12472;
  t12540 = 3.2*t12409*t12476;
  t12541 = 3.2*t12398*t12483;
  t12542 = t12539 + t12540 + t12541;
  p_output1[0]=var2[2]*(-0.5*(t12416 + 13.6*t12415*t12419 + 6.4*t12311*t12422 + 6.4*t12364*t12426 + t12431 + 13.6*t12430*t12434 + 6.4*t12385*t12437 + 6.4*t12404*t12441)*var2[0] - 0.5*t12485*var2[1] - 0.5*t12528*var2[2] - 0.5*t12371*var2[3] - 0.384*t12311*var2[4] - 0.5*t12411*var2[5] - 0.384*t12385*var2[6]);
  p_output1[1]=var2[2]*(-0.5*t12485*var2[0] - 0.5*(t12416 + t12431 + 13.6*t12334*t12452 + 6.4*t12311*t12456 + 6.4*t12364*t12463 + 13.6*t12389*t12472 + 6.4*t12385*t12476 + 6.4*t12404*t12483)*var2[1] - 0.5*t12560*var2[2] - 0.5*t12536*var2[3] - 0.384*t12456*var2[4] - 0.5*t12542*var2[5] - 0.384*t12476*var2[6]);
  p_output1[2]=(-0.5*t12528*var2[0] - 0.5*t12560*var2[1])*var2[2];
  p_output1[3]=(-0.5*t12371*var2[0] - 0.5*t12536*var2[1])*var2[2];
  p_output1[4]=(-0.384*t12311*var2[0] - 0.384*t12456*var2[1])*var2[2];
  p_output1[5]=(-0.5*t12411*var2[0] - 0.5*t12542*var2[1])*var2[2];
  p_output1[6]=(-0.384*t12385*var2[0] - 0.384*t12476*var2[1])*var2[2];
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

#include "Ce2_vec3_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void Ce2_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
