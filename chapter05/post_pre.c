//  Author:Zheng Jun
//  Date:2017/12/30
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void pre(){
    int a=1,b=1;
    int aplus,plusb;
    aplus = a++;
    plusb = ++b;
    printf("a aplus b plusb\n");
    printf("%1d %5d %1d %5d\n",a,aplus,b,plusb);
}
//a aplus b plusb
//2     1 2     2