//  Author:Zheng Jun
//  Date:2018/1/13
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void interchange1(int x, int y);

int sw() {
    int x = 5, y = 10;
    printf("x = %d, y = %d\n", x, y);
    interchange1(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

void interchange1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
//x = 5, y = 10
//x = 5, y = 10
//x与y的值并未发生变化
