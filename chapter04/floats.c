//  Author:Zheng Jun
//  Date:2017/12/26.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void ft(){
    const double RENT = 3852.99;
    printf("*%f*\n",RENT);
//*3852.990000*
    printf("*%e*\n",RENT);
//*3.852990e+03*
    printf("*%4.2f*\n",RENT);
//*3852.99*
    printf("*%3.1f*\n",RENT);
//*3853.0*
    printf("*%10.3f*\n",RENT);
//*  3852.990*
    printf("*%10.3e*\n",RENT);
//* 3.853e+03*
    printf("*% 4.2f*\n",RENT);
//* 3852.99*
    printf("*%+4.2f*\n",RENT);
//*+3852.99*
    printf("*%010.2f*\n",RENT);
//*0003852.99*
}
