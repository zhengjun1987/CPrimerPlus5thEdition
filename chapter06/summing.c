//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void sm() {
    long num, sum = 0;
    int status;
    printf("Please enter a integer to be summed (q to quit):\n");
    status = scanf("%ld", &num);
    while (status == 1){
        sum += num;
        printf("Please enter next integer (q to quit):\n");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld\n",sum);
//    Please enter a integer to be summed (q to quit):
//    33
//    Please enter next integer (q to quit):
//    88
//    Please enter next integer (q to quit):
//    121
//    Please enter next integer (q to quit):
//    q
//    Those integers sum to 242
}