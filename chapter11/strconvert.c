//  Author:Zheng Jun
//  Date:2018/2/5
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <stdlib.h>

int stcnv(){
    char number[30];
    char *end;
    long value;
    puts("Enter a number (empty line to quit):");
    while (gets(number)&&number[0]!='\0'){
        value=strtol(number,&end,10);
        //第一个参数：需要转换的字符串本身
        //第二个参数：预备存放不能转换部分字符串的指针
        //第三个参数：预备转换字符串的数字进制，最多到36  转换后都转成十进制
        printf("value:%ld,stopped at %s (%d)\n",value,end,*end);
        value=strtol(number,&end,16);
        printf("value:%ld,stopped at %s (%d)\n",value,end,*end);
        puts("Next number:");
    }
    puts("Bye!");
    return 0;
}
//Enter a number (empty line to quit):
//10
//value:10,stopped at  (0)
//value:16,stopped at  (0)
//Next number:
//10atm
//value:10,stopped at atm (97)
//value:266,stopped at tm (116)
//Next number:
//
//Bye!
//
//Process finished with exit code 0