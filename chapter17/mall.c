/**
 *  Author:Zheng Jun
 *  Date:2018/4/7 17:37
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

#include <stdlib.h>
#include <sys/time.h>
#include <stdio.h>
#include "queue.h"

#define MIN_PER_HOUR 60


bool new_customer(double customer);

Item customertime(int when);

int main() {
    Queue queue;
    long turnaways, customers;
    Item temp;

    init(&queue);
    srand((unsigned int) time(0));
    puts("Case Study:Sigmund Lander's Advice Booth");
    puts("Enter the number of simulation hours:");
    int hours = 0;
    scanf("%d", &hours);
    int cyclelimit = MIN_PER_HOUR * hours;
    puts("Enter the average number of customer per hour:");
    int perhour = 0;
    scanf("%d", &perhour);
    double min_per_customer = MIN_PER_HOUR / perhour;
    for (int cycle = 0; cycle < cyclelimit; ++cycle) {
        if (new_customer(min_per_customer)) {
            if (isQueueFull(&queue))
                turnaways++;
            else {
                customers++;
                temp = customertime(cycle);
                enQueue(&queue,temp);
            }
        }
    }
    return 0;
}

Item customertime(int when) {
    Item result;
//    result.arrive = when;
//    result.processtime = rand() % 3 + 1;
    return result;
}

bool new_customer(double customer) {
    return rand() * customer / RAND_MAX < 1;
}
