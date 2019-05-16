#include<iostream>
#include<cstdio>
int check(int a,int b);
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	for(a=1234;;a++){
		b = a*n;
		if(b>98765)
			break;
		else if(check(a,b))
			printf("%05d / %05d = %d\n",b,a,n);
	}
	return 0;
}
int check(int a,int b)
{
	int table[10]={0};
	while(a){
		table[a%10]++;
		a/=10;
	}
	while(b){
		table[b%10]++;
		b/=10;
	}
	for(int i=1;i<10;i++){
		if(table[i]!=1)
			return 0;
	}
	return 1;
}
