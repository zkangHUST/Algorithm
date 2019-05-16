#include<stdio.h>
int main()
{
	int n,m,i;
	double sum,term;
	int cnt=1;
	while(scanf("%d%d",&n,&m))
	{
		sum =0;
		if(m==0&&n==0)
			break;
		else
		{
			for(i=n;i<=m;i++)
			{
				term = 1.0/i/i;
				sum += term ;
			}
		}
		printf("Case %d: %.5lf\n",cnt,sum);
		cnt++;	
	}
	
	return 0;
}
