/**
 *  Author:Zheng Jun
 *  Date:2018/4/7 15:25
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "queue.h"


void init(Queue *queue) {
    queue->rear = queue->front = NULL;
    queue->size = 0;
}

bool isQueueFull(const Queue *queue) {
    return queue->size == MAXQUEUE;
}

bool isQueueEmpty(const Queue *queue) {
    return queue->size == 0;
}

bool enQueue(Queue *queue, Item item) {
    if (isQueueFull(queue))
        return false;
    Node *node = (Node *) malloc(sizeof(Node));
    if (node == NULL) {
        fprintf(stderr, "Unable to allocate memory!");
        exit(1);
    }
    node->item = item;
    node->next = NULL;
    if (isQueueEmpty(queue)) {
        queue->front = node;
    } else {
        queue->rear->next = node;
    }
    queue->rear = node;
    queue->size++;
    return true;
}

bool deQueue(Queue *queue, Item *item) {
    if (isQueueEmpty(queue))
        return false;
    Node *node = queue->front;
    *item = queue->front->item;
    queue->front = queue->front->next;
    free(node);
    queue->size--;
}

void clearQueue(Queue *queue) {
    Item item;
    while (!isQueueEmpty(queue)) {
        deQueue(queue, &item);
    }
}