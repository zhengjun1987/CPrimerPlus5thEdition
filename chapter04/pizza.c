//  Author:Zheng Jun
//  Date:2017/12/25.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <limits.h>

#define PI 3.141593

#define TOES  20

void pz(){
    float area,circum,radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);
    area = PI*radius*radius;
    circum=2*PI*radius;
    printf("Your basic pizza parameters are below:\n");
    printf("circumference = %1.2f,area = %1.2f\n",circum,area);

    /*预处理器常量声明格式*/
    int digit = 20+TOES;
    printf("%d\n",digit);

    /*用const修饰符标识常量*/
    const float pi = 3.141593;
    printf("%f",pi);//3.141593

    printf("Maximum unsigned int value on this system is %ld\n",UINT_MAX);
//    Maximum unsigned int value on this system is 4294967295
    printf("Maximum int value on this system is %d\n",INT_MAX);
//    Maximum int value on this system is 2147483647
    printf("Minim int value on this system is %d\n",INT_MIN);
//    Minim int value on this system is -2147483648
}
//What is the radius of your pizza?
//6
//Your basic pizza parameters are below:
//circumference = 37.70,area = 113.10
//
//Process finished with exit code 36