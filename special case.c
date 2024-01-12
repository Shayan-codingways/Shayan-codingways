#include<stdio.h>

int main(){
	
	int x,lastdigit, lastdigit2,y, remaining_digits;
	
	printf("Enter value of x: ");
	scanf("%d", &x);
	
	lastdigit=x%10;
	printf("print: %d",lastdigit);
	
	// give same result as above because we have taken the variable lastdigit2 as integer so eg 
	// (47/10)=4 not 4.7
	// 47-(4*10)=7
	lastdigit2=x/10;
	y= x-(lastdigit2*10);
	printf("\nprint: %d",y);
	
	remaining_digits=x/10;
	printf("\nprint: %d",remaining_digits);
}
