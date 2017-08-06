#include<stdio.h>
void toEnd(int a[],int m)
{
	int j=m-1;
	for(int i=m-1;i>=0;i--)
	{
		if(a[i]!=-1)
		{
			a[j]=a[i];
			j--;
		}
	}	
}
void merge(int a[],int b[],int m,int n)
{
	int k=0;
	int l=n;
	int o=0;
	while(k<m)
	{
		if(l<m && a[l]<b[o]||o==n)
		{
			a[k]=a[l];
			l++;
			k++;	
		}
		else
		{
			a[k]=b[o];
			k++;
			o++;
		}
	}
}
int main()
{
	int a[]={2,8,-1,-1,-1,13,-1,15,20};
	int b[]={5,7,9,25};	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	toEnd(a,m);
	merge(a,b,m,n);
	printf("\n");
	for(int i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
}
