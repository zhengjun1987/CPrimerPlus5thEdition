//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void th(){
    int i = 3;
    while (i){
        printf("%2d is true.\n",i--);
    }
    printf("%2d is false.\n",i);
    i = -3;
    while (i){
        printf("%2d is true.\n",i++);
    }
    printf("%2d is false.\n",i);
}
//3 is true.
//2 is true.
//1 is true.
//0 is false.
//-3 is true.
//-2 is true.
//-1 is true.
//0 is false.所有的非零值都被视为true，仅有0被视为false