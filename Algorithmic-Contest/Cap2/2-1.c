#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,sum,m;
	for(a=1;a<10;a++)
		for(b=0;b<10;b++)
		{
			sum = a*1100+b*11;//sum=aabb
			m=floor(sqrt(sum)+0.5);
			/*floor(x)函数返回不超过x的最大整数。
 			假设经过一系列运算之后，sqrt(sum)的值为1，但是由于误差的影响，整数1变成了0.9999999999，
			那么floor(sqrt(m))的结果是0而不是1，因此，这里需要把sqrt(m)加上0.5进行四舍五入处理，再调用floor()函数*/
			if(m*m==sum)	
				printf("%d\n",sum);
		}	
	return 0;
}
