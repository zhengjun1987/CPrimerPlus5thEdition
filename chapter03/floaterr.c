//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com
#include <stdio.h>
/*float四舍五入误差*/
void fe(){
    float a,b;
    b = 2.0e20+1.0;
    a = b - 2.0e20;
    printf("a = %lf, b = %lf\n",a,b);
//    a = 4008175468544.000000, b = 200000004008175468544.000000
}
