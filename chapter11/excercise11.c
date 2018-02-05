//  Author:Zheng Jun
//  Date:2018/2/5
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <memory.h>

void e11_12_02();

void e11_12_03();

void e11_12_04();

char *pr(char *string);

void e11_12_05();

int main() {
//    e11_12_02();
//    e11_12_03();
//    e11_12_04();
//    e11_12_05();
    return 0;
}

void e11_12_05() {
    char *x = pr("Ho Ho Ho! ");
    puts(x);
//    Ho Ho Ho!  !oH oH oH
//    Ho Ho Ho!
//
//            Process finished with exit code 0
}

char *pr(char *string) {
    char *pc = string;
    while (*pc)
        putchar(*pc++);
    do {
        putchar(*--pc);
    } while (pc - string);
    putchar('\n');
    return pc;
}

void e11_12_04() {
    char goldwyn[40] = "art of it all ";
    char samuel[40] = "I read p";
    char *quote = "the way through";
    strcat(goldwyn, quote);
    strcat(samuel, goldwyn);
    puts(samuel);
//    I read part of it all the way through
//
//    Process finished with exit code 0
}

void e11_12_03() {
    char food[] = "Yummy!";
    char *ptr;
    ptr = food + strlen(food);
    while (--ptr >= food)
        putchar(*ptr);
//    !ymmuY
//    Process finished with exit code 0
}

void e11_12_02() {
    char note[] = "See you at the snack bar.";
    char *ptr;
    ptr = note;
    puts(ptr);
    puts(++ptr);
    note[7] = '\0';
    puts(note);
    puts(++ptr);
//    See you at the snack bar.
//            ee you at the snack bar.
//            See you
//    e you
//
//    Process finished with exit code 0
}