//  Author:Zheng Jun
//  Date:2018/3/14 23:02
//  E-mail:zhengjun1987@outlook.com

#include<stdio.h>
#define MAX  100
#define _str(x) #x
#define str(x)  _str(x)
int tst(void)
{
    puts(_str(MAX));
    puts(str(str(MAX)));
    puts(_str(100));
    puts(str(MAX));
}
//MAX
//"100"
//100
//100
//
//Process finished with exit code 0