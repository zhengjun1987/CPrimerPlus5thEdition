//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

/* string concatenation字符串拼接strcat()方法 */

#include <stdio.h>
#include <string.h>

#define SIZE 80

int sc() {
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    puts("What's your favourite flower?");
    gets(flower);
    puts(strcat(flower, addon));//string concatenation字符串拼接strcat()方法
    //此方法并不检查第一个数组是否能够容纳第二个字符串
    puts(flower);
    puts(addon);
    return 0;
}
//What's your favourite flower?
//warning: this program uses gets(), which is unsafe.
//Rose
//        Roses smell like old shoes.
//Roses smell like old shoes.
//s smell like old shoes.
//
//Process finished with exit code 0