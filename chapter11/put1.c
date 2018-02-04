//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

/* puts()的改良版，打印字符串之后不会自动添加换行符 */

#include <stdio.h>

void put1(char *string) {
    while (*string != '\0') {
        putchar(*string);
        string++;
    }
}

int testput1() {
    char *string = "Viva La Vida";
    put1(string);
    return 0;
}
//Viva La Vida
//        Process finished with exit code 0