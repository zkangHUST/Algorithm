#include<stdio.h>
long long calc(long long step[],int n);
long long step[101]={0};
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	for(i=1;i<=n;i++)
		printf("%lld ",calc(step,i));

	return 0;
}
long long calc(long long step[],int n)
{
	long long i;
	if(n<=0)
		return 0;
	step[0]=1;
	step[1]=1;
	if(n>=2&&step[n-1]>0&&step[n-2]>0)
	{
		step[n] = step[n-1] + step[n-2];
		return step[n];
	}
	else if(n>=2)
	{
		for(i=2;i<=n;i++)
			step[i] = step[i-1]+step[i-2];
	}
	return step[n];
}
