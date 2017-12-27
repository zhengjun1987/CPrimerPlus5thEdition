//  Author:Zheng Jun
//  Date:2017/12/27.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void ls(){
    int i = 32;
    printf("The printf() function prints %d"
                   " characters.\n",i);
    printf("The printf() function prints %d characters.\n",
           i);
//    The printf() function prints 32 characters.
//    The printf() function prints 32 characters.

    printf("Here is one way to print a ");
    printf("long string.\n");
    printf("Here is a newest way to print a "
                   "long string.\n");
//    Here is one way to print a long string.
//    Here is a newest way to print a long string.
}