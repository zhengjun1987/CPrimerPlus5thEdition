//  Author:Zheng Jun
//  Date:2017/12/30
//  E-mail:zhengjun1987@outlook.com


#include <printf.h>

void bt() {
    const int MAX = 10;
    int count = MAX + 1;
    while (--count > 0) {
        printf("%d bottles of spring water on the wall,%d bottles of spring water!\n", count, count);
        if (count - 1 > 0) {
            printf("Take one down and pass it around,\n");
            printf("%d bottles of spring water!\n\n", count - 1);
        }
    }
}
//10 bottles of spring water on the wall,10 bottles of spring water!
//Take one down and pass it around,
//9 bottles of spring water!
//
//9 bottles of spring water on the wall,9 bottles of spring water!
//Take one down and pass it around,
//8 bottles of spring water!
//
//8 bottles of spring water on the wall,8 bottles of spring water!
//Take one down and pass it around,
//7 bottles of spring water!
//
//7 bottles of spring water on the wall,7 bottles of spring water!
//Take one down and pass it around,
//6 bottles of spring water!
//
//6 bottles of spring water on the wall,6 bottles of spring water!
//Take one down and pass it around,
//5 bottles of spring water!
//
//5 bottles of spring water on the wall,5 bottles of spring water!
//Take one down and pass it around,
//4 bottles of spring water!
//
//4 bottles of spring water on the wall,4 bottles of spring water!
//Take one down and pass it around,
//3 bottles of spring water!
//
//3 bottles of spring water on the wall,3 bottles of spring water!
//Take one down and pass it around,
//2 bottles of spring water!
//
//2 bottles of spring water on the wall,2 bottles of spring water!
//Take one down and pass it around,
//1 bottles of spring water!
//
//1 bottles of spring water on the wall,1 bottles of spring water!