//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <string.h>

#define LIM 10

#define SIZE_C 81

#define STOP "quit"

int qc(){
    char input[LIM][SIZE_C];
    int count = 0;
    printf("Enter up to %d lines (Type quit to quit)\n",LIM);
    while (count < LIM && gets(input[count]) != NULL && strcmp(input[count],STOP) != 0)
        count++;
    printf("%d strings entered.",count);
    return 0;
}
//Enter up to 10 lines (Type quit to quit)
//admin
//        quit
//1 strings entered.
//Process finished with exit code 0