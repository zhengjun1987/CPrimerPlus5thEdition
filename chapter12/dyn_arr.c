//  Author:Zheng Jun
//  Date:2018/2/9 16:09
//  E-mail:zhengjun1987@outlook.com

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* 为数组动态分配存储空间 */

int da(){
    double * ptd;
    int max,number,i=0;
    puts("What is the maximum number of type double entries?");
    scanf("%d",&max);
    ptd = malloc(max * sizeof(double));
    if(ptd == NULL){
        puts("Memory allocation failed,Goodbye!");
        exit(EXIT_FAILURE);
    }
    puts("Enter the values:");
    while (i<max&&scanf("%lf",ptd+i)==1)
        i++;
    printf("Here are your %d entries:\n",max);
    for (int j = 0; j < max; ++j) {
        printf("%7.2f ",*(ptd+j));
        if (j%7==6)
            putchar('\n');
    }
    puts("\nDone!");
    free(ptd);
    return 0;
}
//What is the maximum number of type double entries?
//6
//Enter the values:
//20 30 35 25 40 80
//Here are your 6 entries:
//20.00   30.00   35.00   25.00   40.00   80.00
//Done!
//
//Process finished with exit code 0