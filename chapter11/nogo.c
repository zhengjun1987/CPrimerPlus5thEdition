//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

#define ANSWER "Grant"

int ng(){
    char try[40];
    puts("Who is buried in Grant's tomb?");
    gets(try);
    while (try != ANSWER) {
        puts("No,that's wrong.Try again.");
        gets(try);
    }
    puts("That's right!");
    return 0;
}
//Who is buried in Grant's tomb?
//warning: this program uses gets(), which is unsafe.
//Green
//        No,that's wrong.Try again.
//Grant
//        No,that's wrong.Try again.
//Tom
//        No,that's wrong.Try again.
//Grant
//        No,that's wrong.Try again.
//
//Process finished with exit code 0