//  Author:Zheng Jun
//  Date:2018/1/3
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

double power(double x, int exp);

void pw(){
    double x,xpow;
    int exp;
    printf("Enter a number and a positive integer power:\n");
    while (scanf("%lf %d",&x,&exp)==2){
        xpow = power(x,exp);
        printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
        printf("Enter a number and a positive integer power:\n");
    }
    printf("谢谢使用，再见！");
}

double power(double x, int exp) {
    double result = 1.0;
    for (int i = 0; i < exp; ++i) {
        result *= x;
    }
    return result;
}
//Enter a number and a positive integer power:
//12 12
//12 to the power 12 is 8.9161e+12
//Enter a number and a positive integer power:
//12 4
//12 to the power 4 is 20736
//Enter a number and a positive integer power:
//1.1 35
//1.1 to the power 35 is 28.102
//Enter a number and a positive integer power:
//1.2 12
//1.2 to the power 12 is 8.9161
//Enter a number and a positive integer power:
//2 16
//2 to the power 16 is 65536
//Enter a number and a positive integer power:
//q
//谢谢使用，再见！