#include<stdio.h>

void main()
{
	int a[]={2,-9,10,12,5,-2,10,-4};
	int i,j,key;
	int n = sizeof(a)/sizeof(a[0]);
	
	for(i=1;i<n;i++){
		if(a[i]<0){
			key=a[i];
			j=i-1;
			while(j>=0 && a[j]>0){
				a[j+1]=a[j];
				j--;
				}
			a[j+1]=key;
			}
		}
		
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
		}
}
