// task 7 of assignment 1
// doing it in a simpler way of not including if. 

#include<stdio.h>

int main(){
	int P, T, I;
	float R, R1;
	
	printf("Please enter principal amount between Rs 100 and 1,000,000 'P: ");
	scanf("%d", &P);
	
	printf("\nPlease enter Time period between 1 to 10 years 'T': ");
	scanf("%d", &T);
			
			
	printf("\nPlease enter rate of interest between 5 and 10 percent 'R': ");
	scanf("%f", &R);
	
	R1=R/100;
	I=P*R1*T;
	
	printf("\nThe simple interest is %d",I);
		
}
