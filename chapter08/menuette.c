//  Author:Zheng Jun
//  Date:2018/1/10
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

void cout();

int get_choice();

int get_first();

int get_int2();

int mn() {
    int choice;
    while ((choice = get_choice()) != 'q') {
        switch (choice) {
            case 'a':
                printf("Buy low,sell high!\n");
                break;
            case 'b':
                putchar('\a');
                break;
            case 'c':
                cout();
                break;
            default:
                printf("Program error!\n");
                break;
        }
    }
    printf("Bye!");
    return 0;
}

int get_choice() {
    printf("Enter the letter of your choice:\n");
    printf("a.advice              b.bell\n");
    printf("c.count               q.quit\n");
    int ch = get_first();
    while ((ch < 'a' || ch > 'c') && ch != 'q') {
        printf("Please respond with a,b,c or q.\n");
        ch = get_first();
    }
    return ch;
}

int get_first() {
    int ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}

void cout() {
    printf("Count how far？Enter an integer:\n");
    int n = get_int2();
    for (int i = 0; i < n; ++i) {
        printf("%d\n", i + 1);
    }
    while (getchar() != '\n')
        continue;
}

int get_int2() {
    int input;
    char ch;
    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch);
        }
        printf(" is not a integer.Please enter an integer such as 25,-178 or 3;\n");
    }
    return input;
}
//  Enter the letter of your choice:
//  a.advice      b.bell
//  c.count       q.quit
//  a
//  Buy low,sell high!
//  Enter the letter of your choice:
//  a.advice      b.bell
//  c.count       q.quit
//  count
//  Count how far？Enter an integer:
//  5
//  1
//  2
//  3
//  4
//  5
//  Enter the letter of your choice:
//  a.advice      b.bell
//  c.count       q.quit
//  d
//  Please respond with a,b,c or q.
//  q
//  Bye!
//  Process finished with exit code 0