//  Author:Zheng Jun
//  Date:2018/2/24 23:47
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define FUNDLEN 60
struct fund {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};


double fund_sum(struct fund *pFund);

int fds2() {
    struct fund stan = {
            "Garlic-Melon Bank",
            3024.72,
            "Lucy's Savings and Loan",
            9237.11
    };
    printf("Stan has a total of $%.2f.\n", fund_sum(&stan));
    return 0;
}

double fund_sum(struct fund *pFund) {
    return pFund->savefund + pFund->bankfund;
}
//Stan has a total of $12261.83.
//
//Process finished with exit code 0