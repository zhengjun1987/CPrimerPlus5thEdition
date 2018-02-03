//  Author:Zheng Jun
//  Date:2018/2/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define MAX 81

int n1(){
    char name[MAX];
    printf("Hi,what's your name ?\n");
    gets(name);
    printf("Nice name, %s\n",name);
    return 0;
}
//Hi,what's your name ?
//Wellington Snackworthy
//Nice name, Wellington Snackworthy