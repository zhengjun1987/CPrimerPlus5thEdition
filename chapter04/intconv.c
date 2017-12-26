//  Author:Zheng Jun
//  Date:2017/12/26.
//  E-mail:zhengjun1987@outlook.com
#include <printf.h>

#define PAGES 336
#define WORDS 65618
void main(){
    short num = PAGES,mnum = -PAGES;
    printf("num as short and unsigned short:%hd %hu\n",num,num);
//    num as short and unsigned short:336 336
    printf("-num as short and unsigned short:%hd %hu\n",mnum,mnum);
//    -num as short and unsigned short:-82 65200
    printf("num as int and char : %d %c\n",num,num);
//    num as int and char : 336 P
    printf("WORDS as int, short and char : %d %hd %c\n",WORDS,WORDS,WORDS);
//    WORDS as int, short and char : 65618 82 R
}