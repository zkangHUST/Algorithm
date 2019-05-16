#include<iostream>
void link(int l,int r);
using namespace std;
const int MAX = 100;
int left[MAX]={0},right[MAX]={0};
int main()
{
	int n,m,op,a,b;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		left[i] = i-1;
		right[i] = (i+1)%(n+1); 
	}
	left[0] = n;
	right[0] = 1;
	while(m--)
	{
		scanf("%d",&op);
		if(op==4)
			;
		else
		{
			scanf("%d%d",&a,&b);
			if(op==1)
			{
				link(left[a],right[a]);
				link(left[b],a);
				link(a,b);
			}
			else if(op==2)
			{
				link(left[a],right[a]);
				link(a,right[b]);
				link(left[b],a);
			}
			else if(op==3)
			{
				
			}
		}
		
	}
	return 0;
}
void link(int l,int r)
{
	right[l] = r;
	left[r] = l;
}
