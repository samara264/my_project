#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct node{
	int data;
	struct node *link;
};
void create(struct node **head,int data)
{
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->link=*head;
	*head=newnode;
}
int nth(struct node *head,int pos)
{
	struct node *ptr1=head;
	int count=0;
	while(ptr1!=0)
	{
		if(count==pos)
			return (ptr1->data);
		count++;
		ptr1=ptr1->link;
	}
	
}
int main()
{
struct node *head=0;
create(&head,1);
create(&head,4);
create(&head,1);
create(&head,12);
create(&head,1);
printf("the nth element from the last is:%d\n",nth(head,3));
//struct node *temp=head;
//while(temp!=0)
//{
//	printf("%d",temp->data);
//	temp=temp->link;
//}
}

