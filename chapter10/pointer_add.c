//  Author:Zheng Jun
//  Date:2018/1/16
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define SIZE 4

int ptd() {
    short dates[SIZE];
    short *pts;
    double bills[SIZE];
    double *ptd;
    pts = dates;
    ptd = bills;
    printf("%28s %14s\n","short","double");
    for (int i = 0; i < SIZE; ++i) {
        printf("pointers + %d: %10p %10p\n",i,pts+i,ptd+i);
    }
    return 0;
}
//              short          double
//pointers + 0: 0x7ffedfc4d7e0 0x7ffedfc4d7c0
//pointers + 1: 0x7ffedfc4d7e2 0x7ffedfc4d7c8
//pointers + 2: 0x7ffedfc4d7e4 0x7ffedfc4d7d0
//pointers + 3: 0x7ffedfc4d7e6 0x7ffedfc4d7d8