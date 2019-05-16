#include<stdio.h>
char buf[10000];
int cnt[100][10]={0};
int main()
{
	int n,num,i,j,k=0;
	scanf("%d",&n);
	while(k<n)
	{
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			sprintf(buf,"%d",i);
			j=0;
			while(buf[j]!='\0')
			{
				cnt[k][buf[j]-'0']++;
				j++;
			}
		}
	//	for(j=0;j<10;j++)
	//		printf("%d ",cnt[j]);
		k++;
//	return 0;
	}
	for(k=0;k<n;k++)
	{
		for(j=0;j<9;j++)
			printf("%d ",cnt[k][j]);
		printf("%d\n",cnt[k][9]);
	}
	return 0;
}
