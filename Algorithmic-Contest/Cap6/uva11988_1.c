#include<stdio.h>
#include<stdlib.h>
typedef struct ListNode
{
	char value;
	struct ListNode* next;
}node;
int main()
{
	node r;
	node *p,*cur,*end;
	r.value = 0,r.next = NULL;
	int c;
	cur = &r;
	end = &r;
	while(1)
	{
		r.value = 0,r.next = NULL;
		cur = &r,end = &r;
		while((c=getchar())!='\n')
		{
			if(c==EOF)
				return 0;
			p = (node*)malloc(sizeof(node));
			p->value=c;
			p->next = NULL;
			if(c!='['&&c!=']')
			{
				p->next=cur->next;
				cur->next = p;
				cur = p;
				if(cur->next == NULL)
					end = cur; 
			}
			else if(c=='[')
			{
				p->next=r.next;
				r.next=p;
				cur = p;	
				if(cur->next == NULL)
					end = cur;
			}
			else if(c==']')
			{
				end->next = p;	
				end = p;
				cur = end;		
			}


		}
		p=r.next;
		while(p!=NULL)
		{
			if(p->value!='['&&p->value!=']')
				putchar(p->value);
			p=p->next;
		}
		putchar('\n');
	}
	return 0;
}
