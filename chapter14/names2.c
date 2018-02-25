//  Author:Zheng Jun
//  Date:2018/2/25 22:27
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>
#include <string.h>

struct namect {
    char fname[20];
    char lname[20];
    int letters;
};

struct namect getinfo2();

struct namect makeinfo2(struct namect namect);

void showinfo2(struct namect namect);

int nct2() {
    struct namect person;
    person = getinfo2();
    person = makeinfo2(person);
    showinfo2(person);
    return 0;
}
//Please enter your first name:
//Mickael
//Please enter your last name:
//Jackson
//Mickael Jackson,your name contains 14 letters.
//Process finished with exit code 0

void showinfo2(struct namect namect) {
    printf("%s %s,your name contains %d letters.",namect.fname,namect.lname,namect.letters);
}

struct namect makeinfo2(struct namect namect) {
    struct namect result;
    result = namect;
    result.letters = (int) (strlen(namect.fname) + strlen(namect.lname));
    return result;
}

struct namect getinfo2() {
    struct namect result;
    puts("Please enter your first name:");
    gets(result.fname);
    puts("Please enter your last name:");
    gets(result.lname);
    return result;
}