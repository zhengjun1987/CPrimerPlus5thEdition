//  Author:Zheng Jun
//  Date:2018/3/8 22:32
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void int_2_binary(int i);

void e15_7_1();

int binary_2_int(char *string, int i);

void e15_7_02();

void e15_7_03();

void e15_7_04();

int main() {
//    e15_7_1();
//    e15_7_02();
//    e15_7_03();
//    e15_7_04();

    return 0;
}

void e15_7_04() {
    int_2_binary(~0);
    int_2_binary(!0);
    int_2_binary(2 & 4);
    int_2_binary(2 && 4);
    int_2_binary(2 | 4);
    int_2_binary(2 || 4);
    int_2_binary(5 << 3);
//    int  -1 in binary:11111111111111111111111111111111
//    int   1 in binary:00000000000000000000000000000001
//    int   0 in binary:00000000000000000000000000000000
//    int   1 in binary:00000000000000000000000000000001
//    int   6 in binary:00000000000000000000000000000110
//    int   1 in binary:00000000000000000000000000000001
//    int  40 in binary:00000000000000000000000000101000
}

void e15_7_03() {
    int_2_binary(~3);
    int_2_binary(3 & 6);
    int_2_binary(3 | 6);
    int_2_binary(1 | 6);
    int_2_binary(3 ^ 6);
    int_2_binary(7 >> 1);
    int_2_binary(7 << 1);
//    int  -4 in binary:11111111111111111111111111111100
//    int   2 in binary:00000000000000000000000000000010
//    int   7 in binary:00000000000000000000000000000111
//    int   7 in binary:00000000000000000000000000000111
//    int   5 in binary:00000000000000000000000000000101
//    int   3 in binary:00000000000000000000000000000011
//    int  14 in binary:00000000000000000000000000001110
}

void e15_7_02() {
    binary_2_int("00010101", 8);
    binary_2_int("01010101", 8);
    binary_2_int("01001100", 8);
    binary_2_int("10011101", 8);
//    binary 00010101 equals int  21
//    binary 01010101 equals int  85
//    binary 01001100 equals int  76
//    binary 10011101 equals int 157
}

int binary_2_int(char *string, int i) {
    int result = 0;
    for (int j = i - 1; j >= 0; --j) {
        if (string[j] == '1') {
            int tem = 1;
            for (int k = 0; k < i - 1 - j; ++k) {
                tem *= 2;
            }
            result += tem;
        }
    }
    printf("binary %s equals int %3d\n", string, result);
    return result;
}

void e15_7_1() {
    int_2_binary(3);
    int_2_binary(13);
    int_2_binary(59);
    int_2_binary(119);
//    int   3 in binary:00000000000000000000000000000011
//    int  13 in binary:00000000000000000000000000001101
//    int  59 in binary:00000000000000000000000000111011
//    int 119 in binary:00000000000000000000000001110111
//
//    Process finished with exit code 0
}

void int_2_binary(int i) {
    int size = sizeof(int) * 8;
    char bin[size + 1];
    for (int j = 0; j < size; ++j) {
        int t = (i >> j) & 01;
        bin[size - 1 - j] = (char) (t + '0');
    }
    bin[size] = '\0';

    printf("int %3d in binary:%s\n", i, bin);
}