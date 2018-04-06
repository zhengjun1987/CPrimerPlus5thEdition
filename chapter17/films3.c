#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 *  Author:Zheng Jun
 *  Date:2018/4/6 19:37
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */
void showItems(Item item) {
    printf("Movie:%20s Rating:%2d\n", item.title, item.rating);
}

int flm3() {
    List movies;
    Item temp;
    initializeList(&movies);
    if (isFull(&movies)) {
        fprintf(stderr, "No memory available!Bye!");
        exit(1);
    }

    /* 收集存储数据 */
    puts("Enter first movie title:");
    while (gets(temp.title) != NULL && temp.title[0] != '\0') {
        puts("Enter your rating<0-10>:");
        scanf("%d", &temp.rating);
        while (getchar() != '\n')
            continue;
        if (!addItem(&movies, &temp)) {
            fprintf(stderr, "Problem allocating memory!");
            break;
        }
        if (isFull(&movies)) {
            puts("The list is now full!");
            break;
        }
        puts("Enter the next movie(empty line to stop):");
    }
    if (isEmpty(&movies)) {
        puts("No data entered!");
    } else {
        puts("Here is the movie list:");
        printf("Total:%d\n", size(&movies));
        traverse(&movies, showItems);
    }
    clear(&movies);
    puts("Bye!");

    return 0;
}
//Enter first movie title:
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
//        Total:4
//Movie:    Internal Affairs Rating:10
//Movie:           Inception Rating: 9
//Movie:     Ready Gamer One Rating: 7
//Movie:    The Odessa of Pi Rating: 9
//Bye!
