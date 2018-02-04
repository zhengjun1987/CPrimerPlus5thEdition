//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <string.h>

#define LIM 5

#define SIZE 40

int stcp(){
    char qwords[LIM][SIZE];
    char temp[SIZE];
    printf("Enter %d words start with q:\n",LIM);
    int i = 0;
    while (i < LIM && gets(temp)){
        if (temp[0] != 'q')//这个判断相当于 strncmp(temp,"q",1)
            printf("%s doesn't begin with q\n",temp);
        else {
            strcpy(qwords[i],temp);//更严谨的做法是调用strncpy(target,source,count)
            i++;
        }
    }
    puts("Here are words accepted:");
    for (int j = 0; j < LIM; ++j) {
        puts(qwords[j]);
    }
    return 0;
}
//Enter 5 words start with q:
//warning: this program uses gets(), which is unsafe.
//quarter
//quack
//quit
//astonished
//astonished doesn't begin with q
//quick
//quire
//
//Here are words accepted:
//quarter
//quack
//quit
//quick
//quire
//
//Process finished with exit code 0