//  Author:Zheng Jun
//  Date:2017/12/30
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void dv(){
    printf("integer division:5/4 is %d\n",5/4);
    printf("integer division:6/3 is %d\n",6/3);
    printf("integer division:7/4 is %d\n",7/4);//注意整数除法对于小数点后面的部分所作处理是全部舍去，而非四舍五入
    printf("floating division:7./4. is %1.2f\n",7./4.);
    printf("mixed division:7./4 is %1.2f\n",7./4);
//    integer division:5/4 is 1
//    integer division:6/3 is 2
//    integer division:7/4 is 1//注意整数除法对于小数点后面的部分所作处理是全部舍去，而非四舍五入
//    floating division:7./4. is 1.75
//    mixed division:7./4 is 1.75

    printf("negtive integer division:-5/4 is %d\n",-5/4);
    printf("negtive integer division:-8/4 is %d\n",-8/4);
    printf("negtive integer division:-7/4 is %d\n",-7/4);
//    negtive integer division:-5/4 is -1
//    negtive integer division:-8/4 is -2
//    negtive integer division:-7/4 is -1
}