//  Author:Zheng Jun
//  Date:2018/2/9 13:33
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

int count = 0;//文件作用域，外部链接

void report_count();

void accumulate(int i);

int pta(){
    int value ;/*自动变量*/
    register int i;//寄存器变量
    puts("Enter a positive integer (0 to quit)");
    while (scanf("%d",&value)==1&&value>0){
        ++count;//使用文件作用域变量
        for (i = value; i >= 0; --i) {
            accumulate(i);
        }
        puts("Enter a positive integer (0 to quit)");
    }
    report_count();
    return 0;
}

void report_count() {
    printf("Loop executed %d times\n",count);
}