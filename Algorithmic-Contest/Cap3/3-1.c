#include<stdio.h>
#include<string.h>
#define MAXN 1000
int flag[MAXN]={0};
int main()
{
	int n,k,i,j;
	scanf("%d%d",&n,&k);
	//memset(a,0,sizeof(a));
	for(i=2;i<=k;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j%i==0)
			{
					flag[j]=!flag[j];
			}
		}	
	}
	for(i=1;i<=n;i++)
	{
		if(flag[i]==0)
			printf("%d ",i);
	}
	return 0;
}
