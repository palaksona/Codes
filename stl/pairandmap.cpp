#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int,int> mp;
	map < pair<int,int> , int> mm;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
			mp=make_pair(i,j);
			mm[mp]=1;
		}
	}
	map< pair<int,int> ,int> ::iterator it;
	for(it=mm.begin();it!=mm.end();it++)
	{
		cout<<it->second<<endl;
	}
}
