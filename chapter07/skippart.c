//  Author:Zheng Jun
//  Date:2018/1/5
//  E-mail:zhengjun1987@outlook.com

#include <printf.h>

#define MIN 0.0f
#define MAX 100.0f

void sp() {
    float score, total = 0.0f, min = MAX, max = MIN;
    int n = 0;
    printf("Enter the score:\n");
    while (scanf("%f", &score) == 1) {
        if (score < MIN || score > MAX) {
            printf("Invalid score! Try again:\n");
            continue;
        }
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;
    }
    if (n > 0)
        printf("Average of %d scores is %.2f, MIN = %.2f, MAX = %.2f", n, total / n, min, max);
    else
        printf("No valid scores!");
}
//Enter the score:
//92.5
//100
//101
//Invalid score! Try again:
//97.5
//82.5
//80
//75
//60
//95
//85
//80
//q
//Average of 10 scores is 84.75, MIN = 60.00, MAX = 100.00
//Process finished with exit code 56