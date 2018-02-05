//  Author:Zheng Jun
//  Date:2018/2/5
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int rp(int argc, char *argv[]){
    printf("The command line has %d arguments:\n",argc -1);
    for (int i = 1; i < argc; ++i) {
        printf("%d:%s\n",i,argv[i]);
    }
    putchar('\n');
    return 0;
}
//192:CPrimerPlus5thEdition zhengjun$ gcc chapter11/repeat.c
//192:CPrimerPlus5thEdition zhengjun$ ./a.out Resistance is futile
//The command line has 3 arguments:
//1:Resistance
//2:is
//3:futile
