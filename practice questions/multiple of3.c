#include<stdio.h>

int main(){
	int x;
	
	printf("Enter value of x:");
	scanf("%d", &x );
	
	
	if (x%3==0){
		printf("The number is multiple of 3");
	}
	else {
		printf("The number is not a multiple of 3");
	}
	
}
