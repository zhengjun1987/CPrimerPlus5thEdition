//  Author:Zheng Jun
//  Date:2018/1/13
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int minx(int i, int i1);

int e09() {
    int imin = minx(9328, 23890);
    printf("imin = %d\n",imin);
    return 0;
}

int minx(int i, int i1) {
    return (i < i1) ? i : i1;
}