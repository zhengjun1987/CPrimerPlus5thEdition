//  Author:Zheng Jun
//  Date:2018/2/12 15:15
//  E-mail:zhengjun1987@outlook.com

/* 包含一本书的书目信息 */

#include <stdio.h>

#define MAXTITL 41
#define MAXAUTL 31
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};  /* 结构模板结束 */

int bk(){
    struct book library;
    puts("Please enter book title:");
    gets(library.title);
    puts("Now enter the author:");
    gets(library.author);
    puts("Now enter the value:");
    scanf("%f",&library.value);
    fprintf(stdout,"%s by %s:$%.2f\n",library.title,library.author,library.value);
    fprintf(stdout,"%s: \"%s\"($%.2f)\n",library.author,library.title,library.value);
    return 0;
}
//Please enter book title:
//C Primer Plus
//Now enter the author:
//Stephen Prata
//Now enter the value:
//60
//C Primer Plus by Stephen Prata:$60.00
//Stephen Prata: "C Primer Plus"($60.00)
//
//Process finished with exit code 0