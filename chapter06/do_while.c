//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void dw(){
    int i = 1;
    int j = 2;
    do
        printf("i = %d\n",i),i++,j=i*2;
    while (i < 10,j<18);//由此可见逗号分隔符可以在条件判断语句中随意添加判断、操作
//    i = 1
//    i = 2
//    i = 3
//    i = 4
//    i = 5
//    i = 6
//    i = 7
//    i = 8
}