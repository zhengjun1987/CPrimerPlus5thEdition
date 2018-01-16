//  Author:Zheng Jun
//  Date:2018/1/15
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define SIZE 4

int bds() {
    int value1 = 44, arr[SIZE], value2 = 88, i;
    printf("value1 = %d, value2 = %d\n", value1, value2);
    for (int j = -1; j <= SIZE; ++j) {
        arr[j] = 2 * j + 1;
    }
    for (int k = -1; k < 7; ++k) {
        printf("%2d %d\n",k,arr[k]);
    }
    printf("value1 = %d, value2 = %d\n", value1, value2);
    return 0;
}
//value1 = 44, value2 = 88
//-1 -1
//0 1
//1 3
//2 5
//3 7
//4 9
//5 32766
//6 -1765736392
//value1 = 44, value2 = 88