//  Author:Zheng Jun
//  Date:2018/1/27
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define LINELEN 81

#define LIM 5

#define MSG "You must have many talents,tell me."

int st() {
    char name[LINELEN];
    char talents[LINELEN];
    const char m1[40] = "Limit yourself to one line's worth.";
    const char m2[] = "If you can't think of anything,fake it.";
    const char *m3 = "\nEnouugh about me - what's your name?";
    const char *mytal[LIM] = {"Adding numbers swiftly",
                              "Multiplying accurately",
                              "Stashing data",
                              "Following instructions to the letter",
                              "Understanding the C language"
    };
    printf("Hi! I'm Clyde the Computer.""I have many talents.\n");
    puts("What were they? Ah,yes,here is a partial list.");
    for (int i = 0; i < LIM; ++i) {
        puts(mytal[i]);
    }
    puts(m3);
    gets(name);
    printf("Well,%s,%s\n",name,MSG);
    printf("%s\n%s\n",m1,m2);
    gets(talents);
    printf("Let's see if I've got that list:");
    puts(talents);
    printf("Thanks for your information,%s.\n",name);
    return 0;
}
//Hi! I'm Clyde the Computer.I have many talents.
//What were they? Ah,yes,here is a partial list.
//Adding numbers swiftly
//        Multiplying accurately
//        Stashing data
//        Following instructions to the letter
//Understanding the C language
//
//Enouugh about me - what's your name?
//Zheng Jun
//Well,Zheng Jun,You must have many talents,tell me.
//Limit yourself to one line's worth.
//If you can't think of anything,fake it.
//Eating,sleeping,drinking,and sighing.
//Let's see if I've got that list:Eating,sleeping,drinking,and sighing.
//Thanks for your information,Zheng Jun.