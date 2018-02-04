//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <memory.h>

#define LIM 5

#define SIZE 40

int c3(){
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;
    printf("Enter %d words beginning with q:\n",LIM);
    while (i < LIM && gets(temp)){
        if (temp[0] != 'q')
            printf("%s doesn't start with 'q'.\n",temp);
        else {
            strncpy(qwords[i],temp,SIZE-1);
            qwords[i++][SIZE-1] = '\0';
        }
    }

    puts("\nHere are the accepted words:");
    for (int j = 0; j < LIM; ++j) {
        puts(qwords[j]);
    }
    return 0;
}
//Enter 5 words beginning with q:
//warning: this program uses gets(), which is unsafe.
//qualified
//quit
//admin
//admin doesn't start with 'q'.
//qury
//quota
//quagga
//
//Here are the accepted words:
//qualified
//quit
//qury
//quota
//quagga
//
//Process finished with exit code 0