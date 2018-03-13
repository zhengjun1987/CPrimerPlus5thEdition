//  Author:Zheng Jun
//  Date:2018/3/13 23:41
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define SQUARE(X) (X)*(X)

#define PR(X) printf("The result is %d\n",X)

int mcrg2(){
    int x = 4;
    int z;
    printf("x = %d\n",x);
    z = SQUARE(x);
    printf("Evaluating SQUARE(x):");
    PR(z);
    z = SQUARE(2);
    printf("Evaluating SQUARE(2):");
    PR(z);
    printf("Evaluating SQUARE(x+2):");
    PR(SQUARE(x+2));//等于 (x+2)*(x+2)
    printf("Evaluating 100/(SQUARE(2)):");
    PR(100/(SQUARE(2)));//等于 PR(100/（2*2）)
    printf("x = %d\n",x);
    printf("Evaluating SQUARE(++x):");
    PR(SQUARE(++x));//等于 PR(++x*++x)
    printf("After incrementing, x = %d\n",x);
    return 0;
}
//    x = 4
//    Evaluating SQUARE(x):The result is 16
//    Evaluating SQUARE(2):The result is 4
//    Evaluating SQUARE(x+2):The result is 36
//    Evaluating 100/(SQUARE(2)):The result is 25
//    x = 4
//    Evaluating SQUARE(++x):The result is 30
//    After incrementing, x = 6
//
//    Process finished with exit code 0