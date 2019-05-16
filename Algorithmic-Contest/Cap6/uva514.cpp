#include<cstdio>
#include<stack>
using namespace std;
const int MAX=1000;
int tar[MAX];
int main()
{
	stack<int> s;
	int A=1,B=1,n;
	while(scanf("%d",&n)==1)
	{
		 A=1,B=1;
		int ok = 1;
		for(int i=1;i<=n;i++)
			scanf("%d",&tar[i]);
		while(B<=n)
		{
			if(tar[B]==A)
			{
				A++;B++;
			}
			else if(!s.empty()&&tar[B]==s.top())
			{
				s.pop();
				B++;
			}
			else if(A<=n)
			{
				s.push(A++);
			}
			else 
			{ok = 0;break;}
		}
		printf("%s\n",ok?"Yes":"No");	
	}
	return 0;
}
