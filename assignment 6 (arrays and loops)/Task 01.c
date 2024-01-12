// task 01

#include<stdio.h>
int main(){
	
	int i, x[10];
	int a;
	int b=0;
	
	// taking input of numbers
	for(i=0; i<10; i++){
	    printf("\nEnter a number: ");
	    scanf("%d", &x[i]);
    }
    
    // search mecahnism
    printf("\nEnter a value you want to look out for: ");
    scanf("%d", &a);
    
    // looking out for value 
    for(i=0; i<10; i++){
    	if(x[i]==a){
		b=b+1;
	    }
    }
	
	// if number not found
	    if(b==0){
	    	printf("\n\nNumber not Found!");
	    	return 0;
		}
		
	// displaying number
	printf("\nNumber %d is repeated %d times",a,b);
	

}
