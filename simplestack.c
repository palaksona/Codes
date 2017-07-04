#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int stack[10];
int MAX=8;
int top=-1;
int isFull()
{
	if(top==MAX)
	{
		return 1;	
	}
	else
	return 0;
}
int isEmpty()
{
	if(top==-1)
	return 1;
	else 
	return 0;
}
int peek()
{
	if(!isEmpty())
		return stack[top];
}
int pop()
{
	if(!isEmpty())
		printf ("%d",stack[top--]);
	else
	 printf ("Underflow");
}
void push(int data)
{
	if(!isFull())
	{
		stack[++top]=data;
	}
}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	int a=0;
	a = pop();
	printf("\n %d\n",stack[1]);
	return 0;
}
