//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

unsigned long recurse(int i);

void rc(){
    long unsigned int sum = recurse(100);
    printf("sum = %lu",sum);
}

unsigned long recurse(int i) {
    unsigned long i1 = 0;
    if (i > 1) {
        i1 = i * i + recurse(i - 1);
    } else {
        i1 = 1;
    }
    return i1;
}