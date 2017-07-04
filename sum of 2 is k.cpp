#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,temp;
	cout<<"Enter n";
	cin>>n;
	cout<<"Enter k";
	cin>>k;
	int array[n];
	cout<<"Enter the elements";
	for (int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int n1=sizeof(array)/sizeof(array[0]);
	sort(array , n1+array);
	for(int i=0;i<n;i++)
	cout<<array[i];
	for(int i=0,j=n-1;i<j;)
	{
		temp=array[i]+array[j];
		if(temp==k)
		{
			cout<<"\n"<<"found";
			break;
		}
		else if(temp<k)
		i++;
		else
		j++;
	}
}
