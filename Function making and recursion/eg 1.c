// function to print square of integers 
#include<stdio.h>

// function prototype
int square(int y);

int main(void){
	
   int x, a;
	
      	for(x=1; x<=10; x++){
	    	a=square(x);  // function call
		    printf("   %d",a);
	    }
	    
		puts(" ");
}

//function definition 
int square(int y){
	y=y*y;
	
	return y;
}
