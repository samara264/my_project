/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
    
};
struct node *createnew(int n)
{
    struct node *temp=0;
    struct node *temp1=0;
    struct node *head=0;
    int i;
    for(i=0;i<n;i++)
    {
        printf("the list is %d",i+1);
        temp=(struct node *)malloc(sizeof(struct node));
        
        scanf("%d",&(temp->data));
        temp->link=0;
        if(head==0)
        {
            head=temp;
        }
        else
        {
            temp1=head;
            while(temp1->link!=0)
                temp1=temp1->link;
                temp1->link=temp;
            
        }
    }
    return head;
}
void print(struct node *head)
{
    struct node*temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
void middle(struct node *head)
{
    struct node *p=head;
    struct node *q=head;
if(q->link->link!=0)
    {
        p=p->link;
        q=q->link->link;
    }
    printf("the middle element is %d",p->data);
}
int main()
{
    struct node *head=0;
    int n=5;
    head=createnew(n);
    print(head);
    middle(head);
}
    
