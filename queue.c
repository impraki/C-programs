#include <stdio.h>
#define size 10
void enqueue(int *a,int front,int rear,int data)
{
    int p;
    if(rear=10-1)
    {
        printf("-1 %d",rear);
    }
    else
    {
        a[rear]=data;
        rear=rear+1;
        printf("%d",rear);
    }
}
void dequeue(int *a,int front,int rear)
{
    if(front==rear)
    {
        printf("-1 %d",rear);
    }
    else
    {
        printf("%d %d",a[front],rear);
        front++;
    }
}
int main(){
	int i,num,data;
	int a[size],front,rear;
	front=rear=0;
	char ch;
	scanf("%d", &num);              			// Reading input from STDIN
	for(i=1;i<=num;i++)
	{
	    scanf("%c",&ch);
	    switch(ch)
	    {
	        case 'E':
	          scanf("%d",&data);
	          enqueue(a,front,rear,data);
	          break;
	        case 'D':
	          dequeue(a,front,rear);
	          break;
	    }
	}// Writing output to STDOUT
}

