//  Author:Zheng Jun
//  Date:2018/2/24 23:39
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define FUNDLEN 60
struct fund {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(double bankfund, double savefund);

int fds1() {
    struct fund stan = {
            "Garlic-Melon Bank",
            3024.72,
            "Lucy's Savings and Loan",
            9237.11
    };
    printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));
    return 0;
}

double sum(double bankfund, double savefund) {
    return bankfund + savefund;
}
//Stan has a total of $12261.83.