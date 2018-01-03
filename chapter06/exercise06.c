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

void exercise06_15_08();

void exercise06_15_10();

void exercise06_15_11();

long returnlong();

long powerful(int i);

void exercise06_15_13();

void exercise06_15_14();

void main() {
//    exercise06_15_01();
//    exercise06_15_02();
//    exercise06_15_04();
//    exercise06_15_05();
//    exercise06_15_06();
//    exercise06_15_07();
//    exercise06_15_08();
//    exercise06_15_10();
//    exercise06_15_11();
//    exercise06_15_13();
//    exercise06_15_14();
}

void exercise06_15_14() {
    int i;
    for (i = 1,printf("%d:Hi!\n",i); printf("i = %d\n",i),i*i < 26; i+=2,printf("Now i = %d\n",i)) {
        printf("i = %d in the loop.\n",i);
    }
//    1:Hi!
//                i = 1
//    i = 1 in the loop.
//            Now i = 3
//    i = 3
//    i = 3 in the loop.
//            Now i = 5
//    i = 5
//    i = 5 in the loop.
//            Now i = 7
//    i = 7
}

void exercise06_15_13() {
    long value = returnlong();
    value = powerful(3);
}

long powerful(int i) {
    return i*i;
}

long returnlong() {
    return 0;
}

void exercise06_15_11() {
    int by_twos[8];
    for (int i = 0; i < 8; ++i) {
        by_twos[i]=2*(i+1);
    }
    for (int j = 0; j < 8; ++j) {
        printf("%d ",by_twos[j]);
    }
    printf("\n");
//    2 4 6 8 10 12 14 16

}

void exercise06_15_10() {
    double mint[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%lf",&mint[i]);
    }
    printf("The whole array contains:\n");
    for (int j = 0; j < 10; ++j) {
        printf("%lf ",mint[j]);
    }
//    1
//    2
//    3
//    1
//    3
//    1
//    0.8
//    3.14
//    2.71
//    0.618
//    The whole array contains:
//    1.000000 2.000000 3.000000 1.000000 3.000000 1.000000 0.800000 3.140000 2.710000 0.618000

}

void exercise06_15_08() {
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
//            Go west,young men!
//            Go west,youn
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




