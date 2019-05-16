#include<stdio.h>
#define MAX 100
void back(int i,int n,int m);
int sum = 0;
int a[MAX];//存储集合元素
int b[MAX]={0};//存储集合元素状态
int k=1;//表示第k个元素，从1开始数
int main()
{
    int i=0, n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    back(1,n,10);//从第一个元素开始，确定第一个元素的状态
    return 0;
}
void back(int i,int n,int m)
{
    int j;
    if(i>n)//i>n表示所有元素的状态都已经确定，但是其和不为m
    {
        return ;
    }
        b[i]=1;//取第i个元素
	sum +=a[i];
	if(sum == m)
	{
		printf("{");
		for(j=1;j<=i;j++)
		{
			if(b[j])
				printf("%d,",a[j]);
		}	
		printf("}\n");
	}
	else if(sum<m)
    	{
	 back(i+1,n,10);//处理下一个元素
     	}
	b[i]=0;//不取第i个元素
	sum-=a[i];
        back(i+1,n,10);//处理下一个元素
	return 0;
}
