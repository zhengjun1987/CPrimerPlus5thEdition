//  Author:Zheng Jun
//  Date:2018/1/18
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define SIZE 5

void show_array(const double pDouble[], int i);

void multi_array(double pDouble[], int i, double d);

int arf() {
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
    printf("The original array:\n");
    show_array(dip, SIZE);
    multi_array(dip, SIZE, 2.5);
    printf("The dip array after calling multi_array():\n");
    show_array(dip, SIZE);
    return 0;
}

/*用同一个乘数去乘以数组的每一个元素*/
void multi_array(double pDouble[], int i, double d) {
    for (int j = 0; j < i; ++j) {
        pDouble[j] *= d;
    }
}

/*打印double数组的每个元素值*/
void show_array(const double pDouble[], int i) {
    for (int j = 0; j < i; ++j) {
        printf("%8.3f ", pDouble[j]);
    }
    putchar('\n');
}
//The original array:
//20.000   17.660    8.200   15.300   22.220
//The dip array after calling multi_array():
//50.000   44.150   20.500   38.250   55.550