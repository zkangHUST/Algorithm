typedef int MyType;
struct a
{
    MyType node[100];
    int  s;
    int  e;
};
typedef struct a queue;
MyType pop(queue* a);
void push(queue* a,MyType b);
void initQueue(queue* a);
int isEmpty(queue* a);
