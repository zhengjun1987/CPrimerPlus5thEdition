//  Author:Zheng Jun
//  Date:2017/12/27.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void fc() {
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000, n4 = 1234567890;
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
//3.0e+00 3.0e+00 0.0e+00 4.1e+233
    printf("%ld %ld\n", n3, n4);
//2000000000 1234567890
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
//2000000000 1234567890 8699159249821827075 140735701839736
}
