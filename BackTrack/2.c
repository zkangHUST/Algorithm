#include<stdio.h>
#define MAX 100
void back(int i,int n);
int a[MAX];//存储集合元素
int count=0;//记录子集个数，其实没必要记录，因为count=2^n这是很显然的。
int b[MAX]={0};//存储集合元素状态
int k=1;//表示第k个元素，从1开始数
int main()
{
    int i=0, n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    back(1,n);//从第一个元素开始，确定第一个元素的状态
    printf("%d",count);
    return 0;
}
void back(int i,int n)
{
    int j;
    int sum =0;
    if(i>n)//i>n表示所有元素的状态都已经确定，那么接下来打印出来
    {
        printf("{");
        for(j=1;j<=n;j++)
        {
            if(b[j])    
                printf("%d,",a[j]);
		//sum+=a[j;
	}
	//printf("%d",sum); 
	printf("}\n");
        count++;
        return ;
    }
    {
        b[i]=1;//取第i个元素
        back(i+1,n);//处理下一个元素
        b[i]=0;//不取第i个元素
        back(i+1,n);//处理下一个元素
    }
    return ;    
}
