#include<stdio.h> 
  
struct Point 
{ 
   int roll;
   char name[10]; 
}; 
  
int main() 
{ 
    int n,i;
   // Create an array of structures 
   struct Point arr[10]; 
   printf("enter the numbe of students=");
   scanf("%d",&n);
  
   for(i=0;i<n;i++)
   {
       printf("enter the details of stdudent %d\n",i+1);
       printf("enter roll\n");
       scanf("%d",&arr[i].roll);
       printf("enter name\n");
       scanf("%s",arr[i].name);
   } 
   for(i=0;i<n;i++)
   {
       printf("details of student %d\n",i+1);
       printf("roll=%d\n",arr[i].roll);
       printf("name=%s\n",arr[i].name);
   }
   return 0; 
}