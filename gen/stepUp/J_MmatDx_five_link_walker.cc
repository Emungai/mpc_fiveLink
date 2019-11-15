/*
 * Automatically Generated from Mathematica.
 * Tue 12 Nov 2019 14:39:12 GMT-05:00
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
  double t2750;
  double t2747;
  double t2748;
  double t2751;
  double t2755;
  double t2743;
  double t2756;
  double t2757;
  double t2758;
  double t2766;
  double t2767;
  double t2768;
  double t2769;
  double t2770;
  double t2749;
  double t2752;
  double t2753;
  double t2754;
  double t2759;
  double t2760;
  double t2791;
  double t2788;
  double t2789;
  double t2792;
  double t2796;
  double t2797;
  double t2798;
  double t2806;
  double t2807;
  double t2808;
  double t2809;
  double t2810;
  double t2790;
  double t2793;
  double t2794;
  double t2795;
  double t2799;
  double t2800;
  double t2762;
  double t2763;
  double t2764;
  double t2828;
  double t2829;
  double t2830;
  double t2778;
  double t2774;
  double t2775;
  double t2776;
  double t2777;
  double t2779;
  double t2802;
  double t2803;
  double t2804;
  double t2843;
  double t2844;
  double t2845;
  double t2818;
  double t2814;
  double t2815;
  double t2816;
  double t2817;
  double t2819;
  double t2832;
  double t2833;
  double t2834;
  double t2836;
  double t2837;
  double t2839;
  double t2840;
  double t2841;
  double t2847;
  double t2848;
  double t2849;
  double t2851;
  double t2852;
  double t2854;
  double t2855;
  double t2856;
  double t2909;
  double t2910;
  double t2911;
  double t2913;
  double t2914;
  double t2915;
  double t2929;
  double t2930;
  double t2931;
  double t2933;
  double t2934;
  double t2935;
  double t2765;
  double t2771;
  double t2772;
  double t2773;
  double t2781;
  double t2782;
  double t2783;
  double t2784;
  double t2946;
  double t2947;
  double t2948;
  double t2949;
  double t2950;
  double t2831;
  double t2835;
  double t2860;
  double t2861;
  double t2862;
  double t2863;
  double t2864;
  double t2865;
  double t2866;
  double t2867;
  double t2868;
  double t2869;
  double t2903;
  double t2904;
  double t2905;
  double t2906;
  double t2907;
  double t2908;
  double t2912;
  double t2916;
  double t2917;
  double t2919;
  double t2920;
  double t2921;
  double t2969;
  double t2970;
  double t2971;
  double t2951;
  double t2952;
  double t2953;
  double t2956;
  double t2957;
  double t2960;
  double t2961;
  double t2962;
  double t2963;
  double t2964;
  double t2965;
  double t2968;
  double t2973;
  double t2974;
  double t2978;
  double t3002;
  double t3003;
  double t2980;
  double t3005;
  double t3006;
  double t2982;
  double t2805;
  double t2811;
  double t2812;
  double t2813;
  double t2821;
  double t2822;
  double t2823;
  double t2824;
  double t3017;
  double t3018;
  double t3019;
  double t3020;
  double t3021;
  double t2846;
  double t2850;
  double t2880;
  double t2881;
  double t2882;
  double t2883;
  double t2884;
  double t2885;
  double t2886;
  double t2887;
  double t2888;
  double t2889;
  double t2923;
  double t2924;
  double t2925;
  double t2926;
  double t2927;
  double t2928;
  double t2932;
  double t2936;
  double t2937;
  double t2939;
  double t2940;
  double t2941;
  double t3040;
  double t3041;
  double t3042;
  double t3022;
  double t3023;
  double t3024;
  double t3027;
  double t3028;
  double t3031;
  double t3032;
  double t3033;
  double t3034;
  double t3035;
  double t3036;
  double t3039;
  double t3044;
  double t3045;
  double t3049;
  double t3073;
  double t3074;
  double t3051;
  double t3076;
  double t3077;
  double t3053;
  double t2870;
  double t2871;
  double t2877;
  double t2878;
  double t2890;
  double t2891;
  double t2897;
  double t2898;
  double t2872;
  double t2873;
  double t2874;
  double t2875;
  double t2876;
  double t2879;
  double t2892;
  double t2893;
  double t2894;
  double t2895;
  double t2896;
  double t2899;
  double t2900;
  double t3133;
  double t3144;
  double t2966;
  double t3154;
  double t2972;
  double t2975;
  double t2976;
  double t2979;
  double t2981;
  double t2983;
  double t3163;
  double t2992;
  double t2993;
  double t2994;
  double t3164;
  double t2988;
  double t2989;
  double t2990;
  double t3165;
  double t3168;
  double t3169;
  double t3000;
  double t3173;
  double t3004;
  double t3007;
  double t3008;
  double t3175;
  double t3010;
  double t3011;
  double t3012;
  double t3139;
  double t3147;
  double t3037;
  double t3157;
  double t3043;
  double t3046;
  double t3047;
  double t3050;
  double t3052;
  double t3054;
  double t3192;
  double t3063;
  double t3064;
  double t3065;
  double t3193;
  double t3059;
  double t3060;
  double t3061;
  double t3194;
  double t3197;
  double t3198;
  double t3071;
  double t3202;
  double t3075;
  double t3078;
  double t3079;
  double t3204;
  double t3081;
  double t3082;
  double t3083;
  double t3105;
  double t3106;
  double t3107;
  double t3108;
  double t3109;
  double t3110;
  double t3111;
  double t3112;
  double t3113;
  double t3088;
  double t3089;
  double t3090;
  double t3091;
  double t2902;
  double t2918;
  double t2922;
  double t2938;
  double t2942;
  double t2943;
  double t2780;
  double t2785;
  double t2786;
  double t2820;
  double t2825;
  double t2826;
  double t3153;
  double t3155;
  double t3156;
  double t3158;
  double t3159;
  double t3160;
  double t3174;
  double t3176;
  double t3177;
  double t2977;
  double t2984;
  double t2985;
  double t3187;
  double t3188;
  double t3189;
  double t3009;
  double t3013;
  double t3014;
  double t3203;
  double t3205;
  double t3206;
  double t3048;
  double t3055;
  double t3056;
  double t3216;
  double t3217;
  double t3218;
  double t3080;
  double t3084;
  double t3085;
  double t3114;
  double t3115;
  double t3116;
  double t3117;
  double t3118;
  double t3119;
  double t3120;
  double t3121;
  double t3134;
  double t3135;
  double t3136;
  double t3166;
  double t2954;
  double t3228;
  double t3229;
  double t3230;
  double t3180;
  double t3181;
  double t3182;
  double t2991;
  double t2995;
  double t2996;
  double t3240;
  double t3241;
  double t3242;
  double t3243;
  double t3244;
  double t3122;
  double t3123;
  double t3124;
  double t3125;
  double t3292;
  double t3293;
  double t3294;
  double t3295;
  double t3331;
  double t3332;
  double t3126;
  double t3222;
  double t3296;
  double t3297;
  double t3325;
  double t3326;
  double t3140;
  double t3141;
  double t3142;
  double t3195;
  double t3025;
  double t3254;
  double t3255;
  double t3256;
  double t3209;
  double t3210;
  double t3211;
  double t3062;
  double t3066;
  double t3067;
  double t3266;
  double t3267;
  double t3268;
  double t3269;
  double t3270;
  double t3127;
  double t3128;
  double t3129;
  double t3130;
  double t3298;
  double t3299;
  double t3300;
  double t3301;
  double t3364;
  double t3365;
  double t3131;
  double t3223;
  double t3302;
  double t3303;
  double t3358;
  double t3359;
  t2750 = Cos(var1[3]);
  t2747 = Cos(var1[4]);
  t2748 = Sin(var1[3]);
  t2751 = Sin(var1[4]);
  t2755 = Sin(var1[2]);
  t2743 = Cos(var1[2]);
  t2756 = t2750*t2747;
  t2757 = -1.*t2748*t2751;
  t2758 = t2756 + t2757;
  t2766 = -1.*t2747;
  t2767 = 1. + t2766;
  t2768 = 0.4*t2767;
  t2769 = 0.64*t2747;
  t2770 = t2768 + t2769;
  t2749 = -1.*t2747*t2748;
  t2752 = -1.*t2750*t2751;
  t2753 = t2749 + t2752;
  t2754 = t2743*t2753;
  t2759 = -1.*t2755*t2758;
  t2760 = t2754 + t2759;
  t2791 = Cos(var1[5]);
  t2788 = Cos(var1[6]);
  t2789 = Sin(var1[5]);
  t2792 = Sin(var1[6]);
  t2796 = t2791*t2788;
  t2797 = -1.*t2789*t2792;
  t2798 = t2796 + t2797;
  t2806 = -1.*t2788;
  t2807 = 1. + t2806;
  t2808 = 0.4*t2807;
  t2809 = 0.64*t2788;
  t2810 = t2808 + t2809;
  t2790 = -1.*t2788*t2789;
  t2793 = -1.*t2791*t2792;
  t2794 = t2790 + t2793;
  t2795 = t2743*t2794;
  t2799 = -1.*t2755*t2798;
  t2800 = t2795 + t2799;
  t2762 = -1.*t2750*t2755;
  t2763 = -1.*t2743*t2748;
  t2764 = t2762 + t2763;
  t2828 = t2743*t2750;
  t2829 = -1.*t2755*t2748;
  t2830 = t2828 + t2829;
  t2778 = t2743*t2758;
  t2774 = t2747*t2748;
  t2775 = t2750*t2751;
  t2776 = t2774 + t2775;
  t2777 = -1.*t2755*t2776;
  t2779 = t2777 + t2778;
  t2802 = -1.*t2791*t2755;
  t2803 = -1.*t2743*t2789;
  t2804 = t2802 + t2803;
  t2843 = t2743*t2791;
  t2844 = -1.*t2755*t2789;
  t2845 = t2843 + t2844;
  t2818 = t2743*t2798;
  t2814 = t2788*t2789;
  t2815 = t2791*t2792;
  t2816 = t2814 + t2815;
  t2817 = -1.*t2755*t2816;
  t2819 = t2817 + t2818;
  t2832 = t2750*t2755;
  t2833 = t2743*t2748;
  t2834 = t2832 + t2833;
  t2836 = t2755*t2753;
  t2837 = t2836 + t2778;
  t2839 = t2743*t2776;
  t2840 = t2755*t2758;
  t2841 = t2839 + t2840;
  t2847 = t2791*t2755;
  t2848 = t2743*t2789;
  t2849 = t2847 + t2848;
  t2851 = t2755*t2794;
  t2852 = t2851 + t2818;
  t2854 = t2743*t2816;
  t2855 = t2755*t2798;
  t2856 = t2854 + t2855;
  t2909 = t2770*t2748;
  t2910 = 0.24*t2750*t2751;
  t2911 = t2909 + t2910;
  t2913 = t2750*t2770;
  t2914 = -0.24*t2748*t2751;
  t2915 = t2913 + t2914;
  t2929 = t2810*t2789;
  t2930 = 0.24*t2791*t2792;
  t2931 = t2929 + t2930;
  t2933 = t2791*t2810;
  t2934 = -0.24*t2789*t2792;
  t2935 = t2933 + t2934;
  t2765 = -0.748*t2764;
  t2771 = t2770*t2751;
  t2772 = -0.24*t2747*t2751;
  t2773 = t2771 + t2772;
  t2781 = t2770*t2747;
  t2782 = Power(t2751,2);
  t2783 = 0.24*t2782;
  t2784 = t2781 + t2783;
  t2946 = -1.*t2750*t2747;
  t2947 = t2748*t2751;
  t2948 = t2946 + t2947;
  t2949 = t2755*t2948;
  t2950 = t2754 + t2949;
  t2831 = -13.6*t2764*t2830;
  t2835 = -13.6*t2834*t2830;
  t2860 = Power(t2764,2);
  t2861 = -6.8*t2860;
  t2862 = -6.8*t2764*t2834;
  t2863 = Power(t2830,2);
  t2864 = -6.8*t2863;
  t2865 = -1.*t2743*t2750;
  t2866 = t2755*t2748;
  t2867 = t2865 + t2866;
  t2868 = -6.8*t2830*t2867;
  t2869 = -1.*t2755*t2753;
  t2903 = Power(t2750,2);
  t2904 = 0.11*t2903;
  t2905 = Power(t2748,2);
  t2906 = 0.11*t2905;
  t2907 = t2904 + t2906;
  t2908 = -6.8*t2764*t2907;
  t2912 = -1.*t2911*t2758;
  t2916 = -1.*t2753*t2915;
  t2917 = t2912 + t2916;
  t2919 = t2911*t2776;
  t2920 = t2758*t2915;
  t2921 = t2919 + t2920;
  t2969 = -1.*t2770*t2748;
  t2970 = -0.24*t2750*t2751;
  t2971 = t2969 + t2970;
  t2951 = -0.768*var2[4]*t2950;
  t2952 = -3.2*t2773*t2837;
  t2953 = -3.2*t2784*t2950;
  t2956 = -6.4*t2837*t2841;
  t2957 = -6.4*t2837*t2950;
  t2960 = -3.2*t2837*t2779;
  t2961 = -3.2*t2760*t2841;
  t2962 = t2743*t2948;
  t2963 = t2869 + t2962;
  t2964 = -3.2*t2837*t2963;
  t2965 = -3.2*t2760*t2950;
  t2968 = -3.2*t2837*t2917;
  t2973 = t2911*t2758;
  t2974 = t2753*t2915;
  t2978 = -3.2*t2921*t2950;
  t3002 = -0.24*t2747*t2748;
  t3003 = t3002 + t2970;
  t2980 = -1.*t2753*t2911;
  t3005 = 0.24*t2750*t2747;
  t3006 = t3005 + t2914;
  t2982 = -1.*t2915*t2948;
  t2805 = -0.748*t2804;
  t2811 = t2810*t2792;
  t2812 = -0.24*t2788*t2792;
  t2813 = t2811 + t2812;
  t2821 = t2810*t2788;
  t2822 = Power(t2792,2);
  t2823 = 0.24*t2822;
  t2824 = t2821 + t2823;
  t3017 = -1.*t2791*t2788;
  t3018 = t2789*t2792;
  t3019 = t3017 + t3018;
  t3020 = t2755*t3019;
  t3021 = t2795 + t3020;
  t2846 = -13.6*t2804*t2845;
  t2850 = -13.6*t2849*t2845;
  t2880 = Power(t2804,2);
  t2881 = -6.8*t2880;
  t2882 = -6.8*t2804*t2849;
  t2883 = Power(t2845,2);
  t2884 = -6.8*t2883;
  t2885 = -1.*t2743*t2791;
  t2886 = t2755*t2789;
  t2887 = t2885 + t2886;
  t2888 = -6.8*t2845*t2887;
  t2889 = -1.*t2755*t2794;
  t2923 = Power(t2791,2);
  t2924 = 0.11*t2923;
  t2925 = Power(t2789,2);
  t2926 = 0.11*t2925;
  t2927 = t2924 + t2926;
  t2928 = -6.8*t2804*t2927;
  t2932 = -1.*t2931*t2798;
  t2936 = -1.*t2794*t2935;
  t2937 = t2932 + t2936;
  t2939 = t2931*t2816;
  t2940 = t2798*t2935;
  t2941 = t2939 + t2940;
  t3040 = -1.*t2810*t2789;
  t3041 = -0.24*t2791*t2792;
  t3042 = t3040 + t3041;
  t3022 = -0.768*var2[6]*t3021;
  t3023 = -3.2*t2813*t2852;
  t3024 = -3.2*t2824*t3021;
  t3027 = -6.4*t2852*t2856;
  t3028 = -6.4*t2852*t3021;
  t3031 = -3.2*t2852*t2819;
  t3032 = -3.2*t2800*t2856;
  t3033 = t2743*t3019;
  t3034 = t2889 + t3033;
  t3035 = -3.2*t2852*t3034;
  t3036 = -3.2*t2800*t3021;
  t3039 = -3.2*t2852*t2937;
  t3044 = t2931*t2798;
  t3045 = t2794*t2935;
  t3049 = -3.2*t2941*t3021;
  t3073 = -0.24*t2788*t2789;
  t3074 = t3073 + t3041;
  t3051 = -1.*t2794*t2931;
  t3076 = 0.24*t2791*t2788;
  t3077 = t3076 + t2934;
  t3053 = -1.*t2935*t3019;
  t2870 = -1.*t2743*t2758;
  t2871 = t2869 + t2870;
  t2877 = -1.*t2743*t2776;
  t2878 = t2877 + t2759;
  t2890 = -1.*t2743*t2798;
  t2891 = t2889 + t2890;
  t2897 = -1.*t2743*t2816;
  t2898 = t2897 + t2799;
  t2872 = -3.2*t2871*t2837;
  t2873 = Power(t2779,2);
  t2874 = -3.2*t2873;
  t2875 = Power(t2760,2);
  t2876 = -3.2*t2875;
  t2879 = -3.2*t2878*t2841;
  t2892 = -3.2*t2891*t2852;
  t2893 = Power(t2819,2);
  t2894 = -3.2*t2893;
  t2895 = Power(t2800,2);
  t2896 = -3.2*t2895;
  t2899 = -3.2*t2898*t2856;
  t2900 = t2861 + t2862 + t2864 + t2868 + t2872 + t2874 + t2876 + t2879 + t2881 + t2882 + t2884 + t2888 + t2892 + t2894 + t2896 + t2899;
  t3133 = -0.748*t2867;
  t3144 = -13.6*t2764*t2867;
  t2966 = t2861 + t2862 + t2864 + t2868 + t2960 + t2961 + t2964 + t2965;
  t3154 = -6.8*t2867*t2907;
  t2972 = t2971*t2758;
  t2975 = t2776*t2915;
  t2976 = t2972 + t2973 + t2974 + t2975;
  t2979 = -1.*t2753*t2971;
  t2981 = -1.*t2758*t2915;
  t2983 = t2979 + t2980 + t2981 + t2982;
  t3163 = -0.768*var2[4]*t2963;
  t2992 = Power(t2747,2);
  t2993 = -0.24*t2992;
  t2994 = t2781 + t2993;
  t3164 = -3.2*t2773*t2760;
  t2988 = -1.*t2770*t2751;
  t2989 = 0.24*t2747*t2751;
  t2990 = t2988 + t2989;
  t3165 = -3.2*t2784*t2963;
  t3168 = -6.4*t2779*t2760;
  t3169 = -6.4*t2760*t2963;
  t3000 = t2960 + t2961 + t2964 + t2965;
  t3173 = -3.2*t2760*t2917;
  t3004 = t3003*t2758;
  t3007 = t2776*t3006;
  t3008 = t3004 + t2973 + t2974 + t3007;
  t3175 = -3.2*t2921*t2963;
  t3010 = -1.*t2753*t3003;
  t3011 = -1.*t2758*t3006;
  t3012 = t3010 + t2980 + t3011 + t2982;
  t3139 = -0.748*t2887;
  t3147 = -13.6*t2804*t2887;
  t3037 = t2881 + t2882 + t2884 + t2888 + t3031 + t3032 + t3035 + t3036;
  t3157 = -6.8*t2887*t2927;
  t3043 = t3042*t2798;
  t3046 = t2816*t2935;
  t3047 = t3043 + t3044 + t3045 + t3046;
  t3050 = -1.*t2794*t3042;
  t3052 = -1.*t2798*t2935;
  t3054 = t3050 + t3051 + t3052 + t3053;
  t3192 = -0.768*var2[6]*t3034;
  t3063 = Power(t2788,2);
  t3064 = -0.24*t3063;
  t3065 = t2821 + t3064;
  t3193 = -3.2*t2813*t2800;
  t3059 = -1.*t2810*t2792;
  t3060 = 0.24*t2788*t2792;
  t3061 = t3059 + t3060;
  t3194 = -3.2*t2824*t3034;
  t3197 = -6.4*t2819*t2800;
  t3198 = -6.4*t2800*t3034;
  t3071 = t3031 + t3032 + t3035 + t3036;
  t3202 = -3.2*t2800*t2937;
  t3075 = t3074*t2798;
  t3078 = t2816*t3077;
  t3079 = t3075 + t3044 + t3045 + t3078;
  t3204 = -3.2*t2941*t3034;
  t3081 = -1.*t2794*t3074;
  t3082 = -1.*t2798*t3077;
  t3083 = t3081 + t3051 + t3082 + t3053;
  t3105 = -6.8*t2764*t2830;
  t3106 = -6.8*t2834*t2830;
  t3107 = -3.2*t2837*t2760;
  t3108 = -3.2*t2779*t2841;
  t3109 = -6.8*t2804*t2845;
  t3110 = -6.8*t2849*t2845;
  t3111 = -3.2*t2852*t2800;
  t3112 = -3.2*t2819*t2856;
  t3113 = t3105 + t3106 + t3107 + t3108 + t3109 + t3110 + t3111 + t3112;
  t3088 = Power(t2743,2);
  t3089 = -12.*t3088;
  t3090 = Power(t2755,2);
  t3091 = -12.*t3090;
  t2902 = 2.88*t2755;
  t2918 = -3.2*t2779*t2917;
  t2922 = -3.2*t2760*t2921;
  t2938 = -3.2*t2819*t2937;
  t2942 = -3.2*t2800*t2941;
  t2943 = t2902 + t2908 + t2918 + t2922 + t2928 + t2938 + t2942;
  t2780 = -3.2*t2773*t2779;
  t2785 = -3.2*t2784*t2760;
  t2786 = t2765 + t2780 + t2785;
  t2820 = -3.2*t2813*t2819;
  t2825 = -3.2*t2824*t2800;
  t2826 = t2805 + t2820 + t2825;
  t3153 = 2.88*t2743;
  t3155 = -3.2*t2878*t2917;
  t3156 = -3.2*t2871*t2921;
  t3158 = -3.2*t2898*t2937;
  t3159 = -3.2*t2891*t2941;
  t3160 = t3153 + t3154 + t3155 + t3156 + t3157 + t3158 + t3159;
  t3174 = -3.2*t2760*t2976;
  t3176 = -3.2*t2779*t2983;
  t3177 = t3154 + t3173 + t3174 + t3175 + t3176;
  t2977 = -3.2*t2837*t2976;
  t2984 = -3.2*t2841*t2983;
  t2985 = t2908 + t2968 + t2977 + t2978 + t2984;
  t3187 = -3.2*t2760*t3008;
  t3188 = -3.2*t2779*t3012;
  t3189 = t3173 + t3187 + t3175 + t3188;
  t3009 = -3.2*t2837*t3008;
  t3013 = -3.2*t2841*t3012;
  t3014 = t2968 + t3009 + t2978 + t3013;
  t3203 = -3.2*t2800*t3047;
  t3205 = -3.2*t2819*t3054;
  t3206 = t3157 + t3202 + t3203 + t3204 + t3205;
  t3048 = -3.2*t2852*t3047;
  t3055 = -3.2*t2856*t3054;
  t3056 = t2928 + t3039 + t3048 + t3049 + t3055;
  t3216 = -3.2*t2800*t3079;
  t3217 = -3.2*t2819*t3083;
  t3218 = t3202 + t3216 + t3204 + t3217;
  t3080 = -3.2*t2852*t3079;
  t3084 = -3.2*t2856*t3083;
  t3085 = t3039 + t3080 + t3049 + t3084;
  t3114 = -2.88*t2743;
  t3115 = -6.8*t2830*t2907;
  t3116 = -3.2*t2841*t2917;
  t3117 = -3.2*t2837*t2921;
  t3118 = -6.8*t2845*t2927;
  t3119 = -3.2*t2856*t2937;
  t3120 = -3.2*t2852*t2941;
  t3121 = t3114 + t3115 + t3116 + t3117 + t3118 + t3119 + t3120;
  t3134 = -3.2*t2784*t2871;
  t3135 = -3.2*t2773*t2878;
  t3136 = t3133 + t3134 + t3135;
  t3166 = t3133 + t3164 + t3165;
  t2954 = t2765 + t2952 + t2953;
  t3228 = -3.2*t2784*t2976;
  t3229 = -3.2*t2773*t2983;
  t3230 = t3228 + t3229;
  t3180 = -3.2*t2994*t2779;
  t3181 = -3.2*t2990*t2760;
  t3182 = t3180 + t3164 + t3181 + t3165;
  t2991 = -3.2*t2990*t2837;
  t2995 = -3.2*t2994*t2841;
  t2996 = t2952 + t2991 + t2995 + t2953;
  t3240 = -3.2*t2994*t2917;
  t3241 = -3.2*t2990*t2921;
  t3242 = -3.2*t2784*t3008;
  t3243 = -3.2*t2773*t3012;
  t3244 = t3240 + t3241 + t3242 + t3243;
  t3122 = -0.748*t2830;
  t3123 = -3.2*t2784*t2837;
  t3124 = -3.2*t2773*t2841;
  t3125 = t3122 + t3123 + t3124;
  t3292 = -0.748*t2907;
  t3293 = -3.2*t2773*t2917;
  t3294 = -3.2*t2784*t2921;
  t3295 = -0.67 + t3292 + t3293 + t3294;
  t3331 = -0.768*var2[1]*t2963;
  t3332 = -0.768*var2[0]*t2950;
  t3126 = -0.768*t2837;
  t3222 = -0.768*t2760;
  t3296 = -0.768*t2921;
  t3297 = -0.2 + t3296;
  t3325 = -0.768*t2784;
  t3326 = -0.2 + t3325;
  t3140 = -3.2*t2824*t2891;
  t3141 = -3.2*t2813*t2898;
  t3142 = t3139 + t3140 + t3141;
  t3195 = t3139 + t3193 + t3194;
  t3025 = t2805 + t3023 + t3024;
  t3254 = -3.2*t2824*t3047;
  t3255 = -3.2*t2813*t3054;
  t3256 = t3254 + t3255;
  t3209 = -3.2*t3065*t2819;
  t3210 = -3.2*t3061*t2800;
  t3211 = t3209 + t3193 + t3210 + t3194;
  t3062 = -3.2*t3061*t2852;
  t3066 = -3.2*t3065*t2856;
  t3067 = t3023 + t3062 + t3066 + t3024;
  t3266 = -3.2*t3065*t2937;
  t3267 = -3.2*t3061*t2941;
  t3268 = -3.2*t2824*t3079;
  t3269 = -3.2*t2813*t3083;
  t3270 = t3266 + t3267 + t3268 + t3269;
  t3127 = -0.748*t2845;
  t3128 = -3.2*t2824*t2852;
  t3129 = -3.2*t2813*t2856;
  t3130 = t3127 + t3128 + t3129;
  t3298 = -0.748*t2927;
  t3299 = -3.2*t2813*t2937;
  t3300 = -3.2*t2824*t2941;
  t3301 = -0.67 + t3298 + t3299 + t3300;
  t3364 = -0.768*var2[1]*t3034;
  t3365 = -0.768*var2[0]*t3021;
  t3131 = -0.768*t2852;
  t3223 = -0.768*t2800;
  t3302 = -0.768*t2941;
  t3303 = -0.2 + t3302;
  t3358 = -0.768*t2824;
  t3359 = -0.2 + t3358;
  p_output1[0]=(t2831 + t2835 - 6.4*t2760*t2837 - 6.4*t2779*t2841 + t2846 + t2850 - 6.4*t2800*t2852 - 6.4*t2819*t2856)*var2[0] + t2900*var2[1] + t2943*var2[2] + t2786*var2[3] - 0.768*t2760*var2[4] + t2826*var2[5] - 0.768*t2800*var2[6];
  p_output1[1]=t2951 + (t2831 + t2835 + t2956 + t2957)*var2[0] + t2966*var2[1] + t2985*var2[2] + t2954*var2[3];
  p_output1[2]=t2951 + (t2956 + t2957)*var2[0] + t3000*var2[1] + t3014*var2[2] + t2996*var2[3];
  p_output1[3]=t3022 + (t2846 + t2850 + t3027 + t3028)*var2[0] + t3037*var2[1] + t3056*var2[2] + t3025*var2[5];
  p_output1[4]=t3022 + (t3027 + t3028)*var2[0] + t3071*var2[1] + t3085*var2[2] + t3067*var2[5];
  p_output1[5]=-6.8*Power(t2834,2) - 3.2*Power(t2837,2) - 3.2*Power(t2841,2) - 6.8*Power(t2849,2) - 3.2*Power(t2852,2) - 3.2*Power(t2856,2) + t2864 + t2884 + t3089 + t3091;
  p_output1[6]=t3113;
  p_output1[7]=t3121;
  p_output1[8]=t3125;
  p_output1[9]=t3126;
  p_output1[10]=t3130;
  p_output1[11]=t3131;
  p_output1[12]=t2900*var2[0] + (t2831 + t2846 - 6.4*t2760*t2871 - 6.4*t2779*t2878 - 6.4*t2800*t2891 - 6.4*t2819*t2898 + t3144 + t3147)*var2[1] + t3160*var2[2] + t3136*var2[3] - 0.768*t2871*var2[4] + t3142*var2[5] - 0.768*t2891*var2[6];
  p_output1[13]=t3163 + t2966*var2[0] + (t2831 + t3144 + t3168 + t3169)*var2[1] + t3177*var2[2] + t3166*var2[3];
  p_output1[14]=t3163 + t3000*var2[0] + (t3168 + t3169)*var2[1] + t3189*var2[2] + t3182*var2[3];
  p_output1[15]=t3192 + t3037*var2[0] + (t2846 + t3147 + t3197 + t3198)*var2[1] + t3206*var2[2] + t3195*var2[5];
  p_output1[16]=t3192 + t3071*var2[0] + (t3197 + t3198)*var2[1] + t3218*var2[2] + t3211*var2[5];
  p_output1[17]=t3113;
  p_output1[18]=t2861 + t2864 + t2874 + t2876 + t2881 + t2884 + t2894 + t2896 + t3089 + t3091;
  p_output1[19]=t2943;
  p_output1[20]=t2786;
  p_output1[21]=t3222;
  p_output1[22]=t2826;
  p_output1[23]=t3223;
  p_output1[24]=t2943*var2[0] + t3160*var2[1];
  p_output1[25]=t2985*var2[0] + t3177*var2[1] + (-6.4*t2921*t2976 - 6.4*t2917*t2983)*var2[2] + t3230*var2[3] - 0.768*t2976*var2[4];
  p_output1[26]=t3014*var2[0] + t3189*var2[1] + (-6.4*t2921*t3008 - 6.4*t2917*t3012)*var2[2] + t3244*var2[3] - 0.768*t3008*var2[4];
  p_output1[27]=t3056*var2[0] + t3206*var2[1] + (-6.4*t2941*t3047 - 6.4*t2937*t3054)*var2[2] + t3256*var2[5] - 0.768*t3047*var2[6];
  p_output1[28]=t3085*var2[0] + t3218*var2[1] + (-6.4*t2941*t3079 - 6.4*t2937*t3083)*var2[2] + t3270*var2[5] - 0.768*t3079*var2[6];
  p_output1[29]=t3121;
  p_output1[30]=t2943;
  p_output1[31]=-3.3612 - 6.8*Power(t2907,2) - 3.2*Power(t2917,2) - 3.2*Power(t2921,2) - 6.8*Power(t2927,2) - 3.2*Power(t2937,2) - 3.2*Power(t2941,2);
  p_output1[32]=t3295;
  p_output1[33]=t3297;
  p_output1[34]=t3301;
  p_output1[35]=t3303;
  p_output1[36]=t2786*var2[0] + t3136*var2[1];
  p_output1[37]=t2954*var2[0] + t3166*var2[1] + t3230*var2[2];
  p_output1[38]=t2996*var2[0] + t3182*var2[1] + t3244*var2[2] + (-6.4*t2784*t2990 - 6.4*t2773*t2994)*var2[3] - 0.768*t2990*var2[4];
  p_output1[39]=t3125;
  p_output1[40]=t2786;
  p_output1[41]=t3295;
  p_output1[42]=-1.58228 - 3.2*Power(t2773,2) - 3.2*Power(t2784,2);
  p_output1[43]=t3326;
  p_output1[44]=-0.768*t2760*var2[0] - 0.768*t2871*var2[1];
  p_output1[45]=t3331 + t3332 - 0.768*t2976*var2[2];
  p_output1[46]=t3331 + t3332 - 0.768*t3008*var2[2] - 0.768*t2990*var2[3];
  p_output1[47]=t3126;
  p_output1[48]=t3222;
  p_output1[49]=t3297;
  p_output1[50]=t3326;
  p_output1[51]=-1.2143199999999998;
  p_output1[52]=t2826*var2[0] + t3142*var2[1];
  p_output1[53]=t3025*var2[0] + t3195*var2[1] + t3256*var2[2];
  p_output1[54]=t3067*var2[0] + t3211*var2[1] + t3270*var2[2] + (-6.4*t2824*t3061 - 6.4*t2813*t3065)*var2[5] - 0.768*t3061*var2[6];
  p_output1[55]=t3130;
  p_output1[56]=t2826;
  p_output1[57]=t3301;
  p_output1[58]=-1.58228 - 3.2*Power(t2813,2) - 3.2*Power(t2824,2);
  p_output1[59]=t3359;
  p_output1[60]=-0.768*t2800*var2[0] - 0.768*t2891*var2[1];
  p_output1[61]=t3364 + t3365 - 0.768*t3047*var2[2];
  p_output1[62]=t3364 + t3365 - 0.768*t3079*var2[2] - 0.768*t3061*var2[5];
  p_output1[63]=t3131;
  p_output1[64]=t3223;
  p_output1[65]=t3303;
  p_output1[66]=t3359;
  p_output1[67]=-1.2143199999999998;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 68, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_MmatDx_five_link_walker.hh"

namespace Pattern[DS1, Blank[opt]]
{

void J_MmatDx_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
