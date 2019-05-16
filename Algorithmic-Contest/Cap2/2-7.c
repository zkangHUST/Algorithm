#include<stdio.h>
void PrintChar(char c,int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		PrintChar(' ',i);
		PrintChar('#',2*(n-i)-1);
		putchar('\n');		
	}
	return 0;
}
void PrintChar(char c ,int n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%c",c);
}
