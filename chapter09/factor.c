//  Author:Zheng Jun
//  Date:2018/1/11
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

long fact(int num);

int fc(){
    int num;
    printf("Enter a number (q to quit):\n");
    while (scanf("%d",&num) == 1){
        if (0 < num && num <100){
            printf("loop:%d factorial = %ld\n",num,fact(num));
        } else {
            printf("Integer invalid!\n");
        }
        printf("Enter a number (q to quit):\n");
    }
    printf("Bye!");
    return 0;
}

long fact(int num) {
    return num==1?1:num*fact(num-1);
}
//Enter a number (q to quit):
//5
//loop:5 factorial = 120
//Enter a number (q to quit):
//10
//loop:10 factorial = 3628800
//Enter a number (q to quit):
//q
//Bye!