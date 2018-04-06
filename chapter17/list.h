/**
 *  Author:Zheng Jun
 *  Date:2018/4/6 19:22
 *  E-mail:zhengjun1987@outlook.com
 *  Desc:
 */

#include <stdbool.h>

#ifndef CPRIMERPLUS5THEDITION_LIST_H
#define CPRIMERPLUS5THEDITION_LIST_H

#define TSIZE 45
typedef struct film {
    char title[TSIZE];
    unsigned int rating;
} Item;

typedef struct node {
    Item item;
    struct node * next;
} Node;

typedef Node * List;

void initializeList(List *list);

bool isEmpty(const List *list);

bool isFull(const List *list);

unsigned int size(const List *list);

bool addItem(List *list,Item *item);

void traverse(const List *list, void (*pFun)(Item item));

void clear(List *list);

#endif //CPRIMERPLUS5THEDITION_LIST_H
