//  Author:Zheng Jun
//  Date:2018/1/16
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define YEARS 5

#define MONTHS 12

int rn(){
    const float rain[YEARS][MONTHS] = {
            {4,4.3,4.3,4.3,0.2,1.2,5.9,1.9,9.1,8.3,5.6,7.1},
            {4,4.3,4.3,1.3,0.2,1.2,6.9,1.9,9.1,8.3,5.6,7.1},
            {4,4.1,4.3,4.3,0.2,1.2,5.9,1.9,9.1,8.3,5.6,7.1},
            {4,4.3,8.3,4.3,0.2,1.2,5.9,1.9,9.1,8.3,5.6,7.1},
            {4,4.3,4.3,4.1,0.2,1.2,5.9,1.9,9.1,8.3,5.6,7.1}
    };
    printf(" YEAR RAINFALL(inches)\n");
    float total=0;
    for (int i = 0; i < YEARS; ++i) {
        float subtot=0;
        for (int j = 0; j < MONTHS; ++j) {
            subtot += rain[i][j];
        }
        printf("%5d %14.1f\n",2012+i,subtot);
        total+=subtot;
    }
    printf("The yearly average is %.1f inches.\n",total/YEARS);
    putchar('\n');
    printf("MONTHLY AVERAGES:\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    for (int k = 0; k < MONTHS; ++k) {
        float subt =0;
        for (int i = 0; i < YEARS; ++i) {
            subt += rain[i][k];
        }
        printf("%4.1f",subt/YEARS);
    }
    printf("\n");
    return 0;
}
//YEAR RAINFALL(inches)
//2012           56.2
//2013           54.2
//2014           56.0
//2015           60.2
//2016           56.0
//The yearly average is 56.5 inches.
//
//MONTHLY AVERAGES:
//Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
//4.0 4.3 5.1 3.7 0.2 1.2 6.1 1.9 9.1 8.3 5.6 7.1
