//  Author:Zheng Jun
//  Date:2018/1/4
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define RATE1 0.12589
#define RATE2 0.17901
#define RATE3 0.20971
#define BREAK1 360
#define BREAK2 680
#define BASE1 (RATE1*BREAK1)
#define BASE2 (RATE1*BREAK1+RATE2*(BREAK2-BREAK1))

void main(){
    double kwh,bill;
    printf("Enter the kwh used:\n");
    scanf("%lf",&kwh);
    if(kwh<=BREAK1)
        bill=kwh*RATE1;
    else if(kwh<=BREAK2)
        bill=BASE1+RATE2*(kwh-BREAK1);
    else
        bill=BASE2+RATE3*(kwh-BREAK2);
    printf("The charge for %.1lf kwh is %1.2lf\n",kwh,bill);
}
//Enter the kwh used:
//580
//The charge for 580.0 kwh is 84.70

//Enter the kwh used:
//850
//The charge for 850.0 kwh is 138.25