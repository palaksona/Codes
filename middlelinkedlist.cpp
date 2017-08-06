#include<stdio.h>
#include<malloc.h>
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
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
int  middle(struct node*head)
{
	struct node*fast=head;
	struct node*slow=head;
	while(fast!=NULL&&fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow->data;
}
struct node* reverse(struct node* head)
{
	struct node*a,*b,*c;
	a=NULL;
	b=head;
	c=head;
	while(c!=NULL)
	{
		c=b->next;
		b->next=a;
		a=b;
		b=c;
	}
	head=a;
	return head; 
}
int main()
{
	struct node* list=NULL;
	int s;
	for(int i=0 ;i<4;i++)
	{
		scanf("%d",&s);
		list=insert(list,s);
	}
	print(list);
	int mid=middle(list);
	printf("\n%d\n",mid);
	list=reverse(list);
	print(list);
}
