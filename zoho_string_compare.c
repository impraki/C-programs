#include<stdio.h>
#include<string.h>
void main()
{
  char a[]="geeks for geeks";
  char b[10][10],c[10];
  int cnt,i=0,k=0,j=0,count=0,n,x;
  while(a[i]!='\0')
  {
    if(a[i]==' ')
    {
      k++;
      j=0;
    }
    else
    {
      b[k][j++]=a[i];
    }
    i++;
  }
  for(i=0;i<=k;i++)
  printf("%s ",b[i]);
printf("\nenter check word");
scanf("%s",c);
n=strlen(c);
j=0;
i=0;
while(j<=k)
{
  i=0;
  cnt=0;
  while(b[j][i]!='\0')
  {
    if(b[j][i]==c[i++])
    cnt++;
  }
  if(cnt==n)
  printf("%s ","kavis");
  else
  {
    printf("%s ",b[j]);
  }
  j++;
}
}
