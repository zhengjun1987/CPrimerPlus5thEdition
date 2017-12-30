//  Author:Zheng Jun
//  Date:2017/12/29.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <memory.h>

#define Q "\"His helmet was funny without being vulgar.\""
#define B "booboo"
#define X 10
#define BOOK "War and Peace"

void test4_7_6();

void test4_7_5();

void test4_7_4();

void test4_7_2();

void test4_7_7();

void test4_7_8();

void test4_7_9();

void test4_8_1();

void test4_8_2();

void test4_8_3();

void test4_8_4();

void test4_8_5();

void main() {
//    test4_7_2();
//    test4_7_4();
//    test4_7_5();
//    test4_7_6();
//    test4_7_7();
//    test4_7_8();
//    test4_7_9();
//    test4_8_1();
//    test4_8_2();
//    test4_8_3();
//    test4_8_4();
//    test4_8_5();

}

void test4_8_5() {
    char first[20],last[20];
    printf("Please enter your first name:\n");
    scanf("%s",first);
    printf("Then enter your last name:\n");
    scanf("%s",last);
    printf("%s %s\n",first,last);
    printf("%*d %*d\n",strlen(first),strlen(first),strlen(last),strlen(last));
//    Please enter your first name:
//    Zheng
//    Then enter your last name:
//    Jun
//    Zheng Jun
//            5    3

}

void test4_8_4() {
    char name[20];
    float height;
    printf("Please enter your name and your height in inch.\n");
    scanf("%s %f",name,&height);
    printf("%s, you are %.3f feet tall\n",name,height);
//    Please enter your name and your height in inch.
//    Vincent 7.1982
//    Vincent, you are 7.198 feet tall
}

void test4_8_3() {
    float f;
    printf("Please enter a float point number.\n");
    scanf("%f",&f);
    printf("The input is %2.1f or %1.1e\n",f,f);
    printf("The input is %+2.3f or %1.3E\n",f,f);
//    Please enter a float point number.
//    21.2899
//    The input is 21.3 or 2.1e+01
//    The input is +21.290 or 2.129E+01

}

void test4_8_2() {
    char first[20];
    printf("Please enter your first name.\n");
    scanf("%s", first);
    printf("\"%s\"\n", first);
    printf("\"%*s\"\n", 18, first);
    printf("\"%-*s\"\n", 18, first);
    int length = (int) (strlen(first) + 3);
    printf("%*s\n", length, first);
//    Please enter your first name.
//            Zheng
//    "Zheng"
//            "             Zheng"
//            "Zheng             "
//    Zheng
}

void test4_8_1() {
    char first[20], last[20];
    printf("Please enter your first name and your last name.\n");
    scanf("%s %s", first, last);
    printf("%s, %s\n", first, last);
//    Please enter your first name and your last name.
//            Zheng Jun
//            Zheng, Jun
}

void test4_7_9() {
    int i, digit;
    float f = 0, e = 0;
    char linguini[20], catch[10];
    scanf("%d", &i);
    printf("i = %d, f = %f, e = %e\n", i, f, e);
//    101
//    i = 101, f = 0.000000, e = 1.401298e-45  此处e的默认值居然不是0 ！！！！！！！
    scanf("%f %e", &f, &e);
//    22.32 8.32E-9
    printf("i = %d, f = %f, e = %e\n", i, f, e);
//    i = 101, f = 22.320000, e = 8.320000e-09
    scanf("%s", &linguini);
    printf("linguini = %s\n", linguini);
//    catcg
//            linguini = catcg
    /*scanf("%s",&catch);
    printf("catch = %s\n",catch);*/
//    catch 22
//    catch = catch
    scanf("%*s %s", catch);
    printf("catch = %s\n", catch);
//    catch 22
//    catch = 22
}

void test4_7_8() {
    printf("%6.4d\n", 1234);
    printf("%#*x\n", 8, 1234);
    printf("%2c\n", 'A');
    int i = sizeof(3.13);
    printf("%+*.2f\n", i, 3.13);
    printf("%-7.5s\n", Q);
//    1234
//    0x4d2
//    A
//    +3.13
//    "His

}

void test4_7_7() {
    printf("%i\n", 121323234);
    printf("%#4x\n", 0x8a);
    printf("%-12.2E\n", 2.33e02);
    printf("%+10.3f\n", 232.346);
    printf("%-8.8s\n", Q);
//    121323234
//    0x8a
//    2.33E+02
//    +232.346
//    "His hel
}

void test4_7_2() {
    printf("He sold the painting for $%2.2f\n", 2.345e2);
//    He sold the painting for $234.50
    printf("%c%c%c\n", 'H', 105, '\41');
//    Hi!
    printf("%s\nhas %d characters.\n", Q, (int) strlen(Q));
//    "His helmet was funny without being vulgar."
//    has 44 characters.
    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
//    Is 1.20e+03 the same as 1201.00?

}

void test4_7_4() {
    int age;
    char name[30];

    printf("Please enter your first name:\n");
    scanf("%s", name);
    printf("Alright, %s,what's your age?\n", name);
    scanf("%d", &age);
    int xp = X + age;
    printf("That's a %s!You must be at least %d!", B, xp);

//    Please enter your first name:
//    Trump
//    Alright, Trump,what's your age?
//    31
//    That's a booboo!You must be at least 41!

}

void test4_7_5() {
    float cost = 12.99, percent = 80.0;
    printf("This copy of \"%s\" sells for $%.2f.\nThat is %.0f%% of list.\n", BOOK, cost, percent);
//    This copy of "War and Peace" sells for $12.99.
//    That is 80% of list.

}

void test4_7_6() {
    printf("%d\n", 123);
    printf("%4X\n", 0x8A);
    printf("%10.3f\n", 232.346);
    printf("%12.2e\n", 2.33e+002);
    printf("%-40s\n\n", "残雪凝辉冷画屏落梅横笛已三更更无人处月胧明我是人生惆怅客知君何事泪纵横断肠声里忆平生");
//    123
//    8A
//    232.346
//    2.33e+02
//    残雪凝辉冷画屏落梅横笛已三更更无人处月胧明我是人生惆怅客知君何事泪纵横断肠声里忆平生

}