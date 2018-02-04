//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

void copy(char *string);

int copy2(char *string);

int pp(){
    copy("If I'd as much money");
    copy(" as I could spend, \n");
    printf("I counted %d characters.\n",
        copy2("I never would cry old chairs to mend.\n")
    );
    return 0;
}

int copy2(char *string) {
    int count = 0;
    while (*string){
        putchar(*string++);
        count++;
    }
    return count;
}

void copy(char *string) {
    while (*string)
        putchar(*string++);
}
//If I'd as much money as I could spend,
//I never would cry old chairs to mend.
//I counted 38 characters.
//
//Process finished with exit code 0