//  Author:Zheng Jun
//  Date:2018/1/10
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int imin(int, int);

void ls() {
    int evil1, evil2;
    printf("Enter two integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2) {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
        printf("Enter two integers (q to quit):\n");
    }
    printf("Bye!");
}

int imin(int evil1, int evil2) {
    return (evil1 <= evil2) ? evil1 : evil2;
}
//Enter two integers (q to quit):
//509 333
//The lesser of 509 and 333 is 333.
//Enter two integers (q to quit):
//-9393 6
//The lesser of -9393 and 6 is -9393.
//Enter two integers (q to quit):
//1098 1852
//The lesser of 1098 and 1852 is 1098.
//Enter two integers (q to quit):
//q
//Bye!
//Process finished with exit code 4