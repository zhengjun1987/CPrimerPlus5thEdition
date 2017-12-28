//  Author:Zheng Jun
//  Date:2017/12/29.
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <memory.h>

#define Q "\"His helmet was funny without being vulgar.\""
#define B "booboo"
#define X 10
#define BOOK "War and Peace"
void main(){
    printf("He sold the painting for $%2.2f\n",2.345e2);
//    He sold the painting for $234.50
    printf("%c%c%c\n",'H',105,'\41');
//    Hi!
    printf("%s\nhas %d characters.\n",Q,strlen(Q));
//    "His helmet was funny without being vulgar."
//    has 44 characters.
    printf("Is %2.2e the same as %2.2f?\n",1201.0,1201.0);
//    Is 1.20e+03 the same as 1201.00?

    int age;
    char name[30];

    /*printf("Please enter your first name:\n");
    scanf("%s",name);
    printf("Alright, %s,what's your age?\n",name);
    scanf("%d",&age);
    int xp = X + age;
    printf("That's a %s!You must be at least %d!",B,xp);*/

//    Please enter your first name:
//    Trump
//    Alright, Trump,what's your age?
//    31
//    That's a booboo!You must be at least 41!

    float cost = 12.99,percent = 80.0;
    printf("This copy of \"%s\" sells for $%.2f.\nThat is %.0f%% of list.\n",BOOK,cost,percent);
//    This copy of "War and Peace" sells for $12.99.
//    That is 80% of list.

    printf("%d\n",123);
    printf("%4X\n",0x8A);
    printf("%10.3f\n",232.346);
    printf("%12.2e\n",2.33e+002);
    printf("%-40s\n\n","残雪凝辉冷画屏落梅横笛已三更更无人处月胧明我是人生惆怅客知君何事泪纵横断肠声里忆平生");
//    123
//    8A
//    232.346
//    2.33e+02
//    残雪凝辉冷画屏落梅横笛已三更更无人处月胧明我是人生惆怅客知君何事泪纵横断肠声里忆平生

    printf("%15lu\n",121323234);
    printf("%4x\n",0x8a);
}