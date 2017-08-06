#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node* next;
};
struct node* newnode(int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
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
struct node* merge(struct node* a,struct node*b)
{
	struct node* final;
	if(a==NULL)
		return b;
	if(b==NULL)
		return a;
	if(a->data<b->data)
	{
		final=a;
		final->next=merge(a->next,b);
	}
	else
	{
		final=b;
		final->next=merge(b->next,a);
	}
	return final;
}
int main()
{
	struct node* a=NULL;
	a=insert(a,2);
	a=insert(a,5);
	a=insert(a,7);
	a=insert(a,10);	
	print(a);
    struct node* b=NULL;
    b=insert(b,5);
    b=insert(b,11);
    struct node* c=merge(a,b);
    print(c);
}
