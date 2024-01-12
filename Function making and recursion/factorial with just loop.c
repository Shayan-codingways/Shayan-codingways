//factorial in int main

#include<stdio.h>

int main(){
	
	int i, a,factorial=1;
	
	printf("enter a number ");
	scanf("%d", &a);
	
	for(i=a;i>=1;i--){
		factorial=factorial*i;
	}
    printf("\n\nfactorial is %d ", factorial);
} 

