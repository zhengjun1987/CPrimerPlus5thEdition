//  Author:Zheng Jun
//  Date:2017/12/30
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void ms(){
    const int SEC_PER_MIN = 60;
    int sec,min,lft;
    printf("Convert seconds to minutes and seconds:\n");
    printf("Enter the number of seconds:\n");
    scanf("%d",&sec);
    while(sec > 0){
        min = sec/SEC_PER_MIN;
        lft = sec%SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n",sec,min,lft);
        printf("Enter the number of seconds:\n");
        scanf("%d",&sec);
    }
    printf("Done!");
}
//Convert seconds to minutes and seconds:
//Enter the number of seconds:
//432
//432 seconds is 7 minutes, 12 seconds.
//Enter the number of seconds:
//189
//189 seconds is 3 minutes, 9 seconds.
//Enter the number of seconds:
//154
//154 seconds is 2 minutes, 34 seconds.
//Enter the number of seconds:
//567
//567 seconds is 9 minutes, 27 seconds.
//Enter the number of seconds:
//0
//Done!