#include<stdio.h>
void swap(int *i,int *j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}
int partition (int A[],int start,int end)
{
	int pivot=A[end];
	int pIndex=start;
	for(int i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{			
			swap(&A[i],&A[pIndex]);
			pIndex++;
		}
	}
	swap(&A[pIndex],&A[end]);
	return(pIndex);
}
void quickSort(int *A,int start,int end)
{
	if(start<end)
	{	
		int Index=partition(A,start,end);
		quickSort(A,start,Index-1);
		quickSort(A,Index+1,end);
	}
}
bool hasnumber(int *A,int size,int sum)
{
	int s,e;
	s=0;
	e=size-1;
	quickSort(A,0,size-1);
	while(s<e)
	{
		if(A[s]+A[e]==sum)
		return 1;
		if(A[s]+A[e]<sum)
		s++;
		if(A[s]+A[e]>sum)
		e--;
	}
	return 0;
}
int main()
{
	int A[]={1,5,26,4,3,7,52};
	int l=sizeof(A)/sizeof(A[0]);
	bool ans=hasnumber(A,l,78);
	for(int i=0;i<7;i++)
	{
		printf(" %d",A[i]);
	}
	printf("\n %s", ans?"true":"false");
}
