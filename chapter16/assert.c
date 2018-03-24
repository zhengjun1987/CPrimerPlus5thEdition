#include <stdio.h>
#include <assert.h>
#include <math.h>

/**
 *  Author:Zheng Jun
 *  Date:2018/3/24 20:15
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

int asrt(){
    double x,y,z;
    puts("Enter a pair of numbers (0 0 to quit):");
    while (scanf("%lf %lf",&x,&y)==2 && (x != 0 || y !=0)){
        z = x*x-y*y;
        assert(z >= 0);
        printf("The answer is %lf\n",sqrt(z));
        puts("Next pair of numbers:");
    }
    puts("Done!");
    return 0;
}
//    Enter a pair of numbers (0 0 to quit):
//    4 3
//    The answer is 2.645751
//    Next pair of numbers:
//    5 3
//    The answer is 4.000000
//    Next pair of numbers:
//    3 5
//    Assertion failed: (z >= 0), function main, file /Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/chapter16/assert.c, line 17.
//    Signal: SIGABRT (signal SIGABRT)
//    Signal: SIGABRT (signal SIGABRT)
//    Terminated due to signal 6
//
//    Process finished with exit code 0