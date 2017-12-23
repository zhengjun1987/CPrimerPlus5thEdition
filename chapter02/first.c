#include <stdio.h>

int f(void) {       /*一个简单的C程序*/
    int num;
    num = 1;
    printf("I'm a simple ");
    int printf2 = printf("computer.\n");
    int printf1 = printf("My favourite number is %d because it is the first.\n", num);
    printf("The result of last sentence is %d",printf2);
    return 0;
}
//I'm a simple computer.
//My favourite number is 1 because it is the first.
//The result of last sentence is 50 返回的int值为该打印字符串的字节数
//
//Process finished with exit code 0
