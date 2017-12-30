//  Author:Zheng Jun
//  Date:2017/12/30
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void a1(){
    int ultra = 0,super = 0;
    while (super < 5){
        super++;
        ++ultra;
        printf("super = %d, ultra = %d\n",super,ultra);
    }
}
//super = 1, ultra = 1
//super = 2, ultra = 2
//super = 3, ultra = 3
//super = 4, ultra = 4
//super = 5, ultra = 5