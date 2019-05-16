//插入排序算法
#include<stdio.h>
#define MAX 100
int a[MAX];
void insertion(int a[],int len);
int main()
{	
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertion(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
void insertion(int a[],int len)
{
	int i,j,key;
	for(j=1;j<len;j++)
	{
		key = a[j];
		i=j-1;
		while(i>=0&&a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
}
