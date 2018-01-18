//  Author:Zheng Jun
//  Date:2018/1/17
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

int pop() {
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;
    ptr1 = urn;
    ptr2 = &urn[2];
    printf("pointer value, dereferenced pointer,pointer address\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    ptr3 = ptr1 + 4;
    printf("Adding an integer to a pointer:\n");
    printf("ptr1+4 = %p , *(ptr1+3) = %d\n", ptr1 + 4, *(ptr1 + 3));
    ptr1++;
    printf("\nValues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    ptr2--;
    printf("\nValues after ptr2--:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
    --ptr1;
    ++ptr2;
    printf("\nPointers reset to original value:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
    printf("\nSubstract one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p,  ptr2-ptr1 = %d\n", ptr2, ptr1, ptr2 - ptr1);
    printf("\nSubstract an integer from a pointer:\n");
    printf("ptr3 = %p, ptr3-2 = %p\n", ptr3, ptr3 - 2);

}
//pointer value, dereferenced pointer,pointer address
//ptr1 = 0x7ffeeb023800, *ptr1 = 100, &ptr1 = 0x7ffeeb0237f8
//Adding an integer to a pointer:
//ptr1+4 = 0x7ffeeb023810 , *(ptr1+3) = 400
//
//Values after ptr1++:
//ptr1 = 0x7ffeeb023804, *ptr1 = 200, &ptr1 = 0x7ffeeb0237f8
//
//Values after ptr2--:
//ptr2 = 0x7ffeeb023804, *ptr2 = 200, &ptr2 = 0x7ffeeb0237f0
//
//Pointers reset to original value:
//ptr2 = 0x7ffeeb023808, *ptr2 = 300, &ptr2 = 0x7ffeeb0237f0
//
//Substract one pointer from another:
//ptr2 = 0x7ffeeb023808, ptr1 = 0x7ffeeb023800,  ptr2-ptr1 = 2
//
//Substract an integer from a pointer:
//ptr3 = 0x7ffeeb023810, ptr3-2 = 0x7ffeeb023808