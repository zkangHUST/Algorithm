#include<stdio.h>
int main()
{
	int n=1;
	int a,b,c;
	int i;
	while(scanf("%d%d%d",&a,&b,&c)==3)
	{
		for(i=10;i<101;i++)
		{
			if(i%3==a&&i%5==b&&i%7==c)
			{
				printf("Case %d: %d\n",n,i);
				break;
			}	
		}
		if(i==101)
			printf("Case %d: No answer\n",n);
		n++;
	}
	return 0;
}
