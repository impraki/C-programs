#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void push(struct node **head,int data)
{
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=(*head);
    *head=newnode;
}
void kend(struct node *head,int n)
{
    struct node *temp,*k;
    temp=head;
    int i;
    while(temp->next!=NULL)
    {
        k=temp;
       for(i=0;i<n;i++)
       {
         k=k->next;
       }
       if(k==NULL)
       {
           printf("%d",k->data);
       }
       temp=temp->next;
    }
}
void main()
{
    struct node* head=NULL;
    struct node* temp=NULL;
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1); 
    temp=head;
    /* 
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }*/
    kend(head,3);
}