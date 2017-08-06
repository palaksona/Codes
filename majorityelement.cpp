#include<stdio.h>
int main()
{
	int aa[5]={2,2,5,5,5};
	int max=aa[0];
	for(int i=0;i<5;i++)
	{
		if(aa[i]>max)
		{
			max=aa[i];
		}
	}
	int ab[max+1];
	for(int i=0;i<max+1;i++)
	{
		ab[i]=0;
	}
	for(int i=0;i<5;i++)
	{
		ab[aa[i]]++;
	}	
	int b=5/2;
	for(int i=0;i<max+1;i++)
	{
		if(ab[i]>b)
		{
			printf("Majority Element=%d",i);
			break;
		}
	}
}
