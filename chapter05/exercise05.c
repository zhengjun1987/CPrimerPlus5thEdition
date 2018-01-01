//  Author:Zheng Jun
//  Date:2018/1/1
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void test5_10_1();

void test5_10_2();

void main() {
//    test5_10_1();
    test5_10_2();
}

void test5_10_2() {
    int i = 1;
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    while (i++ < 30){
        n = 1.0/(float)i;
        printf("%f\n",n);
    }
    printf("That's all! Folks!");
//    Watch out! Here come a bunch of fractions!
//    0.500000
//    0.333333
//    0.250000
//    0.200000
//    0.166667
//    0.142857
//    0.125000
//    0.111111
//    0.100000
//    0.090909
//    0.083333
//    0.076923
//    0.071429
//    0.066667
//    0.062500
//    0.058824
//    0.055556
//    0.052632
//    0.050000
//    0.047619
//    0.045455
//    0.043478
//    0.041667
//    0.040000
//    0.038462
//    0.037037
//    0.035714
//    0.034483
//    0.033333
//    That's all! Folks!
}

void test5_10_1() {
    int x = (2 + 3) * 6, y;
    printf("x = %d,y = %d\n", x, y);
    x = (12 + 6) / 2 * 3;
    printf("x = %d,y = %d\n", x, y);
    y = x = (2 + 3) / 4;
    printf("x = %d,y = %d\n", x, y);
    y = 3 + 2 * (x = 7 / 2);
    printf("x = %d,y = %d\n", x, y);
//    x = 30,y = 170041810
//    x = 27,y = 170041810
//    x = 1,y = 1
//    x = 3,y = 9

    x = (int) 3.8 + 3.3;;
    printf("x = %d\n", x);
    x = (2 + 3) * 10.5;
    printf("x = %d\n", x);
    x = 3 / 5 * 20;
    printf("x = %d\n", x);
    x = 22.0 * 3 / 5;
    printf("x = %d\n", x);
//    x = 6
//    x = 52
//    x = 0
//    x = 13
}