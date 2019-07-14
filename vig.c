#include<stdio.h>
#include<string.h>
void main()
{
   int i,j,count=0;
   char p[100],a[100];
   scanf("%[^\n]",p);
   char *v=p;
   while(*v!='\0')
   {
      count++;
      if(*v!=' ')
      {
      a[i++]=*v;
      }
      else
      {
         for(j=i-1;j>=0;j--)
         printf("%c",a[j]);
         printf(" ");
         i=0;
      }
      v++;
   }
   for(j=i-1;j>=0;j--)
   printf("%c",a[j]);
   printf("\n%d\n",count);
}