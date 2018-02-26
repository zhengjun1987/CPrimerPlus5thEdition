//  Author:Zheng Jun
//  Date:2018/2/26 20:17
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct namect {
    char *fname;
    char *lname;
    int letters;
};

void getinfo3(struct namect *pNamect);

void makeinfo3(struct namect *pNamect);

void showinfo3(struct namect *pNamect);

void cleanup3(struct namect *pNamect);

int nms3() {
    struct namect person;
    getinfo3(&person);
    makeinfo3(&person);
    showinfo3(&person);
    cleanup3(&person);
    return 0;
}
//Please enter your first name:
//        Mao
//Please enter your last name:
//        Zedong
//Mao Zedong,your name contains 9 letters.
//Process finished with exit code 0

void cleanup3(struct namect *pNamect) {
    free(pNamect->fname);
    free(pNamect->lname);
}

void showinfo3(struct namect *pNamect) {
    printf("%s %s,your name contains %d letters.",pNamect->fname,pNamect->lname,pNamect->letters);
}

void makeinfo3(struct namect *pNamect) {
    pNamect->letters = (int) (strlen(pNamect->fname) + strlen(pNamect->lname));
}

void getinfo3(struct namect *pNamect) {
    char temp[81];
    puts("Please enter your first name:");
    gets(temp);
    pNamect->fname = malloc(strlen(temp)+1);//分配空间
    strcpy(pNamect->fname,temp);//复制字段
    puts("Please enter your last name:");
    gets(temp);
    pNamect->lname = malloc(strlen(temp)+1);
    strcpy(pNamect->lname,temp);
}