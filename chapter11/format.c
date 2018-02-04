//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

#define MAX 20

int sprtf(){
    char first[MAX];
    char last[MAX];
    char formal[MAX*2+10];
    double prize;
    puts("Enter your first name.");
    gets(first);
    puts("Enter your last name.");
    gets(last);
    puts("Enter your prize money.");
    scanf("%lf",&prize);
    sprintf(formal,"%s,%-19s:$%6.2f\n",last,first,prize);//sprintf函数：将格式化好的字符串存入字符串变量中，而不是打印在terminal
    puts(formal);
    return 0;
}
//Enter your first name.
//warning: this program uses gets(), which is unsafe.
//Zheng
//Enter your last name.
//Jun
//Enter your prize money.
//20000
//Jun,Zheng              :$20000.00
//
//
//Process finished with exit code 0