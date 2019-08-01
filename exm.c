#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,j=0,flag=0,flag1=0,n;
    scanf("%d",&n);
  char a[10][100];
  scanf("%s",a[0]); 
  while(n!=0)
  {
      while(a[i][j]!='\0')
      {
      if(a[i][j]=='@')
       {
        flag=1;
        if(a[i][j+1]=='.')
        {
            printf("invalid");
        }
        else
        {
        while(a[i][j]!='\0')
        {
            if(a[i][j]=='.')
            flag1=1;
            j++;
        }
        }
       }
       j++;
      }
    n--;
  }
  if(flag==1 && flag1==1)
    printf("VALID");
    else
    {
      printf("INvalid");
    }  
}
