//  Author:Zheng Jun
//  Date:2018/2/10 12:08
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <stdlib.h>

int ct(int argc, char *argv[]) {
    int ch;
    FILE *fp;
    long count = 0;
    if (argc != 2) {
        printf("Usage:%s file_name\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "rb")) == NULL) {
        printf("Cannot open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }
    int i = fclose(fp);
    if (i != 0)
        puts("Error in closing file !");
    printf("\nFile %s has %ld characters.\n", argv[1], count);
    return 0;
}
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ gcc chapter13/count.c
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ ./a.out github
//https://github.com/zhengjun1987hz/CPrimerPlus5thEdition.git
//
//统计代码行数
//find . -name "*.c"|xargs cat|grep -v -e ^$ -e ^\s*\/\/.*$|wc -l
//find . -name "*.c"|xargs cat|grep -v ^$|wc -l
//
//2018年02月05日02:29:11     3634    5994
//2018年02月09日14:43:42     3898    6425
//File github has 276 characters.
