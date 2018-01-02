//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void tb(){
    long num, sum = 0;
    int status;
    printf("Please enter a integer to be summed (q to quit):\n");
    status = scanf("%ld", &num);
    while (status = 1){//Condition is always true!!!此处写法造成死循环
        sum += num;
        printf("Please enter next integer (q to quit):\n");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld\n",sum);
}