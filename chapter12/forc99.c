//  Author:Zheng Jun
//  Date:2018/2/8
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int fc(){
    int n = 10;
    printf("Initially, n = %d\n",n);
    for (int n = 0; n < 3; ++n) {
        printf("loop 1:n=%d\n",n);
    }
    printf("After loop1, n = %d\n",n);
    for (int n = 0; n < 3; ++n) {
        printf("loop 2:index n=%d\n",n);
        int n = 30;
        printf("loop 2:n=%d\n",n);
    }
    printf("After loop2, n = %d\n",n);
    return 0;
}
//Initially, n = 10
//loop 1:n=0
//loop 1:n=1
//loop 1:n=2
//After loop1, n = 10
//loop 2:index n=0
//loop 2:n=30
//loop 2:index n=1
//loop 2:n=30
//loop 2:index n=2
//loop 2:n=30
//After loop2, n = 10
//
//Process finished with exit code 0