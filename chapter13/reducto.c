//  Author:Zheng Jun
//  Date:2018/2/10 15:23
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rdc(int argc, char *argv[]) {
    FILE *in, *out;
    int ch;
    char name[40];
    int count = 0;
    if (argc < 2) {
        fprintf(stderr, "Usage:%s file_name\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((in = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Fail to open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    strcpy(name, argv[1]);
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL) {
        fprintf(stderr, "Fail to create output file %s\n", name);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(in)) != EOF) {
        if (count++ % 3 == 0){
            putc(ch, out);
            fprintf(stdout,"%c",ch);
        }
    }
    putchar('\n');
    if ((fclose(in) != 0) || (fclose(out) != 0))
        fprintf(stderr, "Error in closing files\n");
    return 0;
}
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ gcc chapter13/reducto.c
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ ./a.out chapter13/count.c
/// trhgu/ t28/ :
//-iznu9@toc
//ilesih#cd<db>i (tr,h r[   th  L*; lgot
//fac=)
//pn(sesi_mn g0;   iETAU)     f=onr[,r)=NL{   ifCn e%n g1;   iETAU)    i c=e()!E)
//pchso)   ot; } i =csf; i(!0   u(rrnli l!; pn(nl%h dhae."av]cn; ru
///hgnMBkrCirutdi ej$ccpr/u./hgnMBkrCirutdi ej$/o tb/t:gh.mhgn8zPmPshiog
//
//������
//fd a .|r tr     s/.|
//fd a .|r tr  |
//
//28��0�291 34 9
//28��0�432 38 4


//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ gcc chapter13/reducto.c
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ ./a.out chapter13/eddy
//Send money
