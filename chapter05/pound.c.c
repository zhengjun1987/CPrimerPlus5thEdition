//  Author:Zheng Jun
//  Date:2018/1/1
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void pound(int n);

void pd(){
    int times = 5;
    char ch = '!';
    float f = 6.0f;
    pound(times);
    pound(ch);
    pound(f);
}
//#####
//#################################
//######

void pound(int n) {
    while (n-- > 0){
        printf("#");
    }
    printf("\n");
}