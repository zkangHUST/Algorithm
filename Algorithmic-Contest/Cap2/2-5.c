#include<stdio.h>
int main()
{
	int i;
	int a,b,c;
	for(i=100;i<1000;i++)
	{
		a=i/100;	//提取百位
		b=i/10%10;	//提取十位
		c=i%10;		//提取个位
		if(i==a*a*a+b*b*b+c*c*c)
			printf("%d\n",i);
	}
	return 0;
}
