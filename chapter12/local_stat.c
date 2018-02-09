//  Author:Zheng Jun
//  Date:2018/2/9 00:42
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void trystat();

int ls(){
    for (int count = 1; count < 4; ++count) {
        printf("Here comes iteration %d:\n",count);
        trystat();
    }
    return 0;
}

void trystat() {
    int fade = 1;//这一句是trystat()的一部分，每次调用trystat()都会执行
    static int stay = 1;//这一句实际上不是trystat()的组成部分，静态变量和外部变量在程序加载到内存时就已经就位
    //这个语句放在此处的原因是为了告诉编译器只有trystat()可以访问静态域stay
    printf("fade = %d and stay = %d\n",fade++,stay++);
}
//Here comes iteration 1:
//fade = 1 and stay = 1
//Here comes iteration 2:
//fade = 1 and stay = 2
//Here comes iteration 3:
//fade = 1 and stay = 3
//
//Process finished with exit code 0
