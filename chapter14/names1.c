//  Author:Zheng Jun
//  Date:2018/2/25 21:59
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <string.h>

struct namect {
    char fname[20];
    char lname[20];
    int letters;
};

void getinfo(struct namect *pNamect);

void makeinfo(struct namect *pNamect);

void showinfo(struct namect *pNamect);

int nct1(){
    struct namect person;
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    return 0;
}
//Please enter your first name:
//Zheng
//Please enter your last name:
//Jun
//Zheng Jun,your name contains 8 letters.
//Process finished with exit code 0

void showinfo(struct namect *pNamect) {
    printf("%s %s,your name contains %d letters.",pNamect->fname,pNamect->lname,pNamect->letters);
}

void makeinfo(struct namect *pNamect) {
    pNamect->letters = (int) (strlen(pNamect->fname) + strlen(pNamect->lname));
}

void getinfo(struct namect *pNamect) {
    puts("Please enter your first name:");
    gets(pNamect->fname);
    puts("Please enter your last name:");
    gets(pNamect->lname);
}