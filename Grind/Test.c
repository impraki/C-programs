#include<stdio.h>

void main()
{
	char * ptr;
	char str[]= "zyxwvut";
	ptr = str;
	ptr += 5;
	printf("%p",ptr);
	
}
