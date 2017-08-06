#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int V[n+1][m+1];
	for(int i=0;i<=n;i++)
	{
		V[i][0]=0;	
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i<=j)
			{
				V[i][j]=V[i][j-i]+1;
			}
			else
				V[i][j]=V[i-1][j];
		}
	}	
	cout<<V[n][m];
}
