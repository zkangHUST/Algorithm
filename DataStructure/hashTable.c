#include<stdio.h>
#include<stdlib.h>
#define SUCCESS 1
#define UNSUCESS 0
#define HASHSIZE 12 //定义哈希表表长为数组的长度
#define NULLKEY -32768
typedef struct 
{
	int *elem;   	//数据元素存储基地，动态分配数组
	int count;	//当前数据元素个数
}HashTable;
int InitHashTable(HashTable *h);		//初始化哈希表
int Hash(int key);		//定义哈希函数
void InsertHash(HashTable* h,int key);		//插入操作
int SearchHash(HashTable h,int key,int *addr);	//查找操作
int m=0;		//哈希表表长，全局变量
int main()
{
	HashTable h;	
	InitHashTable(&h);
	int key,i;
	for(i=0;i<=m;i++)
	{
		scanf("%d",&key);
		InsertHash(&h,key);
	}
	return 0;
}
int InitHashTable(HashTable *h)		//初始化哈希表
{
	int i;
	m = HASHSIZE;
	h->count = m;
	h->elem = (int*)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
		h->elem[i]=NULLKEY;
	return 1;
}
int Hash(int key)		//定义哈希函数
{
	return key%m;		//取余法
}
void InsertHash(HashTable* h,int key)	//	插入操作
{
	int addr = Hash(key);	//求哈希地址
	while(h->elem[addr]!=NULLKEY)
	{
		addr=(addr+1)%m;
		if(addr==Hash(key))	//哈希表已满
		{
			fprintf(stderr,"ERROR:the hash table is full,can not insert again!\n");
			return ;
		}
	}
	h->elem[addr] = key;

}
int SearchHash(HashTable h,int key,int *addr)	//查找操作
{
	*addr = Hash(key);
	while(h.elem[*addr]!=key)
	{
		*addr = (*addr+1)%m;
		if(h.elem[*addr]==NULLKEY||*addr==Hash(key))	//循环回到原点
		{
			return UNSUCESS;		//key值不存在
		}
		
	}
	return SUCCESS;
}
