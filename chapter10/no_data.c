//  Author:Zheng Jun
//  Date:2018/1/15
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define SIZE 4
int nd(){
    int no_data[SIZE] = {};
    printf("%2s%14s\n","i","no_data[i]");
    for (int i = 0; i < SIZE; ++i) {
        printf("%2s%14s\n",i,no_data[i]);
    }
    return 0;
}
//Exception = EXC_BAD_ACCESS (code=1, address=0x0)
//no_data = {int [4]}
//[0] = {int} 0
//[1] = {int} 0
//[2] = {int} 0
//[3] = {int} 0
//i = {int} 1