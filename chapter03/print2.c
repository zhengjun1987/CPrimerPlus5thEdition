//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com
/*  printf的更多属性 */
#include <stdio.h>
void p2(){
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long ago = 12345678908642;
    printf("un = %u and not %d\n",un,un);
    printf("end = %hd and %d \n",end,end);
    printf("big = %ld and not %hd\n",big,big);// %hd是将一个更长的数字截取成16位的short型数字之后的结果
    printf("ago = %lld and not %ld\n",ago,ago);
}
//un = 3000000000 and not -1294967296
//end = 200 and 200
//big = 65537 and not 1
//ago = 12345678908642 and not 12345678908642
//
//Process finished with exit code 44

