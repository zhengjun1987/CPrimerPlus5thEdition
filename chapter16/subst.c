//  Author:Zheng Jun
//  Date:2018/3/13 23:46
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

#define PSQR(x) printf("The square of "#x" is %d,\n",(x)*(x))//注意此处的"#x"字符串化格式，把参数转化x成相应的字符串

int sbst(){
    int y = 5;
    PSQR(y);
    PSQR(2+4);
    return 0;
}
//    The square of y is 25,
//    The square of 2+4 is 36,
//
//    Process finished with exit code 0
