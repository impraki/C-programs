#include<stdio.h>

void increment(int *v) {
    printf("%p\n",v);
        *v=*v+1;
        ++v; 
        printf("%p\n",v);
    }
      	int main() {
        int a;
        scanf("%d", &a);
        increment(&a);
        printf("%p", a);
    	return 0;      
    }     