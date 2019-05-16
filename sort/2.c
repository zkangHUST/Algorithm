//归并排序
#include<stdio.h>
#define MAX 1000
void merge(int num[],int m,int n,int r);
void MergeSort(int num[],int p,int r);
int a[MAX]={0};
int b[MAX]={0};
int num[MAX];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	MergeSort(num,0,n-1);
	//merge(num,0,0,1);
	for(i=0;i<n;i++)
		printf("%d ",num[i]);
	return 0;
}
void merge(int num[],int m,int n,int r)
{
	
	int i=0,j=0,l1 = n-m+1,l2=r-n;
	for(i=0;i<l1;i++)
	{
		a[i] = num[m+i];
	}
	a[i]=65535;
	for(i=0;i<l2;i++)
	{
		b[i] = num[n+1+i];
	}
	b[i]=65535;
	i=0,j=0;
	int k=m;
	for(k=m;k<=r;k++)
	{
		if(a[i]<=b[j])
		{
			num[k] = a[i];
			i++;
		}
		else
		{
			num[k] = b[j];
			j++;
		}
	}
}
void MergeSort(int num[],int p,int r)
{
	int q = (p+r)/2;
	if(p<r)
	{
		MergeSort(num,p,q);
		MergeSort(num,q+1,r);
	}
	merge(num,p,q,r);
}	
