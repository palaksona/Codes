#include<stdio.h>
void merge(int a[],int l,int m,int h)
{
	int l1=m-l+1;
	int l2=h-m;
	int L[l1];
	int R[l2];
	for(int i=0;i<l1;i++)
	{
		L[i]=a[l+i];
	}
	for(int i=0;i<l2;i++)
	{
		R[i]=a[m+1+i];
	}
	int p,q,r;
	p=l;
	q=0;
	r=0;
	while(q<l1 && r<l2)
	{
		if(L[q]<R[r])
		{
			a[p]=L[q];
			p++;
			q++;
		}
		else
		{
			a[p]=R[r];
			p++;
			r++;
		}
	}
	while(q<l1)
	{
		a[p]=L[q];
		p++;
		q++;
	}
	while(r<l2)
	{
		a[p]=R[r];
		p++;
		r++;
	}
}
void mergeSort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
	int a[]={12,11,13,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	mergeSort(a,0,n-1);
	printArray(a,n);
}
