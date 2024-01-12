// task 02

#include<stdio.h>
int main(){
	
	float x[5]={3.14,3.24,3.34,3.44,3.54};
	int i,j;
	float a;

	
	for(i=0; i<5; i++){
		printf("\nThe values of array are: %f ", x[i]);
	}
	
	
	
	// descending
	// arranging in descending and ascending orders!
	
	for(i=0; i<5; i++){ 
		for (j=i+1; j<5; j++){ // this loop will work for 0th to n values and check against a single ith value of outer loop.
			
			if(x[i] < x[j]){ // value comarison of an array
		
				a=x[i]; // storing current value of xi in a
				x[i]=x[j]; // if xj > xi than xi must have xj as its value.
				x[j]=a;   // and xi's initial value is stored in xj to be checked further for other values. 
		
		}
	}
}
    // displaying the arranged order 
     printf("\n\nDescending Order!\n");
		for(i=0; i<5; i++){
		printf("%f ", x[i]);
	}
	
	
	
	// ascending
	for(i=0; i<5; i++){
		for (j=i+1; j<5; j++){
			
			if(x[i] > x[j]){
				
				a=x[i];
				x[i]=x[j];
				x[j]=a;
		
		}
	}
}

     printf("\n\nAscending Order!\n");
		for(i=0; i<5; i++){
		printf("%f ", x[i]);
	}
	
}
