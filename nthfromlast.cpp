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
int findnodefromlast(struct node* head,int n)
{
	struct node* fast,*slow;
	fast=slow=head;
	int c=1;
	while(c!=n+1)
	{
		fast=fast->next;
		c++;
	}
	while(fast!=NULL)
	{
		fast=fast->next;
		slow=slow->next;
	}
	return slow->data;
}
int main()
{
	struct node* tree=NULL;
	tree=insert(tree,2);
	tree=insert(tree,5);
	tree=insert(tree,7);
	tree=insert(tree,10);	
	print(tree);
    printf("%d",findnodefromlast(tree,2));
}
