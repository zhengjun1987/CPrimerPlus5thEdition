#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TSIZE 45
/**
 *  Author:Zheng Jun
 *  Date:2018/4/6 16:42
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

struct film {
    char title[TSIZE];
    int rating;
    struct film *next;
};

typedef struct film FILM;

int flm2() {
    FILM *head = NULL;
    FILM *prev = NULL, *current;
    char input[TSIZE];

    /* 收集存储数据 */
    puts("Enter first movie title:");
    while (gets(input) != NULL && input[0] != '\0') {
        current = (FILM *) malloc(sizeof(FILM));
        if (head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating<0-10>:");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter the next movie(empty line to stop):");
        prev = current;
    }

    /* 展示收集到的数据 */
    if (head == NULL)
        puts("No data entered!");
    else{
        puts("Here is the movie list:");
        current = head;
        while (current != NULL) {
            printf("Movie:%45s --- Rating:%2d\n", current->title, current->rating);
            current = current->next;
        }
    }


    /* 释放内存 */
    current = head;
    while (current != NULL) {
        free(current);
        current = current->next;
    }
    puts("Bye!");
    return 0;
}
//Enter first movie title:
//warning: this program uses gets(), which is unsafe.
//Internal Affairs
//Enter your rating<0-10>:
//10
//Enter the next movie(empty line to stop):
//Inception
//        Enter your rating<0-10>:
//9
//Enter the next movie(empty line to stop):
//Ready Gamer One
//        Enter your rating<0-10>:
//7
//Enter the next movie(empty line to stop):
//The Odessa of Pi
//Enter your rating<0-10>:
//9
//Enter the next movie(empty line to stop):
//
//Here is the movie list:
//Movie:                             Internal Affairs --- Rating:10
//Movie:                                    Inception --- Rating: 9
//Movie:                              Ready Gamer One --- Rating: 7
//Movie:                             The Odessa of Pi --- Rating: 9
//
//Bye!
//
//Process finished with exit code 0