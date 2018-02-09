//  Author:Zheng Jun
//  Date:2018/2/9 15:28
//  E-mail:zhengjun1987@outlook.com

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "diceroll.h"

int md(){
    int dice,roll,sides;
    srand((unsigned int) time(0));
    puts("Enter the number of sides per die,0 to stop:");
    while (scanf("%d",&sides)==1&&sides>0){
        puts("How many dice?");
        scanf("%d",&dice);
        roll = roll_n_dice(dice,sides);
        printf("You have rolled a %d using %d %d-sided dice.\n",roll,dice,sides);
        puts("How many sides? 0 to stop.");
    }
    printf("The rollem() was called %d times.\n",roll_count);
    puts("GOOD FORTUNE TO YOU!");
    return 0;
}
//Enter the number of sides per die,0 to stop:
//6
//How many dice?
//2
//You have rolled a 9 using 2 6-sided dice.
//How many sides? 0 to stop.
//6
//How many dice?
//2
//You have rolled a 3 using 2 6-sided dice.
//How many sides? 0 to stop.
//6
//How many dice?
//2
//You have rolled a 7 using 2 6-sided dice.
//How many sides? 0 to stop.
//0
//The rollem() was called 6 times.
//GOOD FORTUNE TO YOU!
//
//Process finished with exit code 0