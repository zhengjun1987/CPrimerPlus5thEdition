//  Author:Zheng Jun
//  Date:2018/1/15
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define SIZE 4
int sd(){
    int some_data[SIZE] = {1492,1066};
    printf("%2s%14s\n","i","some_data[i]");
    for (int i = 0; i < SIZE; ++i) {
        printf("%2s%14s\n",i,some_data[i]);
    }
    return 0;
}
//i = {int} 0
//((int)(i)) = {int} 0
//((int)(((int)(i)))) = {int} 0
//Exception = EXC_BAD_ACCESS (code=1, address=0x5d0)
//some_data = {int [4]}
//[0] = {int} 1492
//[1] = {int} 1066
//[2] = {int} 0
//[3] = {int} 0
//i = {int} 0