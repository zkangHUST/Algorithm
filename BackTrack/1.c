#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int a[MAX],int count = 0;
void backdate(int k,int n);
int check(int k);
int count = 0;
int main()
{
	int n;
	scanf("%d",&n);
	backdate(1,n);
	printf("%d\n",count);
	return 0;
}
void backdate(int k,int n)
{
	int i=0,j=0;
		if(k>n)
		{
			for(i=1;i<=n;i++)
				printf("%d",a[i]);
			putchar('\n');
			count++;
			return ;
		}
		for(j=1;j<=n;j++)
		{
			a[k]=j;
			if(check(k)==1)
			{
				backdate(k+1,n);
			}
		}
	return ;
}
int check(int k)
{
	int i=1;
	for(i=1;i<k;i++)
	{
		if(a[i]==a[k]||abs(a[i]-a[k])==k-i)
		{
			return 0;
		}
	}
	return 1;
}
