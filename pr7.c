#include<stdio.h>
void main()
{
   int a[]={1,2,3,4,5};
   int *p;
   p=a;
   int j;
   for(j=0;j<5;j++)
   {
       printf("%d\n",p);
       p++;
   }
}