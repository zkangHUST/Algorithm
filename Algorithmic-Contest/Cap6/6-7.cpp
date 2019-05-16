#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;
const int MAX = 100;
char s[MAX];
int main()
{
	fgets(s,MAX,stdin);
	stack <char> ans;
	int i = strlen(s)-2;
	while(s[i]==' ')
		i--;
	while(i>=0){
		if(s[i]!=' '){			
			ans.push(s[i]);
			i--;
		}
		else{
			while(!ans.empty()){
				putchar(ans.top());
				ans.pop();
			}
			while(s[i]==' '&&i>=0)
				i--;
			if(i>=0)
				putchar(' ');
		}
		
	}
	while(!ans.empty()){
		putchar(ans.top());
		ans.pop();
	}	
	return 0;
}
