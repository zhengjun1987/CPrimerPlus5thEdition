//  Author:Zheng Jun
//  Date:2018/2/10 17:26
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

int prt() {
    char line[20];
    while (fgets(line, 20, stdin) != NULL && line[0] != '\n')
        fputs(line, stdout);
    return 0;
}
//The Silent Knight
//The Silent Knight
//strode solemnly down the dank and dark hall
//strode solemnly down the dank and dark hall
//
//
//Process finished with exit code 0