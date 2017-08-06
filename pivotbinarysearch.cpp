#include<stdio.h>
int findPivot(int a[],int low,int high)
{
	if(high<low)
		return -1;
	if(high==low)
		return low;
	int mid=(high+low)/2;
	if(mid<high && a[mid]>a[mid+1])
		return mid;
	if(mid>low && a[mid]<a[mid-1])
		return mid-1;
	if(a[low]>=a[mid])
		return findPivot(a,low,mid-1);
	return findPivot(a,mid+1,high);
}
int binarySearch(int a[],int low,int high,int key)
{
	if(high<low)
		return -1;
	if(high==low)
		return low;
	int  mid=(high+low)/2;
	if(mid==key)
		return mid;
	if(mid<key)
		return binarySearch(a,mid+1,high,key);
	return binarySearch(a,0,mid-1,key);
}
int pivotbinarysearch(int a[],int n,int key)
{
	int pivot=findPivot(a,0,n-1);
	if(pivot==-1)
		return binarySearch(a,0,n-1,key);
	if(pivot==key)
		return key;
	if(key>a[0])
		return binarySearch(a,0,pivot-1,key);
	return binarySearch(a,pivot+1,n-1,key);
}
int main()
{
	int a[]={3,4,5,6,1,2};
	int n=sizeof(a)/sizeof(a[0]);
	int key=10;
	int p=pivotbinarysearch(a,n,key);
	if(p==key)
		printf("Found");
	else
		printf("Notfound");
}
