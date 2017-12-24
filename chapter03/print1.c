//  Author:Zheng Jun
//  Date:2017/12/23.
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

/*printf的一些属性*/
void pr() {
    int two = 2, ten = 10;
    printf("Doing it right:");
    printf("%d minus %d is %d\n", ten, two, ten - two);
//    Doing it right:10 minus 2 is 8
    printf("Doing it wrong:");
    printf("%d minus %d is %d\n", ten);
//    Doing it wrong:10 minus 771 is 296812744

    printf("十六进制 %d\n",0x10);
//    十六进制 16   经过格式说明符%d处理过打印出来的是十进制的数字
}

