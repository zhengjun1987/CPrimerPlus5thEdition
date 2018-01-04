//  Author:Zheng Jun
//  Date:2018/1/4
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void cd(){
    const int FREEZING = 0;
    float temperature;
    int colddays =0,alldays =0;
    printf("Enter the list of daily low temperature.\n");
    while (scanf("%f",&temperature)==1){
        alldays++;
        if (temperature<FREEZING)
            colddays++;
    }
    if (alldays>0)
        printf("%d days total:%.1f%% were below freezing.\n", alldays, (double) (colddays * 100 / alldays));
    else
        printf("Empty input!");
}
//Enter the list of daily low temperature.
//12 4 -3 1 0 8 -3.5 -10 4 1 q
//10 days total:30.0% were below freezing.
//
//Process finished with exit code 41