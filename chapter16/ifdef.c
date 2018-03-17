/**
 *  Author:Zheng Jun
 *  Date:2018/3/17 16:58
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

#include <stdio.h>

#define JUST_CHECKING

#define LIMIT 4

int main(){
    int total = 0;
    for (int i = 0; i < LIMIT; ++i) {
        total += 2*(i+1)*(i+1)+1;
#ifndef JUST_CHECKING
        printf("i = %d,running total = %d\n",i+1,total);
#endif
    }
    printf("Grand total = %d\n",total);
    return 0;
}
//i = 1,running total = 3
//i = 2,running total = 12
//i = 3,running total = 31
//i = 4,running total = 64
//Grand total = 64
//
//Process finished with exit code 0