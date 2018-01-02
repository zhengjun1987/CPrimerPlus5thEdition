//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void fs(){
    int num = 0;
    for (printf("Keep entering numbers!\n"); num != 7;) {
        scanf("%d",&num);
    }
    printf("That's the one I want!");
}
//Keep entering numbers!
//1
//9
//4
//2
//097
//2
//3
//6
//7
//That's the one I want!