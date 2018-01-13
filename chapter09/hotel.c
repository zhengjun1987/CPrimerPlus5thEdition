//  Author:Zheng Jun
//  Date:2018/1/12
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <math.h>
#include "hotel.h"

int menu(void){
    int status,code;
    printf("\n%s\n",STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1)FairField Arms 2)Hotel Olympics\n");
    printf("3)Cherrworthy Plaza 4)The Stockton\n");
    printf("5)quit");
    printf("\n%s\n",STARS);
    while ((status = scanf("%d",&code)) != 1 || (code<1||code>5)) {
        if (status != 1)
            scanf("%*s");
        printf("Enter an integer from 1 to 5.\n");
    }
    return code;
}

int getnights(){
    int nights;
    printf("How many nights are needed?\n");
    while (scanf("%d",&nights) != 1){
        scanf("%*s");
        printf("Please enter an integer.\n");
    }
    return nights;
}

void showprices(double price, int nights){
    double total = 0.0;
    for (int i = 0; i < nights; ++i) {
        total += price*(pow(DISCOUNT,i));
    }
    printf("The total cost will be %0.2f.\n",total);
}