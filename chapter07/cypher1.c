//  Author:Zheng Jun
//  Date:2018/1/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

void cf1(){
    char ch;
    while ((ch = getchar()) != '\n'){
        if(ch==' ')
            putchar(ch);
        else
            putchar(ch+1);
    }
    putchar(ch);
}
//CALL ME HAL.
//DBMM NF IBM/
//
//Process finished with exit code 10