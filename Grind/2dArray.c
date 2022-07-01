#include<stdio.h>
void main()
{
	int a[][3] = {{1,1,1},
				 {1,1,1},
				 {1,1,1}
				};
	int sum=0;
	int product =1;
	//printf("%ld",sizeof(int));
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=sum+a[i][j];
			product=product*a[i][j];
		}
	}
	printf("%d %d",sum,product);

}
