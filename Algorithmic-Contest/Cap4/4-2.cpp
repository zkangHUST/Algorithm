#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int comp(void *a,void *b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	char s1[105];
	char s2[105];
	int cnt1[26]={0};
	int cnt2[26]={0};
	char *p;
	bool flag;
	while(scanf("%s%s",s1,s2)==2)
	{
		p=s1;
		while(*p!='\0')
		{
			cnt1[*p-'A']++;
			p++;
		}
		p=s2;
		while(*p!='\0')
		{
			cnt2[*p-'A']++;
			p++;		
		}
	
		sort(cnt1,cnt1+25,comp);
		sort(cnt2,cnt2+25,comp);
		for(int i=0;i<26;i++)
		{
			if(cnt1[i]!=cnt2[i])
			{
				printf("NO\n");
				flag = 1;
				break;
			}
		}
		if(flag)
			printf("YES\n");
	}
		return 0;
}
