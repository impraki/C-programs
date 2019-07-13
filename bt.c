#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
};
void insertright(struct node *node,int data);
void insertleft(struct node *node,int data);
struct node *left=NULL;
struct node *right=NULL;
void insertleft(struct node *node,int data)
{
    int choice;
    if(node->left==NULL)
    {
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=data;
        node->left=newnode;
    }
    else
    {
            printf("already a node left or right now(1/0)");
            scanf("%d",&choice);
            if(choice==1)
            insertleft(node->left,data);
            else
            insertright(node->right,data);
    }
}
void insertright(struct node *node,int data)
{
    int choice;
    if(node->right==NULL)
    {
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=data;
        node->right=newnode;
    }
    else
    {
            printf("already a node left or right now(1/0)");
            scanf("%d",&choice);
            if(choice==1)
            insertleft(node->left,data);
            else
            insertright(node->right,data);
    }
}
void main()
{
    int ch=1,choice,data;
    struct node *root=(struct node*)malloc(sizeof(struct node));
    printf("enter the root element;");
    scanf("%d",&root->data);
    while(ch)
    {
     printf("1.Insert left\n2.Insert right\n.3.exit\n");
     printf("from root");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:
          printf("enter data");
          scanf("%d",&data);
          insertleft(root,data);
          break;
         case 2:
          printf("enter element");
          scanf("%d",&data);
          insertright(root,data);
          break;
         case 3:
          exit(0);
         default :
           printf("enter valid");
     }
     printf("cont/exit(1/0)");
     scanf("%d",&ch);
 }
 printf("%d",root->data);
 printf("%d",root->left->data);
 printf("%d",root->left->left->data);
 printf("%d",root->left->left->left->data);
}