#include <stdlib.h>
#include <stdio.h>

/**
 *  Author:Zheng Jun
 *  Date:2018/3/20 00:53
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */
void sign_off(void);
void too_bad(void);
int bb(){
    atexit(sign_off);
    puts("Enter an integer!");
    int n;
    if(scanf("%d",&n)!=1){
        puts("There is no integer!");
        atexit(too_bad);
        exit(EXIT_FAILURE);
    }
    printf("%d is %s.\n",n,(n%2==0)?"even":"odd");
    return 0;
}

void sign_off(void){
    puts("Thus terminates another magnificent program from\nSeesaw Software!");
}

void too_bad(void){
    puts("Seesaw Software extends its heartfelt condolences\nto you upon the failure of your program.");
}
//    Enter an integer!
//    212
//    212 is even.
//    Thus terminates another magnificent program from
//    Seesaw Software!
//
//    Process finished with exit code 0