#include<stdio.h>
#include<malloc.h>
int stack[5] ;
int top=-1;
struct node
{
	int data;
	struct node* next;
};
struct node* newnode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	return node;
}
struct node* insert(struct node* head,int data)
{
	struct node* temp=newnode(data);
	if(head==NULL)
		{
			head=temp;
			return head;
		}
	struct node* temp2;
	temp2=head;
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;
	}
	temp2->next=temp;
	return head;
}
void print(struct node*head)
{
	struct node* temp=head;
	while(temp->next!=NULL)
	{
		printf("\n %d ",temp->data);
		temp=temp->next;
	}
	printf("\n %d ",temp->data);
}
void push(int data)
{
	top++;
	stack[top]=data;


}
int pop()
{
	int a;
	a=stack[top];
	top--;
	return a;
}
void palindrome(struct node*head)
{
	struct node* temp;
	temp=head;
	int  flag=0;
	while(temp!=NULL)
	{
		push(temp->data);
		temp=temp->next;
		
	}
	struct node *temp2=head;
	int c;
	while(temp2!=NULL)
	{
		c=pop();
		if(c==temp2->data)
		{		printf("%d = %d ",c, temp2->data);
			temp2=temp2->next;
		}
		else
		break;
	}
	if(temp2==NULL)
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
}
void print1()
{
	while(top!=-1)
	{
		printf("%d",stack[top]);
		top--;
	}
}

int main()
{
	struct node* a=NULL;
	a=insert(a,2);
	a=insert(a,5);
	a=insert(a,7);
	a=insert(a,5);	
    a=insert(a,2);
    print(a);
    
    palindrome(a);
    
}
