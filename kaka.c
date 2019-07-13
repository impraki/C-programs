#include<stdio.h>
void main()
{
    int a[10]={3,6,5,4,1,2},cnt=0,i,check;
    int p[10]={'a','b','c','d','e','f'},p1[10],t[10];
    int flag=0;
    for(i=0;i<6;i++)
    {
    t[i]=p[i];           /*temp array to check every iteration */
    } 
    while(flag!=1)
    {
        for(i=0;i<6;i++)
        {
            p1[a[i]-1]=p[i];   /*swapping according to array A values */
        }
        for(i=0;i<6;i++)
        printf("%c ",p1[i]);  /*printing every sequence */
        printf("\n");
        check=0;
        for(i=0;i<6;i++)
        {
            if(p1[i]==t[i])   /* checking whether all values are stored as original  */
            check++;
        }
        if(check==6)
        {
        flag=1;
        }
        for(i=0;i<6;i++)
        p[i]=p1[i];
        cnt++;
    }
   printf("%d",cnt);
}