#include<stdio.h>
char s[85];
int sum[100]={0};
int main()
{
	int n;
	scanf("%d",&n);
	int i,cnt=0,j;
	for(j=0;j<n;j++)
	{
		i=0;
		cnt = 0;
		scanf("%s",s);
		while(s[i]!='\0')
		{
			if(s[i]=='O')
			{
				cnt++;
				sum[j]=sum[j]+cnt;
			}
			else
				cnt = 0;
			i++;
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",sum[i]);
	return 0;
}
