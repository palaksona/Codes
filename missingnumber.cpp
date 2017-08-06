#include<stdio.h>
int missingnumber(int a[],int size)
{
	int total=(size+1)*(size+2)/2;
	for(int i=0;i<size;i++)
	{
		total-=a[i];
	}
	return total;
}
int main()
{
	int a[]={1,2,4,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	printf("%d",missingnumber(a,n));
}
