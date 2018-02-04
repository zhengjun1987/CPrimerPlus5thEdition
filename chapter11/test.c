//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <string.h>

void fit(char *mesg, unsigned int i);

int ts() {
    char mesg[] = "Hold on to your hats,hackers!";
    puts(mesg);
    fit(mesg, 7);
    puts(mesg);
    puts("Let's look at some more of the string.");
    puts(mesg + 8);
    return 0;
}

void fit(char *mesg, unsigned int i) {
    if (strlen(mesg) > i)
        *(mesg + i) = '\0';
}
//Hold on to your hats,hackers!
//Hold on
//Let's look at some more of the string.
//to your hats,hackers!
//
//Process finished with exit code 0