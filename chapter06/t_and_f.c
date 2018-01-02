//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void tf() {
    int true_value, false_value;
    true_value = (10 > 2);
    false_value = (10 == 2);
    printf("true_value = %d,false_value = %d\n", true_value, false_value);
//    true_value = 1,false_value = 0

    while (1) {
        printf("%d", true_value);
        if (true_value++ == 5) {
            break;
        }
    }
}