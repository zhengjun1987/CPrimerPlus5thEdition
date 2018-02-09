#include <stdio.h>

//  Author:Zheng Jun
//  Date:2018/2/9 12:49
//  E-mail:zhengjun1987@outlook.com


int units = 1;//定义声明

void critic();

int glb() {
    extern int units;//引用声明，再次声明可以使得程序的可读性更好
    //extern表明这句话只是引用，不能再对units进行赋值初始化
    puts("How many pounds to a firkin of butters?");
    scanf("%d", &units);
    while (units != 56)
        critic();
    puts("You must have looked it up!");
    return 0;
}

void critic() {
    puts("No luck,chummy.Try it again.");
    scanf("%d", &units);//不用再次声明也可以访问全局变量units
}
//How many pounds to a firkin of butters?
//13
//No luck,chummy.Try it again.
//56
//You must have looked it up!
//
//Process finished with exit code 0