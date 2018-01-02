//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void rw1(){
    const int ROWS = 6;
    const int CHARS = 10;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 'A'; j < 'A'+CHARS; ++j) {
            printf("%c",j);
        }
        printf("\n");
    }
//    ABCDEFGHIJ
//            ABCDEFGHIJ
//    ABCDEFGHIJ
//            ABCDEFGHIJ
//    ABCDEFGHIJ
//            ABCDEFGHIJ
}