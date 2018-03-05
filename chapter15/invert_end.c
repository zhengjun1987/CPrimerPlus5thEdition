//  Author:Zheng Jun
//  Date:2018/3/5 21:21
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

extern int invert_end(int num, int bits);

char *itobs(int number, char *bin);

int iv() {
    int invertEnd = invert_end(15, 2);
    printf("result = %d", invertEnd);
    return 0;
}

int invert_end(int num, int bits) {
    int mask = 0;
    int bitval = 1;
    while (bits-- > 0) {
        mask |= bitval;
        bitval <<= 1;
    }

    return num ^ mask;
}