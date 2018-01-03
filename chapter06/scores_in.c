//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com
#include <printf.h>

#define SIZE 10
#define PAR 72

void sc() {
    int score[SIZE];
    int sum = 0;
    float average;
    printf("Enter %d golf scores:\n", SIZE);
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &score[i]);
        sum += score[i];
    }
    average = (float) sum / SIZE;
    printf("The scores read in are as follows:\n");
    for (int j = 0; j < SIZE; ++j) {
        printf("%5d", score[j]);
    }
    printf("\n");
    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.2f\n", average - PAR);
}
//Enter 10 golf scores:
//102
//98
//112
//108
//105
//103
//99
//101
//96
//102
//The scores read in are as follows:
//102   98  112  108  105  103   99  101   96  102
//Sum of scores = 1026, average = 102.60
//That's a handicap of 30.60