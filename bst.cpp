#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*left;
	struct node* right;
};
struct node* newnode(int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
}
struct node* insert(struct node *head,int data)
{
	struct node* temp=newnode(data);
	if(head==NULL)
		head=temp;
	else if(head->data<data)
	{
		head->right=insert(head->right,data);
	}
	else
	{
		head->left=insert(head->left,data);
	}
	return head;
}
void print(struct node* head)
{
	struct node*temp=head;
	if(temp!=NULL)
	{
		print(temp->left);
		printf("%d",temp->data);
		print(temp->right);
	}
}
int main()
{
	struct node* tree=NULL;
	tree=insert(tree,2);
	tree=insert(tree,5);
	tree=insert(tree,7);
	tree=insert(tree,10);	
	print(tree);
}
