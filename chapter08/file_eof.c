//  Author:Zheng Jun
//  Date:2018/1/8
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <stdlib.h>

void fe(){
    int ch;
    FILE * fp;
    char file_name[50];
    printf("Enter the name of the file:\n");
    scanf("%s",file_name);
    fp = fopen(file_name,"r");
    if (fp == NULL){
        printf("Fail to open the file:%s\n",file_name);
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}
//Enter the name of the file:
///Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/chapter08/lyrics.txt
//春花秋月何时了？往事知多少。小楼昨夜又东风，故国不堪回首月明中。
//雕栏玉砌应犹在，只是朱颜改。问君能有几多愁？恰似一江春水向东流。
//无言独上西楼，月如钩。寂寞梧桐深院锁清秋。
//剪不断，理还乱，是离愁。别是一般滋味在心头。
//帘外雨潺潺，春意阑珊。罗衾不耐五更寒。梦里不知身是客，一晌贪欢。独自莫凭栏，无限江山，别时容易见时难。流水落花春去也，天上人间。
//Signal: SIGABRT (signal SIGABRT)
//Terminated due to signal 6
//
//Process finished with exit code 0