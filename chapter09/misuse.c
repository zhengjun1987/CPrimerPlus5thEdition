//  Author:Zheng Jun
//  Date:2018/1/11
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

//int imax();
int imax(int i, int i1);

void mu() {
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3,5));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
}
//旧式函数声明int imax();的结果：
//The maximum of 3 and 5 is 5.
//The maximum of 3 and 5 is 73832.

//新式函数声明的结果：
//The maximum of 3 and 5 is 5.
//The maximum of 3 and 5 is 5.


int imax(int i, int i1) {
    return (i > i1) ? i : i1;
}