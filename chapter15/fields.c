//  Author:Zheng Jun
//  Date:2018/3/6 21:56
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

const char *pString[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};

extern void show_settings(struct box_props *pProps);

int flds() {
    struct box_props box = {
            YES, YELLOW, YES, GREEN, DASHED
    };
    puts("Original box settings:");
    show_settings(&box);

    box.opaque=NO;
    box.fill_color=WHITE;
    box.border_color=MAGENTA;
    box.border_style=SOLID;
    printf("\nModified box settings:\n");
    show_settings(&box);
    return 0;
}

void show_settings(struct box_props *pProps) {
    printf("Box is %s.\n", pProps->opaque ? "opaque" : "transparent");
    printf("The fill color is %s.\n", pString[pProps->fill_color]);
    printf("Border %s.\n", pProps->show_border ? "shown" : "not shown");
    printf("The border color is %s.\n", pString[pProps->border_color]);
    printf("The border style is %s.\n",
           pProps->border_style == SOLID ? "solid"
                                         : (pProps->border_style == DOTTED) ? "dotted"
                                                                            : (pProps->border_style ==
                                                                               DASHED)
                                                                              ? "dashed"
                                                                              : "unknown");
}
//Original box settings:
//        Box is opaque.
//The fill color is yellow.
//Border shown.
//The border color is green.
//The border style is dashed.
//
//Modified box settings:
//        Box is transparent.
//The fill color is white.
//Border shown.
//The border color is magenta.
//The border style is solid.
//
//Process finished with exit code 0