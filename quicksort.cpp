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
int main()
{
	int A[]={1,5,26,4,3,7,52};
	quickSort(A,0,6);
	for(int i=0;i<7;i++)
	{
		printf(" %d",A[i]);
	}
}
