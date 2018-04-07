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
    long turnaways = 0, /* 因队列已满而拒绝的客户数 */
            customers = 0, /* 被加入队列的客户数 */
            wait_time = 0; /* 当前到Sigmund空闲所需时间 */
    long line_wait = 0;/* 队列累计等待时间 */
    long served = 0; /* 获得服务的客户数 */
    long sum_line = 0; /* 累计队列长度 */
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
                enQueue(&queue, temp);
            }
        }

        if (wait_time <= 0 && !isQueueEmpty(&queue)) {
            deQueue(&queue, &temp);
            wait_time = temp.processtime;
            line_wait += cycle - temp.arrival;
            served++;
        }

        if (wait_time > 0)
            wait_time--;
        sum_line += queue.size;
    }

    if (customers > 0) {
        printf("customers accepted:%ld\n", customers);
        printf("  customers served:%ld\n", served);
        printf("         turnaways:%ld\n", turnaways);
        printf("average queue size:%.2f \n", (double) sum_line / cyclelimit);
        printf("average wait time :%.2f minutes\n", (double) line_wait / served);
    } else
        puts("No customers!");
    clearQueue(&queue);
    puts("Bye!");
    return 0;
}

Item customertime(int when) {
    Item result;
    result.arrival = when;
    result.processtime = rand() % 3 + 1;
    return result;
}

bool new_customer(double customer) {
    return rand() * customer / RAND_MAX < 1;
}
//Case Study:Sigmund Lander's Advice Booth
//Enter the number of simulation hours:
//80
//Enter the average number of customer per hour:
//20
//customers accepted:1581
//customers served:1579
//turnaways:0
//average queue size:0.43
//average wait time :1.29 minutes
//        Bye!


//Case Study:Sigmund Lander's Advice Booth
//Enter the number of simulation hours:
//800
//Enter the average number of customer per hour:
//20
//customers accepted:16093
//customers served:16092
//turnaways:0
//average queue size:0.45
//average wait time :1.35 minutes
//        Bye!

//Case Study:Sigmund Lander's Advice Booth
//Enter the number of simulation hours:
//1
//Enter the average number of customer per hour:
//20
//customers accepted:27
//customers served:27
//turnaways:0
//average queue size:0.95
//average wait time :2.11 minutes
//        Bye!

//Case Study:Sigmund Lander's Advice Booth
//Enter the number of simulation hours:
//1
//Enter the average number of customer per hour:
//20
//customers accepted:17
//customers served:17
//turnaways:0
//average queue size:0.20
//average wait time :0.71 minutes
//        Bye!

//Case Study:Sigmund Lander's Advice Booth
//Enter the number of simulation hours:
//80
//Enter the average number of customer per hour:
//25
//customers accepted:2343
//customers served:2339
//turnaways:82
//average queue size:4.64
//average wait time :9.52 minutes
//        Bye!

//Case Study:Sigmund Lander's Advice Booth
//Enter the number of simulation hours:
//80
//Enter the average number of customer per hour:
//30
//customers accepted:2276
//customers served:2268
//turnaways:40
//average queue size:3.56
//average wait time :7.51 minutes
//        Bye!
