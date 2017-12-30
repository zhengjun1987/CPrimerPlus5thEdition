//  Author:Zheng Jun
//  Date:2017/12/30
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void au() {
    int count, sum = 0;//声明语句
    count = 0;//(初始化)赋值语句
    while (count++ < 20) {//循环语句（结构化语句 structured statement）
        sum += count;//运算语句
    }
    printf("sum = %d\n", sum);//函数语句
}