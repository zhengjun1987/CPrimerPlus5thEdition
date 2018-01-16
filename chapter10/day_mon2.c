//  Author:Zheng Jun
//  Date:2018/1/15
//  E-mail:zhengjun1987@outlook.com


#include <printf.h>

#define MONTHS 12
int dm2(){
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 0; i < sizeof(days)/ sizeof(days[0]); ++i) {
        printf("Month %2d has %2d days.\n",i+1,days[i]);
    }
}
//Month  1 has 31 days.
//Month  2 has 28 days.
//Month  3 has 31 days.
//Month  4 has 30 days.
//Month  5 has 31 days.
//Month  6 has 30 days.
//Month  7 has 31 days.
//Month  8 has 31 days.
//Month  9 has 30 days.
//Month 10 has 31 days.
//Month 11 has 30 days.
//Month 12 has 31 days.