#include <printf.h>

void why_me();

/**
 *  Author:Zheng Jun
 *  Date:2018/3/18 18:30
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:C预定义宏标识符
 */

int prdf(){
    printf("The date is %s\n",__DATE__);
    printf("The time is %s\n",__TIME__);
    printf("The FILE is %s\n",__FILE__);
    printf("The version is %ld\n",__STDC_VERSION__);
    printf("The line is %d\n",__LINE__);
    printf("The function is %s\n",__func__);
    why_me();
    return 0;
}

void why_me() {
    printf("The line is %d\n",__LINE__);
    printf("The function is %s\n",__func__);
}
//    The date is Mar 18 2018
//    The time is 18:34:52
//    The FILE is /Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/chapter16/predef.c
//    The version is 199901
//    The line is 15
//    The function is main
//    The line is 24
//    The function is why_me
//
//    Process finished with exit code 0