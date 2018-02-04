//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

/* 打印一个字符串，并统计其字符数 */

#include <stdio.h>

int put2(char *string){
    int count = 0;
    while (*string) {//此处简化了" *string != '\0' ",这是C语言编程习惯，要学会适应
        putchar(*string++);
        count++;
    }
    return count;
}

int pt2(){
    int i = put2("窗含西岭千秋雪，门泊东吴万里船");
    printf("\nput2()返回的数字为 %d\n",i);
    return 0;
}
//窗含西岭千秋雪，门泊东吴万里船
//put2()返回的数字为 45