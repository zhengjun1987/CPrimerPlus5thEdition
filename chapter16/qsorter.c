#include <stdio.h>
#include <stdlib.h>

#define NUM 40

void fillarray(double pDouble[], int i);

void show_array(double pDouble[], int i);

int my_comp(const void *p1, const void *p2);

/**
 *  Author:Zheng Jun
 *  Date:2018/3/20 20:14
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

int qst() {
    double vals[NUM];
    fillarray(vals, NUM);
    puts("Random list:");
    show_array(vals, NUM);
    qsort(vals, NUM, sizeof(double), my_comp);
    puts("\nSorted list:");
    show_array(vals,NUM);
}

void show_array(double pDouble[], int i) {
    for (int j = 0; j < i; ++j) {
        printf("%9.4f ", pDouble[j]);
        if (j % 6 == 5)
            putchar('\n');

    }
}

void fillarray(double pDouble[], int i) {
    for (int j = 0; j < i; ++j) {
        pDouble[j] = (double) rand() / ((double) rand() + 1);
    }
}

int my_comp(const void *p1, const void *p2){
    const double *a1 = (const double *)p1;
    const double *a2 = (const double *)p2;
    if(*a1 < *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else
        return 1;
}
//    Random list:
//    0.0001    1.6475    2.4332    0.0693    0.7268    0.7383
//    24.0357    0.1009   87.1828    5.7361    0.6079    0.6330
//    1.6058    0.1406    0.5933    1.1943    5.5295    2.2426
//    0.8364    2.7127    0.2514    0.9593    8.9635    0.7139
//    0.6249    1.6044    0.8649    2.1577    0.5420   15.0123
//    1.7931    1.6183    1.9973    2.9333   12.8512    1.3034
//    0.3032    1.1406   18.7880    0.9887
//    Sorted list:
//    0.0001    0.0693    0.1009    0.1406    0.2514    0.3032
//    0.5420    0.5933    0.6079    0.6249    0.6330    0.7139
//    0.7268    0.7383    0.8364    0.8649    0.9593    0.9887
//    1.1406    1.1943    1.3034    1.6044    1.6058    1.6183
//    1.6475    1.7931    1.9973    2.1577    2.2426    2.4332
//    2.7127    2.9333    5.5295    5.7361    8.9635   12.8512
//    15.0123   18.7880   24.0357   87.1828
//    Process finished with exit code 0