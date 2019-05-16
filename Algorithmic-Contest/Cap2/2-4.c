#include<stdio.h>
int main()
{
	int cnt =0,value,min,max,sum=0;
	scanf("%d",&value);
	cnt =1;
	sum+=value;
	min=max=value;
	while(scanf("%d",&value)==1)	//scanf()函数返回的是读取的变量个数
	{
		sum += value;
		if(value>max)	max = value;
		if(value<min)	min = value;
		cnt++;		
	}
	printf("%d %d %.2f",min,max,(double)sum/cnt);
	return 0;
}
