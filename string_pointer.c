#include<stdio.h>
#include<string.h>
int fun(char *str1)
{
  char *str2 = str1;
  int y=strlen(str2);
  while(*++str1);
  int x=strlen(str1);
  printf("%d %d",x,y);
  return (str1-str2);
}
 
int main()
{
  char *str = "GeeksQuiz";
  printf("\n%d", fun(str));
  return 0;
}
