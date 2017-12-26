//  Author:Zheng Jun
//  Date:2017/12/26.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <limits.h>
#include <float.h>

void df(){
    printf("Some number limits for this system:\n");
    printf("Biggest int : %d\n",INT_MAX);
    printf("Smallest unsigned long : %lld\n",LLONG_MIN);
    printf("One byte = %d bits on this system.\n",CHAR_BIT);
    printf("Largest double : %e\n",DBL_MAX);
    printf("Smallest normal float : %e\n",FLT_MIN);
    printf("Float precision : %d\n",FLT_DIG);
//    Some number limits for this system:
//    Biggest int : 2147483647
//    Smallest unsigned long : -9223372036854775808
//    One byte = 8 bits on this system.
//    Largest double : 1.797693e+308
//    Smallest normal float : 1.175494e-38
//    Float precision : 6
}