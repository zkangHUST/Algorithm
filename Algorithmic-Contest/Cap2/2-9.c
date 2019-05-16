#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c))
	{
		if(a==0&&b==0&&c==0)
			break;
		else
			printf("%.*lf\n",c,(double)a/b);
		
	}
	return 0;
}
