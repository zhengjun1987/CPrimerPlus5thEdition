//  Author:Zheng Jun
//  Date:2018/1/10
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

#define NAME "ZHENGJUN'S Inc."
#define ADDRESS "中华人民共和国浙江省杭州市滨江区滨盛路寰宇天下C区19栋1702室"
#define MOBILE "17131420668"
#define WIDTH 70

void starbar();//函数原型 function prototype 告知编译器函数类型
void lh() {
    starbar();//函数调用 function invocation 执行该函数
    printf("Institute:%s\n", NAME);
    printf("Address:%s\n", ADDRESS);
    printf("Mobile:%s\n", MOBILE);
    starbar();
}

void starbar() //函数定义 function definition 指定函数的具体功能
{
    for (int i = 0; i < WIDTH; ++i) {
        putchar('*');
    }
    putchar('\n');
}
//**********************************************************************
//Institute:ZHENGJUN'S Inc.
//Address:中华人民共和国浙江省杭州市滨江区滨盛路寰宇天下C区19栋1702室
//Mobile:17131420668
//**********************************************************************