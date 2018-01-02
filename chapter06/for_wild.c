//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void fw(){
    for (int i = 1,y=55; y <=75 ; y=(++i*5)+50) {
        printf("%5d %5d\n",i,y);
    }
//    1    55
//    2    60
//    3    65
//    4    70
//    5    75
}