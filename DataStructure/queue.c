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
	a->node[a->e]=b;
	a->e++;
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
