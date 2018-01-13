//  Author:Zheng Jun
//  Date:2018/1/13
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void interchange(int *x, int *y);

int sw3() {
    int x = 6, y = 9;
    printf("x = %d, y = %d\n", x, y);
    interchange(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

void interchange(int *x, int *y) {
    printf("x = %d, y = %d\n", *x, *y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("x = %d, y = %d\n", *x, *y);
}
//x = 5, y = 10
//x = 5, y = 10
//x = 10, y = 5
//x = 10, y = 5