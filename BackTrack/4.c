#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
int i=1,count=0;
float m=1000,a=1000,n=1000,b=1000;
void backdate(int n);
int sum;
int main()
{
	scanf("%d",&sum);
	backdate(1);
	printf("%d",count);
	return 0;
}
void backdate(int i)
{
	float tmp;
	int j;
	if(i>sum)
	{
		if(abs(a-b)<1000)
			count++;
		return ;
	}
	m=a,n=b;		
	a+=b/4;
	b-=b/4;
	backdate(i+1);
	a=m,b=n;
	b+=a/4;
	a-=a/4;
	backdate(i+1);	
	return;
}
