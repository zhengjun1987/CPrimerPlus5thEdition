//  Author:Zheng Jun
//  Date:2018/3/17 14:34
//  E-mail:zhengjun1987@outlook.com

#include <math.h>
#include <stdio.h>

#define PR(X,...) printf("Message " #X ":" __VA_ARGS__)

int vrdc(){
    double x = 48;
    double y;
    y = sqrt(x);
//    PR("ADOIFHJGGEWI");
    PR(1,"x = %g\n",x);
    PR(2,"x = %.2f, y = %.4f\n",x,y);
    return 0;
}
//Message 1:x = 48
//Message 2:x = 48.00, y = 6.9282
//
//Process finished with exit code 0