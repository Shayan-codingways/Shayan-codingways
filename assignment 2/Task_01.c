// task 1 of assignment 2 

#include<stdio.h>

int main(){
	// declaring variable type
	int x, y, sum, sub, multiply, divide, remainder;
	
	// issuing prompt to enter x and y and then asking for input
	printf("Enter X: ");
	scanf("%d", &x);
	
	printf("Enter y: ");
	scanf("%d", &y);
	
	// assigning the operations
	sum=x+y;
	sub=x-y;
	multiply=x*y;
	divide=x/y;
	remainder= x%y;
	
	// dispalying the results
	printf("\n The sum of %d and %d is %d",x ,y ,sum);
	printf("\n The sub of %d and %d is %d", x, y, sub);
	printf("\n The multiply of %d and %d is %d", x, y, multiply);
	printf("\n The divide of %d and %d is %d", x, x, y, divide);
	printf("\n The remainder of %d and %d is %d ", x, y, remainder );
}
