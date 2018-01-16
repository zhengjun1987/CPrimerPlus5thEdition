//  Author:Zheng Jun
//  Date:2018/1/17
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int main() {
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;
    ptr1 = urn;
    ptr2 = &urn[2];
    printf("pointer value, dereferenced pointer,pointer address\n");
    printf("ptr1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
    ptr3 = ptr1 + 4;
    printf("Adding an integer to a pointer:\n");
    printf("ptr1+4=%p,*(ptr1+3)=%d\n", ptr1 + 4, *(ptr1 + 3));
}