//  Author:Zheng Jun
//  Date:2017/12/23.
//  E-mail:zhengjun1987@outlook.com

/*nogood.c -- 含有错误的程序*/
#include <stdio.h>

void first(){
    printf("I am a sub method.\n");
};

int ng(){
    int n,_n2,_N3;//变量命名规则：只能包含数字、字母、下划线；头一个字符必须是字母或者下划线
    n = 5;
    _n2=n*n;
    _N3 =_n2*n;
    int i = printf("n = %d, _n2 = %d, _N3 = %d\n", n, _n2, _N3);
    first();
    int printf1 = printf("i = %d", i);//i = 26
    return 0;
}
//*n = 5, n2 = 25, n3 = 125
//Process finished with exit code 0


