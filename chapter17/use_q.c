/**
 *  Author:Zheng Jun
 *  Date:2018/4/7 16:12
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

#include <stdio.h>
#include "queue.h"

int usq() {
    Queue queue;
    Item temp;
    char ch;

    init(&queue);

    puts("Testing the Queue interface, type a to add a value,\n"
                 "type d to delete a value and q to quit.");
    while ((ch = (char) getchar()) != 'q') {
        if (ch != 'a' && ch != 'd') {
            continue;
        }
        if (ch == 'a'){
            printf("Integer to add:\n");
            scanf("%d",&temp);
            if(!isQueueFull(&queue)){
                printf("Putting %d into queue\n",temp);
                enQueue(&queue, temp);
            } else {
                puts("The queue is full!");
            }
        } else {
            if (isQueueEmpty(&queue)){
                puts("Nothing to delete!");
            } else {
                deQueue(&queue,&temp);
                printf("Removing %d from queue\n",temp);
            }
        }
        printf("%d items in queue\n",queue.size);
        puts("Type a to add, d to delete and q to quit:");
    }
    clearQueue(&queue);
    puts("Bye!");
    return 0;
}
//Testing the Queue interface, type a to add a value,
//type d to delete a value and q to quit.
//a
//Integer to add:
//40
//Putting 40 into queue
//1 items in queue
//        Type a to add, d to delete and q to quit:
//        a
//Integer to add:
//20
//Putting 20 into queue
//2 items in queue
//        Type a to add, d to delete and q to quit:
//        a
//Integer to add:
//55
//Putting 55 into queue
//3 items in queue
//        Type a to add, d to delete and q to quit:
//        d
//Removing 40 from queue
//2 items in queue
//        Type a to add, d to delete and q to quit:
//        d
//Removing 20 from queue
//1 items in queue
//        Type a to add, d to delete and q to quit:
//        d
//Removing 55 from queue
//0 items in queue
//        Type a to add, d to delete and q to quit:
//        d
//Nothing to delete!
//0 items in queue
//        Type a to add, d to delete and q to quit:
//        q
//Bye!
