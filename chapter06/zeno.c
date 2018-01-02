//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void zn(){
    int t_ct,limit;
    double time,x;
    printf("Enter the time of terms you want:\n");
    scanf("%d",&limit);
    for (time=0,x=1,t_ct=1; t_ct <=limit; ++t_ct,x*=2.0) {
        time+=1.0/x;
        printf("time is %f when terms is %d\n",time,t_ct);
    }
//    Enter the time of terms you want:
//    16
//    time is 1.000000 when terms is 1
//    time is 1.500000 when terms is 2
//    time is 1.750000 when terms is 3
//    time is 1.875000 when terms is 4
//    time is 1.937500 when terms is 5
//    time is 1.968750 when terms is 6
//    time is 1.984375 when terms is 7
//    time is 1.992188 when terms is 8
//    time is 1.996094 when terms is 9
//    time is 1.998047 when terms is 10
//    time is 1.999023 when terms is 11
//    time is 1.999512 when terms is 12
//    time is 1.999756 when terms is 13
//    time is 1.999878 when terms is 14
//    time is 1.999939 when terms is 15
//    time is 1.999969 when terms is 16

}