//题目要求：给定一个字符串，找出字符串中最长的回文字符串
//例如：给定字符串“xabcbacd”，则最长回文字符串为“abcba”。给定字符串“babad”,则最长回文字符串为“bab”或者“aba”,任意输出一个即可
#include<stdio.h>
#include<string.h>
int table[1000][1000]={0};
int main()
{
	char s[1001];
	int table[1000][1000]={0};	//table[i][j]记录s[i]~s[j]是否为回文字符串，是则置1，不是则置0
	scanf("%s",s);
	int i =0,len = strlen(s),max = 0,begin = 0;
	for(i=0;i<len;i++)
		table[i][i] = 1;//单个字符肯定是回文的，置1
	for(i=0;i<len-1;i++)	//改for循环判断相邻两个字符是否回文
	{
		if(s[i]==s[i+1])
		{
			table[i][i+1] = 1;
			max = 2;	//max表示回文字符串的最大长度
			begin = i;	//begin表示回文字符串的起始位置
		}
	}
	int l,j;
	for(l=3;l<=len;l++)	//从长度3，开始判断长度为l的字符串是否为回文，显然，如果table[i][j]==1&&s[i-1]==s[j+1],那么table[i-1][j+1]=1
	{
		for(i=0;i<len-l+1;i++)
		{
			j = i+l-1;
			if(s[i]==s[j]&&table[i+1][j-1])
			{
				table[i][j] = 1;
				max = l;
				begin = i;
			}
		}
	}
	for(i=begin;i<begin+max;i++)
		putchar(s[i]);
	return 0;
}
