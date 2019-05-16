#include<stdio.h>
#include<string.h>
int main()
{
	int abc,de,x,y,z,ok,i,count=0;
	char s[20],buf[99];
	scanf("%s",s);
	for(abc=100;abc<1000;abc++)
		for(de=10;de<100;de++)
		{
			x=abc*(de%10);
			y=abc*(de/10);
			z=abc*de;
			sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);
			ok = 1;
			for(i=0;i<strlen(buf);i++)
			{
				if(strchr(s,buf[i])==NULL)
				{
					ok = 0;
					break;
				}
			}		
			if(ok)
			{
				printf("<%d>\n",++count);
				printf("%5d\nX%4d\n----\n%5d\n%4d\n----\n%5d\n\n",abc,de,x,y,z);
			}
		}
	printf("sum=%d\n",count);
	return 0;
}
