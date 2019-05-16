//快速排序
#include<stdio.h>
#define MAX 1000
void QuickSort(int a[],int m,int n);
int partition(int a[],int p,int r);
int main()
{
	int num[MAX];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	QuickSort(num,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",num[i]);
	return 0;
}
int partition(int a[],int p,int r)
{
	int t = a[r];
	int temp;
	int i = p-1,j=p;
	for(j=p;j<r;j++)
	{
		if(a[j]<=t)
		{
			i = i+1;
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;	
		}
	}
	temp = a[r];
	a[r]=a[i+1];
	a[i+1] = temp;
	return i+1;	
}
void QuickSort(int a[],int m,int n)
{
	int t;
	if(m<n)
	{
		t=partition(a,m,n);
		QuickSort(a,m,t-1);
		QuickSort(a,t+1,n);
	}
}
