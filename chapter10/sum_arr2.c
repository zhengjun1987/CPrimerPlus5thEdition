//  Author:Zheng Jun
//  Date:2018/1/16
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define SIZE 10

long sump(int *start, int *end);

int sa2() {
    int marble[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer = sump(marble, marble + SIZE);//最后一个元素应该为 marble+SIZE-1，所以marble+SIZE的形式是包前不包后
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof(marble));
    return 0;
}

long sump(int *start, int *end) {
    long result = 0;
    for (int i = 0; i + start < end; ++i) {
        result += *(start + i);
    }
    return result;
}
//The total number of marbles is 190.
//The size of marbles is 40 bytes.