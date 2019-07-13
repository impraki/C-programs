#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right,*temp;
};
struct node *left=NULL,*right=NULL;
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void insert(struct node *node,int data)
{
    if(node->left==NULL||node->right==NULL)
    {
    if(data<node->data)
    {
    struct node *newnode=(struct node *)malloc(sizeof(struct node*));
    newnode->data=data;
    node->left=newnode;
    }else if(data>node->data)
    {
     struct node *newnode=(struct node *)malloc(sizeof(struct node*));
    newnode->data=data;
    node->right=newnode;   
    }
    }
    else{
        if(data<node->data)
        {
            insert(node->left,data);
        }
        else
        {
            insert(node->right,data);
        }
        
    }
}
void main()
{
    int ch=1,data;
    struct node *root=(struct node *)malloc(sizeof(struct node*));
    printf("enter the root element");
    scanf("%d",&root->data);
    while(ch==1)
    {
        printf("enter the element");
        scanf("%d",&data);
        insert(root,data);
        printf("continue\exit(1/0)");
        scanf("%d",&ch);
    }
    printf("Preorder");
    preorder(root);
}
