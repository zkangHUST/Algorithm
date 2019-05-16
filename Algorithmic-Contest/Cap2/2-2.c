#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	long long m = n;//防止乘法溢出
	while(m>1)
	{
		if(m%2==1)	
			m=3*m+1;
		else 
			m/=2;
		count++;
	}
	printf("%d\n",count);
	return 0;	
}
