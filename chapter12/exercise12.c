//  Author:Zheng Jun
//  Date:2018/2/9 21:14
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

char color = 'B';

void first();

void second();

int e12(){
    extern char color;
    printf("color in main is %c\n",color);
    first();
    printf("color in main is %c\n",color);
    second();
    printf("color in main is %c\n",color);
    return 0;
}

void second() {
    color ='G';
    printf("color in second is %c\n",color);
}

void first() {
    char color = 'R';
    printf("color in first is %c\n",color);
}
//color in main is B
//color in first is R
//color in main is B
//color in second is G
//color in main is G
//
//Process finished with exit code 0