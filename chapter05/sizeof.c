//  Author:Zheng Jun
//  Date:2017/12/30
//  E-mail:zhengjun1987@outlook.com


#include <printf.h>

void sz() {
    int n = 0;
    size_t intsize = sizeof(int);//此处的类型size_t由typedef机制定义为unsigned int的别名
    printf("n = %d,n has %zd bytes;all ints have %zd bytes.\n",n, sizeof(n),intsize);
//    n = 0,n has 4 bytes;all ints have 4 bytes.
}