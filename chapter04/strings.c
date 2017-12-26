//  Author:Zheng Jun
//  Date:2017/12/26.
//  E-mail:zhengjun1987@outlook.com
#include <printf.h>
#include <memory.h>

#define BLURB "Authentic imitation! "
void st(){
    printf("Length = %d\n",strlen(BLURB));
    printf("/%2s/\n",BLURB);
//    /Authentic imitation! /
    printf("/%24s/\n",BLURB);
//    /   Authentic imitation! /
    printf("/%24.5s/\n",BLURB);
//    /                   Authe/
    printf("/%-24.5s/\n",BLURB);
//    /Authe                   /
}