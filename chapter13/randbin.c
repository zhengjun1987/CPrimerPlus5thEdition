//  Author:Zheng Jun
//  Date:2018/2/11 20:27
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <stdlib.h>

#define ARRSIZE 1000

/* 随机存取，二进制i/o */

int rdb(){
    double numbers[ARRSIZE];
    double value;
    const char *file ="chapter13/numbers.dat";
    int pos;
    FILE *iofile;
    for (int i = 0; i < ARRSIZE; ++i) {
        numbers[i]=100.0*i+1.0/(i+1);
    }
    if ((iofile=fopen(file,"wb"))==NULL){
        fprintf(stderr,"Fail to open file %s\n",file);
        exit(EXIT_FAILURE);
    }
    fwrite(numbers, sizeof(double),ARRSIZE,iofile);
    fclose(iofile);
    if((iofile=fopen(file,"rb"))==NULL){
        fprintf(stderr,"Fail to read file %s\n",file);
        exit(EXIT_FAILURE);
    }
    printf("Enter an interger in the range 0-%d.\n",ARRSIZE-1);
    while (scanf("%d",&pos)==1&&pos>=0&&pos<ARRSIZE){
        long i = pos * sizeof(double);
        fseek(iofile,i,SEEK_SET);
        fread(&value, sizeof(double),1,iofile);
        printf("The value there is %f\n",value);
        printf("Enter an interger in the range 0-%d.\n",ARRSIZE-1);
    }
    return 0;
}
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ gcc chapter13/randbin.c
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ ./a.out
//123
//The value there is 12300.008065
//Enter an interger in the range 0-999.
//788
//The value there is 78800.001267
//Enter an interger in the range 0-999.
//999
//The value there is 99900.001000
//Enter an interger in the range 0-999.
//1
//The value there is 100.500000
//Enter an interger in the range 0-999.
//0
//The value there is 1.000000
//Enter an interger in the range 0-999.
//q
