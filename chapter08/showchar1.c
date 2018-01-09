//  Author:Zheng Jun
//  Date:2018/1/9
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void display(char ch, int rows, int cols);

void sc(){
    char ch;
    int rows,cols;
    printf("Enter a char and two integers:\n");
    while ((ch = getchar())!='\n'){
        scanf("%d %d",&rows,&cols);
        display(ch,rows,cols);
        while (getchar()!='\n')
            continue;
        printf("Enter another character and two other integers (enter newline to quit):\n");
    }
    printf("Bye!");
}

void display(char ch, int rows, int cols) {
    int row;
    for (row = 1; row <= rows ; row++) {
        for (int i = 0; i < cols; ++i) {
            putchar(ch);
        }
        putchar('\n');
    }
}
//Enter a char and two integers:
//c 2 3
//ccc
//ccc
//Enter another character and two other integers (enter newline to quit):
//$ 5 6
//$$$$$$
//$$$$$$
//$$$$$$
//$$$$$$
//$$$$$$
//Enter another character and two other integers (enter newline to quit):
//* 9 9
//*********
//*********
//*********
//*********
//*********
//*********
//*********
//*********
//*********
//Enter another character and two other integers (enter newline to quit):
//* 19 19
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//*******************
//Enter another character and two other integers (enter newline to quit):
//
//Bye!
//Process finished with exit code 4



//Enter a char and two integers:
//c 2 3
//ccc
//ccc
//Enter another character and two other integers (enter newline to quit):Bye!
//Process finished with exit code 4