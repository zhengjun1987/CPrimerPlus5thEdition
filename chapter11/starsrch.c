//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <string.h>
#include <printf.h>

#define LISTSIZE 5

int strncm(){
    char *list[LISTSIZE] = {
            "astronomy","astounding",
            "astrophsics","ostracize",
            "asterism"
    };
    int count = 0;
    for (int i = 0; i < LISTSIZE; ++i) {
        if(strncmp(list[i],"astro",5) ==0){//strncmp函数第三个参数用于限定比较字符串的个数。类比于Java内的startWith函数
            printf("Found: %s\n",list[i]);
            count++;
        }
    }
    printf("The list contains %d words beginning with astro.",count);
    return 0;
}
//Found: astronomy
//Found: astrophsics
//The list contains 2 words beginning with astro.
//Process finished with exit code 0