//  Author:Zheng Jun
//  Date:2018/2/26 20:33
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

#define MAXTITL 41
#define MAXAUTL 31

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int cmpl(){
    struct book readfirst;
    int score;
    puts("Enter the score:");
    scanf("%d",&score);
    if(score>=84)
        readfirst = (struct book) {
                "Crime and Punishment",
                "Fyodor Dostoyevsky",
                9.99
        };
    else
        readfirst = (struct book) {
                "Mr Bouncy's Nice Hat",
                "Fred Winsome",
                5.99
        };
    printf("Your asigned reading:\n");
    printf("%s by %s :$%.2f\n",readfirst.title,readfirst.author,readfirst.value);
    return 0;
}
//Enter the score:
//96
//Your asigned reading:
//Crime and Punishment by Fyodor Dostoyevsky :$9.99
//
//Process finished with exit code 0