#include<stdio.h>
int main()
{
	return 0;
}
void HeapSort(int *l,len)
{
	int i;
	for(i=len/2;i>0;i--)
		HeapAdjust(l,i,len);
	for(i=len;i>1;i--)
	{
		swap(L,1,i);
		HeapAdjust(L,1,i-1);
	}
}

