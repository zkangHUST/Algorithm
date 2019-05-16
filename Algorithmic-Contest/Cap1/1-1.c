#include<stdio.h>
int main()
{
	printf("%d\n",8.0/5.0);//输出结果为：-1717986918，涉及到浮点数在内存中的表示
	printf("%d\n",1.0);//输出为0，原因同上
	printf("%.1f\n",8/5);//输出为1.6
	return 0;
}
