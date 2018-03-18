#include <printf.h>
#include "names.h"
#include "names.h"

/**
 *  Author:Zheng Jun
 *  Date:2018/3/18 16:33
 *  E-mail:zhengjun1987@outlook.com
 *  Desc: 两次包含同一个头文件
 *
 *  删除names.h中的ifndef保护之后，本程序就无法通过编译(error: redefinition of 'name_str')
 */

int dblinc(){
    names winner = {"Less","Ismoor"};
    printf("The winner is %s %s\n",winner.first,winner.last);
    return 0;
}
//删除names.h中的ifndef保护之前：

//        The winner is Less Ismoor
//
//        Process finished with exit code 0


//删除names.h中的ifndef保护之后:
//        [  8%] Building C object CMakeFiles/CPrimerPlus5thEdition.dir/chapter16/doubleincl.c.o
//                In file included from /Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/chapter16/doubleincl.c:3:
//        /Users/zhengjun/CLionProjects/CPrimerPlus5thEdition/chapter16/names.h:5:8: error: redefinition of 'name_str'
//        1 warning and 1 error generated.
//        make[2]: *** [CMakeFiles/CPrimerPlus5thEdition.dir/chapter16/doubleincl.c.o] Error 1
//        make[1]: *** [CMakeFiles/CPrimerPlus5thEdition.dir/all] Error 2
//        make: *** [all] Error 2