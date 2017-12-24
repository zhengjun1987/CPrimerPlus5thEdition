//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

/*以十进制、十六进制、八进制形式输出100*/
void bs() {
    int x = 100;
    printf("dec = %d, oct = %o, hex = %x\n", x, x, x);
    printf("dec = %#d, oct = %#o, hex = %#X\n", x, x, x);
}
//dec = 100, oct = 144, hex = 64
//dec = 100, oct = 0144, hex = 0x64
//
//Process finished with exit code 34