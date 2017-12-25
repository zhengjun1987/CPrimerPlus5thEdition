//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com


#include <stdio.h>
#include <string.h> /*提供strlen()原型*/

#define PRAISE "What a super marvelous name!"

void p2(){
    char name[40];
    printf("What's your name ?\n");
    scanf("%s",name);
    printf("Hello,%s. %s\n",name,PRAISE);

    printf("Your name of %d letters occupies %d memory cells.\n", (int) strlen(name), sizeof name ); //sizeof 函数后面的参数是类型的时候必须使用圆括号，参数为具体字符串时可以不用圆括号

    printf("The phrase of praise has %d letters,and occupies %d memory cells .\n", (int) strlen(PRAISE),
           (int) sizeof(PRAISE));
}
//What's your name ?
//ZhengJun
//Hello,ZhengJun. What a super marvelous name!
//Your name of 8 letters occupies 40 memory cells.
//The phrase of praise has 28 letters,and occupies 29 memory cells .
//
//Process finished with exit code 67