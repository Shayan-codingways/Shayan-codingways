#include<stdio.h>

int main(){


// declare variables
    float x, y, sum,sub,mult;
    float div;
	char z;
    
// ask o input x and y
 printf("enter x: ");
 scanf("%f",&x);
 
 printf("enter y: ");
 scanf("%f",&y);

// assignment operations
 sum=x+y;
 sub=x-y;
 mult=x*y;
 div=x/y;
 
printf("\n"); 
 
// asking for choice z.
 printf("Enter +-*/ for each of these respectively; \n1.Summation\n2.Dubraction\n3.Dultipication\n4.Division\n\n");
 scanf("%c",&z);
 
// switch case
switch(z){
	case '+':
		printf("\n\"Summation= %.1f\"\n", sum);
		break;
	
	case '-':
		printf("\"Subtraction= %.1f\"\n", sub);
		break;
	
	case '*':
		printf("\"Multipication= %.1f\"\n", mult);
		break;

	case '/':
		if (y==0){
			printf("Incorrect y");
			break;
		}
		printf("\"Division= %.1f\"\n", div);
		break;
		
	printf("/n");	
	default:
		printf("Enter valid operation\n");
}
	
	
}
 
 
