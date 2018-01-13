//  Author:Zheng Jun
//  Date:2018/1/11
//  E-mail:zhengjun1987@outlook.com
#include <printf.h>
#include "hotel.h"

int uh(){
    int nights,code;
    double hotel_rate;
    while ((code = menu()) != QUIT){
        switch (code){
            case 1:hotel_rate = HOTEL1;
                break;
            case 2:hotel_rate = HOTEL2;
                break;
            case 3:hotel_rate = HOTEL3;
                break;
            case 4:hotel_rate = HOTEL4;
                break;
            default:hotel_rate=0.0;
                printf("Oops!");
                break;
        }
        nights=getnights();
        showprices(hotel_rate,nights);
    }
    printf("Bye!");
    return 0;
}
//
//************************************************
//Enter the number of the desired hotel:
//1)FairField Arms 2)Hotel Olympics
//3)Cherrworthy Plaza 4)The Stockton
//5)quit
//************************************************
//3
//How many nights are needed?
//1
//The total cost will be 155.00.
//
//************************************************
//Enter the number of the desired hotel:
//1)FairField Arms 2)Hotel Olympics
//3)Cherrworthy Plaza 4)The Stockton
//5)quit
//************************************************
//4
//How many nights are needed?
//3
//The total cost will be 570.50.
//
//************************************************
//Enter the number of the desired hotel:
//1)FairField Arms 2)Hotel Olympics
//3)Cherrworthy Plaza 4)The Stockton
//5)quit
//************************************************
//5
//Bye!
//Process finished with exit code 0