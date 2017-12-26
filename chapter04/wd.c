//  Author:Zheng Jun
//  Date:2017/12/26.
//  E-mail:zhengjun1987@outlook.com
#include <printf.h>

#define PAGES 931
void wd(){
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);
}
//*931*
//*931*
//*       931*
//*931       *
