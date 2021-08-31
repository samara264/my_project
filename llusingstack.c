#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *head;
void push()
{
	int data;
	struct node *newp=malloc(sizeof(struct node));
	if(newp==0)
		printf("not able to push the element");
	else
	{
        printf("enter the data");
	scanf("%d",&data);
	if(head==0)
	{

	newp->data=data;
	newp->link=0;
        head=newp;
        
	}
	else
	{
		newp->data=data;
		newp->link=head;
		head=newp;
	}
	printf("item pushed");
	}
}
void display()
{
	struct node *temp;
	temp=head;
	if(head==0)
		printf("list is empty");
	else
	{
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->link;
		}
	}
}
void peek()
{
	if(head==0)
		printf("list is empty");
	else
	{
		printf("top element is %d",head->data);
	}

}
void pop()
{
	struct node *temp;
	int item;
	temp=head;
	if(head==0)
		printf("list is empty");
	else
	{
		item=head->data;
		temp=head;
		head=head->link;
		free(temp);
	}
}
int main()
{
push();
push();
push();
//display(head);
pop();
display();
}


        
