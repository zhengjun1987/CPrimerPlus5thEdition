//  Author:Zheng Jun
//  Date:2018/3/1 23:55
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ToUpper(char *);

char showmenu();

void ToLower(char *);

void Transpose(char *);

void Dummy(char *);

void show(void (*pFunction)(char *), char *copy);

void eatline();

typedef void (*V_PF_CHARP)(char *);

int fpt() {
    char line[81], copy[81], choice;
    V_PF_CHARP pfun;
    puts("Enter a string (empty line to quit):");
    while ((gets(line) != NULL) && line[0] != '\0') {
        while ((choice = showmenu()) != 'n') {
            switch (choice) {
                case 'u':
                    pfun = ToUpper;
                    break;
                case 'l':
                    pfun = ToLower;
                    break;
                case 't':
                    pfun = Transpose;
                    break;
                case 'o':
                    pfun = Dummy;
                    break;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
        puts("Enter a string (empty line to quit):");
    }
    return 0;
}

void show(void (*pFunction)(char *), char *copy) {
    (*pFunction)(copy);
    puts(copy);
}

char showmenu() {
    char result = 0;
    puts("Enter menu choice:");
    puts("u) uppercase        l) lowercase");
    puts("t) transposed case  o)original case");
    puts("n) next string");
    result = (char) tolower(getchar());
    eatline();
    while (strchr("ulton", result) == NULL) {
        puts("Please enter a 'u','l','t','o' or 'n'!");
        result = (char) tolower(getchar());
        eatline();
    }
    return result;
}

void eatline() {
    while (getchar() != '\n')
        continue;
}

void ToUpper(char *string){
    while (*string){
        *string= (char) toupper(*string);
        string++;
    }
}

void ToLower(char *string){
    while (*string){
        *string= (char) tolower(*string);
        string++;
    }
}

void Dummy(char *string){

}

void Transpose(char *string){
    while (*string){
        if(islower(*string))
            *string= (char) toupper(*string);
        else
            *string= (char) tolower(*string);
        string++;
    }
}
//Enter a string (empty line to quit):
//warning: this program uses gets(), which is unsafe.
//Does C make you feel happy?
//Enter menu choice:
//u) uppercase        l) lowercase
//t) transposed case  o)original case
//n) next string
//u
//DOES C MAKE YOU FEEL HAPPY?
//Enter menu choice:
//u) uppercase        l) lowercase
//t) transposed case  o)original case
//n) next string
//l
//does c make you feel happy?
//Enter menu choice:
//u) uppercase        l) lowercase
//t) transposed case  o)original case
//n) next string
//t
//dOES c MAKE YOU FEEL HAPPY?
//Enter menu choice:
//u) uppercase        l) lowercase
//t) transposed case  o)original case
//n) next string
//o
//Does C make you feel happy?
//Enter menu choice:
//u) uppercase        l) lowercase
//t) transposed case  o)original case
//n) next string
//n
//Enter a string (empty line to quit):
//
//
//Process finished with exit code 0