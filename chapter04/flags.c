//  Author:Zheng Jun
//  Date:2017/12/26.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void fg(){
    printf("%x %X %#x\n",31,31,31);
//1f 1F 0x1f
    printf("***%d**%+d**%+d**\n",42,42,-42);
//***42**+42**-42**
    printf("***%d**% d**% d**\n",42,42,-42);
//***42** 42**-42**
    printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);
//**    6**  006**00006**  006**
}
