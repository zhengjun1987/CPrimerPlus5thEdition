/**
 *  Author:Zheng Jun
 *  Date:2018/4/7 14:57
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

#include <stdbool.h>

#ifndef CPRIMERPLUS5THEDITION_QUEUE_H
#define CPRIMERPLUS5THEDITION_QUEUE_H
#define MAXQUEUE 10
typedef int Item;
typedef struct node {
    Item item;
    struct node *next;
} Node;
typedef struct queue {
    Node *front;
    Node *rear;
    int size;
} Queue ;

void init(Queue *queue);

bool isQueueFull(const Queue *queue);

bool isQueueEmpty(const Queue *queue);

bool enQueue(Queue *queue, Item item);

bool deQueue(Queue *queue,Item *item);

void clearQueue(Queue *queue);

#endif //CPRIMERPLUS5THEDITION_QUEUE_H
