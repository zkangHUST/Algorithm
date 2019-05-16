#include "queue.h"
MyType pop(queue* a)
{
	MyType tmp ;
	tmp = a->node[a->s];
	a->s++;
	return tmp;
}
void push(queue* a,MyType b)
{
	if(a->e==MAX)
		fprintf(stderr,"ERROR:the queue is full,can not push again!\n");
	else
	{
		a->node[a->e]=b;
		a->e++;
	}
}
void initQueue(queue* a)
{
	a->s = 0;
	a->e = 0;
}
int isEmpty(queue* a)
{
	if(a->e == a->s)
		return 1;
	return 0;
}
