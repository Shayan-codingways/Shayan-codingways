// task 3 for calculator

#include<stdio.h>

int main(){
	
	// 1. declared variables
	float a,b,sum,mult,sub, div;
	char selection;
	
	// 2. input numbers
	printf("\nEnter any number:");
	scanf("%f", &a);
	
	printf("\nEnter any number: ");
	scanf("%f", &b);
	
	// asking for a operation
	printf("\nEnter the following:\n1.\"/\" for Division.\n\n2.\"*\" for Multipication.\n\n3.\"-\" for Subtraction.\n\n4.\"+\" for Addition\n\n");
	scanf(" %c", &selection); // percent c requires a space before it.
	
	printf("\n\nYou selected \"%c\"", selection);
	
	// assigning operations
	sum= a+b;
	sub= a-b;
	mult= a*b;
	div= a/b;
	
	
	//switch selection
	switch(selection){
		case '/':
			// cant be divided with 0
			if(b==0){
				printf("\n\nIncorrect division");
				break; 
			}
			
		    printf("\n\nDivion result is = %.3f\n",div);
		    break;
		    
		case '*':
		    printf("\n\nMultipication result is = %.1f\n",mult);
		    break;
		    
		case '+':
		    printf("\n\nAddition result is = %.1f\n",sum);
		    break;
		    
		case '-':
		    printf("\n\nSubtraction result is = %.1f\n",sub);
		    break;
		    
		default:
			printf("\n\nYou entered wrong operation");
	}
		
	}
