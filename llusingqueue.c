#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int data)
{
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->link=0;
	if(front==0 && rear==0)
		front=rear=newnode;
	else
	{
		rear->link=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	struct node *temp;
	if(front==0)
		printf("list is empty");
	else
	{
		temp=front;
		front=front->link;
		if(front==0)
			rear=0;
		free(temp);
	}
}
void print()
{
	struct node *temp=front;
	while(temp)
	{
	printf("%d->",temp->data);
	temp=temp->link;
	}
	printf("\n");
}

int main()
{
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
dequeue();
print();
}
