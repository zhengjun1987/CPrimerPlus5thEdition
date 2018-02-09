//  Author:Zheng Jun
//  Date:2018/2/8
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int hd(){
    int x = 30;
    printf("x in outer block：%d\n",x);
    {
        int x = 77;
        printf("x in inner block：%d\n",x);
    }
    printf("x in outer block：%d\n",x);
    while (x++ < 33){//while语句中判断的变量x属于外部代码块范畴
        printf("x in while loop before re-definition：%d\n",x);//此处的x还是外围的x
        int x = 100;//此处以后才覆盖了外围的x
        x++;
        printf("x in while loop：%d\n",x);
    }
    printf("x in outer block：%d\n",x);
    return 0;
}
//x in outer block：30
//x in inner block：77
//x in outer block：30
//x in while loop before re-definition：31
//x in while loop：101
//x in while loop before re-definition：32
//x in while loop：101
//x in while loop before re-definition：33
//x in while loop：101
//x in outer block：34