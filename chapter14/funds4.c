//  Author:Zheng Jun
//  Date:2018/2/26 22:13
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define FUNDLEN 50
#define N 2

struct fund {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum4(const struct fund pFund[], int i);

int fds4() {
    struct fund jones[N] = {
            {
                    "Garlic-Melon Bank",
                    3024.72,
                    "Lucky's Savings and Loan",
                    9237.11
            },
            {
                    "Honest Jack's Bank",
                    3534.28,
                    "Party Time Savings",
                    3203.89
            }
    };

    printf("The Joneses have a total of $%.2f.\n", sum4(jones, N));
    return 0;
}
//The Joneses have a total of $19000.00.
//
//Process finished with exit code 0

double sum4(const struct fund pFund[], int i) {
    double result = 0.0;
    for (int j = 0; j < i; ++j) {
        double d = pFund[j].savefund + pFund[j].bankfund;
        result += d;
    }
    return result;
}