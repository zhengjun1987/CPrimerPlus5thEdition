/**
 *  Author:Zheng Jun
 *  Date:2018/4/6 19:38
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

#include <stddef.h>
#include <stdlib.h>
#include "list.h"


void initializeList(List *list) {
    *list = NULL;
}

bool isEmpty(const List *list) {
    return *list == NULL;
}

bool isFull(const List *list) {
    Node *pt;
    pt = malloc(sizeof(Node));
    bool b = pt == NULL;
    free(pt);
    return b;
}

unsigned int size(const List *list) {
    unsigned int count = 0;
    Node *index = *list;
    while (index != NULL) {
        count++;
        index = index->next;
    }
    return count;
}

bool addItem(List *list, Item *item) {
    Node *node = (Node *) malloc(sizeof(Node));
    if (node == NULL)
        return false;
    node->item = *item;
    node->next = NULL;

    Node *head = *list;
    if (head == NULL)
        *list = node;
    else {
        while (head->next != NULL) {
            head = head->next;
        }
        head->next = node;
    }
    return true;
}

void traverse(const List *list, void (*pFun)(Item item)) {
    Node *head = *list;
    while (head != NULL) {
        (*pFun)(head->item);
        head = head->next;
    }
}

void clear(List *list) {
    Node *pSave;
    while (*list != NULL) {
        pSave = (*list)->next;
        free(*list);
        *list = pSave;
    }
}