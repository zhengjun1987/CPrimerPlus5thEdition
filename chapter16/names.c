//  Author:Zheng Jun
//  Date:2018/3/17 15:05
//  E-mail:zhengjun1987@outlook.com

#include "names.h"
#include <stdio.h>

void get_names(names *pn) {
    int i;
    printf("Please enter your first name:\n");
    fgets(pn->first, slen, stdin);
    i = 0;
    while (pn->first[i] != '\n' && pn->first[i] != '\0')
        i++;
    if (pn->first[i] == '\n')
        pn->first[i] = '\0';
    else
        while (getchar() != '\n')
            continue;

    printf("Please enter your last name:\n");
    fgets(pn->last, slen, stdin);
    i = 0;
    while (pn->last[i] != '\n' && pn->last[i] != '\0')
        i++;
    if (pn->last[i] == '\n')
        pn->last[i] = '\0';
    else
        while (getchar() != '\n')
            continue;
}

void show_names(names *pn){
    printf("%s %s",pn->first,pn->last);
}