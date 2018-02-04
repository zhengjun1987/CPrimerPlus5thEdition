//  Author:Zheng Jun
//  Date:2018/2/3
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

int nn(){
    char side_a[] = "SIDE_A";
//    char dont[]={'W','O','W','!'};//WOW!SIDE_B
    char dont[]={'W','O','W','!','\0'};//WOW!       作为字符串的字符数组最后一个element必须是'\0'
    char side_b[]="SIDE_B";
    puts(dont);
    return 0;
}