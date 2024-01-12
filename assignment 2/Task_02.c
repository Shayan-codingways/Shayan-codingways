#include<stdio.h>

int main(){
	int x, y, mod, quotient, inc1, inc2; // declared variables
	
	// issuing prompt to enter x and y and then asking for input
	printf("Enter X: ");
	scanf("%d", &x);
	
	printf("Enter y: ");
	scanf("%d", &y);
	
	// assigning operations
	inc1= ++x;
	inc2= --x;
	quotient=x/y;
	mod= x%y;
	
	// display results
	printf("The increment in x leads to %d\n", inc1);
	printf("The deccrement in x leads to %d\n", inc2);
	printf("The quotient is %d\n", quotient);
	printf("The remainder is %d\n", mod);
	
}
