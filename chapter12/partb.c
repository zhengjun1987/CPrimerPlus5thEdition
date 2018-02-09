//  Author:Zheng Jun
//  Date:2018/2/9 13:44
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

extern int count;//引用声明，外部链接
static int total=0;//静态定义，内部链接

void accumulate(int i);//原型

void accumulate(int i) {
    static int subtotal=0;//静态、空连接
    if(i<=0){
        printf("loop cycle:%d\n",count);
        printf("subtotal:%d total:%d\n",subtotal,total);
        subtotal =0;
    } else{
        subtotal +=i;
        total+=i;
    }
}
//Enter a positive integer (0 to quit)
//5
//loop cycle:1
//subtotal:15 total:15
//Enter a positive integer (0 to quit)
//10
//loop cycle:2
//subtotal:55 total:70
//Enter a positive integer (0 to quit)
//2
//loop cycle:3
//subtotal:3 total:73
//Enter a positive integer (0 to quit)
//0
//Loop executed 3 times
//
//Process finished with exit code 0