#include <printf.h>
#include "names.h"

/**
 *  Author:Zheng Jun
 *  Date:2018/3/17 15:56
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:使用names结构
 */

int usnm(){
    names candidate;
    get_names(&candidate);
    printf("Let's welcome ");
    show_names(&candidate);
    puts(" to this programme");
    return 0;
}
//Please enter your first name:
//        Zheng
//Please enter your last name:
//        Jun
//Let's welcome Zheng Jun to this programme
//
//Process finished with exit code 0

