//  Author:Zheng Jun
//  Date:2018/1/19
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define COLS 4

#define ROWS 3

void sum_rows(int pInt[][COLS], int i);

void sum_cols(int pInt[][COLS], int i);

int sum2d(int pInt[][COLS], int i);

int a2d() {
    int junk[ROWS][COLS] = {
            {2,  4,  6, 8},
            {3,  5,  7, 9},
            {12, 10, 8, 6}
    };
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
    return 0;
}

void sum_cols(int pInt[][COLS], int i) {
    for (int j = 0; j < COLS; ++j) {
        int sum = 0;
        for (int k = 0; k < i; ++k) {
            sum += *(*(pInt+k)+j);
        }
        printf("Column %d sums to %d\n",j,sum);
    }
}

void sum_rows(int pInt[][COLS], int i) {
    for (int j = 0; j < i; ++j) {
        int total = 0;
        for (int k = 0; k < COLS; ++k) {
            total += *(*(pInt+j)+k);
        }
        printf("Row %d sums to %d\n",j,total);
    }
}

int sum2d(int pInt[][COLS], int i) {
    int result = 0;
    for (int j = 0; j < COLS * i; ++j) {
        result += *(*pInt+j);
    }
    return result;
}
//Row 0 sums to 20
//Row 1 sums to 24
//Row 2 sums to 36
//Column 0 sums to 17
//Column 1 sums to 19
//Column 2 sums to 21
//Column 3 sums to 23
//Sum of all elements = 80