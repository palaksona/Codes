#include<stdio.h>
#define max(x,y)((x)>(y)?(x):(y))
int sumofsubarray(int a[],int size)
{
	int cur_max=a[0];
	int max_so_far=a[0];
	for(int i=0;i<size;i++)
	{
		cur_max=max(a[i],cur_max+a[i]);
		max_so_far=max(max_so_far,cur_max);
	}
	return max_so_far;
}
int main()
{
	int a[]={1,2,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	printf("%d",sumofsubarray(a,n));
}
