#include<iostream>
#define MAX 1000
using namespace std;
void CreatTreeArray(int c[],int a[],int n);
int lowbit(int x);
void update(int c[],int x,int i,int n);
int sum(int c[],int n);
int main()
{	
	int a[MAX];
	int c[MAX];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		c[i]=0;
	}
	CreatTreeArray(c,a,n);
	int x,y;
	cin>>y>>x;
	update(c,x,y,n);
	for(int i=1;i<=n;i++)
		cout<<c[i]<<' ';
	int m;
	cout<<endl;
	cin>>m;
	cout<<sum(c,m);
	return 0;
}
int lowbit(int x)
{
	return x&-x;
}
void CreatTreeArray(int c[],int a[],int n)
{
	for(int i=1;i<=n;i++)
		for(int j=i-lowbit(i)+1;j<=i;j++)
		{
			c[i]+=a[j];		
		}
}
void update(int c[],int x,int i,int n)
{
	for(;i<=n;i+=lowbit(i))
	{
		c[i]+=x;
	}
}
int sum(int c[],int n)
{
	int i;
	int sum=0;
	for(i=n;i>0;i-=lowbit(i))
	{
		sum += c[i];
	}
	return sum;
}
