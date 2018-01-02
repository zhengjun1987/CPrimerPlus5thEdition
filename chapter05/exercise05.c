//  Author:Zheng Jun
//  Date:2018/1/1
//  E-mail:zhengjun1987@outlook.com
#define FORMAT "%s,C is cool!\n"
#define TEN 10
#define MESG "COMPUTER BYTES DOG"
#define M_PER_H 60

#include <printf.h>

void test5_10_1();

void test5_10_2();

void test5_10_05();

void test5_10_06();

void test5_10_07();

void test5_10_08();

void test5_10_09();

void test5_10_10();

void test5_10_11();

void test5_10_12();

void test5_11_01();

void test5_11_02();

void main() {
//    test5_10_1();
//    test5_10_2();
//    test5_10_05();
//    test5_10_06();
//    test5_10_07();
//    test5_10_08();
//    test5_10_09();
//    test5_10_10();
//    test5_10_11();
//    test5_10_12();
//    test5_11_01();
//    test5_11_02();
}

void test5_11_02() {
    int i = 0;
    printf("Please enter the initial number.\n");
    scanf("%d",&i);
    int j = i;
    while (j <= i+10){
        printf("%5d\n",j);
        j++;
    }
//    Please enter the initial number.
//    149
//    149
//    150
//    151
//    152
//    153
//    154
//    155
//    156
//    157
//    158
//    159
}

void test5_11_01() {
    int min = 0;
    printf("Please enter the minuter number,enter 0 or negtive numbers to exit.\n");
    scanf("%d",&min);
    while (min > 0){
        int hour = min / M_PER_H;
        int mins = min % M_PER_H;
        printf("%d minutes is equivalent to %d hours and %d minutes.\n",min,hour,mins);
        printf("Please enter the minuter number,enter 0 or negtive numbers to exit.\n");
        scanf("%d",&min);
    }
    printf("Bye!\n");
//    Please enter the minuter number,enter 0 or negtive numbers to exit.
//    149
//    149 minutes is equivalent to 2 hours and 29 minutes.
//    Please enter the minuter number,enter 0 or negtive numbers to exit.
//    179
//    179 minutes is equivalent to 2 hours and 59 minutes.
//    Please enter the minuter number,enter 0 or negtive numbers to exit.
//    169
//    169 minutes is equivalent to 2 hours and 49 minutes.
//    Please enter the minuter number,enter 0 or negtive numbers to exit.
//    0
//    Bye!

}

void test5_10_12() {
    int x, n, k, m, a, b, c, d, p, q;
    --x;
    m = n % k;
    p = (b - a) / q;
    x = (a + b) / (c * d);
}

void test5_10_11() {
    int x, a, b, c;
    x = 0;
    x += 10;
    ++x;
    a = b = 0;
    c = (a + b) * 2;
    c = 2 * a + b;
}

void test5_10_10() {
    int i = 0;
    while (i < 5) {
        printf("%s\n", MESG);
        i++;
    }
    printf("That's all!");
//    COMPUTER BYTES DOG
//    COMPUTER BYTES DOG
//    COMPUTER BYTES DOG
//    COMPUTER BYTES DOG
//    COMPUTER BYTES DOG
//    That's all!
}

void test5_10_09() {
    int x = 0;
    while (++x < 3) {
        printf("%4d", x);
    }

    printf("\n");

    int y = 100;
    while (y++ < 103)
        printf("%4d\n", y);
    printf("%4d\n", y);

    char c = 's';
    while (c < 'w') {
        printf("%c", c);
        c++;
    }
//    1   2
//    101
//    102
//    103
//    104
//    stuv
}

void test5_10_08() {
    int n = 96;
    while (n++ < 103) {
        printf("%5c", n);
    }
    printf("\n");
//    a    b    c    d    e    f    g
}

void test5_10_07() {
    int n = 0;
    while (n++ < TEN) {
        printf("%5d", n);
    }
    printf("\n");
//    1    2    3    4    5    6    7    8    9   10
}

void test5_10_06() {
    char c1, c2;
    int diff;
    float num;
    c1 = 'S';
    c2 = 'O';
    diff = c1 - c2;
    num = diff;
    printf("%c%c%c: %d %3.2f\n", c1, c2, c1, diff, num);
//    SOS: 4 4.00
}

void test5_10_05() {
    int num = 10;
    printf(FORMAT, FORMAT);
    printf("%d\n", ++num);//11
    printf("%d\n", num++);//11
    printf("%d\n", num--);//12
    printf("%d\n", --num);//10
//    %s,C is cool!
//    ,C is cool!
//    11
//    11
//    12
//    10
}

void test5_10_2() {
    int i = 1;
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    while (i++ < 30) {
        n = 1.0 / (float) i;
        printf("%f\n", n);
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