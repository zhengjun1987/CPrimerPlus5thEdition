//  Author:Zheng Jun
//  Date:2018/1/20
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define COLS 4

int func_sum(int *pInt, int i);

int func_sum2d(int (*pInt)[COLS], int i);

int func_sums(int *pInt, int count);

int flc(){
    int * pt1;
    int (*pt2)[COLS];
    pt1 = (int [2]){10,20};
    pt2 = (int [][COLS]){
            {1,2,3,-9},
            {4,5,6,-8}
    };
    printf("total1 = %d\n",func_sum(pt1,2));
    printf("total2 = %d\n",func_sum2d(pt2,2));
    printf("total3 = %d\n",func_sums((int []){4,4,4,5,5,5},6));
    return 0;
}

int func_sums(int *pInt, int count) {
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += *(pInt+i);
    }
    return sum;
}

int func_sum2d(int (*pInt)[COLS], int i) {
    int SUM = 0;
    for (int j = 0; j < COLS * i; ++j) {
        SUM += *(*(pInt)+j);
    }
    return SUM;
}

int func_sum(int *pInt, int i) {
    int sum = 0;
    for (int j = 0; j < i; ++j) {
        sum += *(pInt+j);
    }
    return sum;
}
//total1 = 30
//total2 = 4
//total3 = 27