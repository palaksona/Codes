#include<bits/stdc++.h>
using namespace std;
int main()
{
	map <int ,int > mm;
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
		mm[arr[i]]++;
	}
	map<int,int>:: iterator it;
	for(it=mm.begin();it!=mm.end();it++)
	{
		cout<<"Key is"<<it->first;
		cout<<"Value is"<<it->second<<endl;
	}
	
}
