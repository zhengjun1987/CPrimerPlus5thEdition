//  Author:Zheng Jun
//  Date:2017/12/27.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void pv(){
    int bph2o =212,rv;
    rv = printf("%d F is water's boiling point.\n",bph2o);
    printf("The printf() function printed %d characters.\n",rv);
//    212 F is water's boiling point.
//    The printf() function printed 32 characters.
}