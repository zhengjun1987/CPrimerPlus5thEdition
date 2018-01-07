//  Author:Zheng Jun
//  Date:2018/1/6
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void am(){
    char ch;
    printf("Give me a letter of the alphabet,and I'll give an animal name"
                   "\n beginning with that letter.\n");
    printf("Please type in a letter, type # to quit:\n");
    while ((ch = getchar()) != '#'){
        if (islower(ch)){
            switch (ch) {
                case 'a':
                    printf("Argali,a wild sheep of Asia\n");
                    break;
                case 'b':
                    printf("Babirusa,a wild pig of Malay\n");
                    break;
                case 'c':
                    printf("Coati,racoonlike mammal\n");
                    break;
                case 'd':
                    printf("Desman,aquatic,molelike critter\n");
                    break;
                case 'e':
                    printf("Echidna,the spiny anteater\n");
                    break;
                case 'f':
                    printf("Fisher,brownish marten\n");
                    break;
                default:
                    printf("That's a stumper!\n");
            }
        } else {
            printf("I recognize only letters in lower case.\n");
        }
        while (getchar() != '\n')
            continue;
        printf("Please type in a letter, type # to quit:\n");
    }
}
//Give me a letter of the alphabet,and I'll give an animal name
//beginning with that letter.
//Please type in a letter, type # to quit:
//a
//Argali,a wild sheep of Asia
//Please type in a letter, type # to quit:
//dab
//Desman,aquatic,molelike critter
//Please type in a letter, type # to quit:
//r
//That's a stumper!
//Please type in a letter, type # to quit:
//Q
//I recognize only letters in lower case.
//Please type in a letter, type # to quit:
//w
//That's a stumper!
//Please type in a letter, type # to quit:
//#
//
//Process finished with exit code 35