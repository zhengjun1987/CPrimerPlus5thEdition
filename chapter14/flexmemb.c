//  Author:Zheng Jun
//  Date:2018/2/26 21:53
//  E-mail:zhengjun1987@outlook.com

#include <stdlib.h>
#include <stdio.h>

struct flex {
    int count;
    double average;
    double scores[];
};

void showFlex(struct flex *pFlex);

int flxm() {
    struct flex *pf1, *pf2;
    int n = 5, tot = 0;
    pf1 = malloc(sizeof(struct flex) + sizeof(double) * n);
    pf1->count = n;
    for (int i = 0; i < n; ++i) {
        pf1->scores[i] = 20.0 - i;
        tot += pf1->scores[i];
    }
    pf1->average = tot / pf1->count;
    showFlex(pf1);
    n = 9, tot = 0;
    pf2 = malloc(sizeof(struct flex) + n * sizeof(double));
    pf2->count = n;
    for (int j = 0; j < pf2->count; ++j) {
        pf2->scores[j] = 20 - j / 2.0;
        tot += pf2->scores[j];
    }
    pf2->average = tot / pf2->count;
    showFlex(pf2);
    free(pf1);
    free(pf2);
    return 0;
}
//Scores:
//20 19 18 17 16
//Average:18
//Scores:
//20 19.5 19 18.5 18 17.5 17 16.5 16
//Average:17
//
//Process finished with exit code 0

void showFlex(struct flex *pFlex) {
    puts("Scores:");
    for (int i = 0; i < pFlex->count; ++i) {
        printf("%g ", pFlex->scores[i]);
    }
    printf("\nAverage:%g\n", pFlex->average);
}