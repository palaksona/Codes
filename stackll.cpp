#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct node
{
	int data;
	struct node* next;
}Node;
Node *top=NULL;
int isEmpty()
{
	return (top==NULL);
}
void push(int data)
{
	Node* temp=(Node*)malloc(sizeof(Node));
	temp->data=data;
	if(top==NULL)
	{
		temp->next=NULL;
		top=temp;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
}
int pop()
{
	Node* temp=top;
	int a;
	if(!isEmpty())
	{
			a=temp->data;
			top=temp->next;
			free(temp);
			return a;
	}
	else
	{
		printf("\n Stack Underflow");
		return 0;
	}
}
void display()
{
	Node* temp=top;
	while(temp->next!=NULL)
	{
		printf("\t %d",temp->data);
		temp=temp->next;
	}	
	printf("\t %d",temp->data);		
}
int main()
{
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	printf("\n %d\n",pop());
	printf("\n %d\n",pop());
	display();
}
