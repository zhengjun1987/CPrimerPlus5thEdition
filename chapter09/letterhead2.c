//  Author:Zheng Jun
//  Date:2018/1/10
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <memory.h>

#define NAME "NAME:ZHENGJUN'S Inc."
#define ADDRESS "ADDRESS:101 MEGABUCK PLAZA"
#define MOBILE "MOBILE:17131420668"
#define WIDTH 70
#define SPACE ' '

void show_n_char(char, int);//函数原型声明时可以省略形式参数的名称，只写参数类型

void lh2(){
    int spaces;
    show_n_char('*',WIDTH);
    putchar('\n');
    show_n_char(SPACE,(WIDTH-strlen(NAME))/2);
    printf("%s\n",NAME);
    spaces=(WIDTH-strlen(ADDRESS))/2;
    show_n_char(SPACE,spaces);
    printf("%s\n",ADDRESS);
    show_n_char(SPACE,(WIDTH-strlen(MOBILE))/2);
    printf("%s\n",MOBILE);
    show_n_char('*',WIDTH);
    putchar('\n');
}

void show_n_char(char ch, int count) {
    for (int i = 0; i < count; ++i) {
        putchar(ch);
    }
}
//**********************************************************************
//                         NAME:ZHENGJUN'S Inc.
//                      ADDRESS:101 MEGABUCK PLAZA
//                          MOBILE:17131420668
//**********************************************************************