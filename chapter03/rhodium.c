//  Author:Zheng Jun
//  Date:2017/12/23.
//  E-mail:zhengjun1987@outlook.com
/*用金属铑衡量您的体重*/
#include <stdio.h>

void rh() {
    float weight, value;
    printf("Are you worth your weight in rhodium?\n");
    printf("Let's check it out!\n");
    printf("Please enter your weight in pounds:\n");
    scanf("%f", &weight);
    printf("weight from input:%.2f\n", weight);
    value = 770 * weight * 14.5833;
    printf("Your weight in rhodium is %.5f.\n", value);
    printf("You are easily worth that! If rhodium price drops,eat more to maintain your worth!\n");

    printf("/Users/zhengjun/CLionProjects/CPrimerPlus5thEdition");
}
//Are you worth your weight in rhodium?
//Let's check it out!
//170
//Please enter your weight in pounds:Your weight in rhodium is 1908954.00.
//You are easily worth that! If rhodium price drops,eat more to maintain your worth!
///Users/zhengjun/CLionProjects/CPrimerPlus5thEdition
//Process finished with exit code 51

