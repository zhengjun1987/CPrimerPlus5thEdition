//  Author:Zheng Jun
//  Date:2018/2/3
//  E-mail:zhengjun1987@outlook.com


#include <printf.h>

#define MAX 81

int n3(){
    char *ptr[MAX];
    printf("Hi,what's your name ?\n");
    char *string = fgets(ptr,MAX-1,stdin);
    printf("%s?Ah!%s!\n",string,ptr);
    return 0;
}
//!Hi,what's your name ?
//Jon Dough
//Jon Dough
//?Ah!Jon Dough
//!