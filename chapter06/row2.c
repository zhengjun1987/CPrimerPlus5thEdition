//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void rw2(){
    const int ROWS = 6;
    const int CHARS = 6;
    for (int i = 'A'; i < 'A'+ROWS; ++i) {
        for (int j = i; j < 'A'+CHARS; ++j) {
            printf("%c",j);
        }
        printf("\n");
    }
}