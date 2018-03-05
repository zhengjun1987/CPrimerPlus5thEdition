//  Author:Zheng Jun
//  Date:2018/3/5 17:48
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int btw() {
    int i = 128;
    printf("取反：%d\n", ~i);//-129
    printf("&运算：%d\n", i & 127);//0
    printf("|运算：%d\n", i | 127);//255
    printf("^运算：%d\n", i ^ 127);//255
//    取反：-129
//    &运算：0
//    |运算：255
//    ^运算：255
    int flags = 0;
    int MASK_A = 1;
    int MASK_B = 1 << 1;
    int MASK_C = 1 << 2;
    int MASK_D = 1 << 3;
    int MASK_E = 1 << 4;
    int MASK_F = 1 << 5;

    //打开D\E\F
    flags = flags | MASK_D | MASK_E | MASK_F;
    printf("flags = %d\n", flags);//56

    //检测A
    printf("%d\n", flags & MASK_A);//0
    //检测E
    printf("%d\n", flags & MASK_E);//16

    //关闭E
    flags &= ~MASK_E;
    //检测E
    printf("%d\n", flags & MASK_E);//0

    //转置A
    flags ^= MASK_A;
    //检测A
    printf("%d\n", flags & MASK_A);//1

    if (flags & MASK_D)//true
        puts("Bingo!");
    if (flags & MASK_C)
        puts("Incredible!");

    return 0;
}