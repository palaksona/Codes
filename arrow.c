#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int *p=&arr[4];
	printf("%d",*p);
	p=p-2;
	printf("\n%d",*p);
	p--;
	printf("\n%d",*p);
	p--;
	printf("\n%d",*p);
	return 0;
}
