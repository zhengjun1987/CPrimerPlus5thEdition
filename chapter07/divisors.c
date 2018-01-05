//  Author:Zheng Jun
//  Date:2018/1/5
//  E-mail:zhengjun1987@outlook.com

#include <stdbool.h>
#include <printf.h>

void ds() {
    unsigned long num, div;
    bool isPrime;
    printf("Enter an integer for analysis (q to escape):\n");
    while ((scanf("%lu", &num)) == 1) {
        for (div = 2, isPrime = true; div * div <= num; ++div) {
            if (num % div == 0) {
                if (div * div == num)
                    printf("%lu is divisible by %lu.\n", num, div);
                else
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                isPrime = false;
            }
        }
        if (isPrime) {
            printf("%lu is prime.\n", num);
        }
        printf("Enter an integer for analysis (q to escape):\n");
    }
}
//Enter an integer for analysis (q to escape):
//36
//36 is divisible by 2 and 18.
//36 is divisible by 3 and 12.
//36 is divisible by 4 and 9.
//36 is divisible by 6.
//Enter an integer for analysis (q to escape):
//149
//149 is prime.
//Enter an integer for analysis (q to escape):
//30077
//30077 is divisible by 19 and 1583.
//Enter an integer for analysis (q to escape):
//1987
//1987 is prime.
//Enter an integer for analysis (q to escape):
//2019
//2019 is divisible by 3 and 673.
//Enter an integer for analysis (q to escape):
//2017
//2017 is prime.
//Enter an integer for analysis (q to escape):
//9527
//9527 is divisible by 7 and 1361.
//Enter an integer for analysis (q to escape):
//q
//
//Process finished with exit code 0