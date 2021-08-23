#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *createnew(int n)
{
	int i,data;
	struct node *head=0;
	struct node *temp=0;
	struct node *q=0;
	for(i=0;i<n;i++)
	{
        temp=malloc(sizeof(struct node));
	printf("enter data for node %d",i+1);
	scanf("%d",&(temp->data));
	temp->link=0;
	if(head==0)
	{
		head=temp;

	}
	else
	{
		q=head;
		while(q->link!=0)
			q=q->link;
			q->link=temp;
	}
	}
	return head;
}
struct node *insertatfirst(struct node *head,int data)
{
	struct node *temp=malloc(sizeof(struct node));
	temp->data=data;
	temp->link=head;
	head=temp;
	return head;
}
struct node *insertatend(struct node*head,int data)
{
	struct node *temp1=malloc(sizeof(struct node));
	temp1->data=data;
	struct node *temp;
	temp=head;
	while(temp->link!=0)
	{
		temp=temp->link;
	}
	temp->link=temp1;
	temp1=0;
}
struct node *delete(struct node *head)
{
	struct node *temp1=head;
	if(head==0)
		printf("list is empty");
	head=head->link;
	free(temp1);
	temp1=0;
	return head;
}
struct node*delatend(struct node*head)
{
	struct node *temp1=head;
	if(head==0)
		printf("list is empty");

	else if(temp1->link==0)
	{	
		free(head);
		head=0;
	}
	else
	{
	struct node *temp=head;
        while(temp->link!=0)
	{	
	temp1=temp;
	temp=temp->link;
	}
	temp1->link=0;

	free(temp);
	temp=0;
	}
}
struct node* reverse(struct node *head)
{
	struct node *prev=0;
	struct node *next=0;
	while(head!=0)
	{
         next=head->link;
	 head->link=prev;
	 prev=head;
	 head=next;
	}
	head=prev;
}

void print(struct node *head)
{
	struct node *ptr=head;
	while(ptr!=0)
        {
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
}

int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	struct node *head=0;
        head=createnew(n);
	//print(head);
	//head=insertatfirst(head,86);
        //print(head);
        //insertatend(head,90);
	//head=delete(head);
        //delatend(head);
	head=reverse(head);
	print(head);

return 0;
}
