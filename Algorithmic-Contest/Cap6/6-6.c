#include<stdio.h>
#include<string.h>
#define MAX 100
char res[MAX];
char ans[MAX];
int main()
{
	int i=0,j=0;
	fgets(res,100,stdin);
	while(res[i]==' ')
		i++;
	while(i<strlen(res)-1)
	{
		if(res[i]!=' ')
		{
			ans[j]=res[i];
			i++;
			j++;
		}
		else
		{
			while(res[i]==' ')
				i++;		//跳到空格后的第一个字符
			if(i<strlen(res)-1)	
			{
				ans[j]='-';
				j++;
			}
		}
	}
	ans[j]='\0';
	printf("%s",ans);	
	return 0;
}
