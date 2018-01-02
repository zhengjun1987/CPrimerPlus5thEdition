//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void fd(){
    for (int i = 5; i > 0; --i) {
        printf("%d seconds!\n",i);
    }
    printf("We have ignition!");
//            5 seconds!
//            4 seconds!
//            3 seconds!
//            2 seconds!
//            1 seconds!
//            We have ignition!
}