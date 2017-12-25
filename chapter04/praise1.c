//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

#define PRAISE "What a super mavelous name!"

void p1(){
    char name[40];
    printf("What's your name ?\n");
    scanf("%s",name);
    printf("Hello,%s. %s\n",name,PRAISE);
}
//What's your name ?
//Donald Trump
//Hello,Donald. What a super mavelous name!
//
//Process finished with exit code 42