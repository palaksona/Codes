#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int max(int a,int b)
{
	return (a>b)?a:b;
}
int findlcs(char *X,char *Y,int n,int m)
{
	int L[n+1][m+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0)
			{
				L[i][j]=0;
			}
			else if(X[i-1]==Y[j-1])
			{
				L[i][j]=L[i-1][j-1]+1;
			}
			else
				L[i][j]=max(L[i-1][j],L[i][j-1]);
		}
	}
	return L[n][m];
}
int main()
{
	char X[] = "AGGTAB";
  	char Y[] = "GXTXAYB";
  	int n = strlen(X);
  	int m = strlen(Y);
	cout<<findlcs(X,Y,n,m);
}
