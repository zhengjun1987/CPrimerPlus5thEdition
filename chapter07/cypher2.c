//  Author:Zheng Jun
//  Date:2018/1/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <ctype.h>

void cf2(){
    char ch;
    while ((ch = getchar())!='\n'){
        if(isalpha(ch))
            putchar(ch+1);
        else
            putchar(ch);
    }
    putchar(ch);
}
//Look!It's a programmer！
//Mppl!Ju't b qsphsbnnfs！
//
//Process finished with exit code 10