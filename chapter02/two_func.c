#include <stdio.h>

/*在一个文件中包含两个函数*/

void butler() ;
int ft(void);

//  Author:Zheng Jun
//  Date:2017/12/23.
//  E-mail:zhengjun1987@outlook.com
int tf(){
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes,bring me some tea and writable CD-ROMs!\n");
    ft();//此处未能给出ft()方法的具体实现源代码，也无法指向路径内的其他文件内的方法


    int n,_n2,_N3;//变量命名规则：只能包含数字、字母、下划线；头一个字符必须是字母或者下划线
    n = 5;
    _n2=n*n;
    _N3 =_n2*n;
    int i = printf("n = %d, _n2 = %d, _N3 = %d\n", n, _n2, _N3);
}


/*这个方法的源代码也可以置于main函数上方，无需声明本函数原型*/
void butler() {
    printf("You rang,Sirrrr?\n");
    /*此处不用return语句*/
}
//I will summon the butler function.
//You rang,Sir?
//Yes,bring me some tea and writable CD-ROMs!
//
//Process finished with exit code 0