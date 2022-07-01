#include<stdio.h>
#include<stdbool.h>


struct Hash {
	int num, hashValue;
}

int same(int a[],int b[], struct Hash h1)
{
	int i,j,x,flag;
	
	for(i=0;i<3;i++){
		flag=0;
		x=a[i]*a[i];
		for(j=0;j<3;j++){
			if(x==b[j]){
			flag=1;
			}
		}
		if(flag==0){
			return 0;
		}
		else{
			continue;
		}
	}
	return 1;
}



void main()
{

	struct Hash h1;
	int a[]={1,2,3};
	int b[]={1,1,9};
	
	int val = same(a,b,h1);
	printf("%d",val);
}
