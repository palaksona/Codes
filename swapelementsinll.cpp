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
void swapelements(struct node* head,int x,int y)
{
	if(x==y)
	return ;
	struct node *curX,*prevX;
	prevX=NULL;
	curX=head;
	while(curX && curX->data!=x)
	{
		prevX=curX;
		curX=curX->next;
	}
	struct node *curY,*prevY;
	prevY=NULL;
	curY=head;
	while(curY && curY->data!=y)
	{
		prevY=curY;
		curY=curY->next;
	}
	if(curX==NULL || curY==NULL)
	 return;
	if(prevX!=NULL) 
		prevX->next=curY;
	else	
		head=curY;
	if(prevY!=NULL)
		prevY->next=curX;
	else
		head=curX;
	struct node* temp=curX->next;
	curX->next=curY->next;
	curY->next=temp;	 
}
int main()
{
	struct node* tree=NULL;
	tree=insert(tree,2);
	tree=insert(tree,5);
	tree=insert(tree,7);
	tree=insert(tree,10);	
	print(tree);
	swapelements(tree,5,10);
	print(tree);
}
