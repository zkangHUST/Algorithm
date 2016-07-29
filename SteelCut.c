#include<stdio.h>
int max(int a,int b);
int calc(int p[],int n);
int p[11]={0,1,5,8,9,10,17,17,20,24,30};
int r[101]={0};
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		calc(p,i);
		printf("%d ",r[i]);
	}
	return 0;	
}
int max(int a,int b)
{
	return a>b?a:b;
}
int calc(int p[],int n)
{
	int value;
	if(r[n]>0)
		return r[n];
	else if(n==0)
		value = 0;
	else 
	{
		value = -1;
		int i=1;
		for(i=1;i<=n;i++)
			value = max(value,p[i]+calc(p,n-i));
	}
	r[n] = value;
	return value;	
}
