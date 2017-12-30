//  Author:Zheng Jun
//  Date:2017/12/30.
//  E-mail:zhengjun1987@outlook.com
#include <printf.h>

#define ADJUST 7.64
#define SCALE 0.325
void shoes1(){
    double shoe =9.0,foot=SCALE*shoe+ADJUST;
    printf("Shoe size(men's)  foot length\n");
    printf("%10.1f %15.2f inches\n",shoe,foot);
//    Shoe size(men's) foot length
//    9.0           10.56 inches
}