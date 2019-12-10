/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:21:57 GMT-05:00
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
  double t3002;
  double t2976;
  double t2989;
  double t3007;
  double t3153;
  double t2912;
  double t3154;
  double t3155;
  double t3189;
  double t3199;
  double t3202;
  double t3224;
  double t3194;
  double t3000;
  double t3102;
  double t3124;
  double t3228;
  double t3227;
  double t3229;
  double t3254;
  double t3234;
  double t3235;
  double t3267;
  double t3276;
  double t3284;
  double t3255;
  double t3256;
  double t3333;
  double t3340;
  double t3341;
  double t3330;
  double t3331;
  double t3332;
  double t3344;
  double t3345;
  double t3346;
  double t3348;
  double t3358;
  double t3360;
  double t3141;
  double t3198;
  double t3230;
  double t3236;
  double t3237;
  double t3253;
  double t3260;
  double t3261;
  double t3262;
  double t3263;
  double t3288;
  double t3290;
  double t3291;
  double t3292;
  double t3293;
  double t3294;
  double t3307;
  double t3308;
  double t3319;
  double t3325;
  double t3343;
  double t3347;
  double t3363;
  double t3364;
  double t3384;
  double t3394;
  double t3397;
  double t3398;
  double t3399;
  double t3393;
  double t3395;
  double t3396;
  double t3406;
  double t3412;
  double t3426;
  double t3434;
  double t3435;
  double t3436;
  double t3439;
  double t3482;
  double t3440;
  double t3496;
  double t3497;
  double t3499;
  double t3520;
  double t3524;
  double t3562;
  double t3565;
  double t3566;
  double t3559;
  double t3572;
  double t3525;
  double t3582;
  double t3567;
  double t3573;
  double t3545;
  double t3560;
  double t3578;
  double t3580;
  double t3575;
  double t3576;
  double t3498;
  double t3526;
  double t3609;
  double t3610;
  double t3581;
  double t3617;
  double t3618;
  double t3619;
  double t3400;
  double t3432;
  double t3437;
  double t3438;
  double t3614;
  double t3615;
  double t3616;
  double t3620;
  double t3621;
  double t3622;
  double t3623;
  double t3624;
  double t3625;
  double t3626;
  double t3627;
  double t3628;
  double t3365;
  double t3381;
  double t3643;
  double t3644;
  double t3646;
  double t3647;
  double t3648;
  double t3650;
  double t3651;
  double t3652;
  double t3326;
  double t3653;
  double t3675;
  double t3633;
  double t3586;
  double t3685;
  double t3686;
  double t3687;
  double t3688;
  double t3689;
  double t3690;
  double t3691;
  double t3692;
  double t3631;
  double t3693;
  double t3700;
  double t3727;
  double t3728;
  double t3734;
  double t3738;
  double t3744;
  double t3754;
  double t3755;
  double t3756;
  double t3757;
  double t3760;
  double t3772;
  double t3773;
  double t3774;
  double t3775;
  double t3776;
  double t3777;
  double t3796;
  double t3797;
  double t3798;
  double t3799;
  double t3766;
  double t3767;
  double t3768;
  double t3769;
  double t3770;
  double t3771;
  double t3778;
  double t3779;
  double t3780;
  double t3785;
  double t3789;
  double t3793;
  double t3794;
  double t3761;
  double t3739;
  double t3802;
  double t3800;
  double t3824;
  double t3825;
  double t3829;
  double t3839;
  double t3842;
  double t3845;
  double t3846;
  double t3850;
  double t3851;
  double t3382;
  double t3379;
  double t3587;
  double t3584;
  double t3860;
  double t3861;
  double t3862;
  double t3863;
  double t3864;
  double t3883;
  double t3884;
  double t3885;
  double t3886;
  double t3852;
  double t3900;
  double t3901;
  double t3902;
  double t3903;
  double t3904;
  double t3840;
  double t3905;
  double t3906;
  double t3894;
  double t3916;
  double t3917;
  double t3918;
  double t3919;
  double t3920;
  double t3887;
  double t3921;
  double t3922;
  double t3933;
  double t3934;
  double t3939;
  double t3940;
  double t3937;
  double t3938;
  double t3941;
  double t3942;
  double t3943;
  double t3935;
  double t3931;
  double t3947;
  double t3945;
  double t3961;
  double t3962;
  double t3963;
  double t3964;
  double t3965;
  double t3966;
  double t3967;
  double t3968;
  double t3970;
  double t3971;
  double t3972;
  double t3976;
  double t3977;
  double t3978;
  double t3969;
  double t3973;
  double t3974;
  double t3975;
  double t3980;
  double t3981;
  double t3985;
  double t3986;
  double t3987;
  double t3988;
  double t3997;
  double t3998;
  double t3990;
  double t4000;
  double t4001;
  double t3992;
  double t3955;
  double t3956;
  double t3957;
  double t3958;
  double t3959;
  double t3960;
  double t4020;
  double t4021;
  double t4022;
  double t4023;
  double t4024;
  double t4025;
  double t4026;
  double t4027;
  double t4029;
  double t4030;
  double t4031;
  double t4014;
  double t4015;
  double t4016;
  double t4017;
  double t4018;
  double t4019;
  double t4028;
  double t4032;
  double t4033;
  double t4035;
  double t4036;
  double t4037;
  double t4042;
  double t4043;
  double t4044;
  double t4041;
  double t4046;
  double t4047;
  double t4051;
  double t4060;
  double t4061;
  double t4053;
  double t4063;
  double t4064;
  double t4055;
  double t3979;
  double t3982;
  double t3983;
  double t3984;
  double t3989;
  double t3991;
  double t3993;
  double t3994;
  double t3995;
  double t4083;
  double t4084;
  double t4085;
  double t4077;
  double t3999;
  double t4002;
  double t4003;
  double t4079;
  double t4082;
  double t4088;
  double t4005;
  double t4006;
  double t4007;
  double t4093;
  double t4106;
  double t4107;
  double t4097;
  double t4004;
  double t4008;
  double t4009;
  double t4102;
  double t4103;
  double t4104;
  double t4105;
  double t4108;
  double t4109;
  double t4110;
  double t4111;
  double t4112;
  double t4113;
  double t4114;
  double t4115;
  double t4116;
  double t4117;
  double t4118;
  double t4119;
  double t4120;
  double t4121;
  double t4122;
  double t4045;
  double t4048;
  double t4049;
  double t4050;
  double t4052;
  double t4054;
  double t4056;
  double t4057;
  double t4058;
  double t4149;
  double t4150;
  double t4151;
  double t4143;
  double t4062;
  double t4065;
  double t4066;
  double t4145;
  double t4148;
  double t4154;
  double t4068;
  double t4069;
  double t4070;
  double t4159;
  double t4172;
  double t4173;
  double t4163;
  double t4067;
  double t4071;
  double t4072;
  double t4168;
  double t4169;
  double t4170;
  double t4171;
  double t4174;
  double t4175;
  double t4176;
  double t4177;
  double t4178;
  double t4179;
  double t4180;
  double t4181;
  double t4182;
  double t4183;
  double t4184;
  double t4185;
  double t4186;
  double t4187;
  double t4188;
  double t4209;
  double t4211;
  double t4208;
  double t4222;
  double t4227;
  double t4229;
  double t4219;
  double t4220;
  double t4221;
  double t4223;
  double t4224;
  double t4225;
  double t4210;
  double t4212;
  double t4213;
  double t4215;
  double t4216;
  double t4217;
  double t4228;
  double t4230;
  double t4231;
  double t4233;
  double t4234;
  double t4235;
  double t4243;
  double t4244;
  double t4245;
  double t4246;
  double t4248;
  double t4249;
  double t4250;
  double t4251;
  double t4255;
  double t4256;
  double t4257;
  double t4263;
  double t4264;
  double t4265;
  double t4272;
  double t4259;
  double t4260;
  double t4261;
  double t4273;
  double t4262;
  double t4266;
  double t4267;
  double t4276;
  double t4277;
  double t4278;
  double t4295;
  double t4300;
  double t4301;
  double t4296;
  double t4297;
  double t4298;
  double t4302;
  double t4304;
  double t4305;
  double t4306;
  double t4317;
  double t4318;
  double t4319;
  double t4320;
  double t4321;
  double t4327;
  double t4328;
  double t4329;
  double t4330;
  double t4331;
  double t4333;
  double t4334;
  double t4335;
  double t4336;
  double t4340;
  double t4341;
  double t4342;
  double t4348;
  double t4349;
  double t4350;
  double t4357;
  double t4344;
  double t4345;
  double t4346;
  double t4358;
  double t4347;
  double t4351;
  double t4352;
  double t4361;
  double t4362;
  double t4363;
  double t4380;
  double t4385;
  double t4386;
  double t4381;
  double t4382;
  double t4383;
  double t4387;
  double t4389;
  double t4390;
  double t4391;
  double t4402;
  double t4403;
  double t4404;
  double t4405;
  double t4406;
  double t4412;
  t3002 = Cos(var1[3]);
  t2976 = Cos(var1[4]);
  t2989 = Sin(var1[3]);
  t3007 = Sin(var1[4]);
  t3153 = Cos(var1[2]);
  t2912 = Sin(var1[2]);
  t3154 = t3002*t2976;
  t3155 = -1.*t2989*t3007;
  t3189 = t3154 + t3155;
  t3199 = -1.*t2976*t2989;
  t3202 = -1.*t3002*t3007;
  t3224 = t3199 + t3202;
  t3194 = t3153*t3189;
  t3000 = t2976*t2989;
  t3102 = t3002*t3007;
  t3124 = t3000 + t3102;
  t3228 = -1.*t2912*t3189;
  t3227 = t3153*t3224;
  t3229 = t3227 + t3228;
  t3254 = -1.*t2912*t3224;
  t3234 = t2912*t3224;
  t3235 = t3234 + t3194;
  t3267 = -1.*t3002*t2976;
  t3276 = t2989*t3007;
  t3284 = t3267 + t3276;
  t3255 = -1.*t3153*t3189;
  t3256 = t3254 + t3255;
  t3333 = t3153*t3002;
  t3340 = -1.*t2912*t2989;
  t3341 = t3333 + t3340;
  t3330 = -1.*t3002*t2912;
  t3331 = -1.*t3153*t2989;
  t3332 = t3330 + t3331;
  t3344 = t3002*t2912;
  t3345 = t3153*t2989;
  t3346 = t3344 + t3345;
  t3348 = -1.*t3153*t3002;
  t3358 = t2912*t2989;
  t3360 = t3348 + t3358;
  t3141 = -1.*t2912*t3124;
  t3198 = t3141 + t3194;
  t3230 = 6.4*t3198*t3229;
  t3236 = -1.*t3153*t3124;
  t3237 = t3236 + t3228;
  t3253 = 3.2*t3235*t3237;
  t3260 = t3153*t3124;
  t3261 = t2912*t3189;
  t3262 = t3260 + t3261;
  t3263 = 3.2*t3256*t3262;
  t3288 = t3153*t3284;
  t3290 = t3254 + t3288;
  t3291 = 6.4*t3229*t3290;
  t3292 = -1.*t3153*t3224;
  t3293 = -1.*t2912*t3284;
  t3294 = t3292 + t3293;
  t3307 = 3.2*t3235*t3294;
  t3308 = t2912*t3284;
  t3319 = t3227 + t3308;
  t3325 = 3.2*t3256*t3319;
  t3343 = 20.4*t3332*t3341;
  t3347 = 6.8*t3346*t3341;
  t3363 = 20.4*t3332*t3360;
  t3364 = 6.8*t3346*t3360;
  t3384 = Cos(var1[5]);
  t3394 = Sin(var1[5]);
  t3397 = t3153*t3384;
  t3398 = -1.*t2912*t3394;
  t3399 = t3397 + t3398;
  t3393 = -1.*t3384*t2912;
  t3395 = -1.*t3153*t3394;
  t3396 = t3393 + t3395;
  t3406 = t3384*t2912;
  t3412 = t3153*t3394;
  t3426 = t3406 + t3412;
  t3434 = -1.*t3153*t3384;
  t3435 = t2912*t3394;
  t3436 = t3434 + t3435;
  t3439 = Cos(var1[6]);
  t3482 = Sin(var1[6]);
  t3440 = -1.*t3439*t3394;
  t3496 = -1.*t3384*t3482;
  t3497 = t3440 + t3496;
  t3499 = t3384*t3439;
  t3520 = -1.*t3394*t3482;
  t3524 = t3499 + t3520;
  t3562 = t3439*t3394;
  t3565 = t3384*t3482;
  t3566 = t3562 + t3565;
  t3559 = -1.*t2912*t3524;
  t3572 = t3153*t3524;
  t3525 = -1.*t3153*t3524;
  t3582 = t2912*t3524;
  t3567 = -1.*t2912*t3566;
  t3573 = t3567 + t3572;
  t3545 = t3153*t3497;
  t3560 = t3545 + t3559;
  t3578 = t2912*t3497;
  t3580 = t3578 + t3572;
  t3575 = -1.*t3153*t3566;
  t3576 = t3575 + t3559;
  t3498 = -1.*t2912*t3497;
  t3526 = t3498 + t3525;
  t3609 = t3153*t3566;
  t3610 = t3609 + t3582;
  t3581 = -1.*t3153*t3497;
  t3617 = -1.*t3384*t3439;
  t3618 = t3394*t3482;
  t3619 = t3617 + t3618;
  t3400 = 20.4*t3396*t3399;
  t3432 = 6.8*t3426*t3399;
  t3437 = 20.4*t3396*t3436;
  t3438 = 6.8*t3426*t3436;
  t3614 = 6.4*t3573*t3560;
  t3615 = 3.2*t3580*t3576;
  t3616 = 3.2*t3526*t3610;
  t3620 = t3153*t3619;
  t3621 = t3498 + t3620;
  t3622 = 6.4*t3560*t3621;
  t3623 = -1.*t2912*t3619;
  t3624 = t3581 + t3623;
  t3625 = 3.2*t3580*t3624;
  t3626 = t2912*t3619;
  t3627 = t3545 + t3626;
  t3628 = 3.2*t3526*t3627;
  t3365 = t3343 + t3347 + t3363 + t3364 + t3230 + t3253 + t3263 + t3291 + t3307 + t3325;
  t3381 = t2912*t3124;
  t3643 = 6.4*t3235*t3229;
  t3644 = 3.2*t3262*t3290;
  t3646 = t3381 + t3288;
  t3647 = 3.2*t3229*t3646;
  t3648 = t3260 + t3293;
  t3650 = 3.2*t3235*t3648;
  t3651 = 3.2*t3198*t3319;
  t3652 = 6.4*t3290*t3319;
  t3326 = t3230 + t3253 + t3263 + t3291 + t3307 + t3325;
  t3653 = t3643 + t3644 + t3647 + t3650 + t3651 + t3652;
  t3675 = -0.5*var2[4]*t3653;
  t3633 = t3400 + t3432 + t3437 + t3438 + t3614 + t3615 + t3616 + t3622 + t3625 + t3628;
  t3586 = t2912*t3566;
  t3685 = 6.4*t3580*t3560;
  t3686 = 3.2*t3610*t3621;
  t3687 = t3586 + t3620;
  t3688 = 3.2*t3560*t3687;
  t3689 = t3609 + t3623;
  t3690 = 3.2*t3580*t3689;
  t3691 = 3.2*t3573*t3627;
  t3692 = 6.4*t3621*t3627;
  t3631 = t3614 + t3615 + t3616 + t3622 + t3625 + t3628;
  t3693 = t3685 + t3686 + t3688 + t3690 + t3691 + t3692;
  t3700 = -0.5*var2[6]*t3693;
  t3727 = 3.2*t3235*t3198;
  t3728 = 3.2*t3229*t3262;
  t3734 = 3.2*t3235*t3290;
  t3738 = 3.2*t3229*t3319;
  t3744 = Power(t3332,2);
  t3754 = 6.8*t3744;
  t3755 = 6.8*t3332*t3346;
  t3756 = Power(t3341,2);
  t3757 = 6.8*t3756;
  t3760 = 6.8*t3341*t3360;
  t3772 = Power(t3396,2);
  t3773 = 6.8*t3772;
  t3774 = 6.8*t3396*t3426;
  t3775 = Power(t3399,2);
  t3776 = 6.8*t3775;
  t3777 = 6.8*t3399*t3436;
  t3796 = 3.2*t3580*t3573;
  t3797 = 3.2*t3560*t3610;
  t3798 = 3.2*t3580*t3621;
  t3799 = 3.2*t3560*t3627;
  t3766 = 3.2*t3256*t3235;
  t3767 = Power(t3198,2);
  t3768 = 3.2*t3767;
  t3769 = Power(t3229,2);
  t3770 = 3.2*t3769;
  t3771 = 3.2*t3237*t3262;
  t3778 = 3.2*t3526*t3580;
  t3779 = Power(t3573,2);
  t3780 = 3.2*t3779;
  t3785 = Power(t3560,2);
  t3789 = 3.2*t3785;
  t3793 = 3.2*t3576*t3610;
  t3794 = t3754 + t3755 + t3757 + t3760 + t3766 + t3768 + t3770 + t3771 + t3773 + t3774 + t3776 + t3777 + t3778 + t3780 + t3789 + t3793;
  t3761 = t3754 + t3755 + t3757 + t3760 + t3727 + t3728 + t3734 + t3738;
  t3739 = t3727 + t3728 + t3734 + t3738;
  t3802 = t3773 + t3774 + t3776 + t3777 + t3796 + t3797 + t3798 + t3799;
  t3800 = t3796 + t3797 + t3798 + t3799;
  t3824 = 6.4*t3256*t3198;
  t3825 = 6.4*t3229*t3237;
  t3829 = 6.4*t3256*t3290;
  t3839 = 6.4*t3229*t3294;
  t3842 = 13.6*t3744;
  t3845 = 13.6*t3332*t3346;
  t3846 = 13.6*t3341*t3360;
  t3850 = Power(t3360,2);
  t3851 = 13.6*t3850;
  t3382 = t3381 + t3255;
  t3379 = t3292 + t3261;
  t3587 = t3586 + t3525;
  t3584 = t3581 + t3582;
  t3860 = 13.6*t3772;
  t3861 = 13.6*t3396*t3426;
  t3862 = 13.6*t3399*t3436;
  t3863 = Power(t3436,2);
  t3864 = 13.6*t3863;
  t3883 = 6.4*t3526*t3573;
  t3884 = 6.4*t3560*t3576;
  t3885 = 6.4*t3526*t3621;
  t3886 = 6.4*t3560*t3624;
  t3852 = t3842 + t3845 + t3846 + t3851 + t3824 + t3825 + t3829 + t3839;
  t3900 = 6.4*t3769;
  t3901 = 6.4*t3198*t3290;
  t3902 = Power(t3290,2);
  t3903 = 6.4*t3902;
  t3904 = 6.4*t3229*t3648;
  t3840 = t3824 + t3825 + t3829 + t3839;
  t3905 = t3900 + t3901 + t3903 + t3904;
  t3906 = -0.5*var2[4]*t3905;
  t3894 = t3860 + t3861 + t3862 + t3864 + t3883 + t3884 + t3885 + t3886;
  t3916 = 6.4*t3785;
  t3917 = 6.4*t3573*t3621;
  t3918 = Power(t3621,2);
  t3919 = 6.4*t3918;
  t3920 = 6.4*t3560*t3689;
  t3887 = t3883 + t3884 + t3885 + t3886;
  t3921 = t3916 + t3917 + t3919 + t3920;
  t3922 = -0.5*var2[6]*t3921;
  t3933 = 13.6*t3332*t3341;
  t3934 = 13.6*t3332*t3360;
  t3939 = 13.6*t3396*t3399;
  t3940 = 13.6*t3396*t3436;
  t3937 = 6.4*t3256*t3229;
  t3938 = 6.4*t3198*t3237;
  t3941 = 6.4*t3526*t3560;
  t3942 = 6.4*t3573*t3576;
  t3943 = t3933 + t3934 + t3937 + t3938 + t3939 + t3940 + t3941 + t3942;
  t3935 = t3933 + t3934 + t3230 + t3291;
  t3931 = t3230 + t3291;
  t3947 = t3939 + t3940 + t3614 + t3622;
  t3945 = t3614 + t3622;
  t3961 = -1.*t2976;
  t3962 = 1. + t3961;
  t3963 = 0.4*t3962;
  t3964 = 0.64*t2976;
  t3965 = t3963 + t3964;
  t3966 = t3965*t2989;
  t3967 = 0.24*t3002*t3007;
  t3968 = t3966 + t3967;
  t3970 = t3002*t3965;
  t3971 = -0.24*t2989*t3007;
  t3972 = t3970 + t3971;
  t3976 = -1.*t3965*t2989;
  t3977 = -0.24*t3002*t3007;
  t3978 = t3976 + t3977;
  t3969 = -1.*t3968*t3189;
  t3973 = -1.*t3224*t3972;
  t3974 = t3969 + t3973;
  t3975 = 3.2*t3256*t3974;
  t3980 = t3968*t3189;
  t3981 = t3224*t3972;
  t3985 = t3968*t3124;
  t3986 = t3189*t3972;
  t3987 = t3985 + t3986;
  t3988 = 3.2*t3987*t3294;
  t3997 = -0.24*t2976*t2989;
  t3998 = t3997 + t3977;
  t3990 = -1.*t3224*t3968;
  t4000 = 0.24*t3002*t2976;
  t4001 = t4000 + t3971;
  t3992 = -1.*t3972*t3284;
  t3955 = Power(t3002,2);
  t3956 = 0.11*t3955;
  t3957 = Power(t2989,2);
  t3958 = 0.11*t3957;
  t3959 = t3956 + t3958;
  t3960 = 6.8*t3346*t3959;
  t4020 = -1.*t3439;
  t4021 = 1. + t4020;
  t4022 = 0.4*t4021;
  t4023 = 0.64*t3439;
  t4024 = t4022 + t4023;
  t4025 = t4024*t3394;
  t4026 = 0.24*t3384*t3482;
  t4027 = t4025 + t4026;
  t4029 = t3384*t4024;
  t4030 = -0.24*t3394*t3482;
  t4031 = t4029 + t4030;
  t4014 = Power(t3384,2);
  t4015 = 0.11*t4014;
  t4016 = Power(t3394,2);
  t4017 = 0.11*t4016;
  t4018 = t4015 + t4017;
  t4019 = 6.8*t3426*t4018;
  t4028 = -1.*t4027*t3524;
  t4032 = -1.*t3497*t4031;
  t4033 = t4028 + t4032;
  t4035 = t4027*t3566;
  t4036 = t3524*t4031;
  t4037 = t4035 + t4036;
  t4042 = -1.*t4024*t3394;
  t4043 = -0.24*t3384*t3482;
  t4044 = t4042 + t4043;
  t4041 = 3.2*t3526*t4033;
  t4046 = t4027*t3524;
  t4047 = t3497*t4031;
  t4051 = 3.2*t4037*t3624;
  t4060 = -0.24*t3439*t3394;
  t4061 = t4060 + t4043;
  t4053 = -1.*t3497*t4027;
  t4063 = 0.24*t3384*t3439;
  t4064 = t4063 + t4030;
  t4055 = -1.*t4031*t3619;
  t3979 = t3978*t3189;
  t3982 = t3124*t3972;
  t3983 = t3979 + t3980 + t3981 + t3982;
  t3984 = 3.2*t3256*t3983;
  t3989 = -1.*t3224*t3978;
  t3991 = -1.*t3189*t3972;
  t3993 = t3989 + t3990 + t3991 + t3992;
  t3994 = 3.2*t3237*t3993;
  t3995 = t3960 + t3975 + t3984 + t3988 + t3994;
  t4083 = -1.*t3002*t3965;
  t4084 = 0.24*t2989*t3007;
  t4085 = t4083 + t4084;
  t4077 = 3.2*t3974*t3290;
  t3999 = t3998*t3189;
  t4002 = t3124*t4001;
  t4003 = t3999 + t3980 + t3981 + t4002;
  t4079 = 3.2*t3987*t3648;
  t4082 = -1.*t3124*t3972;
  t4088 = -1.*t3968*t3284;
  t4005 = -1.*t3224*t3998;
  t4006 = -1.*t3189*t4001;
  t4007 = t4005 + t3990 + t4006 + t3992;
  t4093 = t3224*t3968;
  t4106 = -0.24*t3002*t2976;
  t4107 = t4106 + t4084;
  t4097 = t3972*t3284;
  t4004 = 3.2*t3256*t4003;
  t4008 = 3.2*t3237*t4007;
  t4009 = t3975 + t4004 + t3988 + t4008;
  t4102 = 3.2*t3983*t3290;
  t4103 = 3.2*t4003*t3290;
  t4104 = -1.*t3998*t3189;
  t4105 = -1.*t3224*t4001;
  t4108 = -1.*t3224*t4107;
  t4109 = -1.*t3978*t3284;
  t4110 = -1.*t3998*t3284;
  t4111 = t4104 + t3973 + t4082 + t4105 + t4108 + t4109 + t4110 + t4088;
  t4112 = 3.2*t3198*t4111;
  t4113 = 3.2*t3229*t3993;
  t4114 = 3.2*t3229*t4007;
  t4115 = t3224*t3978;
  t4116 = t3224*t3998;
  t4117 = t3998*t3124;
  t4118 = t3189*t4001;
  t4119 = t3189*t4107;
  t4120 = t4115 + t4116 + t4093 + t4117 + t3986 + t4118 + t4119 + t4097;
  t4121 = 3.2*t3229*t4120;
  t4122 = t4077 + t4102 + t4103 + t4079 + t4112 + t4113 + t4114 + t4121;
  t4045 = t4044*t3524;
  t4048 = t3566*t4031;
  t4049 = t4045 + t4046 + t4047 + t4048;
  t4050 = 3.2*t3526*t4049;
  t4052 = -1.*t3497*t4044;
  t4054 = -1.*t3524*t4031;
  t4056 = t4052 + t4053 + t4054 + t4055;
  t4057 = 3.2*t3576*t4056;
  t4058 = t4019 + t4041 + t4050 + t4051 + t4057;
  t4149 = -1.*t3384*t4024;
  t4150 = 0.24*t3394*t3482;
  t4151 = t4149 + t4150;
  t4143 = 3.2*t4033*t3621;
  t4062 = t4061*t3524;
  t4065 = t3566*t4064;
  t4066 = t4062 + t4046 + t4047 + t4065;
  t4145 = 3.2*t4037*t3689;
  t4148 = -1.*t3566*t4031;
  t4154 = -1.*t4027*t3619;
  t4068 = -1.*t3497*t4061;
  t4069 = -1.*t3524*t4064;
  t4070 = t4068 + t4053 + t4069 + t4055;
  t4159 = t3497*t4027;
  t4172 = -0.24*t3384*t3439;
  t4173 = t4172 + t4150;
  t4163 = t4031*t3619;
  t4067 = 3.2*t3526*t4066;
  t4071 = 3.2*t3576*t4070;
  t4072 = t4041 + t4067 + t4051 + t4071;
  t4168 = 3.2*t4049*t3621;
  t4169 = 3.2*t4066*t3621;
  t4170 = -1.*t4061*t3524;
  t4171 = -1.*t3497*t4064;
  t4174 = -1.*t3497*t4173;
  t4175 = -1.*t4044*t3619;
  t4176 = -1.*t4061*t3619;
  t4177 = t4170 + t4032 + t4148 + t4171 + t4174 + t4175 + t4176 + t4154;
  t4178 = 3.2*t3573*t4177;
  t4179 = 3.2*t3560*t4056;
  t4180 = 3.2*t3560*t4070;
  t4181 = t3497*t4044;
  t4182 = t3497*t4061;
  t4183 = t4061*t3566;
  t4184 = t3524*t4064;
  t4185 = t3524*t4173;
  t4186 = t4181 + t4182 + t4159 + t4183 + t4036 + t4184 + t4185 + t4163;
  t4187 = 3.2*t3560*t4186;
  t4188 = t4143 + t4168 + t4169 + t4145 + t4178 + t4179 + t4180 + t4187;
  t4209 = 3.2*t3229*t3974;
  t4211 = 3.2*t3987*t3290;
  t4208 = 6.8*t3360*t3959;
  t4222 = 6.8*t3436*t4018;
  t4227 = 3.2*t3560*t4033;
  t4229 = 3.2*t4037*t3621;
  t4219 = -2.88*t3153;
  t4220 = 3.2*t3237*t3974;
  t4221 = 3.2*t3256*t3987;
  t4223 = 3.2*t3576*t4033;
  t4224 = 3.2*t3526*t4037;
  t4225 = t4219 + t4208 + t4220 + t4221 + t4222 + t4223 + t4224;
  t4210 = 3.2*t3229*t3983;
  t4212 = 3.2*t3198*t3993;
  t4213 = t4208 + t4209 + t4210 + t4211 + t4212;
  t4215 = 3.2*t3229*t4003;
  t4216 = 3.2*t3198*t4007;
  t4217 = t4209 + t4215 + t4211 + t4216;
  t4228 = 3.2*t3560*t4049;
  t4230 = 3.2*t3573*t4056;
  t4231 = t4222 + t4227 + t4228 + t4229 + t4230;
  t4233 = 3.2*t3560*t4066;
  t4234 = 3.2*t3573*t4070;
  t4235 = t4227 + t4233 + t4229 + t4234;
  t4243 = 0.748*t3346;
  t4244 = t3965*t3007;
  t4245 = -0.24*t2976*t3007;
  t4246 = t4244 + t4245;
  t4248 = t3965*t2976;
  t4249 = Power(t3007,2);
  t4250 = 0.24*t4249;
  t4251 = t4248 + t4250;
  t4255 = 3.2*t4246*t3256;
  t4256 = 3.2*t4251*t3294;
  t4257 = t4243 + t4255 + t4256;
  t4263 = Power(t2976,2);
  t4264 = -0.24*t4263;
  t4265 = t4248 + t4264;
  t4272 = 3.2*t4246*t3290;
  t4259 = -1.*t3965*t3007;
  t4260 = 0.24*t2976*t3007;
  t4261 = t4259 + t4260;
  t4273 = 3.2*t4251*t3648;
  t4262 = 3.2*t4261*t3256;
  t4266 = 3.2*t4265*t3237;
  t4267 = t4255 + t4262 + t4266 + t4256;
  t4276 = 3.2*t4265*t3229;
  t4277 = 3.2*t4261*t3290;
  t4278 = t4276 + t4272 + t4277 + t4273;
  t4295 = 0.748*t3360;
  t4300 = 3.2*t4246*t3229;
  t4301 = 3.2*t4251*t3290;
  t4296 = 3.2*t4251*t3256;
  t4297 = 3.2*t4246*t3237;
  t4298 = t4295 + t4296 + t4297;
  t4302 = t4295 + t4300 + t4301;
  t4304 = 3.2*t4265*t3198;
  t4305 = 3.2*t4261*t3229;
  t4306 = t4304 + t4300 + t4305 + t4301;
  t4317 = -0.384*var2[2]*t3294;
  t4318 = -0.384*var2[3]*t3648;
  t4319 = -0.384*var2[4]*t3648;
  t4320 = t4317 + t4318 + t4319;
  t4321 = var2[1]*t4320;
  t4327 = -0.384*var2[1]*t3290;
  t4328 = 0.748*t3426;
  t4329 = t4024*t3482;
  t4330 = -0.24*t3439*t3482;
  t4331 = t4329 + t4330;
  t4333 = t4024*t3439;
  t4334 = Power(t3482,2);
  t4335 = 0.24*t4334;
  t4336 = t4333 + t4335;
  t4340 = 3.2*t4331*t3526;
  t4341 = 3.2*t4336*t3624;
  t4342 = t4328 + t4340 + t4341;
  t4348 = Power(t3439,2);
  t4349 = -0.24*t4348;
  t4350 = t4333 + t4349;
  t4357 = 3.2*t4331*t3621;
  t4344 = -1.*t4024*t3482;
  t4345 = 0.24*t3439*t3482;
  t4346 = t4344 + t4345;
  t4358 = 3.2*t4336*t3689;
  t4347 = 3.2*t4346*t3526;
  t4351 = 3.2*t4350*t3576;
  t4352 = t4340 + t4347 + t4351 + t4341;
  t4361 = 3.2*t4350*t3560;
  t4362 = 3.2*t4346*t3621;
  t4363 = t4361 + t4357 + t4362 + t4358;
  t4380 = 0.748*t3436;
  t4385 = 3.2*t4331*t3560;
  t4386 = 3.2*t4336*t3621;
  t4381 = 3.2*t4336*t3526;
  t4382 = 3.2*t4331*t3576;
  t4383 = t4380 + t4381 + t4382;
  t4387 = t4380 + t4385 + t4386;
  t4389 = 3.2*t4350*t3573;
  t4390 = 3.2*t4346*t3560;
  t4391 = t4389 + t4385 + t4390 + t4386;
  t4402 = -0.384*var2[2]*t3624;
  t4403 = -0.384*var2[5]*t3689;
  t4404 = -0.384*var2[6]*t3689;
  t4405 = t4402 + t4403 + t4404;
  t4406 = var2[1]*t4405;
  t4412 = -0.384*var2[1]*t3621;
  p_output1[0]=var2[1]*(-0.5*(9.6*t3198*t3237 + 9.6*t3229*t3256 + t3343 + t3347 + t3363 + t3364 + 3.2*t3235*t3379 + 3.2*t3262*t3382 + t3400 + t3432 + t3437 + t3438 + 9.6*t3526*t3560 + 9.6*t3573*t3576 + 3.2*t3580*t3584 + 3.2*t3587*t3610)*var2[2] - 0.5*t3365*var2[3] - 0.5*t3326*var2[4] - 0.5*t3633*var2[5] - 0.5*t3631*var2[6]);
  p_output1[1]=var2[1]*(t3675 - 0.5*t3365*var2[2] - 0.5*(t3343 + t3347 + t3363 + t3364 + t3643 + t3644 + t3647 + t3650 + t3651 + t3652)*var2[3]);
  p_output1[2]=var2[1]*(t3675 - 0.5*t3326*var2[2] - 0.5*t3653*var2[3]);
  p_output1[3]=var2[1]*(t3700 - 0.5*t3633*var2[2] - 0.5*(t3400 + t3432 + t3437 + t3438 + t3685 + t3686 + t3688 + t3690 + t3691 + t3692)*var2[5]);
  p_output1[4]=var2[1]*(t3700 - 0.5*t3631*var2[2] - 0.5*t3693*var2[5]);
  p_output1[5]=-0.5*t3794*var2[2] - 0.5*t3761*var2[3] - 0.5*t3739*var2[4] - 0.5*t3802*var2[5] - 0.5*t3800*var2[6];
  p_output1[6]=-0.5*t3794*var2[1];
  p_output1[7]=-0.5*t3761*var2[1];
  p_output1[8]=-0.5*t3739*var2[1];
  p_output1[9]=-0.5*t3802*var2[1];
  p_output1[10]=-0.5*t3800*var2[1];
  p_output1[11]=var2[1]*(-0.5*(6.4*Power(t3237,2) + 6.4*Power(t3256,2) + 6.4*t3229*t3379 + 6.4*t3198*t3382 + 6.4*Power(t3526,2) + 6.4*Power(t3576,2) + 6.4*t3560*t3584 + 6.4*t3573*t3587 + t3842 + t3845 + t3846 + t3851 + t3860 + t3861 + t3862 + t3864)*var2[2] - 0.5*t3852*var2[3] - 0.5*t3840*var2[4] - 0.5*t3894*var2[5] - 0.5*t3887*var2[6]);
  p_output1[12]=var2[1]*(t3906 - 0.5*t3852*var2[2] - 0.5*(t3842 + t3845 + t3846 + t3851 + t3900 + t3901 + t3903 + t3904)*var2[3]);
  p_output1[13]=var2[1]*(t3906 - 0.5*t3840*var2[2] - 0.5*t3905*var2[3]);
  p_output1[14]=var2[1]*(t3922 - 0.5*t3894*var2[2] - 0.5*(t3860 + t3861 + t3862 + t3864 + t3916 + t3917 + t3919 + t3920)*var2[5]);
  p_output1[15]=var2[1]*(t3922 - 0.5*t3887*var2[2] - 0.5*t3921*var2[5]);
  p_output1[16]=-0.5*t3943*var2[2] - 0.5*t3935*var2[3] - 0.5*t3931*var2[4] - 0.5*t3947*var2[5] - 0.5*t3945*var2[6];
  p_output1[17]=-0.5*t3943*var2[1];
  p_output1[18]=-0.5*t3935*var2[1];
  p_output1[19]=-0.5*t3931*var2[1];
  p_output1[20]=-0.5*t3947*var2[1];
  p_output1[21]=-0.5*t3945*var2[1];
  p_output1[22]=var2[1]*(-0.5*(2.88*t2912 + t3960 + 3.2*t3382*t3974 + 3.2*t3379*t3987 + t4019 + 3.2*t3587*t4033 + 3.2*t3584*t4037)*var2[2] - 0.5*t3995*var2[3] - 0.5*t4009*var2[4] - 0.5*t4058*var2[5] - 0.5*t4072*var2[6]);
  p_output1[23]=var2[1]*(-0.5*t3995*var2[2] - 0.5*(t3960 + 6.4*t3290*t3983 + 6.4*t3229*t3993 + t4077 + t4079 + 3.2*t3198*(-2.*t3224*t3972 - 1.*t3189*t3978 - 2.*t3284*t3978 + t4082 - 1.*t3224*t4085 + t4088) + 3.2*t3229*(2.*t3189*t3972 + t3124*t3978 + 2.*t3224*t3978 + t3189*t4085 + t4093 + t4097))*var2[3] - 0.5*t4122*var2[4]);
  p_output1[24]=var2[1]*(-0.5*t4009*var2[2] - 0.5*t4122*var2[3] - 0.5*(6.4*t3290*t4003 + 6.4*t3229*t4007 + t4077 + t4079 + 3.2*t3198*(-2.*t3284*t3998 - 2.*t3224*t4001 + t4082 + t4088 + t4104 + t4108) + 3.2*t3229*(2.*t3224*t3998 + 2.*t3189*t4001 + t4093 + t4097 + t4117 + t4119))*var2[4]);
  p_output1[25]=var2[1]*(-0.5*t4058*var2[2] - 0.5*(t4019 + 6.4*t3621*t4049 + 6.4*t3560*t4056 + t4143 + t4145 + 3.2*t3573*(-2.*t3497*t4031 - 1.*t3524*t4044 - 2.*t3619*t4044 + t4148 - 1.*t3497*t4151 + t4154) + 3.2*t3560*(2.*t3524*t4031 + 2.*t3497*t4044 + t3566*t4044 + t3524*t4151 + t4159 + t4163))*var2[5] - 0.5*t4188*var2[6]);
  p_output1[26]=var2[1]*(-0.5*t4072*var2[2] - 0.5*t4188*var2[5] - 0.5*(6.4*t3621*t4066 + 6.4*t3560*t4070 + t4143 + t4145 + 3.2*t3573*(-2.*t3619*t4061 - 2.*t3497*t4064 + t4148 + t4154 + t4170 + t4174) + 3.2*t3560*(2.*t3497*t4061 + 2.*t3524*t4064 + t4159 + t4163 + t4183 + t4185))*var2[6]);
  p_output1[27]=-0.5*t4225*var2[2] - 0.5*t4213*var2[3] - 0.5*t4217*var2[4] - 0.5*t4231*var2[5] - 0.5*t4235*var2[6];
  p_output1[28]=-0.5*t4225*var2[1];
  p_output1[29]=-0.5*t4213*var2[1];
  p_output1[30]=-0.5*t4217*var2[1];
  p_output1[31]=-0.5*t4231*var2[1];
  p_output1[32]=-0.5*t4235*var2[1];
  p_output1[33]=var2[1]*(-0.5*(t4243 + 3.2*t3382*t4246 + 3.2*t3379*t4251)*var2[2] - 0.5*t4257*var2[3] - 0.5*t4267*var2[4]);
  p_output1[34]=var2[1]*(-0.5*t4257*var2[2] - 0.5*(t4243 + t4272 + t4273)*var2[3] - 0.5*t4278*var2[4]);
  p_output1[35]=var2[1]*(-0.5*t4267*var2[2] - 0.5*t4278*var2[3] - 0.5*(3.2*t3198*t4261 + 6.4*t3290*t4261 + 3.2*t3229*(-1.*t2976*t3965 + 0.24*t4263) + 6.4*t3229*t4265 + t4272 + t4273)*var2[4]);
  p_output1[36]=-0.5*t4298*var2[2] - 0.5*t4302*var2[3] - 0.5*t4306*var2[4];
  p_output1[37]=-0.5*t4298*var2[1];
  p_output1[38]=-0.5*t4302*var2[1];
  p_output1[39]=-0.5*t4306*var2[1];
  p_output1[40]=var2[1]*(-0.384*t3379*var2[2] - 0.384*t3294*var2[3] - 0.384*t3294*var2[4]);
  p_output1[41]=t4321;
  p_output1[42]=t4321;
  p_output1[43]=-0.384*t3256*var2[2] - 0.384*t3290*var2[3] - 0.384*t3290*var2[4];
  p_output1[44]=-0.384*t3256*var2[1];
  p_output1[45]=t4327;
  p_output1[46]=t4327;
  p_output1[47]=var2[1]*(-0.5*(t4328 + 3.2*t3587*t4331 + 3.2*t3584*t4336)*var2[2] - 0.5*t4342*var2[5] - 0.5*t4352*var2[6]);
  p_output1[48]=var2[1]*(-0.5*t4342*var2[2] - 0.5*(t4328 + t4357 + t4358)*var2[5] - 0.5*t4363*var2[6]);
  p_output1[49]=var2[1]*(-0.5*t4352*var2[2] - 0.5*t4363*var2[5] - 0.5*(3.2*t3573*t4346 + 6.4*t3621*t4346 + 3.2*t3560*(-1.*t3439*t4024 + 0.24*t4348) + 6.4*t3560*t4350 + t4357 + t4358)*var2[6]);
  p_output1[50]=-0.5*t4383*var2[2] - 0.5*t4387*var2[5] - 0.5*t4391*var2[6];
  p_output1[51]=-0.5*t4383*var2[1];
  p_output1[52]=-0.5*t4387*var2[1];
  p_output1[53]=-0.5*t4391*var2[1];
  p_output1[54]=var2[1]*(-0.384*t3584*var2[2] - 0.384*t3624*var2[5] - 0.384*t3624*var2[6]);
  p_output1[55]=t4406;
  p_output1[56]=t4406;
  p_output1[57]=-0.384*t3526*var2[2] - 0.384*t3621*var2[5] - 0.384*t3621*var2[6];
  p_output1[58]=-0.384*t3526*var2[1];
  p_output1[59]=t4412;
  p_output1[60]=t4412;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 61, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec2_five_link_walker.hh"

namespace RightStance
{

void J_Ce1_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
