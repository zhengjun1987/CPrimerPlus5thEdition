//  Author:Zheng Jun
//  Date:2017/12/24.
//  E-mail:zhengjun1987@outlook.com
#include <stdio.h>

/*超出系统能显示的最大int值*/
void tb() {
    int i = 2147483647;
//    unsigned int j = 4294967295;
    unsigned int j = 2147483647;
    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%d %d %d\n", j, j + 1, j + 2);

    unsigned int negtiveInteger = 3 - 6;
    printf("negtiveInteger = %d\n",negtiveInteger);//negtiveInteger = -3    很奇怪，在我的MacBook上面unsigned标识无法实现书上的效果
}
//2147483647 -2147483648 -2147483647
//2147483647 -2147483648 -2147483647    很奇怪，在我的MacBook上面unsigned标识无法实现书上的效果
//Process finished with exit code 34

