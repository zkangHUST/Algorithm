#include<stdio.h>
int main()
{
	double sum =0,term;
	int i;
	for(i=0;;i++)
	{
		term = 1.0/(i*2+1);
		if(i%2==0)
			sum += term;
		else
			sum -=term;
		if(term < 1e-6)
			break;
	}	
	printf("%.6f\n",sum*4);
	return 0;
}
