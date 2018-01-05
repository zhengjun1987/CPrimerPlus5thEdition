//  Author:Zheng Jun
//  Date:2018/1/5
//  E-mail:zhengjun1987@outlook.com
#include <stdio.h>

#define PERIOD '.'
void cc(){
    int ch,charcount = 0;
    while ((ch = getchar()) != PERIOD){
        if (ch != '"'&& ch != '\'')
            charcount++;
    }
    printf("There are %d non-quote characters.\n",charcount);
}
//I didn't read the "I'm a programming fool" best seller.
//There are 50 non-quote characters.
//
//Process finished with exit code 35