#include<stdio.h>
#include<stdlib.h>
struct Lnode
{
	int data;
	struct Lnode* next;
};
typedef struct Lnode node;
node* insert(int value,node* head);
node* Reverse(node* head,int k);
int main()
{
	int n;
	scanf("%d",&n);
	int i=0,value;
	node* head=(node*)malloc(sizeof(node));
	head->next = NULL;
	node* p = head;
	for(i=0;i<n;i++)
	{
		scanf("%d",&value);
		p=insert(value,p);			
	}
	
	Reverse(head,3);
	p = head->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	putchar('\n');
	return 0;
}
node* insert(int value,node* head)
{
	node *s = (node*)malloc(sizeof(node));
	s->data=value;
	s->next = NULL;
	head->next = s;
	return s;
}


node* Reverse(node* head,int k)
{
	int count=1;
	node* new = head->next;
	node* old=new->next;
	node* tmp;
	while(count<k)
	{
		tmp = old->next;
		old->next = new;
		new = old;
		old = tmp;
		count++;
	}
	//old->next = new;
	head->next->next = old;
	head->next = new;
	//head->next = old;
	return new;
}
