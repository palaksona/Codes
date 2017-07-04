#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

typedef struct node
{
	char data;
	struct node* next;
}Node;
Node *top=NULL;
int isEmpty()
{
	return (top==NULL);
}
void push(char data)
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
char pop()
{
	Node* temp=top;
	char a;
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
 char peek()
 {
 	if(!isEmpty())
 	{
 		char a;
 		a=top->data;
 		return(a);
	}
	else
	{
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
 	char para[20] ;
 	printf("Enter the expression");
 	gets(para);
 	int n=strlen(para);
 	char p;
 	for(int i=0;i<n;i++)
 	{
 		switch(para[i])
 		{
 			case '(':
 			case '{':
 			case '[':
 			case '<':push(para[i]);
 					break;
 			case ')':p=peek();
 					 if(p=='(')
 					 	pop();
 					break;
 			case '}':p=peek();
 					 if(p=='{')
 					 	pop();
 					break;
 			case ']':p=peek();
 					if(p=='[')
 						pop();
 					break;
 			case '>':p=peek();
 					if(p=='<')
 						pop();
 					break;
		}
 	}
 	display();
	 if(isEmpty)
	 {
	 	printf("Balanced");
	 }	 
}
