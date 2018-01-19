//  Author:Zheng Jun
//  Date:2018/1/19
//  E-mail:zhengjun1987@outlook.com


#include <printf.h>

#define ROWS 3

#define COLS 4


int fun_sum2d(int i, int i1, int pInt[i][i1]);

int v2d() {
    int rs = 3, cs = 10;
    int junk[ROWS][COLS] = {
            {2,  4,  6, 8},
            {3,  5,  7, 9},
            {12, 10, 8, 6}
    };
    int morejunk[ROWS - 1][COLS + 2] = {
            {20, 30, 40, 50, 60, 70},
            {5,  6,  7,  8,  9,  10}
    };
    int varr[rs][cs];
    for (int i = 0; i < rs; ++i) {
        for (int j = 0; j < cs; ++j) {
            varr[i][j] = i * j + j;
        }
    }
    printf("3×4 array\n");
    printf("Sum of all elements = %d\n", fun_sum2d(ROWS, COLS, junk));

    printf("2×6 array\n");
    printf("Sum of all elements = %d\n", fun_sum2d(ROWS - 1, COLS + 2, morejunk));

    printf("3×10 array\n");
    printf("Sum of all elements = %d\n", fun_sum2d(rs, cs, varr));

    return 0;
}

int fun_sum2d(int rs, int cs, int pInt[rs][cs]) {
    int sum = 0;
    for (int i = 0; i < rs; ++i) {
        for (int j = 0; j < cs; ++j) {
            sum += pInt[i][j];
        }
    }
    return sum;
}
//3×4 array
//Sum of all elements = 80
//2×6 array
//Sum of all elements = 315
//3×10 array
//Sum of all elements = 270