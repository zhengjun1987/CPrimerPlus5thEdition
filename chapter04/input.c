//  Author:Zheng Jun
//  Date:2017/12/27.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void main(){
    int age;
    float  assets;
    char pet[30];//将字符串扫描输入字符数组时无需在变量名前加&
    printf("Enter your age, assets and favourite pet.\n");
    scanf("%d %f",&age,&assets);
    scanf("%s",pet);//将字符串扫描输入字符数组时无需在变量名前加&
    printf("%d $%.2f %s\n",age,assets,pet);
}
//Enter your age, assets and favourite pet.
//31 4727.83
//Orangey
//31 $4727.83 Orangey
//
//Process finished with exit code 20