//  Author:Zheng Jun
//  Date:2018/2/3
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

int scstr(){
    char name1[11],name2[11];
    printf("Please enter 2 names\n");
    int i = scanf("%5s %10s", name1, name2);
    printf("I read %d names %s and %s\n",i,name1,name2);
    return 0;
}
//Please enter 2 names
//        Jesse Jukes
//        I read 2 names Jesse and Jukes

//Please enter 2 names
//        Liza Applebottham
//        I read 2 names Liza and Applebotth

//Please enter 2 names
//        Portensia Callowit
//        I read 2 names Porte and nsia