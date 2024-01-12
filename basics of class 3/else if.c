#include<stdio.h>

int main(){
    // declare variables
    int x;
 	
 	// entering input
 	printf("enter x: ");
 	scanf("%d",&x);
 	
 	///decision making
 	if(x==10){
 		printf("\nvalue is 10");	
	}
	
	else if(x==20){
		printf("\nvalue is 20");
	}
	
	else if(x==30){
		printf("\nvalue is 30");
	}
	else {
		printf("\nNo!");
	}

    // displaying results
	printf("\nexact value of x is %d",x);
	 
}


