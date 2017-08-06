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
struct node* sortedinsert(struct node*head,int  data)
{
	struct node*temp=newnode(data);
	if(head==NULL || head->data>=temp->data)
	{
		temp->next=head;
		head=temp;
	}
	else
	{
		struct node* p=head;
		struct node *q=head;
		while(p!=NULL && p->data<temp->data)
		{
			q=p;
			p=p->next;
		}
		temp->next=q->next;
		q->next=temp;
	}
	return head;
}
int main()
{
	struct node* a=NULL;
	a=sortedinsert(a,2);
	a=sortedinsert(a,5);
	a=sortedinsert(a,1);
	a=sortedinsert(a,10);	
    a=sortedinsert(a,8);
    print(a);
}
