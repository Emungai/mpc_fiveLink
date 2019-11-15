/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:39:28 GMT-05:00
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
  double t3324;
  double t3375;
  double t2790;
  double t3374;
  double t3629;
  double t3636;
  double t3674;
  double t3675;
  double t3676;
  double t3635;
  double t3638;
  double t3639;
  double t3679;
  double t3680;
  double t3681;
  double t3701;
  double t3709;
  double t3673;
  double t3677;
  double t3678;
  double t3715;
  double t3719;
  double t3720;
  double t3722;
  double t3723;
  double t3737;
  double t3820;
  double t3838;
  double t3850;
  double t3805;
  double t3806;
  double t3807;
  double t3867;
  double t3871;
  double t3875;
  double t3721;
  double t3762;
  double t3792;
  double t3798;
  double t3809;
  double t3816;
  double t3854;
  double t3855;
  double t3856;
  double t3862;
  double t3876;
  double t3877;
  double t3878;
  double t3879;
  double t3890;
  double t3892;
  double t3909;
  double t3910;
  double t3894;
  double t3912;
  double t3920;
  double t3904;
  double t3373;
  double t3377;
  double t3380;
  double t3558;
  double t3574;
  double t3582;
  double t3608;
  double t3609;
  double t3610;
  double t3950;
  double t3993;
  double t4056;
  double t4071;
  double t4077;
  double t4078;
  double t4083;
  double t4087;
  double t4088;
  double t4089;
  double t4091;
  double t4092;
  double t4098;
  double t4120;
  double t4121;
  double t4093;
  double t4095;
  double t4096;
  double t4070;
  double t4072;
  double t4073;
  double t4122;
  double t4123;
  double t4124;
  double t3951;
  double t4007;
  double t4008;
  double t4009;
  double t4010;
  double t4031;
  double t4035;
  double t4036;
  double t4037;
  double t4084;
  double t4097;
  double t4125;
  double t4126;
  double t4137;
  double t4138;
  double t4131;
  double t4132;
  double t4133;
  double t4128;
  double t4141;
  double t4143;
  double t4144;
  double t4157;
  double t4158;
  double t4159;
  double t4139;
  double t4150;
  double t4152;
  double t4161;
  double t4162;
  double t4163;
  double t4164;
  double t4186;
  double t4187;
  double t4196;
  double t4197;
  double t4189;
  double t4199;
  double t4200;
  double t4191;
  double t3808;
  double t3851;
  double t3852;
  double t3853;
  double t3893;
  double t3896;
  double t3905;
  double t3906;
  double t3907;
  double t4244;
  double t4249;
  double t4283;
  double t4284;
  double t4272;
  double t4276;
  double t4277;
  double t4237;
  double t4238;
  double t4239;
  double t4250;
  double t3911;
  double t3921;
  double t3922;
  double t4255;
  double t4265;
  double t4266;
  double t4271;
  double t4280;
  double t3924;
  double t3925;
  double t3926;
  double t4287;
  double t4310;
  double t4311;
  double t4291;
  double t3923;
  double t3927;
  double t3929;
  double t4306;
  double t4307;
  double t4308;
  double t4309;
  double t4312;
  double t4313;
  double t4319;
  double t4320;
  double t4321;
  double t4322;
  double t4323;
  double t4329;
  double t4334;
  double t4335;
  double t4336;
  double t4340;
  double t4350;
  double t4351;
  double t4352;
  double t4149;
  double t4153;
  double t4154;
  double t4155;
  double t4188;
  double t4190;
  double t4192;
  double t4193;
  double t4194;
  double t4391;
  double t4392;
  double t4415;
  double t4416;
  double t4406;
  double t4407;
  double t4408;
  double t4385;
  double t4389;
  double t4390;
  double t4393;
  double t4198;
  double t4201;
  double t4202;
  double t4395;
  double t4396;
  double t4397;
  double t4405;
  double t4412;
  double t4204;
  double t4211;
  double t4215;
  double t4419;
  double t4432;
  double t4433;
  double t4423;
  double t4203;
  double t4223;
  double t4229;
  double t4428;
  double t4429;
  double t4430;
  double t4431;
  double t4434;
  double t4435;
  double t4436;
  double t4437;
  double t4438;
  double t4439;
  double t4440;
  double t4441;
  double t4442;
  double t4443;
  double t4444;
  double t4445;
  double t4446;
  double t4447;
  double t4448;
  double t4472;
  double t4474;
  double t4468;
  double t4469;
  double t4470;
  double t4471;
  double t4485;
  double t4486;
  double t4487;
  double t4488;
  double t4493;
  double t4495;
  double t4473;
  double t4475;
  double t4476;
  double t4478;
  double t4479;
  double t4480;
  double t4494;
  double t4496;
  double t4497;
  double t4499;
  double t4500;
  double t4501;
  double t3947;
  double t3948;
  double t3943;
  double t3945;
  double t4512;
  double t4514;
  double t4515;
  double t4516;
  double t4517;
  double t4508;
  double t4509;
  double t4510;
  double t4511;
  double t4129;
  double t4530;
  double t4531;
  double t4532;
  double t4533;
  double t4130;
  double t4536;
  double t4075;
  double t4086;
  double t4541;
  double t4543;
  double t4544;
  double t4545;
  double t4513;
  double t4518;
  double t4519;
  double t4267;
  double t4268;
  double t4278;
  double t4279;
  double t4281;
  double t4286;
  double t4288;
  double t4289;
  double t4290;
  double t4296;
  double t4556;
  double t4558;
  double t4559;
  double t4521;
  double t4522;
  double t4523;
  double t4565;
  double t4566;
  double t4567;
  double t4568;
  double t4569;
  double t4570;
  double t4571;
  double t4364;
  double t4365;
  double t4366;
  double t4369;
  double t4370;
  double t4371;
  double t4542;
  double t4546;
  double t4547;
  double t4398;
  double t4404;
  double t4410;
  double t4411;
  double t4413;
  double t4418;
  double t4420;
  double t4421;
  double t4422;
  double t4424;
  double t4586;
  double t4588;
  double t4589;
  double t4549;
  double t4550;
  double t4551;
  double t4595;
  double t4596;
  double t4597;
  double t4598;
  double t4599;
  double t4600;
  double t4601;
  double t4455;
  double t4456;
  double t4457;
  double t4460;
  double t4461;
  double t4462;
  double t3908;
  double t3933;
  double t3941;
  double t3946;
  double t3949;
  double t4127;
  double t4134;
  double t4135;
  double t4195;
  double t4233;
  double t4236;
  double t4361;
  double t4381;
  double t4452;
  double t4625;
  double t4626;
  double t4627;
  double t4628;
  double t4629;
  double t4652;
  double t4653;
  double t4654;
  double t4655;
  double t4656;
  double t4671;
  double t4672;
  double t4673;
  double t4675;
  double t4676;
  double t4677;
  double t4679;
  double t4680;
  double t4681;
  double t4683;
  double t4684;
  double t4685;
  double t4692;
  double t4693;
  double t4694;
  double t4696;
  double t4697;
  double t4698;
  double t4699;
  double t4703;
  double t4704;
  double t4705;
  double t4706;
  double t4707;
  double t4708;
  double t4709;
  double t4710;
  double t4711;
  double t4712;
  double t4713;
  double t4731;
  double t4732;
  double t4733;
  double t4735;
  double t4736;
  double t4737;
  double t4738;
  double t4739;
  double t4757;
  double t4758;
  double t4759;
  double t4761;
  double t4762;
  double t4763;
  double t4764;
  double t4768;
  double t4769;
  double t4770;
  double t4771;
  double t4772;
  double t4773;
  double t4774;
  double t4775;
  double t4776;
  double t4777;
  double t4778;
  double t4796;
  double t4797;
  double t4798;
  double t4800;
  double t4801;
  double t4802;
  double t4803;
  double t4804;
  t3324 = Cos(var1[3]);
  t3375 = Sin(var1[3]);
  t2790 = Cos(var1[2]);
  t3374 = Sin(var1[2]);
  t3629 = Cos(var1[4]);
  t3636 = Sin(var1[4]);
  t3674 = t3324*t3629;
  t3675 = -1.*t3375*t3636;
  t3676 = t3674 + t3675;
  t3635 = -1.*t3629*t3375;
  t3638 = -1.*t3324*t3636;
  t3639 = t3635 + t3638;
  t3679 = -1.*t3629;
  t3680 = 1. + t3679;
  t3681 = 0.4*t3680;
  t3701 = 0.64*t3629;
  t3709 = t3681 + t3701;
  t3673 = t2790*t3639;
  t3677 = -1.*t3374*t3676;
  t3678 = t3673 + t3677;
  t3715 = t3709*t3375;
  t3719 = 0.24*t3324*t3636;
  t3720 = t3715 + t3719;
  t3722 = t3324*t3709;
  t3723 = -0.24*t3375*t3636;
  t3737 = t3722 + t3723;
  t3820 = t3629*t3375;
  t3838 = t3324*t3636;
  t3850 = t3820 + t3838;
  t3805 = -1.*t3709*t3375;
  t3806 = -0.24*t3324*t3636;
  t3807 = t3805 + t3806;
  t3867 = -1.*t3324*t3629;
  t3871 = t3375*t3636;
  t3875 = t3867 + t3871;
  t3721 = -1.*t3720*t3676;
  t3762 = -1.*t3639*t3737;
  t3792 = t3721 + t3762;
  t3798 = 3.2*t3678*t3792;
  t3809 = t3720*t3676;
  t3816 = t3639*t3737;
  t3854 = t3720*t3850;
  t3855 = t3676*t3737;
  t3856 = t3854 + t3855;
  t3862 = -1.*t3374*t3639;
  t3876 = t2790*t3875;
  t3877 = t3862 + t3876;
  t3878 = 3.2*t3856*t3877;
  t3879 = -1.*t3374*t3850;
  t3890 = t2790*t3676;
  t3892 = t3879 + t3890;
  t3909 = -0.24*t3629*t3375;
  t3910 = t3909 + t3806;
  t3894 = -1.*t3639*t3720;
  t3912 = 0.24*t3324*t3629;
  t3920 = t3912 + t3723;
  t3904 = -1.*t3737*t3875;
  t3373 = -1.*t2790*t3324;
  t3377 = t3374*t3375;
  t3380 = t3373 + t3377;
  t3558 = Power(t3324,2);
  t3574 = 0.11*t3558;
  t3582 = Power(t3375,2);
  t3608 = 0.11*t3582;
  t3609 = t3574 + t3608;
  t3610 = 6.8*t3380*t3609;
  t3950 = Cos(var1[5]);
  t3993 = Sin(var1[5]);
  t4056 = Cos(var1[6]);
  t4071 = Sin(var1[6]);
  t4077 = t3950*t4056;
  t4078 = -1.*t3993*t4071;
  t4083 = t4077 + t4078;
  t4087 = -1.*t4056;
  t4088 = 1. + t4087;
  t4089 = 0.4*t4088;
  t4091 = 0.64*t4056;
  t4092 = t4089 + t4091;
  t4098 = -1.*t4056*t3993;
  t4120 = -1.*t3950*t4071;
  t4121 = t4098 + t4120;
  t4093 = t4092*t3993;
  t4095 = 0.24*t3950*t4071;
  t4096 = t4093 + t4095;
  t4070 = t4056*t3993;
  t4072 = t3950*t4071;
  t4073 = t4070 + t4072;
  t4122 = t3950*t4092;
  t4123 = -0.24*t3993*t4071;
  t4124 = t4122 + t4123;
  t3951 = -1.*t2790*t3950;
  t4007 = t3374*t3993;
  t4008 = t3951 + t4007;
  t4009 = Power(t3950,2);
  t4010 = 0.11*t4009;
  t4031 = Power(t3993,2);
  t4035 = 0.11*t4031;
  t4036 = t4010 + t4035;
  t4037 = 6.8*t4008*t4036;
  t4084 = -1.*t3374*t4083;
  t4097 = -1.*t4096*t4083;
  t4125 = -1.*t4121*t4124;
  t4126 = t4097 + t4125;
  t4137 = t2790*t4121;
  t4138 = t4137 + t4084;
  t4131 = t4096*t4073;
  t4132 = t4083*t4124;
  t4133 = t4131 + t4132;
  t4128 = -1.*t3374*t4121;
  t4141 = -1.*t4092*t3993;
  t4143 = -0.24*t3950*t4071;
  t4144 = t4141 + t4143;
  t4157 = -1.*t3950*t4056;
  t4158 = t3993*t4071;
  t4159 = t4157 + t4158;
  t4139 = 3.2*t4138*t4126;
  t4150 = t4096*t4083;
  t4152 = t4121*t4124;
  t4161 = t2790*t4159;
  t4162 = t4128 + t4161;
  t4163 = 3.2*t4133*t4162;
  t4164 = -1.*t3374*t4073;
  t4186 = t2790*t4083;
  t4187 = t4164 + t4186;
  t4196 = -0.24*t4056*t3993;
  t4197 = t4196 + t4143;
  t4189 = -1.*t4121*t4096;
  t4199 = 0.24*t3950*t4056;
  t4200 = t4199 + t4123;
  t4191 = -1.*t4124*t4159;
  t3808 = t3807*t3676;
  t3851 = t3850*t3737;
  t3852 = t3808 + t3809 + t3816 + t3851;
  t3853 = 3.2*t3678*t3852;
  t3893 = -1.*t3639*t3807;
  t3896 = -1.*t3676*t3737;
  t3905 = t3893 + t3894 + t3896 + t3904;
  t3906 = 3.2*t3892*t3905;
  t3907 = t3610 + t3798 + t3853 + t3878 + t3906;
  t4244 = t3374*t3875;
  t4249 = t3673 + t4244;
  t4283 = t3374*t3639;
  t4284 = t4283 + t3890;
  t4272 = -1.*t3324*t3709;
  t4276 = 0.24*t3375*t3636;
  t4277 = t4272 + t4276;
  t4237 = t3374*t3850;
  t4238 = t4237 + t3876;
  t4239 = 3.2*t3856*t4238;
  t4250 = 3.2*t3792*t4249;
  t3911 = t3910*t3676;
  t3921 = t3850*t3920;
  t3922 = t3911 + t3809 + t3816 + t3921;
  t4255 = t2790*t3850;
  t4265 = t3374*t3676;
  t4266 = t4255 + t4265;
  t4271 = -1.*t3850*t3737;
  t4280 = -1.*t3720*t3875;
  t3924 = -1.*t3639*t3910;
  t3925 = -1.*t3676*t3920;
  t3926 = t3924 + t3894 + t3925 + t3904;
  t4287 = t3639*t3720;
  t4310 = -0.24*t3324*t3629;
  t4311 = t4310 + t4276;
  t4291 = t3737*t3875;
  t3923 = 3.2*t3678*t3922;
  t3927 = 3.2*t3892*t3926;
  t3929 = t3798 + t3923 + t3878 + t3927;
  t4306 = 3.2*t3852*t4249;
  t4307 = 3.2*t3922*t4249;
  t4308 = -1.*t3910*t3676;
  t4309 = -1.*t3639*t3920;
  t4312 = -1.*t3639*t4311;
  t4313 = -1.*t3807*t3875;
  t4319 = -1.*t3910*t3875;
  t4320 = t4308 + t3762 + t4271 + t4309 + t4312 + t4313 + t4319 + t4280;
  t4321 = 3.2*t4266*t4320;
  t4322 = 3.2*t4284*t3905;
  t4323 = 3.2*t4284*t3926;
  t4329 = t3639*t3807;
  t4334 = t3639*t3910;
  t4335 = t3910*t3850;
  t4336 = t3676*t3920;
  t4340 = t3676*t4311;
  t4350 = t4329 + t4334 + t4287 + t4335 + t3855 + t4336 + t4340 + t4291;
  t4351 = 3.2*t4284*t4350;
  t4352 = t4239 + t4250 + t4306 + t4307 + t4321 + t4322 + t4323 + t4351;
  t4149 = t4144*t4083;
  t4153 = t4073*t4124;
  t4154 = t4149 + t4150 + t4152 + t4153;
  t4155 = 3.2*t4138*t4154;
  t4188 = -1.*t4121*t4144;
  t4190 = -1.*t4083*t4124;
  t4192 = t4188 + t4189 + t4190 + t4191;
  t4193 = 3.2*t4187*t4192;
  t4194 = t4037 + t4139 + t4155 + t4163 + t4193;
  t4391 = t3374*t4159;
  t4392 = t4137 + t4391;
  t4415 = t3374*t4121;
  t4416 = t4415 + t4186;
  t4406 = -1.*t3950*t4092;
  t4407 = 0.24*t3993*t4071;
  t4408 = t4406 + t4407;
  t4385 = t3374*t4073;
  t4389 = t4385 + t4161;
  t4390 = 3.2*t4133*t4389;
  t4393 = 3.2*t4126*t4392;
  t4198 = t4197*t4083;
  t4201 = t4073*t4200;
  t4202 = t4198 + t4150 + t4152 + t4201;
  t4395 = t2790*t4073;
  t4396 = t3374*t4083;
  t4397 = t4395 + t4396;
  t4405 = -1.*t4073*t4124;
  t4412 = -1.*t4096*t4159;
  t4204 = -1.*t4121*t4197;
  t4211 = -1.*t4083*t4200;
  t4215 = t4204 + t4189 + t4211 + t4191;
  t4419 = t4121*t4096;
  t4432 = -0.24*t3950*t4056;
  t4433 = t4432 + t4407;
  t4423 = t4124*t4159;
  t4203 = 3.2*t4138*t4202;
  t4223 = 3.2*t4187*t4215;
  t4229 = t4139 + t4203 + t4163 + t4223;
  t4428 = 3.2*t4154*t4392;
  t4429 = 3.2*t4202*t4392;
  t4430 = -1.*t4197*t4083;
  t4431 = -1.*t4121*t4200;
  t4434 = -1.*t4121*t4433;
  t4435 = -1.*t4144*t4159;
  t4436 = -1.*t4197*t4159;
  t4437 = t4430 + t4125 + t4405 + t4431 + t4434 + t4435 + t4436 + t4412;
  t4438 = 3.2*t4397*t4437;
  t4439 = 3.2*t4416*t4192;
  t4440 = 3.2*t4416*t4215;
  t4441 = t4121*t4144;
  t4442 = t4121*t4197;
  t4443 = t4197*t4073;
  t4444 = t4083*t4200;
  t4445 = t4083*t4433;
  t4446 = t4441 + t4442 + t4419 + t4443 + t4132 + t4444 + t4445 + t4423;
  t4447 = 3.2*t4416*t4446;
  t4448 = t4390 + t4393 + t4428 + t4429 + t4438 + t4439 + t4440 + t4447;
  t4472 = 3.2*t4284*t3792;
  t4474 = 3.2*t3856*t4249;
  t4468 = -1.*t3324*t3374;
  t4469 = -1.*t2790*t3375;
  t4470 = t4468 + t4469;
  t4471 = 6.8*t4470*t3609;
  t4485 = -1.*t3950*t3374;
  t4486 = -1.*t2790*t3993;
  t4487 = t4485 + t4486;
  t4488 = 6.8*t4487*t4036;
  t4493 = 3.2*t4416*t4126;
  t4495 = 3.2*t4133*t4392;
  t4473 = 3.2*t4284*t3852;
  t4475 = 3.2*t4266*t3905;
  t4476 = t4471 + t4472 + t4473 + t4474 + t4475;
  t4478 = 3.2*t4284*t3922;
  t4479 = 3.2*t4266*t3926;
  t4480 = t4472 + t4478 + t4474 + t4479;
  t4494 = 3.2*t4416*t4154;
  t4496 = 3.2*t4397*t4192;
  t4497 = t4488 + t4493 + t4494 + t4495 + t4496;
  t4499 = 3.2*t4416*t4202;
  t4500 = 3.2*t4397*t4215;
  t4501 = t4493 + t4499 + t4495 + t4500;
  t3947 = -1.*t2790*t3676;
  t3948 = t3862 + t3947;
  t3943 = -1.*t2790*t3850;
  t3945 = t3943 + t3677;
  t4512 = 3.2*t3948*t3792;
  t4514 = -1.*t2790*t3639;
  t4515 = -1.*t3374*t3875;
  t4516 = t4514 + t4515;
  t4517 = 3.2*t3856*t4516;
  t4508 = t3324*t3374;
  t4509 = t2790*t3375;
  t4510 = t4508 + t4509;
  t4511 = 6.8*t4510*t3609;
  t4129 = -1.*t2790*t4083;
  t4530 = t3950*t3374;
  t4531 = t2790*t3993;
  t4532 = t4530 + t4531;
  t4533 = 6.8*t4532*t4036;
  t4130 = t4128 + t4129;
  t4536 = -1.*t2790*t4121;
  t4075 = -1.*t2790*t4073;
  t4086 = t4075 + t4084;
  t4541 = 3.2*t4130*t4126;
  t4543 = -1.*t3374*t4159;
  t4544 = t4536 + t4543;
  t4545 = 3.2*t4133*t4544;
  t4513 = 3.2*t3948*t3852;
  t4518 = 3.2*t3945*t3905;
  t4519 = t4511 + t4512 + t4513 + t4517 + t4518;
  t4267 = -1.*t3807*t3676;
  t4268 = -2.*t3639*t3737;
  t4278 = -1.*t3639*t4277;
  t4279 = -2.*t3807*t3875;
  t4281 = t4267 + t4268 + t4271 + t4278 + t4279 + t4280;
  t4286 = 2.*t3639*t3807;
  t4288 = t3807*t3850;
  t4289 = 2.*t3676*t3737;
  t4290 = t3676*t4277;
  t4296 = t4286 + t4287 + t4288 + t4289 + t4290 + t4291;
  t4556 = 3.2*t3792*t3877;
  t4558 = t4255 + t4515;
  t4559 = 3.2*t3856*t4558;
  t4521 = 3.2*t3948*t3922;
  t4522 = 3.2*t3945*t3926;
  t4523 = t4512 + t4521 + t4517 + t4522;
  t4565 = 3.2*t3852*t3877;
  t4566 = 3.2*t3922*t3877;
  t4567 = 3.2*t3892*t4320;
  t4568 = 3.2*t3678*t3905;
  t4569 = 3.2*t3678*t3926;
  t4570 = 3.2*t3678*t4350;
  t4571 = t4556 + t4565 + t4566 + t4559 + t4567 + t4568 + t4569 + t4570;
  t4364 = -2.*t3639*t3920;
  t4365 = -2.*t3910*t3875;
  t4366 = t4308 + t4271 + t4364 + t4312 + t4365 + t4280;
  t4369 = 2.*t3639*t3910;
  t4370 = 2.*t3676*t3920;
  t4371 = t4369 + t4287 + t4335 + t4370 + t4340 + t4291;
  t4542 = 3.2*t4130*t4154;
  t4546 = 3.2*t4086*t4192;
  t4547 = t4533 + t4541 + t4542 + t4545 + t4546;
  t4398 = -1.*t4144*t4083;
  t4404 = -2.*t4121*t4124;
  t4410 = -1.*t4121*t4408;
  t4411 = -2.*t4144*t4159;
  t4413 = t4398 + t4404 + t4405 + t4410 + t4411 + t4412;
  t4418 = 2.*t4121*t4144;
  t4420 = t4144*t4073;
  t4421 = 2.*t4083*t4124;
  t4422 = t4083*t4408;
  t4424 = t4418 + t4419 + t4420 + t4421 + t4422 + t4423;
  t4586 = 3.2*t4126*t4162;
  t4588 = t4395 + t4543;
  t4589 = 3.2*t4133*t4588;
  t4549 = 3.2*t4130*t4202;
  t4550 = 3.2*t4086*t4215;
  t4551 = t4541 + t4549 + t4545 + t4550;
  t4595 = 3.2*t4154*t4162;
  t4596 = 3.2*t4202*t4162;
  t4597 = 3.2*t4187*t4437;
  t4598 = 3.2*t4138*t4192;
  t4599 = 3.2*t4138*t4215;
  t4600 = 3.2*t4138*t4446;
  t4601 = t4586 + t4595 + t4596 + t4589 + t4597 + t4598 + t4599 + t4600;
  t4455 = -2.*t4121*t4200;
  t4456 = -2.*t4197*t4159;
  t4457 = t4430 + t4405 + t4455 + t4434 + t4456 + t4412;
  t4460 = 2.*t4121*t4197;
  t4461 = 2.*t4083*t4200;
  t4462 = t4460 + t4419 + t4443 + t4461 + t4445 + t4423;
  t3908 = -0.5*var2[3]*t3907;
  t3933 = -0.5*var2[4]*t3929;
  t3941 = -2.88*t2790;
  t3946 = 3.2*t3945*t3792;
  t3949 = 3.2*t3948*t3856;
  t4127 = 3.2*t4086*t4126;
  t4134 = 3.2*t4130*t4133;
  t4135 = t3941 + t3610 + t3946 + t3949 + t4037 + t4127 + t4134;
  t4195 = -0.5*var2[5]*t4194;
  t4233 = -0.5*var2[6]*t4229;
  t4236 = -0.5*var2[2]*t3907;
  t4361 = -0.5*var2[2]*t3929;
  t4381 = -0.5*var2[2]*t4194;
  t4452 = -0.5*var2[2]*t4229;
  t4625 = 6.4*t3852*t3922;
  t4626 = 6.4*t3792*t4320;
  t4627 = 6.4*t3905*t3926;
  t4628 = 6.4*t3856*t4350;
  t4629 = t4625 + t4626 + t4627 + t4628;
  t4652 = 6.4*t4154*t4202;
  t4653 = 6.4*t4126*t4437;
  t4654 = 6.4*t4192*t4215;
  t4655 = 6.4*t4133*t4446;
  t4656 = t4652 + t4653 + t4654 + t4655;
  t4671 = 6.4*t3852*t3856;
  t4672 = 6.4*t3792*t3905;
  t4673 = t4671 + t4672;
  t4675 = 6.4*t3856*t3922;
  t4676 = 6.4*t3792*t3926;
  t4677 = t4675 + t4676;
  t4679 = 6.4*t4154*t4133;
  t4680 = 6.4*t4126*t4192;
  t4681 = t4679 + t4680;
  t4683 = 6.4*t4133*t4202;
  t4684 = 6.4*t4126*t4215;
  t4685 = t4683 + t4684;
  t4692 = t3709*t3636;
  t4693 = -0.24*t3629*t3636;
  t4694 = t4692 + t4693;
  t4696 = t3709*t3629;
  t4697 = Power(t3636,2);
  t4698 = 0.24*t4697;
  t4699 = t4696 + t4698;
  t4703 = -1.*t3709*t3636;
  t4704 = 0.24*t3629*t3636;
  t4705 = t4703 + t4704;
  t4706 = 3.2*t4705*t3852;
  t4707 = 3.2*t4694*t4320;
  t4708 = Power(t3629,2);
  t4709 = -0.24*t4708;
  t4710 = t4696 + t4709;
  t4711 = 3.2*t4710*t3905;
  t4712 = 3.2*t4699*t4350;
  t4713 = t4706 + t4707 + t4711 + t4712;
  t4731 = 3.2*t4699*t3852;
  t4732 = 3.2*t4694*t3905;
  t4733 = t4731 + t4732;
  t4735 = 3.2*t4710*t3792;
  t4736 = 3.2*t4705*t3856;
  t4737 = 3.2*t4699*t3922;
  t4738 = 3.2*t4694*t3926;
  t4739 = t4735 + t4736 + t4737 + t4738;
  t4757 = t4092*t4071;
  t4758 = -0.24*t4056*t4071;
  t4759 = t4757 + t4758;
  t4761 = t4092*t4056;
  t4762 = Power(t4071,2);
  t4763 = 0.24*t4762;
  t4764 = t4761 + t4763;
  t4768 = -1.*t4092*t4071;
  t4769 = 0.24*t4056*t4071;
  t4770 = t4768 + t4769;
  t4771 = 3.2*t4770*t4154;
  t4772 = 3.2*t4759*t4437;
  t4773 = Power(t4056,2);
  t4774 = -0.24*t4773;
  t4775 = t4761 + t4774;
  t4776 = 3.2*t4775*t4192;
  t4777 = 3.2*t4764*t4446;
  t4778 = t4771 + t4772 + t4776 + t4777;
  t4796 = 3.2*t4764*t4154;
  t4797 = 3.2*t4759*t4192;
  t4798 = t4796 + t4797;
  t4800 = 3.2*t4775*t4126;
  t4801 = 3.2*t4770*t4133;
  t4802 = 3.2*t4764*t4202;
  t4803 = 3.2*t4759*t4215;
  t4804 = t4800 + t4801 + t4802 + t4803;
  p_output1[0]=var2[2]*(t3908 + t3933 + t4195 + t4233 - 0.5*t4135*var2[2]);
  p_output1[1]=var2[2]*(t4236 - 0.5*(t3610 + t4239 + 6.4*t3852*t4249 + t4250 + 3.2*t4266*t4281 + 6.4*t3905*t4284 + 3.2*t4284*t4296)*var2[3] - 0.5*t4352*var2[4]);
  p_output1[2]=var2[2]*(t4361 - 0.5*t4352*var2[3] - 0.5*(t4239 + 6.4*t3922*t4249 + t4250 + 6.4*t3926*t4284 + 3.2*t4266*t4366 + 3.2*t4284*t4371)*var2[4]);
  p_output1[3]=var2[2]*(t4381 - 0.5*(t4037 + t4390 + 6.4*t4154*t4392 + t4393 + 3.2*t4397*t4413 + 6.4*t4192*t4416 + 3.2*t4416*t4424)*var2[5] - 0.5*t4448*var2[6]);
  p_output1[4]=var2[2]*(t4452 - 0.5*t4448*var2[5] - 0.5*(t4390 + 6.4*t4202*t4392 + t4393 + 6.4*t4215*t4416 + 3.2*t4397*t4457 + 3.2*t4416*t4462)*var2[6]);
  p_output1[5]=-1.*(-2.88*t3374 + 3.2*t3678*t3856 + 3.2*t3792*t3892 + 3.2*t4133*t4138 + 3.2*t4126*t4187 + t4471 + t4488)*var2[2] - 0.5*t4476*var2[3] - 0.5*t4480*var2[4] - 0.5*t4497*var2[5] - 0.5*t4501*var2[6];
  p_output1[6]=-0.5*t4476*var2[2];
  p_output1[7]=-0.5*t4480*var2[2];
  p_output1[8]=-0.5*t4497*var2[2];
  p_output1[9]=-0.5*t4501*var2[2];
  p_output1[10]=var2[2]*(-0.5*(2.88*t3374 + 3.2*t3792*(t3947 + t4237) + 3.2*t4126*(t4129 + t4385) + t4511 + 3.2*t3856*(t4265 + t4514) + t4533 + 3.2*t4133*(t4396 + t4536))*var2[2] - 0.5*t4519*var2[3] - 0.5*t4523*var2[4] - 0.5*t4547*var2[5] - 0.5*t4551*var2[6]);
  p_output1[11]=var2[2]*(-0.5*t4519*var2[2] - 0.5*(6.4*t3852*t3877 + 6.4*t3678*t3905 + 3.2*t3892*t4281 + 3.2*t3678*t4296 + t4511 + t4556 + t4559)*var2[3] - 0.5*t4571*var2[4]);
  p_output1[12]=var2[2]*(-0.5*t4523*var2[2] - 0.5*t4571*var2[3] - 0.5*(6.4*t3877*t3922 + 6.4*t3678*t3926 + 3.2*t3892*t4366 + 3.2*t3678*t4371 + t4556 + t4559)*var2[4]);
  p_output1[13]=var2[2]*(-0.5*t4547*var2[2] - 0.5*(6.4*t4154*t4162 + 6.4*t4138*t4192 + 3.2*t4187*t4413 + 3.2*t4138*t4424 + t4533 + t4586 + t4589)*var2[5] - 0.5*t4601*var2[6]);
  p_output1[14]=var2[2]*(-0.5*t4551*var2[2] - 0.5*t4601*var2[5] - 0.5*(6.4*t4162*t4202 + 6.4*t4138*t4215 + 3.2*t4187*t4457 + 3.2*t4138*t4462 + t4586 + t4589)*var2[6]);
  p_output1[15]=t3908 + t3933 + t4195 + t4233 - 1.*t4135*var2[2];
  p_output1[16]=t4236;
  p_output1[17]=t4361;
  p_output1[18]=t4381;
  p_output1[19]=t4452;
  p_output1[20]=var2[2]*(-0.5*(6.4*Power(t3852,2) + 6.4*Power(t3905,2) + 6.4*t3792*t4281 + 6.4*t3856*t4296)*var2[3] - 0.5*t4629*var2[4]);
  p_output1[21]=var2[2]*(-0.5*t4629*var2[3] - 0.5*(6.4*Power(t3922,2) + 6.4*Power(t3926,2) + 6.4*t3792*t4366 + 6.4*t3856*t4371)*var2[4]);
  p_output1[22]=var2[2]*(-0.5*(6.4*Power(t4154,2) + 6.4*Power(t4192,2) + 6.4*t4126*t4413 + 6.4*t4133*t4424)*var2[5] - 0.5*t4656*var2[6]);
  p_output1[23]=var2[2]*(-0.5*t4656*var2[5] - 0.5*(6.4*Power(t4202,2) + 6.4*Power(t4215,2) + 6.4*t4126*t4457 + 6.4*t4133*t4462)*var2[6]);
  p_output1[24]=-0.5*t4673*var2[3] - 0.5*t4677*var2[4] - 0.5*t4681*var2[5] - 0.5*t4685*var2[6];
  p_output1[25]=-0.5*t4673*var2[2];
  p_output1[26]=-0.5*t4677*var2[2];
  p_output1[27]=-0.5*t4681*var2[2];
  p_output1[28]=-0.5*t4685*var2[2];
  p_output1[29]=var2[2]*(-0.5*(3.2*t4281*t4694 + 3.2*t4296*t4699)*var2[3] - 0.5*t4713*var2[4]);
  p_output1[30]=var2[2]*(-0.5*t4713*var2[3] - 0.5*(3.2*t4366*t4694 + 3.2*t4371*t4699 + 3.2*t3792*t4705 + 6.4*t3922*t4705 + 3.2*t3856*(-1.*t3629*t3709 + 0.24*t4708) + 6.4*t3926*t4710)*var2[4]);
  p_output1[31]=-0.5*t4733*var2[3] - 0.5*t4739*var2[4];
  p_output1[32]=-0.5*t4733*var2[2];
  p_output1[33]=-0.5*t4739*var2[2];
  p_output1[34]=var2[2]*(-0.384*t4296*var2[3] - 0.384*t4350*var2[4]);
  p_output1[35]=var2[2]*(-0.384*t4350*var2[3] - 0.384*t4371*var2[4]);
  p_output1[36]=-0.384*t3852*var2[3] - 0.384*t3922*var2[4];
  p_output1[37]=-0.384*t3852*var2[2];
  p_output1[38]=-0.384*t3922*var2[2];
  p_output1[39]=var2[2]*(-0.5*(3.2*t4413*t4759 + 3.2*t4424*t4764)*var2[5] - 0.5*t4778*var2[6]);
  p_output1[40]=var2[2]*(-0.5*t4778*var2[5] - 0.5*(3.2*t4457*t4759 + 3.2*t4462*t4764 + 3.2*t4126*t4770 + 6.4*t4202*t4770 + 3.2*t4133*(-1.*t4056*t4092 + 0.24*t4773) + 6.4*t4215*t4775)*var2[6]);
  p_output1[41]=-0.5*t4798*var2[5] - 0.5*t4804*var2[6];
  p_output1[42]=-0.5*t4798*var2[2];
  p_output1[43]=-0.5*t4804*var2[2];
  p_output1[44]=var2[2]*(-0.384*t4424*var2[5] - 0.384*t4446*var2[6]);
  p_output1[45]=var2[2]*(-0.384*t4446*var2[5] - 0.384*t4462*var2[6]);
  p_output1[46]=-0.384*t4154*var2[5] - 0.384*t4202*var2[6];
  p_output1[47]=-0.384*t4154*var2[2];
  p_output1[48]=-0.384*t4202*var2[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 49, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec3_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_Ce1_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
