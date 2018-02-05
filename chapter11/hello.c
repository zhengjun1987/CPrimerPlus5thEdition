//  Author:Zheng Jun
//  Date:2018/2/5
//  E-mail:zhengjun1987@outlook.com

#include <stdlib.h>
#include <printf.h>

/* 把命令行参数转换成数字 */

int hl(int argc, char *argv[]) {
    int times;
    if (argc < 2 || (times = atoi(argv[1])) < 1)
        printf("Usage: %s positive number\n",argv[0]);
    else
        for (int i = 0; i < times; ++i) {
            puts("Hello,good looking!");
        }
    return 0;
}
//192:CPrimerPlus5thEdition zhengjun$ gcc chapter11/hello.c
//192:CPrimerPlus5thEdition zhengjun$ ./a.out 0
//Usage: ./a.out positive number
//192:CPrimerPlus5thEdition zhengjun$ ./a.out 3
//Hello,good looking!
//Hello,good looking!
//Hello,good looking!
