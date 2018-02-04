//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <memory.h>

#define WORDS "beast"

#define SIZE 40

int c2(){
    char *orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;
    puts(orig);
    puts(copy);
    ps = strcpy(copy+7,orig);//strcpy的返回值是其第一个参数
    puts(copy);
    puts(ps);
    return 0;
}
//beast
//Be the best that you can be.
//Be the beast
//beast
//
//Process finished with exit code 0