#include<stdio.h>
int queue[20];
int front=-1;
int rear=-1;
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
void enque(int data)
{
	if(!full())
	{
		rear++;
		queue[rear]=data;
	}
}
int deque()
{
	if(!empty())
	{
		front++;
		int a=queue[front];
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
int main()
{
	enque(2);
	enque(1);
	enque(3);
	enque(5);
	enque(9);
	enque(7);
	printf("\n%d",deque());
	printf("\n%d",deque());
	printf("\n%d",deque());
	printf("\n%d",deque());
	print();
}
