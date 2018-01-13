//  Author:Zheng Jun
//  Date:2018/1/12
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void mikado(int pooh);

int lc(){
    int pooh = 2,bah=5;
    printf("In main(),pooh = %d and &pooh = %p\n",pooh,&pooh);
    printf("In main(),bah = %d and &bah = %p\n",bah,&bah);
    mikado(pooh);
    return 0;
}

void mikado(int bah) {
    int pooh = 10;
    printf("In mikado(),pooh = %d and &pooh = %p\n",pooh,&pooh);
    printf("In mikado(),bah = %d and &bah = %p\n",bah,&bah);
}
//In main(),pooh = 2 and &pooh = 0x7ffee2b787e8
//In main(),bah = 5 and &bah = 0x7ffee2b787e4
//In mikado(),pooh = 10 and &pooh = 0x7ffee2b787b8
//In mikado(),bah = 2 and &bah = 0x7ffee2b787bc