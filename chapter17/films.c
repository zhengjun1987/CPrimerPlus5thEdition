#include <stdio.h>

#define TSIZE 45
#define FMAX 5
/**
 *  Author:Zheng Jun
 *  Date:2018/4/6 15:53
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

struct film {
    char title[TSIZE];
    int rating;
};

typedef struct film FILM;

int flm() {
    FILM movies[FMAX];
    puts("Enter first movie title:");
    int i = 0;
    while (i < FMAX && gets(movies[i].title) != NULL && movies[i].title[0] != '\0') {
        puts("Enter your rating <0-10>:");
        scanf("%d", &movies[i++].rating);
        while (getchar() != '\n')
            continue;
        puts("Enter the next movie(empty line to stop):");
    }
    if (i == 0)
        puts("No data entered!");
    else {
        puts("Here is the movie list:");
        for (int j = 0; j < i; ++j) {
            printf("Movie : %s Rating : %d\n", movies[j].title, movies[j].rating);
        }
    }
    puts("Bye!");
    return 0;
}
//Enter first movie title:
//warning: this program uses gets(), which is unsafe.
//Internal Affairs
//Enter your rating <0-10>:
//10
//Enter the next movie(empty line to stop):
//Ready Player One
//        Enter your rating <0-10>:
//7
//Enter the next movie(empty line to stop):
//Inception
//        Enter your rating <0-10>:
//9
//Enter the next movie(empty line to stop):
//The Odessy of Pi
//Enter your rating <0-10>:
//9
//Enter the next movie(empty line to stop):
//
//Here is the movie list:
//        Movie : Internal Affairs Rating : 10
//Movie : Ready Player One Rating : 7
//Movie : Inception Rating : 9
//Movie : The Odessy of Pi Rating : 9
//Bye!
//
//Process finished with exit code 0
