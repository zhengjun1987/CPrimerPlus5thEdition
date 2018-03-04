#include <printf.h>
#include <stdlib.h>
#include <string.h>

//  Author:Zheng Jun
//  Date:2018/3/2 20:35
//  E-mail:zhengjun1987@outlook.com
struct house {
    float sqrft;
    int rooms;
    int stories;
    char address[40];
};

struct month {
    char *name;
    char abbr[3];
    int days;
    int month_id;
};

void e14_17_02();

unsigned int get_year_days(int month_id);

void e14_17_05();

void e14_17_06();

typedef struct name {
    char first[20];
    char last[20];
} NAME;

typedef struct bem {
    int limbs;
    NAME title;
    char type[30];
} BEM;

void showNameInfo(BEM *pBem);

typedef struct house HOUSE;
typedef struct month MONTH;
const MONTH year[12] = {
        {"January",   "JAN", 31, 1},
        {"February",  "FEB", 28, 2},
        {"March",     "MAR", 31, 3},
        {"April",     "APR", 30, 4},
        {"May",       "MAY", 31, 5},
        {"June",      "JUN", 30, 6},
        {"July",      "JUL", 31, 7},
        {"August",    "AUG", 31, 8},
        {"September", "SEP", 30, 9},
        {"October",   "OCT", 31, 10},
        {"November",  "NOV", 30, 11},
        {"December",  "DEC", 31, 12}
};

typedef struct lens {
    float foclen;   /* 焦距 */
    float fstop;    /* 孔径 */
    char brand[30]; /* 品牌 */
} LENS;

int main() {
//    e14_17_02();
//    e14_17_05();
//    e14_17_06();
    BEM *pb;
    BEM deb = {
            6,
            {"Bebnazel","Gerklpok"},
            "Arcturan"
    };
    pb = &deb;
    printf("%d\n",deb.limbs);
    printf("%s\n",pb->type);
    printf("%s\n",pb->type+2);
    showNameInfo(pb);
//    6
//    Arcturan
//    cturan
//    Bebnazel Gerklpok is a 6-limbed Arcturan
    return 0;
}

void showNameInfo(BEM *pBem) {
    printf("%s %s is a %d-limbed %s\n",pBem->title.first,pBem->title.last,pBem->limbs,pBem->type);
}

void e14_17_06() {
    LENS lenses[10];
    const char *string = "Remarkatar";
    for (int i = 0; i < 10; ++i) {
        lenses[i].fstop =2.0f;
        lenses[i].foclen = 500.0f;
        strcpy(lenses[i].brand,string);
    }
    for (int j = 0; j < 10; ++j) {
        printf("%s focus length:%.0fmm fstop:f%.2f\n",lenses[j].brand,lenses[j].foclen,lenses[j].fstop);
    }
//    Remarkatar focus length:500mm fstop:f2.00
//    Remarkatar focus length:500mm fstop:f2.00
//    Remarkatar focus length:500mm fstop:f2.00
//    Remarkatar focus length:500mm fstop:f2.00
//    Remarkatar focus length:500mm fstop:f2.00
//    Remarkatar focus length:500mm fstop:f2.00
//    Remarkatar focus length:500mm fstop:f2.00
//    Remarkatar focus length:500mm fstop:f2.00
//    Remarkatar focus length:500mm fstop:f2.00
//    Remarkatar focus length:500mm fstop:f2.00
//
//    Process finished with exit code 0
}

void e14_17_05() {
    for (int monthId = 1; monthId < 13; ++monthId) {
        printf("There are %d days in a year until %s\n", get_year_days(monthId), year[monthId - 1].name);
    }
//    There are 31 days in a year until January
//    There are 59 days in a year until February
//    There are 90 days in a year until March
//    There are 120 days in a year until April
//    There are 151 days in a year until May
//    There are 181 days in a year until June
//    There are 212 days in a year until July
//    There are 243 days in a year until August
//    There are 273 days in a year until September
//    There are 304 days in a year until October
//    There are 334 days in a year until November
//    There are 365 days in a year until December
//
//    Process finished with exit code 0
}

unsigned int get_year_days(int month_id) {
    unsigned int i = 0;
    for (int j = 0; j < month_id; ++j) {
        i += year[j].days;
    }
    return i;
}

void e14_17_02() {
    HOUSE fruzt = {1560.0, 6, 1, "22 Spifo Road"};
    HOUSE *sign;
    sign = &fruzt;
    printf("%d %d\n", fruzt.rooms, sign->stories);
    printf("%s \n", fruzt.address);
    printf("%c %c\n", sign->address[3], fruzt.address[4]);
//    6 1
//    22 Spifo Road
//    S p
//
//    Process finished with exit code 0
}
