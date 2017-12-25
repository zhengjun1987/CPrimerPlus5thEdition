//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <memory.h>

#define DENSITY 62.4//预处理器 符号常量

void tb(){
    float weight,volume;
    int size,letters;
    char name[40];

    printf("Hi,what's your first name?\n");
    scanf("%s",name);
    printf("%s,what's your weight in pounds?\n",name);
    scanf("%f",&weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well,%s,your volume is %2.2f cubic feet.\n",name,volume);
    printf("Also,your first name has %d letters.\n",letters);
    printf("And we have %d bytes to store it in.\n",size);
//    Hi,what's your first name?
//    Zhengjun
//    Zhengjun,what's your weight in pounds?
//    140
//    Well,Zhengjun,your volume is 2.24 cubic feet.
//            Also,your first name has 8 letters.
//            And we have 40 bytes to store it in.
}