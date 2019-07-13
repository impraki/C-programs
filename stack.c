#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct stack
{
    int stack[SIZE];
    int top;
}s;
void push()
{
    int ch=1,data;
    while(ch)
    {
    printf("enter the elemt");
    scanf("%d",&data);
    if(s.top==SIZE-1)
    {
        printf("oveflow");
    }
    else
    {
        s.top++;
        s.stack[s.top]=data;
    }
    printf("continue push/eXit(1/0)");
    scanf("%d",&ch);
    }
}
int pop()
{
    int temp;
    temp=s.stack[s.top];
    s.top--;
    return temp;
}
void display()
{
    int i;
    printf("STACK:\n");
    for(i=s.top;i>=0;i--)
    {
        printf("%d\n",s.stack[i]);
    }
}
void main()
{
   s.top=-1;
   int choice=1,ch,data,p;
   while(choice)
   {
       printf("Enter stack operation");
       printf("1.push\n2.pop\n3.display\n4.Exit\n");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
             push();
             break;
           case 2:
             p=pop();
             printf("popped elemnt is=%d\n",p);
             break;
           case 3:
             display();
             break;
           case 4:
            return;
       }
       printf("cont/exit(1/0)");
       scanf("%d",&choice);
   }


}