//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

void ts(){
    printf("Type int has a size of %u bytes.\n", sizeof(int));
    printf("Type char has a size of %u bytes.\n", sizeof(char));
    printf("Type long has a size of %u bytes.\n", sizeof(long));
    printf("Type double has a size of %u bytes.\n", sizeof(double));
//            Type int has a size of 4 bytes.
//            Type char has a size of 1 bytes.
//            Type long has a size of 8 bytes.
//            Type double has a size of 8 bytes.
    printf("Type unsigned int has a size of %u bytes.\n", sizeof(unsigned int));
    printf("Type __uint8_t has a size of %u bytes.\n", sizeof(__uint8_t));
    printf("Type __uint16_t has a size of %u bytes.\n", sizeof(__uint16_t));
    printf("Type __uint32_t has a size of %u bytes.\n", sizeof(__uint32_t));
    printf("Type __uint64_t has a size of %u bytes.\n", sizeof(__uint64_t));
//            Type unsigned int has a size of 4 bytes.
//            Type __uint8_t has a size of 1 bytes.
//            Type __uint16_t has a size of 2 bytes.
//            Type __uint32_t has a size of 4 bytes.
//            Type __uint64_t has a size of 8 bytes.
}