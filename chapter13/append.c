//  Author:Zheng Jun
//  Date:2018/2/11 18:21
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 81

void append(FILE *pFILE, FILE *pSFILE);

int appd() {
    FILE *fdest, *fsrc;
    int files = 0;
    char file_app[SLEN], file_src[SLEN];
    puts("Enter names of destination files:");
    gets(file_app);
    if ((fdest = fopen(file_app, "a")) == NULL) {
        fprintf(stderr, "Cannot open %s\n", file_app);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fdest, NULL, _IOFBF, BUFSIZ) != 0) {
        fprintf(stderr, "Cannot create output buffer\n");
        exit(EXIT_FAILURE);
    }
    puts("Enter name of first source file (empty line to quit)");
    while (gets(file_src) && file_src[0] != '\0') {
        if (strcmp(file_src,file_app)==0)
            puts("Cannot append file to itself.");
        else if((fsrc=fopen(file_src,"r"))==NULL)
            fprintf(stderr,"Cannot open file %s\n",file_src);
        else {
            if(setvbuf(fsrc,NULL,_IOFBF,BUFSIZ) !=0){
                fputs("Cannot create input buffer",stderr);
                exit(EXIT_FAILURE);
            }
            append(fsrc,fdest);
            if(ferror(fsrc)!=0){
                fprintf(stderr,"Error in reading file %s\n",file_src);
            }
            if(ferror(fdest)!=0){
                fprintf(stderr,"Error in writing file %s\n",file_app);
            }
            fclose(fsrc);
            files++;
            printf("File %s appended.\n",file_src);
        }
        puts("Next file (empty line to quit):");
    }
    printf("Done. %d files appended.\n",files);
    fclose(fdest);
    return 0;
}

void append(FILE *pFILE, FILE *pSFILE) {
    size_t bytes;
    static char temp[BUFSIZ];
    while ((bytes=fread(temp, sizeof(char),BUFSIZ,pSFILE))>0)
        fwrite(temp, sizeof(char),bytes,pFILE);
}
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ gcc chapter13/append.c
//zhengjuns-MacBook-Pro:CPrimerPlus5thEdition zhengjun$ ./a.out
//Enter names of destination files:
//warning: this program uses gets(), which is unsafe.
//words
//Enter name of first source file (empty line to quit)
//fflush
//Error in writing file words
//File fflush appended.
//Next file (empty line to quit):
//words
//Cannot append file to itself.
//
//Done. 1 files appended.
