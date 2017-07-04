#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
int main()
{
	char str[50],exp[100];
	int top,i;
	top=-1;
	printf("Enter the string");
	gets(str);
	int n=strlen(str);
	for(int i=0;i<n;i++)
	{
		if(str[i]=='('||str[i]=='['||str[i]=='{')
		{
			top++;
			exp[top]=str[i];
		}
		if(str[i]==')'&&exp[top]=='(')
		{
			top--;
		}
		if(str[i]=='}'&&exp[top]=='{')
		{
			top--;
		}
		if(str[i]==']'&&exp[top]=='[')
		{
			top--;
		}
	}
	if(top==-1)
	{
		printf("Balanced");
	}
	else
	printf("Not balanced");
}
