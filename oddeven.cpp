#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int number,dig,even,odd;
		even=odd=0;
		scanf("%d",&number);
		int replica=number;
		while(replica)
		{
			dig=replica%10;
			if(dig%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
			replica=replica/10;
		}
		if(even%2==0&&odd%2!=0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}t--;
}
