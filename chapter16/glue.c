//  Author:Zheng Jun
//  Date:2018/3/14 00:52
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#define XNAME(n) x##n
#define PRINT_XN(n) printf("x"#n" = %d\n",x##n)

int gl(){
    int XNAME(1) =14;
    int XNAME(2) =20;
    PRINT_XN(1);
    PRINT_XN(2);
    return 0;
}
//    x1 = 14
//    x2 = 20
//
//    Process finished with exit code 0