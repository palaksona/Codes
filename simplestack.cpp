#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int top=-1;
int MAX=8;
int stack[8];
int isFull()
{
	return (top==MAX-1);
}
int isEmpty()
{
	return (top==-1);
}
void push(int data)
{
	if(!isFull())
	{
		top++;
		stack[top]=data;
	}
	else
	{
		printf("\nStack Overflow");
	}
}
int pop()
{
	if(!isEmpty())
	{
		int a=stack[top];
		top--;
		return a;
	}
	else
	{
		printf("\nStack Underflow");
		return 0;
	}
}
void display()
{
	for(int i=0;i<top+1;i++)
		printf("\t %d",stack[i]);
}
int main()
{
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	printf("\n %d \n",pop());
	display();
}
