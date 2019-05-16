#include<stdio.h>
#include<string.h>
#define  MAX 100
char s[MAX];
int main()
{
	int i=0,cnt=0;
	fgets(s,100,stdin);//s中包含结尾的'\n'
	printf("%d \n",strlen(s));
	while(s[i]==' ')
		i++;
	for(;i<strlen(s)-1;i++)//字符串s的最后一个字符是'\n',因此需要减1
	{
		if(s[i]!=' ')
		{
			if(cnt)
			{
				putchar('-');
				cnt = 0;
			}
			putchar(s[i]);				
		}
		else
			cnt++;	
	}
	return 0;
}
