//  Author:Zheng Jun
//  Date:2018/1/18
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int zp1(){
    int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
    printf("      zippo = %p,      zippo+1 = %p\n",zippo,zippo+1);
    printf("   zippo[0] = %p,   zippo[0]+1 = %p\n",zippo[0],zippo[0]+1);
    printf("     *zippo = %p,     *zippo+1 = %p\n",*zippo,*zippo+1);
    printf("    **zippo = %14d,  *(*zippo+2) = %14d\n",**zippo,*(*zippo+2));
    printf("**(zippo+1) = %14d,**(zippo+2)+1 = %14d\n",**(zippo+1),**(zippo+2)+1);
    printf("==========================================\n");
    printf(" zippo[0][0] = %d\n",zippo[0][0]);
    printf("   *zippo[0] = %d\n",*zippo[0]);
    printf("     **zippo = %d\n",**zippo);
    printf("    zippo[2][1] = %d\n",zippo[2][1]);
    printf("*(*(zippo+2)+1) = %d\n",*(*(zippo+2)+1));
    printf("%p",&zippo);
    return 0;
}
//      zippo = 0x7ffeee6c17f0,      zippo+1 = 0x7ffeee6c17f8
//   zippo[0] = 0x7ffeee6c17f0,   zippo[0]+1 = 0x7ffeee6c17f4
//     *zippo = 0x7ffeee6c17f0,     *zippo+1 = 0x7ffeee6c17f4
//    **zippo =              2,  *(*zippo+2) =              6
//**(zippo+1) =              6,**(zippo+2)+1 =              2
//==========================================
//zippo[0][0] = 2
//  *zippo[0] = 2
//    **zippo = 2
//    zippo[2][1] = 3
//*(*(zippo+2)+1) = 3