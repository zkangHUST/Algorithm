#include<stdio.h>
#define MAX 100
int res[MAX];
int main()
{
	int i=0, n,sum=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&res[i]);
	i=0;
	while(i<n)
	{
		sum += res[i];
		if(sum>max)
		{
			max = sum;
		}
		else if(sum < 0)
		{
			sum =0;
		}
		i++;
	}
	printf("%d",max);
	return 0;
}
