//  Author:Zheng Jun
//  Date:2018/1/3
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void exercise06_15_01();

void exercise06_15_02();

void exercise06_15_04();

void exercise06_15_05();

void exercise06_15_06();

void exercise06_15_07();

void main() {
//    exercise06_15_01();
//    exercise06_15_02();
//    exercise06_15_04();
//    exercise06_15_05();
//    exercise06_15_06();
//    exercise06_15_07();
    char ch;
//    scanf("%c",&ch);
    do{
        scanf("%c",&ch);
        printf("%c",ch);
    } while (ch != 'g');

//    Go west,young men!
//            Go west,youn

//    Go west,young men!
//            Hp!xftu-zpvo


//    Go west,young men!
//            Go west,young

    printf("\n");
    scanf("%c",&ch);
    for (char i = '$'; i != 'g'; scanf("%c",&i)) {
        putchar(i);
    }
}

void exercise06_15_07() {
    int i = 0;
    while (++i < 4){
        printf("Hi!");
    }
    do
        printf("Bye!");
    while(i++ < 8);
    printf("\n");

    for (int j = 0, ch = 'A'; j < 4; ++j,ch += 2*j) {
        printf("%c",ch);
    }
//    Hi!Hi!Hi!Bye!Bye!Bye!Bye!Bye!
//            ACGM
}

void exercise06_15_06() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 8; ++j) {
            printf("$");
        }
        printf("\n");
    }
//    $$$$$$$$
//            $$$$$$$$
//    $$$$$$$$
//            $$$$$$$$
}

void exercise06_15_05() {
    int i,j,list[10];
    for (i = 1; i <= 10; ++i) {
        list[i-1]=2*i+3;
        for (j = 0; j < i; ++j) {
            printf(" %d",list[j]);
        }
    }
    printf("\n");
}

void exercise06_15_04() {
    int x;
    _Bool flag = x > 5;
    flag = scanf("%d", &x) != 1;
    flag = x == 5;
}

void exercise06_15_02() {
    for (int i = 36; i > 0; i /= 2) {
        printf("%3d\n", i);
    }
//    36
//    18
//    9
//    4
//    2
//    1
}

void exercise06_15_01() {
    int quack = 2;
    printf("quack = %d\n", quack += 5);//quack = 7
    printf("quack = %d\n", quack *= 10);//quack = 70
    printf("quack = %d\n", quack -= 6);//quack = 64
    printf("quack = %d\n", quack /= 8);//quack = 8
    printf("quack = %d\n", quack %= 3);//quack = 2
}




