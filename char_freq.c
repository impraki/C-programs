#include <stdio.h>
#include<string.h>
void main()
{
   char str[1000], ch;
   int i, frequency = 0;
   printf("Enter a string: ");
   scanf("%s",str);
   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }
   printf("Frequency of %c = %d", ch, frequency);
}
