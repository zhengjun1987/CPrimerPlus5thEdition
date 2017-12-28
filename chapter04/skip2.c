//  Author:Zheng Jun
//  Date:2017/12/28.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void s2(){
    int n;
    printf("Please enter 3 integers:\n");
    scanf("%*d %*d %d",&n);
    printf("The caught integer is %d\n",n);
//    Please enter 3 integers:
//    2016 2017 2018
//    The caught integer is 2018
}