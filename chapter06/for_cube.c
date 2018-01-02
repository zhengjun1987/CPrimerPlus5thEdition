//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void fc(){
    printf("   n  cubed\n");
    for (int i = 0; i < 21; ++i) {
        printf("%4d %6d\n",i,i*i*i);
    }
//    n  cubed
//    0      0
//    1      1
//    2      8
//    3     27
//    4     64
//    5    125
//    6    216
//    7    343
//    8    512
//    9    729
//    10   1000
//    11   1331
//    12   1728
//    13   2197
//    14   2744
//    15   3375
//    16   4096
//    17   4913
//    18   5832
//    19   6859
//    20   8000

}