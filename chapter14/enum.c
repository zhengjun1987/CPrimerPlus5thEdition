//  Author:Zheng Jun
//  Date:2018/2/28 23:27
//  E-mail:zhengjun1987@outlook.com

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define LEN 30
enum spectrum {red,orange,yellow,green,blue,violet};

const char *colors[] = {"red","orange","yellow","green","blue","violet"};

int enm(){
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;
    puts("Enter a color (empty line to quit):");
    while (gets(choice)!=NULL && choice[0]!='\0'){
        for (color = 0; color <= violet ; color++) {
            if(strcmp(choice,colors[color])==0){
                color_is_found = true;
                break;
            }
        }
        if(color_is_found){
            switch (color){
                case red:
                    puts("Roses are red.");
                    break;
                case orange:
                    puts("Poppies are orange");
                    break;
                case yellow:
                    puts("Sunflowers are yellow.");
                    break;
                case green:
                    puts("Grass is green.");
                    break;
                case blue:
                    puts("Bluebells are blue.");
                    break;
                case violet:
                    puts("Violets are violet.");
                    break;
            }
        } else {
            puts("I don't know about the color.");
        }
        color_is_found = false;
        puts("Next color :");
    }
    puts("Goodbye!");
    return 0;
};
//Enter a color (empty line to quit):
//warning: this program uses gets(), which is unsafe.
//blue
//        Bluebells are blue.
//Next color :
//red
//        Roses are red.
//Next color :
//cyan
//        I don't know about the color.
//Next color :
//violet
//        Violets are violet.
//Next color :
//
//Goodbye!
//
//Process finished with exit code 0