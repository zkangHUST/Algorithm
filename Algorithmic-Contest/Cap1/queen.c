#include<stdio.h>
int a[9]={0};
int count = 0;
int check_position(int i,int j)//判断i行j位置是否为有效位置
{
	int m;
	for(m=1;m<i;m++)
	{
		if(a[m]==j)
			return 0;
		else if((m+a[m])==(i+j))
			return 0;
		else if((a[m]-m)==(j-i))
			return 0;
	}
	return 1;
}
void print(int a[])
{
	int i=1,j;
	printf("0 1 2 3 4 5 6 7 8\n");
	for(i=1;i<9;i++)
	{
		printf("%d ",i);
		for(j=1;j<a[i];j++)
			printf("  ");
		printf("* ");
		for(j=a[i]+1;j<9;j++)
			printf("  ");
		printf("\n");
	}
	printf("==========================================================\n");
}
void queen(int i)
{
	int j;
	for(j=1;j<=8;j++)
	{
		if(check_position(i,j)!=0)
		{
			a[i]=j;
			if(8==i)
			{
				print(a);
				a[i]=0;
				count++;
				return;
			/*if(8==i)
			{
				print(a,9);
				return ;
			}*/
			}
			queen(i+1);
			a[i]=0;
		}
	}
}
int main()
{
	int i;
	//for(i=1;i<9;i++)	
		queen(1);
	printf("%d\n",count);
	return 0;
}

