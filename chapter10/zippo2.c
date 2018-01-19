//  Author:Zheng Jun
//  Date:2018/1/18
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int zp2(){
    int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
    int (*pz)[2];
    pz = zippo;

    printf("       pz = %p,      pz+1 = %p\n",pz,pz+1);
    printf("    pz[0] = %p,   pz[0]+1 = %p\n",pz[0],pz[0]+1);
    printf("      *pz = %p,     *pz+1 = %p\n\n",*pz,*pz+1);

    printf(" pz[0][0] = %d\n",pz[0][0]);
    printf("   *pz[0] = %d\n",*pz[0]);
    printf("     **pz = %d\n\n",**pz);

    printf("    pz[2][1] = %d\n",pz[2][1]);
    printf("*(*(pz+2)+1) = %d\n",*(*(pz+2)+1));
    return 0;
}
//pz = 0x7ffee1c897f0,      pz+1 = 0x7ffee1c897f8
//pz[0] = 0x7ffee1c897f0,   pz[0]+1 = 0x7ffee1c897f4
//*pz = 0x7ffee1c897f0,     *pz+1 = 0x7ffee1c897f4
//
//pz[0][0] = 2
//*pz[0] = 2
//**pz = 2
//
//pz[2][1] = 3
//*(*(pz+2)+1) = 3