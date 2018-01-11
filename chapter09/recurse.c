//  Author:Zheng Jun
//  Date:2018/1/11
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void up_and_down(int i);

void rc(){
    up_and_down(1);
}

void up_and_down(int i) {
    printf("Level %d: n location %p\n",i,&i);
    if (i < 4)
        up_and_down(i+1);
    printf("Level %d: n location %p\n",i,&i);
}
//Level 1: n location 0x7ffee3a757dc
//Level 2: n location 0x7ffee3a757bc
//Level 3: n location 0x7ffee3a7579c
//Level 4: n location 0x7ffee3a7577c
//Level 4: n location 0x7ffee3a7577c
//Level 3: n location 0x7ffee3a7579c
//Level 2: n location 0x7ffee3a757bc
//Level 1: n location 0x7ffee3a757dc