//  Author:Zheng Jun
//  Date:2018/3/8 23:55
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define TWO 2

#define PX printf("X is %d.\n",x)

#define FOUR 4

#define FMT "X is %d.\n"

#define OW "Consistency is the last refuge of the unimaginative.-Oscar Wilde"

int prp(){
    int x = TWO;
    PX;
    x=FOUR;
    printf(FMT,x);
    printf("%s\n",OW);
    printf("TWO:OW\n");
    return 0;
}
//X is 2.
//X is 4.
//Consistency is the last refuge of the unimaginative.-Oscar Wilde
//TWO:OW
//
//Process finished with exit code 0