#include<stdio.h>
int check(int a,int b,int c);
int main()
{
	int i;
	for(i=123;i<=333;i++)
	{
		if(check(i,2*i,3*i))
			printf("%d %d %d\n",i,2*i,3*i);
	}
	return 0;
}
int check(int a,int b,int c)
{
	int count[11]={0};
	int tmp,i;
	long long sum = a*1e6+b*1e3+c;
	while(sum)
	{
		tmp = sum%10;
		count[tmp]++;
		sum/=10;
	}
	for(i=1;i<10;i++)
	{
		if(count[i]!=1)
			return 0;
	}
	return 1;
}
