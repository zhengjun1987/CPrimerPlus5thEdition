//  Author:Zheng Jun
//  Date:2018/1/9
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>
#include <stdbool.h>

int get_int();

bool bad_limits(int start, int stop, const int min, const int max);

double squares_sum(int start, int stop);

void ck() {
    const int MIN = -1000;
    const int MAX = 1000;
    int start, stop;
    double answer;
    printf("This programme computes the sums of the squares of integers in a range.\n");
    printf("Enter the limits (enter 0 for both limits to exit):\n");
    printf("lower limit:\n");
    start = get_int();
    printf("upper limit:\n");
    stop = get_int();
    while (start != 0 || stop != 0) {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please retry.");
        else {
            answer = squares_sum(start, stop);
            printf("The sum of the squares from %d to %d is %g.\n", start, stop, answer);
        }
        printf("Enter the limits (enter 0 for both limits to exit):\n");
        printf("lower limit:\n");
        start = get_int();
        printf("upper limit:\n");
        stop = get_int();
    }
    printf("Bye!");
}

double squares_sum(int start, int stop) {
    double sum = 0;
    for (int i = start; i <= stop; ++i) {
        sum += i * i;
    }
    return sum;
}

bool bad_limits(int start, int stop, const int min, const int max) {
    bool not_good = false;
    if (start > stop) {
        printf("%d isn't smaller than %d.\n",start,stop);
        return true;
    }
    if (start < min || stop < min) {
        printf("Values must be greater than %d.\n", min);
        return true;
    }
    if (start > max || stop > max) {
        printf("Values must be less than %d.\n", max);
        return true;
    }

    return not_good;
}

int get_int() {
    int input;
    char ch;
    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n'){
            putchar(ch);
        }
        printf(" is not a integer.Please enter an integer such as 25,-178 or 3;\n");
    }
    return input;
}
//This programme computes the sums of the squares of integers in a range.
//Enter the limits (enter 0 for both limits to exit):
//lower limit:
//12
//upper limit:
//123
//The sum of the squares from 12 to 123 is 627368.
//Enter the limits (enter 0 for both limits to exit):
//lower limit:
//low
//low is not a integer.Please enter an integer such as 25,-178 or 3;
//14
//upper limit:
//19
//The sum of the squares from 14 to 19 is 1651.
//Enter the limits (enter 0 for both limits to exit):
//lower limit:
//0
//upper limit:
//-
//- is not a integer.Please enter an integer such as 25,-178 or 3;
//0
//Bye!
//Process finished with exit code 4