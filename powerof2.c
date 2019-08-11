#include<stdio.h>
void ispowerof2(int n)
{
    int x,count=0;
    while(n>1)
    {
        if(n%2==1)
        count++;
        n=n/2;
    }
    if(count!=0)
    printf("Not power of 2");
    else
    printf("Power of 2");
}
void main()
{
    int n,i,j;
    scanf("%d",&n);
    ispowerof2(n);
}