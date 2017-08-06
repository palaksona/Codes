#include<stdio.h>
int getOddOccurencedNumber(int a[],int ar_size)
{
	int max=a[0];
	for(int i=0;i<ar_size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	int ab[max+1];
	for(int i=0;i<max+1;i++)
	{
		ab[i]=0;
	}
	for(int i=0;i<ar_size;i++)
	{
		ab[a[i]]++;
	}
	for(int i=0;i<max+1;i++)
	{
		if(ab[i]%2!=0)
		{
			return i;
		}
	}
	return 0;
}
int main()
{
	int a[10]={3,1,1,1,1,2,3,3,2,4};
	int n=sizeof(a)/sizeof(a[0]);
	printf("Odd number times occurred is=%d ",getOddOccurencedNumber(a,n));
}
