//  Author:Zheng Jun
//  Date:2018/2/10 17:43
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <stdlib.h>

#define SLEN 50

#define CNTL_Z '\032'

int rvs() {
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;
    puts("Enter the name of the file to be processed:");
    gets(file);
    if ((fp = fopen(file, "rb")) == NULL) {
        printf("Cannot open file %s\n", file);
        exit(EXIT_FAILURE);
    }
    int i = fseek(fp, 0L, SEEK_END);/* 定位到文件结尾处 */

    last = ftell(fp);
    printf("ftell = %ld\n",i);
    for (count = 1; count <= last; count++) {
        fseek(fp, -count, SEEK_END);
        ch = (char) getc(fp);
        printf("ftell = %ld\n",ftell(fp));
        /*if (ch != CNTL_Z && ch !='\r')
            putchar(ch);*/
        putchar(ch == '\r' ? '\n' : ch);
    }
    fclose(fp);
    return 0;
}
//Enter the name of the file to be processed:
//warning: this program uses gets(), which is unsafe.
//words
//remmargorp suolubaf ehT
//Process finished with exit code 0