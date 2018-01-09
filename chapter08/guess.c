//  Author:Zheng Jun
//  Date:2018/1/8
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void gs(){
    printf("春花秋月何时了，往事知多少，小楼昨夜又东风，故国不堪回首月明中。雕栏玉砌应犹在，只是朱颜改，问君能有几多愁，恰似一江春水向东流。\n");
    int guess = 1;
    printf("Pick an integer from 1 to 100. I will guess it.\n");
    printf("Response with a y if my guess is right and with an n if it is wrong.\n");
    printf("Uh...is your number %d?\n",guess);
    while (getchar() != 'y'){
        printf("Well,then,is it %d?\n",++guess);
        while (getchar()!='\n')
            continue;
    }
    printf("I know I could do it!\n");
}
//2018-01-09 21:04:43 版本
//春花秋月何时了，往事知多少，小楼昨夜又东风，故国不堪回首月明中。雕栏玉砌应犹在，只是朱颜改，问君能有几多愁，恰似一江春水向东流。
//Pick an integer from 1 to 100. I will guess it.
//Response with a y if my guess is right and with an n if it is wrong.
//Uh...is your number 1?
//n
//Well,then,is it 2?
//n
//Well,then,is it 3?
//n
//Well,then,is it 4?
//n
//Well,then,is it 5?
//n
//Well,then,is it 6?
//n
//Well,then,is it 7?
//n
//Well,then,is it 8?
//n
//Well,then,is it 9?
//y
//I know I could do it!
//
//Process finished with exit code 22


//2018-01-09 21:01:53 版本
//
//春花秋月何时了，往事知多少，小楼昨夜又东风，故国不堪回首月明中。雕栏玉砌应犹在，只是朱颜改，问君能有几多愁，恰似一江春水向东流。
//Pick an integer from 1 to 100. I will guess it.
//Response with a y if my guess is right and with an n if it is wrong.
//Uh...is your number 1?
//n
//Well,then,is it 2?
//Well,then,is it 3?
//n
//Well,then,is it 4?
//Well,then,is it 5?
//n
//Well,then,is it 6?
//Well,then,is it 7?
//k
//Well,then,is it 8?
//Well,then,is it 9?
//y
//I know I could do it!
//
//Process finished with exit code 22