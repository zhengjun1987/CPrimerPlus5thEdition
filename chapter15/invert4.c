//  Author:Zheng Jun
//  Date:2018/3/5 21:57
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

char *itobs(int number, char *bin);

void show_strr(char *bin);

int invert_end(int num, int bits);

int ivt4() {
    static char bin_strr[8 * sizeof(int) + 1];
    int number;

    puts("Enter integers to see them in binary:");
    while (scanf("%d", &number) == 1) {
        itobs(number, bin_strr);
        printf("%d is ", number);
        show_strr(bin_strr);
        number = invert_end(number, 4);
        printf("Inverting the last 4 bits gives\n");
        show_strr(itobs(number, bin_strr));
    }
    puts("Bye!");
    return 0;
}
//Enter integers to see them in binary:
//7
//7 is 0000 0000 0000 0000 0000 0000 0000 0111
//Inverting the last 4 bits gives
//0000 0000 0000 0000 0000 0000 0000 1000
//
//12541
//12541 is 0000 0000 0000 0000 0011 0000 1111 1101
//Inverting the last 4 bits gives
//0000 0000 0000 0000 0011 0000 1111 0010
//
//q
//Bye!
//
//Process finished with exit code 0