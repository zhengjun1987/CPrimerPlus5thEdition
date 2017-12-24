//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

void es(){
    float salary;
    printf("\aEnter your desired monthly salary:");
    printf("$_______\b\b\b\b\b\b\b\n");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12.0);
    printf("\rGee!\n");
}