//  Author:Zheng Jun
//  Date:2018/1/11
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void to_binary(unsigned long number);

void bnr(){
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu",&number)==1){
        printf("Binary equivalent:");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Bye!");
}

void to_binary(unsigned long number) {
    unsigned long i = number % 2;
    if (number >=2)
        to_binary(number/2);
    putchar(i+'0');
}
//Enter an integer (q to quit):
//5
//Binary equivalent:101
//Enter an integer (q to quit):
//9
//Binary equivalent:1001
//Enter an integer (q to quit):
//255
//Binary equivalent:11111111
//Enter an integer (q to quit):
//1024
//Binary equivalent:10000000000
//Enter an integer (q to quit):
//q
//Bye!
//Process finished with exit code 4