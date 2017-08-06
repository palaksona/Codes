#include<stdio.h>
#include<malloc.h>
struct node* queue[20];
int front=-1;
int rear=-1;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* insert(struct node* root,int data)
{
	if(root==NULL)
	{
		struct node* temp=(struct node*)malloc(sizeof(struct node));
		temp->data=data;
		temp->left=NULL;
		temp->right=NULL;	
		root=temp;
	}
	else
	{
		if(root->data>=data)
		{
			root->left=insert(root->left,data);
		}
		else
		{
			root->right=insert(root->right,data);
		}
	}
	return root;
}
int empty()
{
	if(front>=rear)
		return 1;
	else
		return 0;
}
int full()
{
	if(rear==20)
		return 1;
	else
		return 0;
}
void enque(struct node* n)
{
	if(!full())
	{
		rear++;
		queue[rear]=n;
	}
}
struct node* deque()
{
	if(!empty())
	{
		front++;
		struct node* a=queue[front];
		return a;
	}
}
void print()
{
	int temp;
	temp=front+1;
	while(temp!=rear+1)
	{
		printf("  %d ",queue[temp]);
		temp++;
	}	
}
void bfs(struct node* root)
{
	enque(root);
	while(!empty())
	{
		struct node* temp=deque(); 
		printf("%d",temp->data);
		
		if(temp->left!=NULL)
			enque(temp->left);
		if(temp->right!=NULL)
			enque(temp->right);		
	}
}

int inorder(struct node* root)
{
	if(root==NULL)
		return 0;
	struct node* temp=root;
	inorder(temp->left);
	printf("%d",temp->data);
	inorder(temp->right);
}
int main()
{
	struct node* root=NULL;
	int ch,data;
	char ch2;
	while(1)
	{
		printf(" 1. Insert  2. BFS  3. Display ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: do
					{
						printf("Enter the elememt : ");
						scanf("%d",&data);
						root=insert(root,data);
						printf("Press y if you want to add more elements : ");
						scanf("%s",&ch2);
					}while(ch2=='y');
					break;
			case 2:bfs(root);
					break;
			case 3:inorder(root);
					break;
		}
	}
}
