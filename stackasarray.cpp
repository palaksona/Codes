#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include<malloc.h>
struct abc
{
	int top;
	unsigned capacity;
	int* array;
};
//Initializing
struct abc* initialize(unsigned capacity)
{
	struct abc* a1=(struct abc*)malloc(sizeof(struct abc));
	a1->top=-1;
	a1->capacity=capacity;
	a1->array=(int*)malloc(a1->capacity *sizeof(int));
	return a1;
}
//Full
int isFull(struct abc* a1)
{
	return (a1->top== a1->capacity-1);
}
//isEmpty
int isEmpty(struct abc* a1)
{
	return (a1->top == -1);
}
//Push
void push(struct abc* a1,int key)
{
	if(isFull(a1))
	{
		return;
	}
	a1->array[++a1->top]==key;	
	printf("\npushed");	
}
//Pop
int pop(struct abc* a1)
{
	if(isEmpty(a1))
	{
		printf("\nStack underflow");
		return INT_MIN;
	}
	return (a1->array[a1->top--]);
}
int main()
{
	struct abc* a1= initialize(100);
	push(a1,2);
	push(a1,5);
	printf("\nhello = %d "+pop(a1));
	printf("\n %d"+a1->array[1]);
}

