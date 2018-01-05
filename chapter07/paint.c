//  Author:Zheng Jun
//  Date:2018/1/5
//  E-mail:zhengjun1987@outlook.com
#include <printf.h>

#define COVERAGE 200

void pt() {
    int sq_feet, cans;
    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1) {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
        printf("You need %d %s of paint.\n",cans,cans==1?"can":"cans");
        printf("Enter number of square feet to be painted:\n");
    }
}
//Enter number of square feet to be painted:
//200
//You need 1 can of paint.
//Enter number of square feet to be painted:
//205
//You need 2 cans of paint.
//Enter number of square feet to be painted:
//305
//You need 2 cans of paint.
//Enter number of square feet to be painted:
//q
//
//Process finished with exit code 0