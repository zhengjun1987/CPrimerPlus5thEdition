//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void fg(){
    for (double debt = 100.0; debt <= 150.0; debt *= 1.1) {
        printf("Your debt is now $%.2f.\n",debt);
    }
//    Your debt is now $100.00.
//    Your debt is now $110.00.
//    Your debt is now $121.00.
//    Your debt is now $133.10.
//    Your debt is now $146.41.
}