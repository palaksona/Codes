#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int arr[t];
	for(int i=0;i<t;i++)
	{
		scanf("%d",&arr[i]);
	}
	int i=t-1;
	int last,first,sum;
	int count;
	while(i>0)
	{
		last=i;
		sum=arr[i];
		first=0;
		count=0;
		while(first<last)
		{
			if(arr[first]+arr[last]==sum)
			{
				count++;
				first++;
				last++;
			}
			else if(arr[first]+arr[last]>sum )
			{
				last--;
			}
			else
			{
				first++;
			}
		}
		printf("%d\n",count);
		i--;
	}
}
