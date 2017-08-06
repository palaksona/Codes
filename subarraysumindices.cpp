#include<stdio.h>
#define max(x,y)((x)>(y)?(x):(y))
int start,end,s;
int sumofsubarray(int a[],int size)
{
	int max_ending_here=0;
	int max_so_far=0;
	for(int i=0;i<size;i++)
	{
		max_ending_here=max_ending_here+a[i];
		if(max_ending_here<0)
		{
			max_ending_here=0;
			s=i+1;
		}
		else if(max_so_far<max_ending_here)
		{
			max_so_far=max_ending_here;
			start=s;
			end=i;
		}
	}
	return max_so_far;
}
int main()
{
	int a[]={1,2,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	printf("%d",sumofsubarray(a,n));
	printf("Start=%d,End=%d",start,end);
}
