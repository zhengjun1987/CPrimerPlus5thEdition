//  Author:Zheng Jun
//  Date:2017/12/30
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define ADJUST 7.64
#define SCALE 0.325

void shoe2() {
    double shoe, foot;
    printf("Shoe size(men's)     foot length\n");
    shoe = 3.0;
    while (shoe < 18.5) {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe++, foot);//浮点数也可以用++、--这种自增运算符
//        shoe += 1.0;
    }
//    Shoe size(men's)    foot length
//    3.0            8.62 inches
//    4.0            8.94 inches
//    5.0            9.27 inches
//    6.0            9.59 inches
//    7.0            9.91 inches
//    8.0           10.24 inches
//    9.0           10.56 inches
//    10.0           10.89 inches
//    11.0           11.21 inches
//    12.0           11.54 inches
//    13.0           11.87 inches
//    14.0           12.19 inches
//    15.0           12.52 inches
//    16.0           12.84 inches
//    17.0           13.16 inches
//    18.0           13.49 inches

}