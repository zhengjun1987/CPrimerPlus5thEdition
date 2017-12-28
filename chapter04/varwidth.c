//  Author:Zheng Jun
//  Date:2017/12/28.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void vw(){
    unsigned width,precision;
    int number = 256;
    double weight = 242.5;
    printf("What field width?\n");
    scanf("%d",&width);
    printf("The number is:%*d\n",width,number);
    printf("Now,enter a width and a precision.\n");
    scanf("%d %d",&width,&precision);
    printf("weight = %*.*f\n",width,precision,weight);
}
//What field width?
//6
//The number is:   256
//Now,enter a width and a precision.
//8 3
//weight =  242.500