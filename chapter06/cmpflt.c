//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <math.h>

void cf() {
    const double PI = 3.14159;
    double answer;
    printf("What is the value of pi ?\n");
    scanf("%lf", &answer);
    while (fabs(answer - PI) > 0.0001) {
        printf("Try again!\n");
        scanf("%lf", &answer);
    }
    printf("Close enough!");
}
//What is the value of pi ?
//3.14
//Try again!
//3.1416
//Close enough!