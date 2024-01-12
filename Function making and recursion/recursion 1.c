// Recursion 

#include<stdio.h>

int factorial(int x); //prototype!

int main(){
	int a, result;
	
	printf("Enter a number ");
	scanf("%d", &a);
	
	// functaion called to calculate factorial of a function
	result=factorial(a);
	printf("The result is: %d",result);
	
}

// function definition(recursion proces)
int factorial(int x){
	int product;
	
	// base case
	if(x==1){ 
		return 1;
	}
	 // recursive case
	else{
		product=x*factorial(x-1);
		return product;
	}
}
   
