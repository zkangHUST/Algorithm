#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
	int n;
	scanf("%d",&n);
	if(is_prime(n))
		printf("%d is a prime.\n",n);
	else
		printf("%d is not a prime.\n",n);
	return 0;	
}
int is_prime(int n)
{
	if(n<=1)
		return 0;
	int m = floor(sqrt(n)+0.5);
	int i = 2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
