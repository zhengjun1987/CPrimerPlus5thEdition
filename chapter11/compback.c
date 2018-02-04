//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <string.h>

int cmpret(){
    printf("strcmp(\"A\",\"A\") is ");
    printf("%d\n",strcmp("A","A"));//此处比较的是ASCII编码的顺序先后
    printf("strcmp(\"A\",\"B\") is ");
    printf("%d\n",strcmp("A","B"));
    printf("strcmp(\"B\",\"A\") is ");
    printf("%d\n",strcmp("B","A"));
    printf("strcmp(\"C\",\"A\") is ");
    printf("%d\n",strcmp("C","A"));
    printf("strcmp(\"Z\",\"A\") is ");
    printf("%d\n",strcmp("Z","A"));
    printf("strcmp(\"Z\",\"a\") is ");
    printf("%d\n",strcmp("Z","a"));
    printf("strcmp(\"apples\",\"apple\") is ");
    printf("%d\n",strcmp("apples","apple"));
    return 0;
}
//strcmp("A","A") is 0
//strcmp("A","B") is -1
//strcmp("B","A") is 1
//strcmp("C","A") is 2
//strcmp("Z","A") is 25
//strcmp("Z","a") is -7
//strcmp("apples","apple") is 115