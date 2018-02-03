//  Author:Zheng Jun
//  Date:2018/2/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define MAX 81

int n2(){
    char *ptr[MAX];
    printf("Hi,what's your name ?\n");
    char *string = gets(ptr);
    printf("Nice name, %s\n",string);
    return 0;
}
//Hi,what's your name ?
//The Mysterious Davina D'Lema
//Nice name, The Mysterious Davina D'Lema