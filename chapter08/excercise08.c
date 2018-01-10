//  Author:Zheng Jun
//  Date:2018/1/10
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <stdlib.h>

void e08_10_02();

int e08(){
//    e08_10_02();
    FILE * fp;
    char file_name[90];
    printf("Enter the name of the file:\n");
    scanf("%s",file_name);
    fp = fopen(file_name,"r");
    if (fp == NULL){
        printf("Fail to open the file:%s\n",file_name);
        exit(1);
    }
    int ch,count=0;
    while ((ch = getc(fp))!=EOF){
        count++;
    }
    printf("The character count of %s is %d.\n",file_name,count);
//    Enter the name of the file:
//    /Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/chapter08/lyrics.txt
//    The character count of /Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/chapter08/lyrics.txt is 518.
//
//    Enter the name of the file:
//    /Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/chapter08/checking.c
//    The character count of /Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/chapter08/checking.c is 2655.
    return 0;
}

void e08_10_02() {
    putchar('H');
    putchar('\007');
    putchar('n');
    putchar('\b');
//    H
//    Process finished with exit code 0
}