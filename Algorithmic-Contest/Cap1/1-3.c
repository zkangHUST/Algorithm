#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);//假设输入的两个数为m,n，此时a=m,b=n
	a=a+b;//a=m+n
	b=a-b;//b=m
	a=a-b;//a=n
	printf("%d %d\n",a,b);
	return 0;
}
//这种方法实际上很少使用，因为适用范围很窄，只有定义了加减法的数据类型才能使用。
