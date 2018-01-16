//  Author:Zheng Jun
//  Date:2018/1/16
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define SIZE 10

long sum(int arr[], int i);

int sa1(){
    int marble[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer = sum(marble,SIZE);
    printf("The total number of marbles is %ld.\n",answer);
    printf("The size of marbles is %zd bytes.\n", sizeof(marble));
    return 0;
}

long sum(int arr[], int i) {
    long result = 0;
    for (int j = 0; j < i; ++j) {
        result += *(arr+j);
    }
    printf("The size of arr is %zd bytes.\n", sizeof(arr));
    return result;
}
//The size of arr is 8 bytes.   arr只是一个指向数组的指针，它的长度取决于计算机系统
//The total number of marbles is 190.
//The size of marbles is 40 bytes. marble在此处代表的是数组整体
