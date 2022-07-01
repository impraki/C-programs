#include<stdio.h>

void main()
{
	int a[]={44,89,789,2,5};
	
	int i,j,min_ind,temp;
	
	for(i=0;i<4;i++){
		min_ind=i;
		for(j=i+1;j<5;j++){
			if(a[j] < a[min_ind]){
				min_ind=j;
				}
			}
		temp=a[min_ind];
		a[min_ind]=a[i];
		a[i]=temp;
		}
	
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
		}
}
