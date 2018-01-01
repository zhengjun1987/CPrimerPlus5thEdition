//  Author:Zheng Jun
//  Date:2017/12/30
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void ct() {
    char c;
    int i;
    float fl;
    fl = i = c = 'C';
    printf("c = %c, i = %d,fl = %2.2f\n", c, i, fl);
    c++;
    i = fl + 2 * c;
    fl = 2.0 * c + i;
    printf("c = %c, i = %d,fl = %2.2f\n", c, i, fl);
    c = 5212205.17;
    printf("Now c = %c\n", c);
}
//c = C, i = 67,fl = 67.00
//c = D, i = 203,fl = 339.00
//Now c = V
