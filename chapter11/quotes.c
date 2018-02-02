//  Author:Zheng Jun
//  Date:2018/1/29
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int qt(){
    printf("%s,%p,%c\n","We","are",*"space farers");
    const char name[] = "Limit yourself to one line's worth.";
    printf("*name = %c, *(name+1) = %c\n",*name,*(name+1));//*name = L, *(name+1) = i
    return 0;
}
//We,0x1061e6f91,s