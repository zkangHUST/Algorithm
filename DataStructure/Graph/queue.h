#ifndef QUEUE_H
#define QUEUE_H
#include<stdio.h>
#define MAX 100
typedef int MyType;
struct a
{
    MyType node[MAX];
    int  s;
    int  e;
};
typedef struct a queue;
MyType pop(queue* a);
void push(queue* a,MyType b);
void initQueue(queue* a);
int isEmpty(queue* a);
#endif
