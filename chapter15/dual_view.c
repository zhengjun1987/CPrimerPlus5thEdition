//  Author:Zheng Jun
//  Date:2018/3/6 23:02
//  E-mail:zhengjun1987@outlook.com

#include <stdio.h>

#define YES 1
#define NO 0

#define DASHED 2
#define SOLID 0
#define DOTTED 1

#define GREEN 1<<1
#define RED 1<<0
#define BLUE 1<<2
#define BLACK 0
#define YELLOW RED|GREEN
#define MAGENTA RED|BLUE
#define CYAN GREEN|BLUE
#define WHITE RED|GREEN|BLUE

struct box_props {
    unsigned int opaque     :1;
    unsigned int fill_color :3;
    unsigned int            :4;
    unsigned int show_border :1;
    unsigned int border_color :3;
    unsigned int border_style :2;
    unsigned int              :2;
};

const char *colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};

#define OPAQUE 0x1
#define FILL_BLUE 1 << 3
#define FILL_GREEN 1 << 2
#define FILL_RED 1 << 1
#define FILL_MASK 0xE
#define BODER 0x100
#define BODER_RED 0x200
#define BODER_GREEN 0x400
#define BODER_BLUE 0x800
#define BODER_MASK 0xE00
#define B_SOLID 0
#define B_DOTTED 0x1000
#define B_DASHED 0x2000
#define B_MASK 0x3000

union Views {
    struct box_props st_view;
    unsigned int ui_view;
};

void show_settings(struct box_props *pProps);

void show_settings1(unsigned int view);

char *itobs(int number, char *bin);

int dvw() {
    union Views box = {{YES, YELLOW, YES, GREEN, DASHED}};
    char bin[8 * sizeof(unsigned int) + 1];
    printf("Original box settings:\n");
    show_settings(&box.st_view);

    printf("\nBox settings in unsigned int view:\n");
    show_settings1(box.ui_view);
    printf("bits are %s\n", itobs(box.ui_view, bin));

    box.ui_view &= ~FILL_MASK;
    box.ui_view |= (FILL_BLUE | FILL_GREEN);
    box.ui_view ^= OPAQUE;
    box.ui_view |= BODER_RED;
    box.ui_view &= ~B_MASK;
    box.ui_view |= B_DOTTED;

    printf("\nModified box settings:\n");
    show_settings(&box.st_view);
    printf("\nBox settings in unsigned int view:\n");
    show_settings1(box.ui_view);
    printf("bits are %s\n", itobs(box.ui_view, bin));
    return 0;
}

void show_settings1(unsigned int view) {
    printf("Box is %s.\n", view & OPAQUE ? "opaque" : "transparent");
    printf("The fill color is %s.\n", colors[(view >> 1) & 07]);
    printf("Border is %s.\n", view & BODER ? "shown" : "not shown");
    printf("The border color is %s.\n", colors[(view >> 9) & 07]);
    printf("The border style is ");
    switch (view & B_MASK) {
        case B_DASHED:
            printf("dashed");
            break;
        case B_DOTTED:
            printf("dotted");
            break;
        case B_SOLID:
            printf("solid");
            break;
    }
    printf(".\n");
}
//Original box settings:
//Box is opaque.
//The fill color is yellow.
//Border shown.
//The border color is green.
//The border style is dashed.
//
//Box settings in unsigned int view:
//Box is opaque.
//The fill color is yellow.
//Border is shown.
//The border color is green.
//The border style is dashed.
//bits are 00000000000000000010010100000111
//
//Modified box settings:
//Box is transparent.
//The fill color is cyan.
//Border shown.
//The border color is yellow.
//The border style is dotted.
//
//Box settings in unsigned int view:
//Box is transparent.
//The fill color is cyan.
//Border is shown.
//The border color is yellow.
//The border style is dotted.
//bits are 00000000000000000001011100001100
//
//Process finished with exit code 0