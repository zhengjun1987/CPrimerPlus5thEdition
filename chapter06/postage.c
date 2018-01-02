//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void pt() {
    const int first_oz = 37;
    const int next_oz = 23;
    int ounces, cost;
    printf(" ounces    cost\n");
    for (ounces = 1, cost = first_oz,printf("===============\n"); ounces <= 16; ++ounces,cost += next_oz) {//注意此处statement之间不是用分号隔开的
        printf("%7d %7.2f\n", ounces, cost / 100.0);
    }
//    ounces    cost
//              ===============
//                      1    0.37
//    2    0.60
//    3    0.83
//    4    1.06
//    5    1.29
//    6    1.52
//    7    1.75
//    8    1.98
//    9    2.21
//    10    2.44
//    11    2.67
//    12    2.90
//    13    3.13
//    14    3.36
//    15    3.59
//    16    3.82
}