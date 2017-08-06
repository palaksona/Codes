#include<stdio.h>
void rotateonetime(int a[],int n)
{
	int temp;
	temp=a[0];
	int i;
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[i]=temp;
}
void rotate(int a[],int n,int d)
{
	for(int i=0;i<d;i++)
	{
		rotateonetime(a,n);
	}
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]);
	rotate(a,n,2);
	print(a,n);
}
