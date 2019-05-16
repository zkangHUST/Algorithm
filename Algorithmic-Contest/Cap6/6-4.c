#include<stdio.h>
#include<string.h>
#define MAX 1000
char s[MAX];
int main()
{
	int state = 1,i=0;//state指示状态，当前字符为‘ ’时，state切换至0，当前字符非空格时，state切换至1，state由0切换至1时，需打印空格。
	fgets(s,1000,stdin);
	while(s[i]==' ')//排除行首的空格
		i++;
	while(i<strlen(s)-1){
		if(s[i]!=' '){
			if(!state){
				state = 1;
				putchar('-');
			}
			putchar(s[i]);
			i++;
		}
		else{
			state = 0;
			while(s[i]==' ')
				i++;
		}
	}	
	return 0;
}
