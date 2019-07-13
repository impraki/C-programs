#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL,*next,*prev,*temp;
struct node{
    int data;
    struct node *next,*prev;
};
void split(struct node *head)
{
    int count=0;
    struct node *temp1;
    struct node *temp2;
    struct node *root=NULL;
    temp1=head;
    while(temp1!=NULL)
    {
        count++;
        if(root==NULL)
        {
            struct node *newnode=(struct node*)malloc(sizeof(struct node*));
            newnode->data=temp1->data;
            root=newnode;
            newnode->next=NULL;
            prev=newnode;
        }
        else
        {
            struct node * newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=temp1->data;
            newnode->next=NULL;
            prev->next=newnode;
            prev=newnode;
        }
        temp1=temp1->next->next;
    }
    printf("\n%d\n",count);
    while(root!=NULL)
    {
        printf("check");
        printf("%d->",temp2->data);
        root=root->next;
    }
}
void add()
{
    int i,data;
    do{
        printf("Enter element");
        scanf("%d",&data);
        if(head==NULL)
        {
            struct node *newnode=(struct node*)malloc(sizeof(struct node*));
            newnode->data=data;
            head=newnode;
            newnode->next=NULL;
            prev=newnode;
        }
        else
        {
           struct node *newnode =(struct node*)malloc(sizeof(struct node*));
           newnode->data=data;
           newnode->next=NULL;
           prev->next=newnode;
           prev=newnode;
        }
        printf("continue adding a elemnt/exit(1/0)=");
        scanf("%d",&i);
    }while(i);
    printf("Linked List: ");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    
}
void insert(struct node *head,int pos,int data)
{
    int count=1;
    temp=head;
    while(count!=pos)
        {
            prev=temp;
            temp=temp->next;
            count++;
        }
        struct node *newnode=(struct node*)malloc(sizeof(struct node*));
        newnode->data=data;
        prev->next=newnode;
        newnode->next=temp;
        temp=head;
        printf("LinkedList:\n");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
}
void delete(struct node *head,int pos)
{
    int count=1;
    temp=head;
    while(count!=pos)
        {
            prev=temp;
            temp=temp->next;
            count++;
        }
        prev->next=temp->next;
}
void main()
{
    int i,data,ch,pos;
    do
    {
     printf("enter choice:\n1.add element\n2.insert a elemnt\n3.delete a elemnt\n4.split");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:
            add();
            break;
         case 2:
            printf("enter data");
            scanf("%d",&data);
            printf("\nenter position");
            scanf("%d",&pos);
            insert(head,pos,data);
            break;
         case 3:
            printf("enter the pos to be deleted");
            scanf("%d",&pos);
            delete(head,pos);
            break;
         case 4:
          split(head);
          break;
        default:
            printf("enter valid choice");    
     }
     printf("cont/exit(1/0)");
     scanf("%d",&i);   
    }while(i);
    printf("LINKED LIST");
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
}