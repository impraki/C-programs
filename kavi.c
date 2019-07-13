#include<stdio.h>
#include<string.h>
void check(char a[],int l,int u,char b[])
{
  int i=0,count=0;
  int p=strlen(b);
  for(i=0;i<p;i++)
  {
      if(b[i]==a[l++])
        count++;
  }
  if(count==p)
  printf("match found");
}
void main()
{
    char a[]="geeks for geeks";
    char c[10][10],b[10];
    int i=0,count=0,l,j,x=0,n;
    l=strlen(a);
   for(i=0;i<l;i++)
   {
     if(a[i]==' ')
     {
       x++;
       j=0;
       count++;
      continue;
     }
     else
     {
       c[x][j++]=a[i];
     }
   }
   printf("check word");
   scanf("%s",b);
   for(i=0;i<=count;i++)
   {
     n= strcmp(c[i],b);
     if(n==0)
     {
       printf("%s ","kavis");
     }
     else
     {
       printf("%s ",c[i]);
     }
     
   }
}