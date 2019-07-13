#include<stdio.h>
void merge(int *s,int *a,int *b,int n1,int n2)
{
    int i,j;
  for(i=0;i<n1;i++)
  {
      s[i]=a[i];
  }
  for(j=0;j<n2;j++)
  {
      s[i++]=b[j];
  }
}
void sort(int *a,int n)
{
    int temp,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }

}
void main()
{
 int a[10],b[10],n1,n2,i,sum,s[10];
 printf("enter no of 1st element array\n");
 scanf("%d",&n1);
 for(i=0;i<n1;i++)
 {
     scanf("%d",&a[i]);
 }
 printf("enter no of 2nd element array\n");
 scanf("%d",&n2);
 for(i=0;i<n2;i++)
 {
     scanf("%d",&b[i]);
 }
 sort(a,n1);
 sort(b,n2);
printf("sorted arrays;\n");
for(i=0;i<n1;i++)
 {
     printf("%d",a[i]);
 }
 printf("\n");
 for(i=0;i<n2;i++)
 {
     printf("%d",b[i]);
 }
 merge(s,a,b,n1,n2);
 sum=n1+n2;
 printf("merged array\n");
 for(i=0;i<sum;i++)
 {
     printf("%d",s[i]);
 }

}