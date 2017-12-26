//  Author:Zheng Jun
//  Date:2017/12/26.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <limits.h>
#include <float.h>

void cs(){
    printf("CHAR_BIT = %d\n",CHAR_BIT);
    printf("CHAR_MAX = %d\n",CHAR_MAX);
    printf("CHAR_MIN = %d\n",CHAR_MIN);
    printf("SCHAR_MAX = %d\n",SCHAR_MAX);
    printf("SCHAR_MIN = %d\n",SCHAR_MIN);
    printf("UCHAR_MAX = %d\n",UCHAR_MAX);
//    CHAR_BIT = 8
//    CHAR_MAX = 127
//            CHAR_MIN = -128
//    SCHAR_MAX = 127
//            SCHAR_MIN = -128
//            UCHAR_MAX = 255

    printf("INT_MAX = %d\n",INT_MAX);
    printf("INT_MIN = %d\n",INT_MIN);
    printf("UINT_MAX = %ld\n",UINT_MAX);
//    INT_MAX = 2147483647
//            INT_MIN = -2147483648
//            UINT_MAX = 4294967295

    printf("LONG_BIT = %d\n",LONG_BIT);
    printf("LONG_MAX = %lld\n",LONG_MAX);
    printf("LONG_MIN = %lld\n",LONG_MIN);
    printf("ULONG_MAX = %lld\n",ULONG_MAX);
//    LONG_BIT = 64
//    LONG_MAX = 9223372036854775807
//            LONG_MIN = -9223372036854775808
//            ULONG_MAX = -1

    printf("LONG_LONG_MAX = %lld\n",LONG_LONG_MAX);
    printf("LLONG_MAX = %lld\n",LLONG_MAX);
    printf("LLONG_MIN = %lld\n",LLONG_MIN);
    printf("ULONG_MAX = %lld\n",ULONG_MAX);
//    LONG_LONG_MAX = 9223372036854775807
//    LLONG_MAX = 9223372036854775807
//    LLONG_MIN = -9223372036854775808
//    ULONG_MAX = -1


    printf("FLT_MANT_DIG = %d\n",FLT_MANT_DIG);
//    FLT_MANT_DIG = 24
    printf("FLT_DECIMAL_DIG = %d\n",FLT_DECIMAL_DIG);
//    FLT_DECIMAL_DIG = 9
    printf("FLT_DIG = %d\n",FLT_DIG);
    printf("FLT_MAX = %f\n",FLT_MAX);
    printf("FLT_MIN = %f\n",FLT_MIN);
    printf("FLT_MAX_10_EXP = %d\n",FLT_MAX_10_EXP);
    printf("FLT_MIN_10_EXP = %d\n",FLT_MIN_10_EXP);
    printf("FLT_EPSILON = %f\n",FLT_EPSILON);
//    FLT_DIG = 6
//    FLT_MAX = 340282346638528859811704183484516925440.000000
//    FLT_MIN = 0.000000
//    FLT_MAX_10_EXP = 38
//            FLT_MIN_10_EXP = -37
//    FLT_EPSILON = 0.000000
}