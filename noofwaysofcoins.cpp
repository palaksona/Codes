#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int solve(int n)
{
	if(n<0)
	return 0;
	if(n==0)
	return 1;
	return solve(n-1)+solve(n-3)+solve(n-5);
}
int main()
{
	cout<<solve(6);
}
