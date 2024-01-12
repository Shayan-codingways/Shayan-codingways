// task 7 of assignment 1
// doing it in a simpler way of not including if. 

#include<stdio.h>

int main(){
	int P, T; // declaringinteger variable
	float R, R1, I; // declaring float variables
	
	printf("Please enter principal amount between Rs 100 and 1,000,000 'P: "); // ask to input P
	scanf("%d", &P);
	
	// setting up restrictions
        if (P<=100||P>=1000000){
		    printf("\n%d isn't the appropriate amount entered\n\n", P);
		    return 0; // exiting on wrong value
}

	printf("\nPlease enter Time period between 1 to 10 years 'T': "); // ask to input T 
	scanf("%d", &T);
	
	//setting up restrictions
	
	    if (T<=1||T>=10){
		    printf("\n%d isn't the appropriate time entered\n\n", T);
		    return 0; // exiting on wrong value
}
			
			
	printf("\nPlease enter rate of interest between 5 and 10 percent 'R': "); // ask to input R
	scanf("%f", &R);
	
	
	// this is really intresting and new concept. printing '%' 
	    if (R<=5||R>=10){ // no use of percentage sign within if condition. just magnitude.
		    printf("\n%f%% isn't the appropriate rate entered\n\n", R);
		    return 0; // exiting on wrong value
}
	
    // assigning operations
	R1=R/100; // converting percentage
	I=P*R1*T; // simple intrest calculation
	
	
	// displaying output 
	printf("\nThe simple interest is %f",I); // displaying result
		
}
