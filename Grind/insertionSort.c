#include<stdio.h>

void main()
{
	int a[]={22,11,5,7,333};
	int n = sizeof(a)/sizeof(a[0]);
	int i,j,key;
	
	for(i=1;i<n;i++){
		key = a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = key;
		}
		
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
		}
}
