//  Author:Zheng Jun
//  Date:2018/2/9 14:22
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
int rand0();

int rd0(){
    for (int i = 0; i < 5; ++i) {
        printf("loop %d -- random:%hu\n",i+1,rand0());
    }
}
//loop 1 -- random:16838
//loop 2 -- random:5758
//loop 3 -- random:10113
//loop 4 -- random:17515
//loop 5 -- random:31051