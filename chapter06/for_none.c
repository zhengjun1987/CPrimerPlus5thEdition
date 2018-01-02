//  Author:Zheng Jun
//  Date:2018/1/2
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void fn() {
    for (int ans = 2, n = 3; ans <= 25;) {
        ans *= n;
        printf("n = %d, ans = %d\n", n, ans);
    }
//    n = 3, ans = 6
//    n = 3, ans = 18
//    n = 3, ans = 54
}