//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void bl() {
    long num, sum = 0;
    _Bool input_is_good;
    printf("Please enter a integer to be summed (q to quit):\n");
    input_is_good = scanf("%ld", &num) == 1;
    while (input_is_good) {
        sum += num;
        printf("Please enter next integer (q to quit):\n");
        input_is_good = scanf("%ld", &num) == 1;
    }
    printf("Those integers sum to %ld\n", sum);
//    Please enter a integer to be summed (q to quit):
//    11
//    Please enter next integer (q to quit):
//    22
//    Please enter next integer (q to quit):
//    33
//    Please enter next integer (q to quit):
//    44
//    Please enter next integer (q to quit):
//    55
//    Please enter next integer (q to quit):
//    66
//    Please enter next integer (q to quit):
//    q
//    Those integers sum to 231
}