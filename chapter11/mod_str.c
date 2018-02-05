//  Author:Zheng Jun
//  Date:2018/2/5
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <ctype.h>

#define LIMIT 80

void ToUpper(char *line);

int PunctCount(char *line);

int mstr(){
    char line[LIMIT];
    puts("Please enter a line");
    gets(line);
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n",PunctCount(line));
    return 0;
}

int PunctCount(char *line) {
    int count = 0;
    while (*line){
        if (ispunct(*line)) {
            count++;
        }
        line++;
    }
    return count;
}

void ToUpper(char *line) {
    while (*line){
        *line = toupper(*line);
        line++;
    }
}
//Please enter a line
//Me?You talkin' to me?Get outta here!
//ME?YOU TALKIN' TO ME?GET OUTTA HERE!
//That line has 4 punctuation characters.
//
//Process finished with exit code 0