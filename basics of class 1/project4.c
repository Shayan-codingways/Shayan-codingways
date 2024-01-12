// taking multiple inputs

#include<stdio.h>

int main(){
	
	/* declaring types of variables as integer and floqt */
	int a;
	float b;
	
	// promt or message to enter values
	printf("Enter integer and then a float: ");
	
	// now taking multiple inputs for both integer and float
	scanf("%d%f", &a, &b);
	
	// outputting result
	printf("you entered %d and %f", a, b);
	
	
}

