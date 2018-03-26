#include <stdio.h>
#include <string.h>

#define SIZE 10

void show_array1(const int pInt[], int i);

/**
 *  Author:Zheng Jun
 *  Date:2018/3/26 22:01
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

int mms() {
    int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target[SIZE];
    double curious[SIZE / 2] = {1.0, 2.0, 3.0, 4.0, 5.0};
    puts("memcopy() used:");
    puts("values (original data): ");
    show_array1(values, SIZE);
    memcpy(target, values, SIZE * sizeof(int));
    puts("target (copy of values): ");
    show_array1(target, SIZE);

    puts("\nUsing memmove() with overlapping ranges:");
    memmove(values + 2, values, 5 * sizeof(int));
    puts("values -- elements 0-5 copied to 2-7:");
    show_array1(values, SIZE);

    puts("\nUsing memcpy() to copy double to int:");
    memcpy(target, curious, (SIZE / 2) * sizeof(double));
    puts("target -- 5 doubles into 10 int positions:");
    show_array1(target, SIZE);
    return 0;
}

void show_array1(const int pInt[], int i) {
    for (int j = 0; j < i; ++j) {
        printf("%d ", pInt[j]);
    }
    putchar('\n');
}
//    memcopy() used:
//    values (original data):
//    1 2 3 4 5 6 7 8 9 10
//    target (copy of values):
//    1 2 3 4 5 6 7 8 9 10
//
//    Using memmove() with overlapping ranges:
//    values -- elements 0-5 copied to 2-7:
//    1 2 1 2 3 4 5 8 9 10
//
//    Using memcpy() to copy double to int:
//    target -- 5 doubles into 10 int positions:
//    0 1072693248 0 1073741824 0 1074266112 0 1074790400 0 1075052544