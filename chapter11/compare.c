//  Author:Zheng Jun
//  Date:2018/2/4
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <string.h>

#define ANSWER "Grant"

int cmp(){
    char try[40];
    puts("Who is buried in Grant's tomb?");
    gets(try);
    while (strcmp(try,ANSWER) != 0) {/* strcmp()比较的是字符串，而非数组内容，此处try数组占了40个内存单元，而ANSWER只占用6个内存单元 */
        //try != ANSWER try和ANSWER实际上都是指针，并不检查两个字符串是否一样，而是检查两个指针的地址是否一样
        puts("No,that's wrong.Try again.");
        gets(try);
    }
    puts("That's right!");
    return 0;
}
//Who is buried in Grant's tomb?
//warning: this program uses gets(), which is unsafe.
//Tom
//        No,that's wrong.Try again.
//Gray
//        No,that's wrong.Try again.
//Granr
//        No,that's wrong.Try again.
//Grant
//        That's right!
//
//Process finished with exit code 0
