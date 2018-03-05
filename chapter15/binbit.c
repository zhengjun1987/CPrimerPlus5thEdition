//  Author:Zheng Jun
//  Date:2018/3/5 17:06
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

extern char *itobs(int number, char *bin);

extern void show_strr(char *bin);

int bnbt() {
    char bin[8 * sizeof(int) + 1];
    int number;

    printf("Enter integers to see them in binary:\n");
    while (scanf("%d", &number) == 1) {
        while (getchar() != '\n')
            continue;
        itobs(number, bin);
        printf("%d is ", number);
        show_strr(bin);
        printf("Enter integers to see them in binary:\n");
    }
    puts("Bye!");
    return 0;
}

void show_strr(char *bin) {
    int i = 0;
    while (bin[i]) {
        putchar(bin[i]);
        if (++i % 4 == 0 && bin[i]) {
            putchar(' ');
        }
    }
    putchar('\n');
}

char *itobs(int number, char *bin) {
    static int size = 8 * sizeof(int);
    for (int i = size - 1; i >= 0; i--, number >>= 1) {
        bin[i] = (char) ((01 & number) + '0');
    }
    bin[size] = '\0';
    return bin;
}
//Enter integers to see them in binary:
//7
//7 is 0000 0000 0000 0000 0000 0000 0000 0111
//Enter integers to see them in binary:
//2018
//2018 is 0000 0000 0000 0000 0000 0111 1110 0010
//Enter integers to see them in binary:
//2005
//2005 is 0000 0000 0000 0000 0000 0111 1101 0101
//Enter integers to see them in binary:
//-1
//-1 is 1111 1111 1111 1111 1111 1111 1111 1111
//Enter integers to see them in binary:
//32123
//32123 is 0000 0000 0000 0000 0111 1101 0111 1011
//Enter integers to see them in binary:
//        q
//Bye!
//
//Process finished with exit code 0