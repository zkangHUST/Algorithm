#include<string.h>
#include<stdio.h>
#include<ctype.h>
#define Mc 12.01
#define Mh 1.008
#define Mo 16.00
#define Mn 14.01
double count(char* s);
double ans[1000]={0};
int main()
{
	int n,j=0;
	char s[200];
	scanf("%d",&n);
	while(j<n)
	{
		scanf("%s",s);
		ans[j]=count(s);
		j++;
	}
	for(j=0;j<n;j++)
	{
		printf("%.3lf\n",ans[j]);
	}
	return 0;	
}
double count(char* s)
{
	char buf[1000];
	int cnt[1000]={0};
	int i=0,j=0,k=0;
	double sum = 0;
	int num = 0;
	while(s[i]!='\0')
	{
		if(isalpha(s[i]))
		{
			buf[j++]=s[i];
			i++;
			if(!isdigit(s[i]))
				cnt[k++]=1;
		}
		else if(isdigit(s[i]))
		{
			num =0;
			while(isdigit(s[i]))
			{
				num = num*10+s[i]-'0';	
				i++;
			}
			cnt[k++]=num;	
		}
	}
	int len = strlen(buf);
	for(i=0;i<len;i++)
	{
		switch (buf[i])
		{
			case 'C':sum+=Mc*cnt[i];break;
			case 'H':sum+=Mh*cnt[i];break;
			case 'O':sum+=Mo*cnt[i];break;
			case 'N':sum+=Mn*cnt[i];break;
		}
	}
	return sum;	
}
