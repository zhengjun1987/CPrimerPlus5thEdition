//  Author:Zheng Jun
//  Date:2018/1/4
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void ts() {
    int n = 30, m;
    while (++n <= 33) {
        printf("%d|", n);
    }
    printf("\n");
    n = 30;
    do
        printf("%d|", n);
    while (++n <= 33);
//    31|32|33|
//    30|31|32|33|

    printf("\n***\n");

    for (n = 1; n * n < 200; n += 4) {
        printf("%d\n", n);
    }
//    1
//    5
//    9
//    13

    printf("\n***\n");

    for (n = 2, m = 6; n < m; n *= 2, m += 2) {
        printf("%d %d\n", n, m);
    }
//    2 6
//    4 8
//    8 10

    printf("\n***\n");

    for (n = 5;n >0 ; n--) {
        for (int i = 0; i < n; ++i) {
            printf("=");
        }
        printf("\n");
    }
//    =====
//    ====
//    ===
//    ==
//    =
}