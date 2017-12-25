//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

void e3(){
    printf("%d %d\n", sizeof(int32_t), sizeof(__int32_t));// 4 4

    float g,h;
    double tax,rate=0.25;
    g = 1e10;
    tax = g*rate;
    printf("tax = %.2f\n",tax);

    int cows,legs;
    printf("How many cow legs did you count?\n");
    scanf("%d",&legs);
    cows = legs/4;
    printf("That implies there are %d cows.\n",cows);
//    How many cow legs did you count?
//                              160
//                              That implies there are 40 cows.

    double secobds = 3.156e7;
    printf("My life contains %.0lf seconds.\n",secobds*31);//My life contains 978360000 seconds.

    printf("1夸脱水所含水分子数为%e\n",950/3.0e-23);//1夸脱水所含水分子数为3.166667e+25

    printf("我的身高英寸数为%f\n",172/2.54);//我的身高英寸数为67.716535
}