//  Author:Zheng Jun
//  Date:2018/2/2
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

int ap(){
    char arr[] = "I love Tillie!";
    char *ptr = "I love Millie!";
    for (int i = 0; i < 8; ++i) {
        putchar(arr[i]);
    }
    putchar('\n');
    for (int j = 0; j < 8; ++j) {
        putchar(ptr[j]);
    }
    putchar('\n');
    for (int k = 0; k < 8; ++k) {
        putchar(*(arr+k));
    }
    putchar('\n');
    for (int l = 0; l < 8; ++l) {
        putchar(*(ptr+l));
    }
    putchar('\n');
    while (*ptr != '\0')
        putchar(*(ptr++));
    putchar('\n');

    char * p1 = "Klingon";
//    *p1 = 'F';//编译器出错，意外返回，返回值10
//    p1[0] = 'F';//编译器出错，意外返回，返回值10
    printf("Klingon");
    printf(": Beware the %ss!\n","Klingon");

    printf("====================\n");
    char *word = "frame";
    word[1] = 'l';//编译器出错，意外返回，返回值10
    printf("====================\n");
    while (*word != '\0') {
        putchar(*(word++));
    }
    printf("====================\n");
    return 0;
}
//I love T
//I love M
//I love T
//I love M
//I love Millie!