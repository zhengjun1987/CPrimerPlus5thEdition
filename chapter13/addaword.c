//  Author:Zheng Jun
//  Date:2018/2/10 16:12
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int adw() {
    FILE *fp;
    char words[MAX];
    fp = fopen("words", "a+");
    if (fp == NULL) {
        fprintf(stdout, "Cannot open file %s\n", words);
        exit(EXIT_FAILURE);
    }
    puts("Enter words to add to the file , press the Enter\n key at the beginning of a line to terminate.");
    while (gets(words) != NULL && words[0] != 0)
        fprintf(fp,"%s", words);
    puts("File contents:");
    rewind(fp);/* 回到文件开始处 */
    while (fscanf(fp, "%s", words)==1)
        puts(words);
    if (fclose(fp) != 0)
        fprintf(stdout, "Error in closing file\n");
    return 0;
}
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ gcc chapter13/addaword.c
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ ./a.out
//Enter words to add to the file , press the Enter
//key at the beginning of a line to terminate.
//warning: this program uses gets(), which is unsafe.
//C Primer Plus
//
//File contents:
//The
//fabulous
//programmer
//C
//Primer
//Plus
