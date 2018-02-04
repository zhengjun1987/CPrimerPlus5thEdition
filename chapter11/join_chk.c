//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <string.h>

#define SIZE_N 30

#define BUGSIZE 13

int jc() {
    char flower[SIZE_N];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;
    puts("What's your favourite flower?");
    gets(flower);
    if ((strlen(addon) + strlen(flower) + 1) <= SIZE_N)
        strcat(flower, addon);
    puts(flower);
    puts("What's your favourite bug?");
    gets(bug);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);//
    puts(bug);
    return 0;
}
//What's your favourite flower?
//Rose
//        Roses smell like old shoes.
//What's your favourite bug?
//Aphid
//        Aphids smell
//
//        Process finished with exit code 0